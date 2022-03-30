/* 3wHodDOTF ily traian wQNBopIqt */ #include <algorithm>
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
/* 3wHodDOTF ily traian wQNBopIqt */ using namespace std;
/* 3wHodDOTF ily traian wQNBopIqt */ 
/* 3wHodDOTF ily traian wQNBopIqt */ ifstream cin("zona3.in");
/* 3wHodDOTF ily traian wQNBopIqt */ ofstream cout("zona3.out");
/* 3wHodDOTF ily traian wQNBopIqt */ 
/* 3wHodDOTF ily traian wQNBopIqt */ int a[105][105] , b[105][105] , v[10005] , p = 1;
/* 3wHodDOTF ily traian wQNBopIqt */ 
/* 3wHodDOTF ily traian wQNBopIqt */ void fill(int i , int j , int &c)
/* 3wHodDOTF ily traian wQNBopIqt */ {
/* 3wHodDOTF ily traian wQNBopIqt */     if(a[i][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */     {
/* 3wHodDOTF ily traian wQNBopIqt */         a[i][j]=0;
/* 3wHodDOTF ily traian wQNBopIqt */         c++;
/* 3wHodDOTF ily traian wQNBopIqt */         if(a[i+1][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill(i+1 , j , c);
/* 3wHodDOTF ily traian wQNBopIqt */         if(a[i-1][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill(i-1 , j , c);
/* 3wHodDOTF ily traian wQNBopIqt */         if(a[i][j+1]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill(i , j+1 , c);
/* 3wHodDOTF ily traian wQNBopIqt */         if(a[i][j-1]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill(i , j-1 , c);
/* 3wHodDOTF ily traian wQNBopIqt */     }
/* 3wHodDOTF ily traian wQNBopIqt */ }
/* 3wHodDOTF ily traian wQNBopIqt */ 
/* 3wHodDOTF ily traian wQNBopIqt */ void fill1(int i , int j , int val)
/* 3wHodDOTF ily traian wQNBopIqt */ {
/* 3wHodDOTF ily traian wQNBopIqt */     if(b[i][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */     {
/* 3wHodDOTF ily traian wQNBopIqt */         b[i][j]=val;
/* 3wHodDOTF ily traian wQNBopIqt */         if(b[i+1][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill1(i+1 , j , val);
/* 3wHodDOTF ily traian wQNBopIqt */         if(b[i-1][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill1(i-1 , j , val);
/* 3wHodDOTF ily traian wQNBopIqt */         if(b[i][j+1]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill1(i , j+1 , val);
/* 3wHodDOTF ily traian wQNBopIqt */         if(b[i][j-1]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             fill1(i , j-1 , val);
/* 3wHodDOTF ily traian wQNBopIqt */     }
/* 3wHodDOTF ily traian wQNBopIqt */ }
/* 3wHodDOTF ily traian wQNBopIqt */ 
/* 3wHodDOTF ily traian wQNBopIqt */ int main()
/* 3wHodDOTF ily traian wQNBopIqt */ {
/* 3wHodDOTF ily traian wQNBopIqt */     int n , m;
/* 3wHodDOTF ily traian wQNBopIqt */     cin >> n >> m;
/* 3wHodDOTF ily traian wQNBopIqt */     for(int i = 1 ; i <= n ; ++i)
/* 3wHodDOTF ily traian wQNBopIqt */         for(int j = 1 ; j <= m ; ++j)
/* 3wHodDOTF ily traian wQNBopIqt */             cin >> a[i][j] , b[i][j] = a[i][j];
/* 3wHodDOTF ily traian wQNBopIqt */     for(int i = 1 ; i <= n ; ++i)
/* 3wHodDOTF ily traian wQNBopIqt */         for(int j = 1 ; j <= m ; ++j)
/* 3wHodDOTF ily traian wQNBopIqt */             if(a[i][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             {
/* 3wHodDOTF ily traian wQNBopIqt */                 int c = 0;
/* 3wHodDOTF ily traian wQNBopIqt */                 fill(i , j , c);
/* 3wHodDOTF ily traian wQNBopIqt */                 v[p]=c;
/* 3wHodDOTF ily traian wQNBopIqt */                 p++;
/* 3wHodDOTF ily traian wQNBopIqt */             }
/* 3wHodDOTF ily traian wQNBopIqt */     p--;
/* 3wHodDOTF ily traian wQNBopIqt */     int cnt=1;
/* 3wHodDOTF ily traian wQNBopIqt */     for(int i = 1 ; i <= n ; ++i)
/* 3wHodDOTF ily traian wQNBopIqt */         for(int j = 1 ; j <= m ; ++j)
/* 3wHodDOTF ily traian wQNBopIqt */             if(b[i][j]==1)
/* 3wHodDOTF ily traian wQNBopIqt */             {
/* 3wHodDOTF ily traian wQNBopIqt */                 fill1(i , j , v[cnt]);
/* 3wHodDOTF ily traian wQNBopIqt */                 cnt++;
/* 3wHodDOTF ily traian wQNBopIqt */             }
/* 3wHodDOTF ily traian wQNBopIqt */     for(int i = 1 ; i <= n ; ++i)
/* 3wHodDOTF ily traian wQNBopIqt */     {
/* 3wHodDOTF ily traian wQNBopIqt */         for(int j = 1 ; j <= m ; ++j)
/* 3wHodDOTF ily traian wQNBopIqt */             cout << b[i][j] << ' ';
/* 3wHodDOTF ily traian wQNBopIqt */         cout << endl;
/* 3wHodDOTF ily traian wQNBopIqt */     }
/* 3wHodDOTF ily traian wQNBopIqt */     return 0;
/* 3wHodDOTF ily traian wQNBopIqt */ }