/* cVnFHLVyW ily traian si1gH6Mfp */ #include <algorithm>
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
/* cVnFHLVyW ily traian si1gH6Mfp */ using namespace std;
/* cVnFHLVyW ily traian si1gH6Mfp */ 
/* cVnFHLVyW ily traian si1gH6Mfp */ ifstream cin("parcela.in");
/* cVnFHLVyW ily traian si1gH6Mfp */ ofstream cout("parcela.out");
/* cVnFHLVyW ily traian si1gH6Mfp */ 
/* cVnFHLVyW ily traian si1gH6Mfp */ int a[105][105];
/* cVnFHLVyW ily traian si1gH6Mfp */ 
/* cVnFHLVyW ily traian si1gH6Mfp */ void fill(int i , int j , int &c)
/* cVnFHLVyW ily traian si1gH6Mfp */ {
/* cVnFHLVyW ily traian si1gH6Mfp */     if(a[i][j]==1)
/* cVnFHLVyW ily traian si1gH6Mfp */     {
/* cVnFHLVyW ily traian si1gH6Mfp */         a[i][j]=0;
/* cVnFHLVyW ily traian si1gH6Mfp */         c++;
/* cVnFHLVyW ily traian si1gH6Mfp */         if(a[i+1][j]==1)
/* cVnFHLVyW ily traian si1gH6Mfp */             fill(i+1 , j , c);
/* cVnFHLVyW ily traian si1gH6Mfp */         if(a[i-1][j]==1)
/* cVnFHLVyW ily traian si1gH6Mfp */             fill(i-1 , j , c);
/* cVnFHLVyW ily traian si1gH6Mfp */         if(a[i][j+1]==1)
/* cVnFHLVyW ily traian si1gH6Mfp */             fill(i , j+1 , c);
/* cVnFHLVyW ily traian si1gH6Mfp */         if(a[i][j-1]==1)
/* cVnFHLVyW ily traian si1gH6Mfp */             fill(i , j-1 , c);
/* cVnFHLVyW ily traian si1gH6Mfp */     }
/* cVnFHLVyW ily traian si1gH6Mfp */ }
/* cVnFHLVyW ily traian si1gH6Mfp */ 
/* cVnFHLVyW ily traian si1gH6Mfp */ int main()
/* cVnFHLVyW ily traian si1gH6Mfp */ {
/* cVnFHLVyW ily traian si1gH6Mfp */     int n , m;
/* cVnFHLVyW ily traian si1gH6Mfp */     cin >> n >> m;
/* cVnFHLVyW ily traian si1gH6Mfp */     for(int i = 1 ; i <= n ; ++i)
/* cVnFHLVyW ily traian si1gH6Mfp */         for(int j = 1 ; j <= m ; ++j)
/* cVnFHLVyW ily traian si1gH6Mfp */             cin >> a[i][j];
/* cVnFHLVyW ily traian si1gH6Mfp */     int cnt = 0 , max=0 , lmax=0;
/* cVnFHLVyW ily traian si1gH6Mfp */     for(int i = 1 ; i <= n ; ++i)
/* cVnFHLVyW ily traian si1gH6Mfp */         for(int j = 1 ; j <= m ; ++j)
/* cVnFHLVyW ily traian si1gH6Mfp */             if(a[i][j]==1)
/* cVnFHLVyW ily traian si1gH6Mfp */             {
/* cVnFHLVyW ily traian si1gH6Mfp */                 cnt++;
/* cVnFHLVyW ily traian si1gH6Mfp */                 int c = 0;
/* cVnFHLVyW ily traian si1gH6Mfp */                 fill(i , j , c);
/* cVnFHLVyW ily traian si1gH6Mfp */                 if(c > max)
/* cVnFHLVyW ily traian si1gH6Mfp */                     max = c , lmax=cnt;
/* cVnFHLVyW ily traian si1gH6Mfp */             }
/* cVnFHLVyW ily traian si1gH6Mfp */     cout << cnt << ' ' << max << ' ' << lmax;
/* cVnFHLVyW ily traian si1gH6Mfp */     return 0;
/* cVnFHLVyW ily traian si1gH6Mfp */ }