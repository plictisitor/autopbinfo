/* CVdYdZK7o ily traian ldC0LD216 */ #include <algorithm>
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
/* CVdYdZK7o ily traian ldC0LD216 */ 
/* CVdYdZK7o ily traian ldC0LD216 */ using namespace std;
/* CVdYdZK7o ily traian ldC0LD216 */ ifstream cin("coada1.in");
/* CVdYdZK7o ily traian ldC0LD216 */ ofstream cout("coada1.out");
/* CVdYdZK7o ily traian ldC0LD216 */ int f[1001];
/* CVdYdZK7o ily traian ldC0LD216 */ queue<int>Q;
/* CVdYdZK7o ily traian ldC0LD216 */ int main()
/* CVdYdZK7o ily traian ldC0LD216 */ {
/* CVdYdZK7o ily traian ldC0LD216 */     int  c , x , sterse=0 , poz = 0;
/* CVdYdZK7o ily traian ldC0LD216 */     string s;
/* CVdYdZK7o ily traian ldC0LD216 */     cin >> c;
/* CVdYdZK7o ily traian ldC0LD216 */     for(int i = 1 ; i <= c ; i++)
/* CVdYdZK7o ily traian ldC0LD216 */     {
/* CVdYdZK7o ily traian ldC0LD216 */         cin >> s;
/* CVdYdZK7o ily traian ldC0LD216 */         cin >> x;
/* CVdYdZK7o ily traian ldC0LD216 */         if(s == "push")
/* CVdYdZK7o ily traian ldC0LD216 */         {
/* CVdYdZK7o ily traian ldC0LD216 */             if(f[x] != 0)
/* CVdYdZK7o ily traian ldC0LD216 */             {
/* CVdYdZK7o ily traian ldC0LD216 */                 while(Q.front() != x)
/* CVdYdZK7o ily traian ldC0LD216 */                 {
/* CVdYdZK7o ily traian ldC0LD216 */                     f[Q.front()] = 0;
/* CVdYdZK7o ily traian ldC0LD216 */                     Q.pop();
/* CVdYdZK7o ily traian ldC0LD216 */                     sterse++;
/* CVdYdZK7o ily traian ldC0LD216 */                 }
/* CVdYdZK7o ily traian ldC0LD216 */                 Q.pop();
/* CVdYdZK7o ily traian ldC0LD216 */                 sterse++;
/* CVdYdZK7o ily traian ldC0LD216 */             }
/* CVdYdZK7o ily traian ldC0LD216 */             poz++;
/* CVdYdZK7o ily traian ldC0LD216 */             Q.push(x);
/* CVdYdZK7o ily traian ldC0LD216 */             f[x] = poz;
/* CVdYdZK7o ily traian ldC0LD216 */         }
/* CVdYdZK7o ily traian ldC0LD216 */         else
/* CVdYdZK7o ily traian ldC0LD216 */         {
/* CVdYdZK7o ily traian ldC0LD216 */             if(f[x] == 0) cout << -1 << '\n';
/* CVdYdZK7o ily traian ldC0LD216 */             else cout << f[x] - sterse<< '\n';
/* CVdYdZK7o ily traian ldC0LD216 */         }
/* CVdYdZK7o ily traian ldC0LD216 */     }
/* CVdYdZK7o ily traian ldC0LD216 */ }