/* sosg6vFnG ily traian LLleeRCXy */ #include <algorithm>
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
/* sosg6vFnG ily traian LLleeRCXy */ using namespace std;
/* sosg6vFnG ily traian LLleeRCXy */ int n , a[1005] , b[1005] , cnt1 , cnt2;
/* sosg6vFnG ily traian LLleeRCXy */ int main()
/* sosg6vFnG ily traian LLleeRCXy */ {
/* sosg6vFnG ily traian LLleeRCXy */     cin >> n;
/* sosg6vFnG ily traian LLleeRCXy */     for(int i = 1 ; i <= n ; i ++) cin >> a[i];
/* sosg6vFnG ily traian LLleeRCXy */     for(int i = 1 ; i <= n ; i ++) cin >> b[i];
/* sosg6vFnG ily traian LLleeRCXy */     for(int i = 1 ; i <= n ; ++i)
/* sosg6vFnG ily traian LLleeRCXy */         if(a[i] != b[i])
/* sosg6vFnG ily traian LLleeRCXy */             if(a[i] == 1) cnt1 ++;
/* sosg6vFnG ily traian LLleeRCXy */             else cnt2 ++;
/* sosg6vFnG ily traian LLleeRCXy */     cout << max(cnt1 , cnt2);
/* sosg6vFnG ily traian LLleeRCXy */     return 0;
/* sosg6vFnG ily traian LLleeRCXy */ }