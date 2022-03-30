/* 207EGNyOL ily traian B0yZhPyhR */ #include <algorithm>
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
/* 207EGNyOL ily traian B0yZhPyhR */ 
/* 207EGNyOL ily traian B0yZhPyhR */ using namespace std;
/* 207EGNyOL ily traian B0yZhPyhR */ ifstream cin("tinta.in");
/* 207EGNyOL ily traian B0yZhPyhR */ ofstream cout("tinta.out");
/* 207EGNyOL ily traian B0yZhPyhR */ int a[1001][1001] , b[1001][1001] , n , i ,j , x , l , c;
/* 207EGNyOL ily traian B0yZhPyhR */ int main()
/* 207EGNyOL ily traian B0yZhPyhR */ {
/* 207EGNyOL ily traian B0yZhPyhR */     cin >> n;
/* 207EGNyOL ily traian B0yZhPyhR */     x = 1;
/* 207EGNyOL ily traian B0yZhPyhR */     for(i = 1 ; i <= n ; i++)
/* 207EGNyOL ily traian B0yZhPyhR */     if(i % 2 == 0)
/* 207EGNyOL ily traian B0yZhPyhR */     {   
/* 207EGNyOL ily traian B0yZhPyhR */         l = 1 , c = i;
/* 207EGNyOL ily traian B0yZhPyhR */         for(j = 1 ; j <= i ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */         {
/* 207EGNyOL ily traian B0yZhPyhR */             a[l][c] = x;
/* 207EGNyOL ily traian B0yZhPyhR */             x++ , l++ , c--;
/* 207EGNyOL ily traian B0yZhPyhR */         }
/* 207EGNyOL ily traian B0yZhPyhR */     }
/* 207EGNyOL ily traian B0yZhPyhR */     else
/* 207EGNyOL ily traian B0yZhPyhR */     {
/* 207EGNyOL ily traian B0yZhPyhR */         l = i , c = 1;
/* 207EGNyOL ily traian B0yZhPyhR */         for(j = 1 ; j <= i ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */         {
/* 207EGNyOL ily traian B0yZhPyhR */             a[l][c] = x;
/* 207EGNyOL ily traian B0yZhPyhR */             x++ , l-- , c++;
/* 207EGNyOL ily traian B0yZhPyhR */         }
/* 207EGNyOL ily traian B0yZhPyhR */     }
/* 207EGNyOL ily traian B0yZhPyhR */     if(n % 2 == 0)
/* 207EGNyOL ily traian B0yZhPyhR */         for(i = 2 ; i <= n ; i++)
/* 207EGNyOL ily traian B0yZhPyhR */         {
/* 207EGNyOL ily traian B0yZhPyhR */             if(i % 2 == 0) l = n , c = i;
/* 207EGNyOL ily traian B0yZhPyhR */             else l = i , c = n;
/* 207EGNyOL ily traian B0yZhPyhR */             for(j = 1 ; j <= n - i + 1 ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */             {
/* 207EGNyOL ily traian B0yZhPyhR */                 a[l][c] = x;
/* 207EGNyOL ily traian B0yZhPyhR */                 x++;
/* 207EGNyOL ily traian B0yZhPyhR */                 if(i%2==0) l-- , c++;
/* 207EGNyOL ily traian B0yZhPyhR */                 else l++ , c--;
/* 207EGNyOL ily traian B0yZhPyhR */             }
/* 207EGNyOL ily traian B0yZhPyhR */     }
/* 207EGNyOL ily traian B0yZhPyhR */     else
/* 207EGNyOL ily traian B0yZhPyhR */         for(i = 2 ; i <= n ; i++)
/* 207EGNyOL ily traian B0yZhPyhR */         {
/* 207EGNyOL ily traian B0yZhPyhR */             if (i % 2 == 0) l = i , c = n ;
/* 207EGNyOL ily traian B0yZhPyhR */             else l = n , c =i ;
/* 207EGNyOL ily traian B0yZhPyhR */             for(j = 1 ; j <= n - i +1 ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */             {
/* 207EGNyOL ily traian B0yZhPyhR */                 a[l][c] = x;
/* 207EGNyOL ily traian B0yZhPyhR */                 x++;
/* 207EGNyOL ily traian B0yZhPyhR */                 if(i % 2 == 0) l++ , c--;
/* 207EGNyOL ily traian B0yZhPyhR */                 else l-- , c++;
/* 207EGNyOL ily traian B0yZhPyhR */             }
/* 207EGNyOL ily traian B0yZhPyhR */         }
/* 207EGNyOL ily traian B0yZhPyhR */     for(i = 1 ; i <= n ; i++)
/* 207EGNyOL ily traian B0yZhPyhR */     {
/* 207EGNyOL ily traian B0yZhPyhR */         for (j = 1 ; j <= n ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */             cout<<a[i][j]<<" ";
/* 207EGNyOL ily traian B0yZhPyhR */         cout<<'\n';
/* 207EGNyOL ily traian B0yZhPyhR */     }
/* 207EGNyOL ily traian B0yZhPyhR */     for(i = 2 ; i < n ; i++)
/* 207EGNyOL ily traian B0yZhPyhR */         for(j = 2 ; j< n ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */             b[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]+a[i][j-1]+a[i][j+1];
/* 207EGNyOL ily traian B0yZhPyhR */     cout << n*2-5<<'\n';
/* 207EGNyOL ily traian B0yZhPyhR */     for (j = 2 ; j <= n - 2 ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */           cout << b[2][j]<<" ";
/* 207EGNyOL ily traian B0yZhPyhR */     for(j = 2 ; j <= n - 1 ; j++)
/* 207EGNyOL ily traian B0yZhPyhR */           cout << b[n-1][j]<<" ";
/* 207EGNyOL ily traian B0yZhPyhR */     return 0;
/* 207EGNyOL ily traian B0yZhPyhR */ }