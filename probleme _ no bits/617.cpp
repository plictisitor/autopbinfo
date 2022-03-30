/* y0KYdtpch ily traian S6ngZVDmf */ #include <algorithm>
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
/* y0KYdtpch ily traian S6ngZVDmf */ 
/* y0KYdtpch ily traian S6ngZVDmf */ using namespace std;
/* y0KYdtpch ily traian S6ngZVDmf */ int n, m , a[1025][1025];
/* y0KYdtpch ily traian S6ngZVDmf */ int main()
/* y0KYdtpch ily traian S6ngZVDmf */ {
/* y0KYdtpch ily traian S6ngZVDmf */     cin >> m;
/* y0KYdtpch ily traian S6ngZVDmf */     n = 1 ;
/* y0KYdtpch ily traian S6ngZVDmf */     for(int i = 1 ; i <= m  ; i ++) n *= 2;
/* y0KYdtpch ily traian S6ngZVDmf */     if(m == 1) a[1][1] = a[1][2] = a[2][1] = 1;
/* y0KYdtpch ily traian S6ngZVDmf */     else if(m == 2)
/* y0KYdtpch ily traian S6ngZVDmf */     {
/* y0KYdtpch ily traian S6ngZVDmf */         a[1][1] = a[1][2] = a[2][1] = 1;
/* y0KYdtpch ily traian S6ngZVDmf */         a[1][3] = a[1][4] = a[2][4] = 2;
/* y0KYdtpch ily traian S6ngZVDmf */         a[3][1] = a[4][1] = a[4][2] = 3;
/* y0KYdtpch ily traian S6ngZVDmf */         a[3][4] = a[4][3] = a[4][4] = 4;
/* y0KYdtpch ily traian S6ngZVDmf */         a[2][2] = a[2][3] = a[3][2] = 5;
/* y0KYdtpch ily traian S6ngZVDmf */     }
/* y0KYdtpch ily traian S6ngZVDmf */     else{
/* y0KYdtpch ily traian S6ngZVDmf */         int p = 0;
/* y0KYdtpch ily traian S6ngZVDmf */         int i , j;
/* y0KYdtpch ily traian S6ngZVDmf */         if(m % 2 == 1)
/* y0KYdtpch ily traian S6ngZVDmf */         {
/* y0KYdtpch ily traian S6ngZVDmf */             for(i = 1 ; i + 3 <= n ; i += 3)
/* y0KYdtpch ily traian S6ngZVDmf */                 for(j = 1 ; j <= n ; j += 2)
/* y0KYdtpch ily traian S6ngZVDmf */                 {
/* y0KYdtpch ily traian S6ngZVDmf */                     p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                     a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                     p++;
/* y0KYdtpch ily traian S6ngZVDmf */                     a[i+1][j+1] = a[i+2][j] = a[i+2][j+1] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 }
/* y0KYdtpch ily traian S6ngZVDmf */             i = n -1;
/* y0KYdtpch ily traian S6ngZVDmf */             for(j = 1; j <= n - 2; j += 3)
/* y0KYdtpch ily traian S6ngZVDmf */             {
/* y0KYdtpch ily traian S6ngZVDmf */                 p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 p++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i+1][j+1] = a[i+1][j+2] = a[i][j+2] = p;
/* y0KYdtpch ily traian S6ngZVDmf */             }
/* y0KYdtpch ily traian S6ngZVDmf */             i = n - 1, j = n - 1;
/* y0KYdtpch ily traian S6ngZVDmf */             p ++;
/* y0KYdtpch ily traian S6ngZVDmf */             a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */             }
/* y0KYdtpch ily traian S6ngZVDmf */             else
/* y0KYdtpch ily traian S6ngZVDmf */             {
/* y0KYdtpch ily traian S6ngZVDmf */                 for(i = 1 ; i <= n - 4; i += 3)
/* y0KYdtpch ily traian S6ngZVDmf */                     for(j = 1 ; j <= n ; j += 2)
/* y0KYdtpch ily traian S6ngZVDmf */                     {
/* y0KYdtpch ily traian S6ngZVDmf */                         p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                         a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                         p++;
/* y0KYdtpch ily traian S6ngZVDmf */                         a[i+1][j+1] = a[i+2][j] = a[i+2][j+1] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                     }
/* y0KYdtpch ily traian S6ngZVDmf */                 i = n - 3;
/* y0KYdtpch ily traian S6ngZVDmf */                 for(j = 1; j <= n - 4; j += 3)
/* y0KYdtpch ily traian S6ngZVDmf */                 {
/* y0KYdtpch ily traian S6ngZVDmf */                     p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                     a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                     p++;
/* y0KYdtpch ily traian S6ngZVDmf */                     a[i+1][j+1] = a[i+1][j+2] = a[i][j+2] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 }
/* y0KYdtpch ily traian S6ngZVDmf */                 i = n - 1;
/* y0KYdtpch ily traian S6ngZVDmf */                 for(j = 1; j <= n - 4; j += 3)
/* y0KYdtpch ily traian S6ngZVDmf */                 {
/* y0KYdtpch ily traian S6ngZVDmf */                     p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                     a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                     p++;
/* y0KYdtpch ily traian S6ngZVDmf */                     a[i+1][j+1] = a[i+1][j+2] = a[i][j+2] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 }
/* y0KYdtpch ily traian S6ngZVDmf */                 i = n - 3, j = n - 3;
/* y0KYdtpch ily traian S6ngZVDmf */                 p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i][j] = a[i][j+1] = a[i+1][j] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i][j+2] = a[i][j+3] = a[i+1][j+3] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i+2][j] = a[i+3][j] = a[i+3][j+1] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i+2][j+3] = a[i+3][j+2] = a[i+3][j+3] = p;
/* y0KYdtpch ily traian S6ngZVDmf */                 p ++;
/* y0KYdtpch ily traian S6ngZVDmf */                 a[i+1][j+1] = a[i+1][j+2] = a[i+2][j+1] = p;
/* y0KYdtpch ily traian S6ngZVDmf */             }
/* y0KYdtpch ily traian S6ngZVDmf */         }
/* y0KYdtpch ily traian S6ngZVDmf */     for(int i =1; i <= n ; ++i)
/* y0KYdtpch ily traian S6ngZVDmf */     {
/* y0KYdtpch ily traian S6ngZVDmf */         for(int  j = 1 ; j <= n ; j ++)
/* y0KYdtpch ily traian S6ngZVDmf */             cout << a[i][j] << " ";
/* y0KYdtpch ily traian S6ngZVDmf */         cout << "\n";
/* y0KYdtpch ily traian S6ngZVDmf */     }
/* y0KYdtpch ily traian S6ngZVDmf */     return 0;
/* y0KYdtpch ily traian S6ngZVDmf */ }