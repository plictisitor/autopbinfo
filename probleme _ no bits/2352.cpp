/* XwCDi6gHc ily traian CHYGpMIgj */ #include <algorithm>
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
/* XwCDi6gHc ily traian CHYGpMIgj */ 
/* XwCDi6gHc ily traian CHYGpMIgj */ using namespace std;
/* XwCDi6gHc ily traian CHYGpMIgj */ ifstream cin("careu.in");
/* XwCDi6gHc ily traian CHYGpMIgj */ ofstream cout("careu.out");
/* XwCDi6gHc ily traian CHYGpMIgj */ int pal(char a[256] , int x , int y)
/* XwCDi6gHc ily traian CHYGpMIgj */ {
/* XwCDi6gHc ily traian CHYGpMIgj */     for(int i = x , j = y; i < j ; i++ , j--)
/* XwCDi6gHc ily traian CHYGpMIgj */         if(a[i] != a[j]) return 0;
/* XwCDi6gHc ily traian CHYGpMIgj */     return 1;
/* XwCDi6gHc ily traian CHYGpMIgj */ }
/* XwCDi6gHc ily traian CHYGpMIgj */ void ordonare(char a[][100] , int n)
/* XwCDi6gHc ily traian CHYGpMIgj */ {
/* XwCDi6gHc ily traian CHYGpMIgj */     for(int i = 1 ; i <= n ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */         for(int j = i + 1 ; j <=n ; j++)
/* XwCDi6gHc ily traian CHYGpMIgj */             if(strcmp(a[i] , a[j]) > 0)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 char aux[201];
/* XwCDi6gHc ily traian CHYGpMIgj */                 strcpy(aux , a[i]);
/* XwCDi6gHc ily traian CHYGpMIgj */                 strcpy(a[i] , a[j]);
/* XwCDi6gHc ily traian CHYGpMIgj */                 strcpy(a[j] , aux);
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */ }
/* XwCDi6gHc ily traian CHYGpMIgj */ int main()
/* XwCDi6gHc ily traian CHYGpMIgj */ {
/* XwCDi6gHc ily traian CHYGpMIgj */     int n , cer , cnt = 0 , lmax = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */     cin >> n;
/* XwCDi6gHc ily traian CHYGpMIgj */     char s[55][100] , b[10000][100] = {};
/* XwCDi6gHc ily traian CHYGpMIgj */     for(int i = 0 ; i < n ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */         cin >> s[i];
/* XwCDi6gHc ily traian CHYGpMIgj */     cin >> cer;
/* XwCDi6gHc ily traian CHYGpMIgj */         for(int i = 0 ; i < n ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */         {
/* XwCDi6gHc ily traian CHYGpMIgj */             int l = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int j = 0 ; j < n ; j++)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(s[i][j] != '.') l++;
/* XwCDi6gHc ily traian CHYGpMIgj */                 else
/* XwCDi6gHc ily traian CHYGpMIgj */                 {
/* XwCDi6gHc ily traian CHYGpMIgj */                     if(pal(s[i] , j - l , j - 1) && l >= 2)
/* XwCDi6gHc ily traian CHYGpMIgj */                     {
/* XwCDi6gHc ily traian CHYGpMIgj */                         if(l > lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                         {
/* XwCDi6gHc ily traian CHYGpMIgj */                             lmax = l;
/* XwCDi6gHc ily traian CHYGpMIgj */                             cnt = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */                             strncpy(b[++cnt] , s[i] + j - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                         }
/* XwCDi6gHc ily traian CHYGpMIgj */                         else if(l == lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                         {
/* XwCDi6gHc ily traian CHYGpMIgj */                             strncpy(b[++cnt] , s[i] + j - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                         }
/* XwCDi6gHc ily traian CHYGpMIgj */                     }
/* XwCDi6gHc ily traian CHYGpMIgj */                     l = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */                 }
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */             if(pal(s[i] , n - l , n - 1) && l >= 2)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(l > lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                     {
/* XwCDi6gHc ily traian CHYGpMIgj */                         lmax = l;
/* XwCDi6gHc ily traian CHYGpMIgj */                         cnt = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */                         strncpy(b[++cnt] , s[i] + n - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                     }
/* XwCDi6gHc ily traian CHYGpMIgj */                 else if(l == lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                 {
/* XwCDi6gHc ily traian CHYGpMIgj */                         strncpy(b[++cnt] , s[i] + n - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                 }
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */         }
/* XwCDi6gHc ily traian CHYGpMIgj */         for(int i =  0 ; i < n ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int j = 0 ; j < i ; j++)
/* XwCDi6gHc ily traian CHYGpMIgj */                 swap(s[i][j] , s[j][i]);
/* XwCDi6gHc ily traian CHYGpMIgj */         for(int i = 0 ; i < n ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */         {
/* XwCDi6gHc ily traian CHYGpMIgj */             int l = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int j = 0 ; j < n ; j++)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(s[i][j] != '.') l++;
/* XwCDi6gHc ily traian CHYGpMIgj */                 else
/* XwCDi6gHc ily traian CHYGpMIgj */                 {
/* XwCDi6gHc ily traian CHYGpMIgj */                     if(pal(s[i] , j - l , j - 1) && l >= 2)
/* XwCDi6gHc ily traian CHYGpMIgj */                     {
/* XwCDi6gHc ily traian CHYGpMIgj */                         if(l > lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                         {
/* XwCDi6gHc ily traian CHYGpMIgj */                             lmax = l;
/* XwCDi6gHc ily traian CHYGpMIgj */                             cnt = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */                             strncpy(b[++cnt] , s[i] + j - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                         }
/* XwCDi6gHc ily traian CHYGpMIgj */                         else if(l == lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                         {
/* XwCDi6gHc ily traian CHYGpMIgj */                             strncpy(b[++cnt] , s[i] + j - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                         }
/* XwCDi6gHc ily traian CHYGpMIgj */                     }
/* XwCDi6gHc ily traian CHYGpMIgj */                     l = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */                 }
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */             if(pal(s[i] , n - l , n - 1) && l >= 2)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(l > lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                     {
/* XwCDi6gHc ily traian CHYGpMIgj */                         lmax = l;
/* XwCDi6gHc ily traian CHYGpMIgj */                         cnt = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */                         strncpy(b[++cnt] , s[i] + n - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                     }
/* XwCDi6gHc ily traian CHYGpMIgj */                 else if(l == lmax)
/* XwCDi6gHc ily traian CHYGpMIgj */                 {
/* XwCDi6gHc ily traian CHYGpMIgj */                         strncpy(b[++cnt] , s[i] + n - l , l);
/* XwCDi6gHc ily traian CHYGpMIgj */                 }
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */         }
/* XwCDi6gHc ily traian CHYGpMIgj */         if(cer == 1)
/* XwCDi6gHc ily traian CHYGpMIgj */         {
/* XwCDi6gHc ily traian CHYGpMIgj */             ordonare(b , cnt);
/* XwCDi6gHc ily traian CHYGpMIgj */             int ok = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int i = 1 ; i <= cnt ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(strcmp(b[i] , b[i-1]) == 0)ok++;
/* XwCDi6gHc ily traian CHYGpMIgj */             cout << cnt-ok << '\n';
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int i = 1 ; i <= cnt ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(strcmp(b[i] , b[i-1]) != 0)cout << b[i] << '\n';
/* XwCDi6gHc ily traian CHYGpMIgj */         }
/* XwCDi6gHc ily traian CHYGpMIgj */         else
/* XwCDi6gHc ily traian CHYGpMIgj */         {
/* XwCDi6gHc ily traian CHYGpMIgj */             int f[1000] = {0};
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int i = 1 ; i <= cnt ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 int m = strlen(b[i]);
/* XwCDi6gHc ily traian CHYGpMIgj */                 for(int j = 0 ; j < m ; j++)
/* XwCDi6gHc ily traian CHYGpMIgj */                     f[(int)b[i][j]]++;
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */             long long s = 0;
/* XwCDi6gHc ily traian CHYGpMIgj */             for(int i = 50 ; i <= 256 ; i++)
/* XwCDi6gHc ily traian CHYGpMIgj */             {
/* XwCDi6gHc ily traian CHYGpMIgj */                 if(f[i] != 0) s+=i;
/* XwCDi6gHc ily traian CHYGpMIgj */             }
/* XwCDi6gHc ily traian CHYGpMIgj */             cout << s;
/* XwCDi6gHc ily traian CHYGpMIgj */         }
/* XwCDi6gHc ily traian CHYGpMIgj */ }