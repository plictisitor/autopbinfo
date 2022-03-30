/* F5unEBpHw ily traian DiUWpk8P4 */ #include <algorithm>
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
/* F5unEBpHw ily traian DiUWpk8P4 */ using namespace std;
/* F5unEBpHw ily traian DiUWpk8P4 */ ifstream cin("eliminare2.in");
/* F5unEBpHw ily traian DiUWpk8P4 */ ofstream cout("eliminare2.out");
/* F5unEBpHw ily traian DiUWpk8P4 */ int a[100001] , b[100001];
/* F5unEBpHw ily traian DiUWpk8P4 */ int main()
/* F5unEBpHw ily traian DiUWpk8P4 */ {
/* F5unEBpHw ily traian DiUWpk8P4 */     int n , m , c = 0;
/* F5unEBpHw ily traian DiUWpk8P4 */     cin >> n;
/* F5unEBpHw ily traian DiUWpk8P4 */     for(int i = 0 ; i < n ; ++i)
/* F5unEBpHw ily traian DiUWpk8P4 */         cin >> a[i];
/* F5unEBpHw ily traian DiUWpk8P4 */     cin >> m;
/* F5unEBpHw ily traian DiUWpk8P4 */     for(int j = 0 ; j < m ; ++j)
/* F5unEBpHw ily traian DiUWpk8P4 */         cin >> b[j];
/* F5unEBpHw ily traian DiUWpk8P4 */     for(int i = 0 ; i < n ; ++i)
/* F5unEBpHw ily traian DiUWpk8P4 */         if(a[i]==b[c]) c++;
/* F5unEBpHw ily traian DiUWpk8P4 */     if(c == m)cout << 1;
/* F5unEBpHw ily traian DiUWpk8P4 */     else cout << 0;
/* F5unEBpHw ily traian DiUWpk8P4 */     return 0;
/* F5unEBpHw ily traian DiUWpk8P4 */ }