/* CLnw8jnWB ily traian bhL8Ub6U9 */ #include <algorithm>
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
/* CLnw8jnWB ily traian bhL8Ub6U9 */ using namespace std;
/* CLnw8jnWB ily traian bhL8Ub6U9 */ 
/* CLnw8jnWB ily traian bhL8Ub6U9 */ ifstream cin("masaretu.in");
/* CLnw8jnWB ily traian bhL8Ub6U9 */ ofstream cout("masaretu.out");
/* CLnw8jnWB ily traian bhL8Ub6U9 */ 
/* CLnw8jnWB ily traian bhL8Ub6U9 */ char s[1000001];
/* CLnw8jnWB ily traian bhL8Ub6U9 */ int f[10000];
/* CLnw8jnWB ily traian bhL8Ub6U9 */ 
/* CLnw8jnWB ily traian bhL8Ub6U9 */ int main()
/* CLnw8jnWB ily traian bhL8Ub6U9 */ {
/* CLnw8jnWB ily traian bhL8Ub6U9 */     int c;
/* CLnw8jnWB ily traian bhL8Ub6U9 */     cin >> c;
/* CLnw8jnWB ily traian bhL8Ub6U9 */     cin.getline(s , 10000);
/* CLnw8jnWB ily traian bhL8Ub6U9 */     cin.getline(s , 1000001);
/* CLnw8jnWB ily traian bhL8Ub6U9 */         int i = 0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */         int cnt=0 , conto=0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */         while(s[i]!='\0')
/* CLnw8jnWB ily traian bhL8Ub6U9 */         {
/* CLnw8jnWB ily traian bhL8Ub6U9 */             if(s[i]==' ')
/* CLnw8jnWB ily traian bhL8Ub6U9 */             {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 if(cnt==8)
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     conto++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 cnt=0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */             }
/* CLnw8jnWB ily traian bhL8Ub6U9 */             else
/* CLnw8jnWB ily traian bhL8Ub6U9 */             {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 cnt++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */ 
/* CLnw8jnWB ily traian bhL8Ub6U9 */             }
/* CLnw8jnWB ily traian bhL8Ub6U9 */             i++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */         }
/* CLnw8jnWB ily traian bhL8Ub6U9 */         if(cnt==8)
/* CLnw8jnWB ily traian bhL8Ub6U9 */             conto++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */     if(c==1)
/* CLnw8jnWB ily traian bhL8Ub6U9 */         cout << conto;
/* CLnw8jnWB ily traian bhL8Ub6U9 */     s[i]=' ' , s[i+1]='\0';
/* CLnw8jnWB ily traian bhL8Ub6U9 */          i = 0; 
/* CLnw8jnWB ily traian bhL8Ub6U9 */     int j = 0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */          cnt=0 , conto=0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */         while(s[i]!='\0')
/* CLnw8jnWB ily traian bhL8Ub6U9 */         {
/* CLnw8jnWB ily traian bhL8Ub6U9 */             if(s[i]==' ')
/* CLnw8jnWB ily traian bhL8Ub6U9 */             {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 if(cnt==8)
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     conto++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     int cn=0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     int nr=0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     while(j < i)
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                         nr = nr * 100 + ((int)s[j]-96);
/* CLnw8jnWB ily traian bhL8Ub6U9 */                         cn++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                         if(cn == 2)
/* CLnw8jnWB ily traian bhL8Ub6U9 */                         {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                             f[nr]++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                             cn=0 , nr = 0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                         }
/* CLnw8jnWB ily traian bhL8Ub6U9 */                         j++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                     }
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 }
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 cnt=0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 j=i+1;
/* CLnw8jnWB ily traian bhL8Ub6U9 */             }
/* CLnw8jnWB ily traian bhL8Ub6U9 */             else
/* CLnw8jnWB ily traian bhL8Ub6U9 */             {
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 cnt++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */             }
/* CLnw8jnWB ily traian bhL8Ub6U9 */             i++;
/* CLnw8jnWB ily traian bhL8Ub6U9 */         }
/* CLnw8jnWB ily traian bhL8Ub6U9 */         int fmax = 0 , nr ;
/* CLnw8jnWB ily traian bhL8Ub6U9 */         for(int i = 100 ; i < 3000 ; ++i)
/* CLnw8jnWB ily traian bhL8Ub6U9 */         {
/* CLnw8jnWB ily traian bhL8Ub6U9 */             if(f[i] > fmax)
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 fmax=f[i];
/* CLnw8jnWB ily traian bhL8Ub6U9 */         }
/* CLnw8jnWB ily traian bhL8Ub6U9 */     if(c==2)
/* CLnw8jnWB ily traian bhL8Ub6U9 */         for(int i = 100 ; i < 3000 ; ++i)
/* CLnw8jnWB ily traian bhL8Ub6U9 */             if(f[i]==fmax)
/* CLnw8jnWB ily traian bhL8Ub6U9 */                 cout << ((char)(i/100 + 96)) << ((char)(i % 100 + 96)) << ' ';
/* CLnw8jnWB ily traian bhL8Ub6U9 */     return 0;
/* CLnw8jnWB ily traian bhL8Ub6U9 */ }