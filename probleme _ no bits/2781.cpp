/* ENvx1dtif ily traian FzVyBrWXt */ #include <algorithm>
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
/* ENvx1dtif ily traian FzVyBrWXt */ using namespace std;
/* ENvx1dtif ily traian FzVyBrWXt */ 
/* ENvx1dtif ily traian FzVyBrWXt */ int main()
/* ENvx1dtif ily traian FzVyBrWXt */ {
/* ENvx1dtif ily traian FzVyBrWXt */     int x , y , n , m;
/* ENvx1dtif ily traian FzVyBrWXt */     cin >> x >> y >> n >> m;
/* ENvx1dtif ily traian FzVyBrWXt */     int lc1 = x + y - 2;
/* ENvx1dtif ily traian FzVyBrWXt */     int lc2 = x - 1 + m - y;
/* ENvx1dtif ily traian FzVyBrWXt */     int lc3 = y - 1 + n - x;
/* ENvx1dtif ily traian FzVyBrWXt */     int lc4 = m - y + n - x;
/* ENvx1dtif ily traian FzVyBrWXt */     cout << max(max(max(lc1 , lc2) , lc3) , lc4) + 1;
/* ENvx1dtif ily traian FzVyBrWXt */     return 0;
/* ENvx1dtif ily traian FzVyBrWXt */ }