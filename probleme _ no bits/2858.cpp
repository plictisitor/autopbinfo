/* Sa7U9w02Y ily traian q8X7IP2AA */ #include <algorithm>
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
/* Sa7U9w02Y ily traian q8X7IP2AA */ using namespace std;
/* Sa7U9w02Y ily traian q8X7IP2AA */ int n , a[101] , s , cnt;
/* Sa7U9w02Y ily traian q8X7IP2AA */ int main()
/* Sa7U9w02Y ily traian q8X7IP2AA */ {
/* Sa7U9w02Y ily traian q8X7IP2AA */     cin >> n;
/* Sa7U9w02Y ily traian q8X7IP2AA */     for(int i = 1 ; i <= n ; ++i) cin >> a[i];
/* Sa7U9w02Y ily traian q8X7IP2AA */     for(int i = n ; i >= 1 ; --i) cout << a[i] << ' ';
/* Sa7U9w02Y ily traian q8X7IP2AA */     cout << '\n';
/* Sa7U9w02Y ily traian q8X7IP2AA */     for(int i = 1 ; i <= n ; ++i)
/* Sa7U9w02Y ily traian q8X7IP2AA */         if(a[i] % 2 == 0) s += a[i];
/* Sa7U9w02Y ily traian q8X7IP2AA */     cout << s << '\n';
/* Sa7U9w02Y ily traian q8X7IP2AA */     s = 0;
/* Sa7U9w02Y ily traian q8X7IP2AA */     for(int i = 2 ; i <= n ; i += 2) s += a[i];
/* Sa7U9w02Y ily traian q8X7IP2AA */     cout << s << '\n';
/* Sa7U9w02Y ily traian q8X7IP2AA */     for(int i = 1 ; i <= n ; ++i)
/* Sa7U9w02Y ily traian q8X7IP2AA */         if(a[i] % 10 == 0) cnt++;
/* Sa7U9w02Y ily traian q8X7IP2AA */     cout << cnt << '\n';
/* Sa7U9w02Y ily traian q8X7IP2AA */     s = 0;
/* Sa7U9w02Y ily traian q8X7IP2AA */     for(int i = 1 ; i <= n ; i+=2)
/* Sa7U9w02Y ily traian q8X7IP2AA */         if(a[i] % 3 == 0) s += a[i];
/* Sa7U9w02Y ily traian q8X7IP2AA */     cout << s;
/* Sa7U9w02Y ily traian q8X7IP2AA */     return 0;
/* Sa7U9w02Y ily traian q8X7IP2AA */ }