/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ #include <algorithm>
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
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ using namespace std;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ 
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ char s[100001];
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ int f1[300] , f2[300];
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ 
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ bool egale(int cnt1 , int cnt2 , int cnt3)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     bool ok = true;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     for(int i = 97 ; i <= 122 ; ++i)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         if(f1[i]>f2[i])
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             if(i==97 || i==101 || i==105 || i==111 || i==117)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 if(cnt2)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                     cnt2--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 else if(cnt3)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                     cnt3--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                     return 0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 if(cnt1)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                     cnt1--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 else if(cnt3)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                     cnt3--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                     return 0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     return ok;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ 
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ int main()
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     int cnt1=0 , cnt2=0 , cnt3=0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     cin >> s;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     int i = 0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     f1[97]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     f1[100]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     f1[111]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     f1[98]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     f1[101]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     while(s[i]!='\0')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         if((int) s[i] < 96 && (s[i]!='+' && s[i]!='-' && s[i]!='*'))
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             s[i]=(char)((int)s[i]+32);
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         ++i;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     i=0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     int cnt = 0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     for(i = 0 ; i < 5 ; ++i)
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         if(s[i]!='+' && s[i]!='-' && s[i]!='*')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             f2[(int)s[i]]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             if(s[i]=='+')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt1++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else if(s[i]=='-')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt2++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt3++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     if(egale(cnt1 , cnt2 , cnt3))
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             cnt++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     while(s[i]!='\0')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         if(s[i-5]!='+' && s[i-5]!='-' && s[i-5]!='*')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             f2[(int)s[i-5]]--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             if(s[i-5]=='+')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt1--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else if(s[i-5]=='-')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt2--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt3--;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         if(s[i]!='+' && s[i]!='-' && s[i]!='*')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             f2[(int)s[i]]++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             if(s[i]=='+')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt1++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else if(s[i]=='-')
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt2++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             else
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */                 cnt3++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         if(egale(cnt1 , cnt2 , cnt3))
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         {
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */             cnt++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */         i++;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     }
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     cout << cnt;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */     return 0;
/* 7Wb0uBSxt ily traian ZV7vN7hW0 */ }