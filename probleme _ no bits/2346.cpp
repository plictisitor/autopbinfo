/* 4v9ALMU7y ily traian FSEVtlPF2 */ #include <algorithm>
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
/* 4v9ALMU7y ily traian FSEVtlPF2 */ using namespace std;
/* 4v9ALMU7y ily traian FSEVtlPF2 */ 
/* 4v9ALMU7y ily traian FSEVtlPF2 */ ifstream cin("paritatesiruri.in");
/* 4v9ALMU7y ily traian FSEVtlPF2 */ ofstream cout("paritatesiruri.out");
/* 4v9ALMU7y ily traian FSEVtlPF2 */ 
/* 4v9ALMU7y ily traian FSEVtlPF2 */ int main()
/* 4v9ALMU7y ily traian FSEVtlPF2 */ {
/* 4v9ALMU7y ily traian FSEVtlPF2 */     int n;
/* 4v9ALMU7y ily traian FSEVtlPF2 */     cin >> n;
/* 4v9ALMU7y ily traian FSEVtlPF2 */     for(int q = 1 ; q <= n ; ++q)
/* 4v9ALMU7y ily traian FSEVtlPF2 */     {
/* 4v9ALMU7y ily traian FSEVtlPF2 */         char s[1000];
/* 4v9ALMU7y ily traian FSEVtlPF2 */         cin >> s;
/* 4v9ALMU7y ily traian FSEVtlPF2 */         int i = 1;
/* 4v9ALMU7y ily traian FSEVtlPF2 */         while(s[i]!='\0')
/* 4v9ALMU7y ily traian FSEVtlPF2 */         {
/* 4v9ALMU7y ily traian FSEVtlPF2 */             if(i % 2 == 1)
/* 4v9ALMU7y ily traian FSEVtlPF2 */             cout << s[i];
/* 4v9ALMU7y ily traian FSEVtlPF2 */             i++;
/* 4v9ALMU7y ily traian FSEVtlPF2 */         }
/* 4v9ALMU7y ily traian FSEVtlPF2 */         i = 0;
/* 4v9ALMU7y ily traian FSEVtlPF2 */         cout << ' ';
/* 4v9ALMU7y ily traian FSEVtlPF2 */         while(s[i]!='\0')
/* 4v9ALMU7y ily traian FSEVtlPF2 */         {
/* 4v9ALMU7y ily traian FSEVtlPF2 */             if(i % 2 == 0)
/* 4v9ALMU7y ily traian FSEVtlPF2 */             cout << s[i];
/* 4v9ALMU7y ily traian FSEVtlPF2 */             i++;
/* 4v9ALMU7y ily traian FSEVtlPF2 */         }
/* 4v9ALMU7y ily traian FSEVtlPF2 */         cout << '\n';
/* 4v9ALMU7y ily traian FSEVtlPF2 */     }
/* 4v9ALMU7y ily traian FSEVtlPF2 */     return 0;
/* 4v9ALMU7y ily traian FSEVtlPF2 */ }