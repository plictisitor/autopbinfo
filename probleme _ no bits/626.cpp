/* MWofiVpyO ily traian sm2NU7CoL */ #include <algorithm>
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
/* MWofiVpyO ily traian sm2NU7CoL */ 
/* MWofiVpyO ily traian sm2NU7CoL */ using namespace std;
/* MWofiVpyO ily traian sm2NU7CoL */ 
/* MWofiVpyO ily traian sm2NU7CoL */ ifstream cin("anagrame2.in");
/* MWofiVpyO ily traian sm2NU7CoL */ ofstream cout("anagrame2.out");
/* MWofiVpyO ily traian sm2NU7CoL */ 
/* MWofiVpyO ily traian sm2NU7CoL */ char s[100001] , cuv[25000];
/* MWofiVpyO ily traian sm2NU7CoL */ int f1[200] , f2[200];
/* MWofiVpyO ily traian sm2NU7CoL */ 
/* MWofiVpyO ily traian sm2NU7CoL */ bool egale()
/* MWofiVpyO ily traian sm2NU7CoL */ {
/* MWofiVpyO ily traian sm2NU7CoL */     for(int i = 63 ; i <= 125 ; ++i)
/* MWofiVpyO ily traian sm2NU7CoL */         if(f1[i]!=f2[i])
/* MWofiVpyO ily traian sm2NU7CoL */             return 0;
/* MWofiVpyO ily traian sm2NU7CoL */     return 1;
/* MWofiVpyO ily traian sm2NU7CoL */ }
/* MWofiVpyO ily traian sm2NU7CoL */ 
/* MWofiVpyO ily traian sm2NU7CoL */ int main()
/* MWofiVpyO ily traian sm2NU7CoL */ {
/* MWofiVpyO ily traian sm2NU7CoL */     int c;
/* MWofiVpyO ily traian sm2NU7CoL */     cin >> c;
/* MWofiVpyO ily traian sm2NU7CoL */     cin >> s;
/* MWofiVpyO ily traian sm2NU7CoL */     cin >> cuv;
/* MWofiVpyO ily traian sm2NU7CoL */     if(c==2)
/* MWofiVpyO ily traian sm2NU7CoL */     {
/* MWofiVpyO ily traian sm2NU7CoL */         for(int j = 0 ; j < strlen(cuv) ; ++j)
/* MWofiVpyO ily traian sm2NU7CoL */             f1[(int)cuv[j]]++;
/* MWofiVpyO ily traian sm2NU7CoL */         for(int i = 0 ; i < strlen(cuv) ; ++i)
/* MWofiVpyO ily traian sm2NU7CoL */             f2[(int)s[i]]++;
/* MWofiVpyO ily traian sm2NU7CoL */         int cnt=0;
/* MWofiVpyO ily traian sm2NU7CoL */         int i = strlen(cuv);
/* MWofiVpyO ily traian sm2NU7CoL */         if(egale())
/* MWofiVpyO ily traian sm2NU7CoL */                 cnt++;
/* MWofiVpyO ily traian sm2NU7CoL */         while(s[i]!='\0')
/* MWofiVpyO ily traian sm2NU7CoL */         {
/* MWofiVpyO ily traian sm2NU7CoL */             f2[(int)s[i-strlen(cuv)]]--;
/* MWofiVpyO ily traian sm2NU7CoL */             f2[(int)s[i]]++;
/* MWofiVpyO ily traian sm2NU7CoL */             if(egale())
/* MWofiVpyO ily traian sm2NU7CoL */                 cnt++;
/* MWofiVpyO ily traian sm2NU7CoL */             i++;
/* MWofiVpyO ily traian sm2NU7CoL */         }
/* MWofiVpyO ily traian sm2NU7CoL */         cout << cnt;
/* MWofiVpyO ily traian sm2NU7CoL */     }
/* MWofiVpyO ily traian sm2NU7CoL */     else
/* MWofiVpyO ily traian sm2NU7CoL */     {
/* MWofiVpyO ily traian sm2NU7CoL */         for(int j = 0 ; j < strlen(cuv) ; ++j)
/* MWofiVpyO ily traian sm2NU7CoL */             f1[(int)cuv[j]]++;
/* MWofiVpyO ily traian sm2NU7CoL */         for(int i = 0 ; i < strlen(cuv) ; ++i)
/* MWofiVpyO ily traian sm2NU7CoL */             f2[(int)s[i]]++;
/* MWofiVpyO ily traian sm2NU7CoL */         int cnt=0;
/* MWofiVpyO ily traian sm2NU7CoL */         int i = strlen(cuv);
/* MWofiVpyO ily traian sm2NU7CoL */         if(egale())
/* MWofiVpyO ily traian sm2NU7CoL */                 {
/* MWofiVpyO ily traian sm2NU7CoL */                     for(int j = i - strlen(cuv)+1 ; j < i+1 ; ++j)
/* MWofiVpyO ily traian sm2NU7CoL */                         cout << s[j];
/* MWofiVpyO ily traian sm2NU7CoL */                 }
/* MWofiVpyO ily traian sm2NU7CoL */             else
/* MWofiVpyO ily traian sm2NU7CoL */         while(s[i]!='\0')
/* MWofiVpyO ily traian sm2NU7CoL */         {
/* MWofiVpyO ily traian sm2NU7CoL */             f2[(int)s[i-strlen(cuv)]]--;
/* MWofiVpyO ily traian sm2NU7CoL */             f2[(int)s[i]]++;
/* MWofiVpyO ily traian sm2NU7CoL */             if(egale())
/* MWofiVpyO ily traian sm2NU7CoL */                 {
/* MWofiVpyO ily traian sm2NU7CoL */                     for(int j = i - strlen(cuv)+1 ; j <= i ; ++j)
/* MWofiVpyO ily traian sm2NU7CoL */                         cout << s[j];
/* MWofiVpyO ily traian sm2NU7CoL */                     break;
/* MWofiVpyO ily traian sm2NU7CoL */                 }
/* MWofiVpyO ily traian sm2NU7CoL */             i++;
/* MWofiVpyO ily traian sm2NU7CoL */         }
/* MWofiVpyO ily traian sm2NU7CoL */     }
/* MWofiVpyO ily traian sm2NU7CoL */     return 0;
/* MWofiVpyO ily traian sm2NU7CoL */ }