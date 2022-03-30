/* cWorI4lGt ily traian AC6NR3ay5 */ #include <algorithm>
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
/* cWorI4lGt ily traian AC6NR3ay5 */ 
/* cWorI4lGt ily traian AC6NR3ay5 */ using namespace std;
/* cWorI4lGt ily traian AC6NR3ay5 */ 
/* cWorI4lGt ily traian AC6NR3ay5 */ ifstream cin("cod.in");
/* cWorI4lGt ily traian AC6NR3ay5 */ ofstream cout("cod.out");
/* cWorI4lGt ily traian AC6NR3ay5 */ 
/* cWorI4lGt ily traian AC6NR3ay5 */ char s[1001];
/* cWorI4lGt ily traian AC6NR3ay5 */ 
/* cWorI4lGt ily traian AC6NR3ay5 */ bool valid(int n)
/* cWorI4lGt ily traian AC6NR3ay5 */ {
/* cWorI4lGt ily traian AC6NR3ay5 */     if(n == '.')
/* cWorI4lGt ily traian AC6NR3ay5 */         return 1;
/* cWorI4lGt ily traian AC6NR3ay5 */     if(n == ' ')
/* cWorI4lGt ily traian AC6NR3ay5 */         return 1;
/* cWorI4lGt ily traian AC6NR3ay5 */     if((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z'))
/* cWorI4lGt ily traian AC6NR3ay5 */         return 1;
/* cWorI4lGt ily traian AC6NR3ay5 */     return 0;
/* cWorI4lGt ily traian AC6NR3ay5 */ }
/* cWorI4lGt ily traian AC6NR3ay5 */ 
/* cWorI4lGt ily traian AC6NR3ay5 */ int ogl(int n)
/* cWorI4lGt ily traian AC6NR3ay5 */ {
/* cWorI4lGt ily traian AC6NR3ay5 */     int ogl=0;
/* cWorI4lGt ily traian AC6NR3ay5 */     while(n)
/* cWorI4lGt ily traian AC6NR3ay5 */         ogl=ogl*10+n%10 , n/=10;
/* cWorI4lGt ily traian AC6NR3ay5 */     return ogl;
/* cWorI4lGt ily traian AC6NR3ay5 */ }
/* cWorI4lGt ily traian AC6NR3ay5 */ 
/* cWorI4lGt ily traian AC6NR3ay5 */ int main()
/* cWorI4lGt ily traian AC6NR3ay5 */ {
/* cWorI4lGt ily traian AC6NR3ay5 */     while(cin>>s)
/* cWorI4lGt ily traian AC6NR3ay5 */     {
/* cWorI4lGt ily traian AC6NR3ay5 */         int i = 0;
/* cWorI4lGt ily traian AC6NR3ay5 */         int cnt = 0;
/* cWorI4lGt ily traian AC6NR3ay5 */         int nr = 0 , p = 1;
/* cWorI4lGt ily traian AC6NR3ay5 */         char v[200]="" ;
/* cWorI4lGt ily traian AC6NR3ay5 */         int n = 0;
/* cWorI4lGt ily traian AC6NR3ay5 */         while(s[i]!='\0')
/* cWorI4lGt ily traian AC6NR3ay5 */         {
/* cWorI4lGt ily traian AC6NR3ay5 */             nr+=(s[i]-48) * p;
/* cWorI4lGt ily traian AC6NR3ay5 */             p*=10;
/* cWorI4lGt ily traian AC6NR3ay5 */             cnt++;
/* cWorI4lGt ily traian AC6NR3ay5 */             if(cnt%2==0)
/* cWorI4lGt ily traian AC6NR3ay5 */                 if(!valid(nr))
/* cWorI4lGt ily traian AC6NR3ay5 */                     i++ , nr+=(s[i]-48) * p;
/* cWorI4lGt ily traian AC6NR3ay5 */             if(cnt%2==0)
/* cWorI4lGt ily traian AC6NR3ay5 */             {
/* cWorI4lGt ily traian AC6NR3ay5 */                 v[++n]=nr;
/* cWorI4lGt ily traian AC6NR3ay5 */                 nr=0;
/* cWorI4lGt ily traian AC6NR3ay5 */                 p=1;
/* cWorI4lGt ily traian AC6NR3ay5 */             }
/* cWorI4lGt ily traian AC6NR3ay5 */             i++;
/* cWorI4lGt ily traian AC6NR3ay5 */         }
/* cWorI4lGt ily traian AC6NR3ay5 */         for(int i = 1 ; i <= n+1 ; ++i)
/* cWorI4lGt ily traian AC6NR3ay5 */         {
/* cWorI4lGt ily traian AC6NR3ay5 */             if(v[i]=='.' || v[i]==' ' || v[i]=='\0')
/* cWorI4lGt ily traian AC6NR3ay5 */             {
/* cWorI4lGt ily traian AC6NR3ay5 */                 int j = i-1;
/* cWorI4lGt ily traian AC6NR3ay5 */                 while(v[j]!='.' && v[j]!=' ' && j > 0)
/* cWorI4lGt ily traian AC6NR3ay5 */                 {
/* cWorI4lGt ily traian AC6NR3ay5 */                     cout << (char)v[j];
/* cWorI4lGt ily traian AC6NR3ay5 */                     j--;
/* cWorI4lGt ily traian AC6NR3ay5 */                 }
/* cWorI4lGt ily traian AC6NR3ay5 */                 if(v[i]!='\0')
/* cWorI4lGt ily traian AC6NR3ay5 */                 cout << (char)v[i];
/* cWorI4lGt ily traian AC6NR3ay5 */             }
/* cWorI4lGt ily traian AC6NR3ay5 */         }
/* cWorI4lGt ily traian AC6NR3ay5 */         cout << endl;
/* cWorI4lGt ily traian AC6NR3ay5 */     }
/* cWorI4lGt ily traian AC6NR3ay5 */     return 0;
/* cWorI4lGt ily traian AC6NR3ay5 */ }