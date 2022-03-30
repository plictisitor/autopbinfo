/* FkTzToaOM ily traian Iq9H7Cr95 */ #include <algorithm>
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
/* FkTzToaOM ily traian Iq9H7Cr95 */ using namespace std;
/* FkTzToaOM ily traian Iq9H7Cr95 */ 
/* FkTzToaOM ily traian Iq9H7Cr95 */ ifstream cin("list.in");
/* FkTzToaOM ily traian Iq9H7Cr95 */ ofstream cout("list.out");
/* FkTzToaOM ily traian Iq9H7Cr95 */ 
/* FkTzToaOM ily traian Iq9H7Cr95 */ int main(){
/* FkTzToaOM ily traian Iq9H7Cr95 */     int n, a, b;
/* FkTzToaOM ily traian Iq9H7Cr95 */     cin >> n;
/* FkTzToaOM ily traian Iq9H7Cr95 */     for(int i = 1; i <= n; ++i){
/* FkTzToaOM ily traian Iq9H7Cr95 */         cin >> a >> b;
/* FkTzToaOM ily traian Iq9H7Cr95 */         if(a % 2 == 1 && b % 2 == 0){
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << 2 * (a + b) - a << ' ' << 2 * (a + b) << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << a << ' ' << b << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */         }
/* FkTzToaOM ily traian Iq9H7Cr95 */         else if(a % 2 == 0 && b % 2 == 1){
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << a << ' ' << b << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << 2 * (a + b) << ' ' << 2 * (a + b) - b << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */         }
/* FkTzToaOM ily traian Iq9H7Cr95 */         else if(a % 2 == 0 && b % 2 == 0){
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << a << ' ' << b << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << (a + b) / 2 << ' ' << (a + b)/2 + b << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */         }
/* FkTzToaOM ily traian Iq9H7Cr95 */         else{
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << (a + b)/2 + a << ' ' << (a + b) / 2 << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */             cout << a << ' ' << b << "\n";
/* FkTzToaOM ily traian Iq9H7Cr95 */         }
/* FkTzToaOM ily traian Iq9H7Cr95 */     }
/* FkTzToaOM ily traian Iq9H7Cr95 */ }