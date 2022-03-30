/* E4cTWkHSk ily traian McQMqMIAs */ #include <algorithm>
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
/* E4cTWkHSk ily traian McQMqMIAs */ using namespace std;
/* E4cTWkHSk ily traian McQMqMIAs */ 
/* E4cTWkHSk ily traian McQMqMIAs */ ifstream cin("chibrituri.in");
/* E4cTWkHSk ily traian McQMqMIAs */ ofstream cout("chibrituri.out");
/* E4cTWkHSk ily traian McQMqMIAs */ 
/* E4cTWkHSk ily traian McQMqMIAs */ struct frecventa
/* E4cTWkHSk ily traian McQMqMIAs */ {
/* E4cTWkHSk ily traian McQMqMIAs */     int v , o;
/* E4cTWkHSk ily traian McQMqMIAs */ }f[10001];
/* E4cTWkHSk ily traian McQMqMIAs */ 
/* E4cTWkHSk ily traian McQMqMIAs */ void creare()
/* E4cTWkHSk ily traian McQMqMIAs */ {
/* E4cTWkHSk ily traian McQMqMIAs */     for(int k = 0 ; k < 24 ; ++k)
/* E4cTWkHSk ily traian McQMqMIAs */     {
/* E4cTWkHSk ily traian McQMqMIAs */         for(int j = 0 ; j <= 5 ; ++j)
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             for(int i = 0 ; i <= 9 ; ++i)
/* E4cTWkHSk ily traian McQMqMIAs */             {
/* E4cTWkHSk ily traian McQMqMIAs */                 int c = k * 100 + j * 10 + i;
/* E4cTWkHSk ily traian McQMqMIAs */                 int v = k % 10 , d = k / 10;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 0)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=2 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 1)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=0 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 2)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 3)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 4)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 5)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 6)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 7)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 8)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(i == 9)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 0)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=2 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 1)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=0 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 2)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 3)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 4)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 5)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 6)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 7)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 8)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(j == 9)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 //
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 0)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=2 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 1)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=0 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 2)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 3)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 4)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 5)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 6)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 7)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 8)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(v == 9)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 0)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=2 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 1)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=0 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 2)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 3)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 4)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 5)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 6)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 7)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=1 , f[c].v+=2;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 8)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=4;
/* E4cTWkHSk ily traian McQMqMIAs */                 if(d == 9)
/* E4cTWkHSk ily traian McQMqMIAs */                     f[c].o+=3 , f[c].v+=3;
/* E4cTWkHSk ily traian McQMqMIAs */             }
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */     }
/* E4cTWkHSk ily traian McQMqMIAs */ }
/* E4cTWkHSk ily traian McQMqMIAs */ 
/* E4cTWkHSk ily traian McQMqMIAs */ int nrcif(int n)
/* E4cTWkHSk ily traian McQMqMIAs */ {
/* E4cTWkHSk ily traian McQMqMIAs */     int cnt = 0;
/* E4cTWkHSk ily traian McQMqMIAs */     while(n) cnt ++ , n /=10;
/* E4cTWkHSk ily traian McQMqMIAs */     return cnt;
/* E4cTWkHSk ily traian McQMqMIAs */ }
/* E4cTWkHSk ily traian McQMqMIAs */ 
/* E4cTWkHSk ily traian McQMqMIAs */ int main()
/* E4cTWkHSk ily traian McQMqMIAs */ {
/* E4cTWkHSk ily traian McQMqMIAs */     int n , m;
/* E4cTWkHSk ily traian McQMqMIAs */     cin >> n >> m;
/* E4cTWkHSk ily traian McQMqMIAs */     creare();
/* E4cTWkHSk ily traian McQMqMIAs */     int cnt = 0;
/* E4cTWkHSk ily traian McQMqMIAs */     int min = 100000 , max = 0;
/* E4cTWkHSk ily traian McQMqMIAs */     for(int i = 0 ; i < 10000 ; ++i)
/* E4cTWkHSk ily traian McQMqMIAs */     {
/* E4cTWkHSk ily traian McQMqMIAs */         if(f[i].o == m && f[i].v == n)
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cnt++;
/* E4cTWkHSk ily traian McQMqMIAs */             if(i < min)
/* E4cTWkHSk ily traian McQMqMIAs */                 min = i;
/* E4cTWkHSk ily traian McQMqMIAs */             if(i > max)
/* E4cTWkHSk ily traian McQMqMIAs */                 max = i;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */     }
/* E4cTWkHSk ily traian McQMqMIAs */     cout << cnt << endl ;
/* E4cTWkHSk ily traian McQMqMIAs */     if(min == max)
/* E4cTWkHSk ily traian McQMqMIAs */     {
/* E4cTWkHSk ily traian McQMqMIAs */         if(nrcif(max) == 4)
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << max / 100 << ':';
/* E4cTWkHSk ily traian McQMqMIAs */             if(max % 100 < 10)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << 0 << max % 10;
/* E4cTWkHSk ily traian McQMqMIAs */             else
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << max % 100;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */         else
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << 0 << max / 100 << ':';
/* E4cTWkHSk ily traian McQMqMIAs */             if(max % 100 < 10)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << 0 << max % 10;
/* E4cTWkHSk ily traian McQMqMIAs */             else
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << max % 100;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */         cout << endl;
/* E4cTWkHSk ily traian McQMqMIAs */         if(nrcif(max) == 4)
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << max / 100 << ':';
/* E4cTWkHSk ily traian McQMqMIAs */             if(max % 100 < 10)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << 0 << max % 10;
/* E4cTWkHSk ily traian McQMqMIAs */             else
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << max % 100;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */         else
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << 0 << max / 100 << ':';
/* E4cTWkHSk ily traian McQMqMIAs */             if(max % 100 < 10)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << 0 << max % 10;
/* E4cTWkHSk ily traian McQMqMIAs */             else
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << max % 100;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */     }
/* E4cTWkHSk ily traian McQMqMIAs */     else
/* E4cTWkHSk ily traian McQMqMIAs */     {
/* E4cTWkHSk ily traian McQMqMIAs */         for(int i = 1 ; i <= 4 - nrcif(min) ; ++i)
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << 0;
/* E4cTWkHSk ily traian McQMqMIAs */             if(i % 2 == 0)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << ':';
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */         if(nrcif(min) > 2)
/* E4cTWkHSk ily traian McQMqMIAs */             cout << min/100 << ':' << min%100 << endl;
/* E4cTWkHSk ily traian McQMqMIAs */         else
/* E4cTWkHSk ily traian McQMqMIAs */             cout << min << endl;
/* E4cTWkHSk ily traian McQMqMIAs */         if(nrcif(max) == 4)
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << max / 100 << ':';
/* E4cTWkHSk ily traian McQMqMIAs */             if(max % 100 < 10)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << 0 << max % 10;
/* E4cTWkHSk ily traian McQMqMIAs */             else
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << max % 100;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */         else
/* E4cTWkHSk ily traian McQMqMIAs */         {
/* E4cTWkHSk ily traian McQMqMIAs */             cout << 0 << max / 100 << ':';
/* E4cTWkHSk ily traian McQMqMIAs */             if(max % 100 < 10)
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << 0 << max % 10;
/* E4cTWkHSk ily traian McQMqMIAs */             else
/* E4cTWkHSk ily traian McQMqMIAs */                 cout << max % 100;
/* E4cTWkHSk ily traian McQMqMIAs */         }
/* E4cTWkHSk ily traian McQMqMIAs */     }
/* E4cTWkHSk ily traian McQMqMIAs */     return 0;
/* E4cTWkHSk ily traian McQMqMIAs */ }