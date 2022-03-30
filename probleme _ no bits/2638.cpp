/* zKStIawr2 ily traian oICwewVnS */ #include <algorithm>
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
/* zKStIawr2 ily traian oICwewVnS */ using namespace std;
/* zKStIawr2 ily traian oICwewVnS */ char s[60];
/* zKStIawr2 ily traian oICwewVnS */ long long v[60] , c , x , suma;
/* zKStIawr2 ily traian oICwewVnS */ int Cifra(char s){return (s >= '0' && s <= '9');}
/* zKStIawr2 ily traian oICwewVnS */ 
/* zKStIawr2 ily traian oICwewVnS */ int main()
/* zKStIawr2 ily traian oICwewVnS */ {
/* zKStIawr2 ily traian oICwewVnS */     int semn = 1 , ori = 0 , i = 0;
/* zKStIawr2 ily traian oICwewVnS */     cin >> s;
/* zKStIawr2 ily traian oICwewVnS */     while(s[i] != '\0')
/* zKStIawr2 ily traian oICwewVnS */     {
/* zKStIawr2 ily traian oICwewVnS */         if(!Cifra(s[i]))
/* zKStIawr2 ily traian oICwewVnS */         {
/* zKStIawr2 ily traian oICwewVnS */             if(s[i] == '+') semn = 1;
/* zKStIawr2 ily traian oICwewVnS */             else if(s[i] == '-') semn = -1;
/* zKStIawr2 ily traian oICwewVnS */             else if(s[i] == '*') ori = 1;
/* zKStIawr2 ily traian oICwewVnS */             else ori = 0;
/* zKStIawr2 ily traian oICwewVnS */             i++;
/* zKStIawr2 ily traian oICwewVnS */         }
/* zKStIawr2 ily traian oICwewVnS */         else
/* zKStIawr2 ily traian oICwewVnS */         {
/* zKStIawr2 ily traian oICwewVnS */             x = 0;
/* zKStIawr2 ily traian oICwewVnS */             while(Cifra(s[i]))
/* zKStIawr2 ily traian oICwewVnS */             {
/* zKStIawr2 ily traian oICwewVnS */                 x = x * 10 + s[i] - '0';
/* zKStIawr2 ily traian oICwewVnS */                 i++;
/* zKStIawr2 ily traian oICwewVnS */             }
/* zKStIawr2 ily traian oICwewVnS */             x *= semn;
/* zKStIawr2 ily traian oICwewVnS */             if(ori == 1) v[c] = v[c] * x;
/* zKStIawr2 ily traian oICwewVnS */             else v[++c] = x;
/* zKStIawr2 ily traian oICwewVnS */             semn = 1;
/* zKStIawr2 ily traian oICwewVnS */             ori = 0;
/* zKStIawr2 ily traian oICwewVnS */         }
/* zKStIawr2 ily traian oICwewVnS */     }
/* zKStIawr2 ily traian oICwewVnS */     for(i = 1 ; i <= c ; i++) suma +=  v[i];
/* zKStIawr2 ily traian oICwewVnS */     cout << suma;
/* zKStIawr2 ily traian oICwewVnS */     return 0;
/* zKStIawr2 ily traian oICwewVnS */ }