/* EWgOGteFk ily traian nrM8ZdiLC */ #include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
/* EWgOGteFk ily traian nrM8ZdiLC */ using namespace std;
/* EWgOGteFk ily traian nrM8ZdiLC */ 
/* EWgOGteFk ily traian nrM8ZdiLC */ ifstream cin("zana.in");
/* EWgOGteFk ily traian nrM8ZdiLC */ ofstream cout("zana.out");
/* EWgOGteFk ily traian nrM8ZdiLC */ 
/* EWgOGteFk ily traian nrM8ZdiLC */ int a[101][101] , b[101][101] , n , m;
/* EWgOGteFk ily traian nrM8ZdiLC */ 
/* EWgOGteFk ily traian nrM8ZdiLC */ void fill(int i , int j)
/* EWgOGteFk ily traian nrM8ZdiLC */ {
/* EWgOGteFk ily traian nrM8ZdiLC */     b[i][j]=1;
/* EWgOGteFk ily traian nrM8ZdiLC */     a[i][j]=-1;
/* EWgOGteFk ily traian nrM8ZdiLC */     if(a[i+1][j]==0 && i+1 <= n)
/* EWgOGteFk ily traian nrM8ZdiLC */         fill(i+1 , j);
/* EWgOGteFk ily traian nrM8ZdiLC */     if(a[i-1][j]==0 && i-1 >= 1)
/* EWgOGteFk ily traian nrM8ZdiLC */         fill(i-1 , j);
/* EWgOGteFk ily traian nrM8ZdiLC */     if(a[i][j+1]==0 && j+1 <= m)
/* EWgOGteFk ily traian nrM8ZdiLC */         fill(i , j+1);
/* EWgOGteFk ily traian nrM8ZdiLC */     if(a[i][j-1]==0 && j-1 >= 1)
/* EWgOGteFk ily traian nrM8ZdiLC */         fill(i , j-1);
/* EWgOGteFk ily traian nrM8ZdiLC */ }
/* EWgOGteFk ily traian nrM8ZdiLC */ 
/* EWgOGteFk ily traian nrM8ZdiLC */ int main()
/* EWgOGteFk ily traian nrM8ZdiLC */ {
/* EWgOGteFk ily traian nrM8ZdiLC */     int k;
/* EWgOGteFk ily traian nrM8ZdiLC */     cin >> n >> m >> k;
/* EWgOGteFk ily traian nrM8ZdiLC */     for(int q = 1 ; q <= k ; ++q)
/* EWgOGteFk ily traian nrM8ZdiLC */     {
/* EWgOGteFk ily traian nrM8ZdiLC */         int x , y;
/* EWgOGteFk ily traian nrM8ZdiLC */         cin >> x >> y;
/* EWgOGteFk ily traian nrM8ZdiLC */         a[x][y]+=1;
/* EWgOGteFk ily traian nrM8ZdiLC */     }
/* EWgOGteFk ily traian nrM8ZdiLC */     fill(1 , 1);
/* EWgOGteFk ily traian nrM8ZdiLC */     int max=0 , cnt=0;
/* EWgOGteFk ily traian nrM8ZdiLC */     for(int i = 1 ; i <= n ; ++i)
/* EWgOGteFk ily traian nrM8ZdiLC */         for(int j = 1 ; j <= m ; ++j)
/* EWgOGteFk ily traian nrM8ZdiLC */             if(a[i][j]>0 && (b[i+1][j]==1 || b[i-1][j]==1 || b[i][j+1]==1 || b[i][j-1]==1))
/* EWgOGteFk ily traian nrM8ZdiLC */             {
/* EWgOGteFk ily traian nrM8ZdiLC */                 if(a[i][j]>max)
/* EWgOGteFk ily traian nrM8ZdiLC */                     max=a[i][j] , cnt=0;
/* EWgOGteFk ily traian nrM8ZdiLC */                 if(a[i][j]==max)
/* EWgOGteFk ily traian nrM8ZdiLC */                     cnt++;
/* EWgOGteFk ily traian nrM8ZdiLC */             }
/* EWgOGteFk ily traian nrM8ZdiLC */     cout << max << '\n' << cnt;
/* EWgOGteFk ily traian nrM8ZdiLC */     return 0;
/* EWgOGteFk ily traian nrM8ZdiLC */ }