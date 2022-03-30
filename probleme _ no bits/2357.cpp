/* ezEziv4lb ily traian 6i0CDJExF */ #include <algorithm>
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
/* ezEziv4lb ily traian 6i0CDJExF */ using namespace std;
/* ezEziv4lb ily traian 6i0CDJExF */ ifstream cin("escape.in");
/* ezEziv4lb ily traian 6i0CDJExF */ ofstream cout("escape.out");
/* ezEziv4lb ily traian 6i0CDJExF */ int s1[10] , s2[10];
/* ezEziv4lb ily traian 6i0CDJExF */ bool ciur[1000101];
/* ezEziv4lb ily traian 6i0CDJExF */ int main()
/* ezEziv4lb ily traian 6i0CDJExF */ {
/* ezEziv4lb ily traian 6i0CDJExF */     int cer , n , x;
/* ezEziv4lb ily traian 6i0CDJExF */     cin >> cer >> n;
/* ezEziv4lb ily traian 6i0CDJExF */     ciur[0] = ciur[1] = 1;
/* ezEziv4lb ily traian 6i0CDJExF */     for(int i = 2 ; i * i <= 1000100 ; ++i)
/* ezEziv4lb ily traian 6i0CDJExF */         if(ciur[i]==0)
/* ezEziv4lb ily traian 6i0CDJExF */             for(int j = i * i ; j <= 1000100 ; j+=i) ciur[j]=1;
/* ezEziv4lb ily traian 6i0CDJExF */     if(cer == 1)
/* ezEziv4lb ily traian 6i0CDJExF */     {
/* ezEziv4lb ily traian 6i0CDJExF */         for(int i = 0 ; i < n ; ++i)
/* ezEziv4lb ily traian 6i0CDJExF */         {
/* ezEziv4lb ily traian 6i0CDJExF */             cin >> x;
/* ezEziv4lb ily traian 6i0CDJExF */             int nota = x % 100;
/* ezEziv4lb ily traian 6i0CDJExF */             x /= 100;
/* ezEziv4lb ily traian 6i0CDJExF */             int suma = x;
/* ezEziv4lb ily traian 6i0CDJExF */             while(suma > 9)
/* ezEziv4lb ily traian 6i0CDJExF */             {
/* ezEziv4lb ily traian 6i0CDJExF */                 int var = suma;
/* ezEziv4lb ily traian 6i0CDJExF */                 suma = 0;
/* ezEziv4lb ily traian 6i0CDJExF */                 while(var)
/* ezEziv4lb ily traian 6i0CDJExF */                     suma += var % 10 , var /= 10;
/* ezEziv4lb ily traian 6i0CDJExF */             }
/* ezEziv4lb ily traian 6i0CDJExF */             if(ciur[x]==0)s1[suma]+=nota;
/* ezEziv4lb ily traian 6i0CDJExF */             else s2[suma]+=nota;
/* ezEziv4lb ily traian 6i0CDJExF */         }
/* ezEziv4lb ily traian 6i0CDJExF */         int max1 = 0 , max2 = 0;
/* ezEziv4lb ily traian 6i0CDJExF */         for(int i = 1 ; i < 10 ; ++i)
/* ezEziv4lb ily traian 6i0CDJExF */         {
/* ezEziv4lb ily traian 6i0CDJExF */             if(s1[i] > max1) max1 = s1[i];
/* ezEziv4lb ily traian 6i0CDJExF */             if(s2[i] > max2) max2 = s2[i];
/* ezEziv4lb ily traian 6i0CDJExF */         }
/* ezEziv4lb ily traian 6i0CDJExF */         cout << max1 << ' ' << max2;
/* ezEziv4lb ily traian 6i0CDJExF */     }
/* ezEziv4lb ily traian 6i0CDJExF */     if(cer == 2)
/* ezEziv4lb ily traian 6i0CDJExF */     {
/* ezEziv4lb ily traian 6i0CDJExF */         for(int i = 0 ; i < n ; ++i)
/* ezEziv4lb ily traian 6i0CDJExF */         {
/* ezEziv4lb ily traian 6i0CDJExF */             cin >> x;
/* ezEziv4lb ily traian 6i0CDJExF */             int nota = x % 100;
/* ezEziv4lb ily traian 6i0CDJExF */             x /= 100;
/* ezEziv4lb ily traian 6i0CDJExF */             int suma = x;
/* ezEziv4lb ily traian 6i0CDJExF */             while(suma > 9)
/* ezEziv4lb ily traian 6i0CDJExF */             {
/* ezEziv4lb ily traian 6i0CDJExF */                 int var = suma;
/* ezEziv4lb ily traian 6i0CDJExF */                 suma = 0;
/* ezEziv4lb ily traian 6i0CDJExF */                 while(var)
/* ezEziv4lb ily traian 6i0CDJExF */                     suma += var % 10 , var /= 10;
/* ezEziv4lb ily traian 6i0CDJExF */             }
/* ezEziv4lb ily traian 6i0CDJExF */             s1[suma]++;
/* ezEziv4lb ily traian 6i0CDJExF */         }
/* ezEziv4lb ily traian 6i0CDJExF */         for(int i = 1 ; i < 10 ; ++i)
/* ezEziv4lb ily traian 6i0CDJExF */         {
/* ezEziv4lb ily traian 6i0CDJExF */             int imax=0;
/* ezEziv4lb ily traian 6i0CDJExF */             for(int j = 1 ; j < 10 ; ++j)
/* ezEziv4lb ily traian 6i0CDJExF */                 if(s1[j]>s1[imax])imax=j;
/* ezEziv4lb ily traian 6i0CDJExF */ 
/* ezEziv4lb ily traian 6i0CDJExF */             if(s1[imax]!=0)
/* ezEziv4lb ily traian 6i0CDJExF */                 cout << imax << ' ';
/* ezEziv4lb ily traian 6i0CDJExF */             s1[imax]=-1;
/* ezEziv4lb ily traian 6i0CDJExF */         }
/* ezEziv4lb ily traian 6i0CDJExF */     }
/* ezEziv4lb ily traian 6i0CDJExF */     return 0;
/* ezEziv4lb ily traian 6i0CDJExF */ }