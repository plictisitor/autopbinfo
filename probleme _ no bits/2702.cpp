/* RROl68V3W ily traian ZLnFTzKvX */ #include <algorithm>
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
/* RROl68V3W ily traian ZLnFTzKvX */ using namespace std;
/* RROl68V3W ily traian ZLnFTzKvX */ 
/* RROl68V3W ily traian ZLnFTzKvX */ int f[101];
/* RROl68V3W ily traian ZLnFTzKvX */ 
/* RROl68V3W ily traian ZLnFTzKvX */ int main()
/* RROl68V3W ily traian ZLnFTzKvX */ {
/* RROl68V3W ily traian ZLnFTzKvX */     int n;
/* RROl68V3W ily traian ZLnFTzKvX */     cin >> n;
/* RROl68V3W ily traian ZLnFTzKvX */     int x;
/* RROl68V3W ily traian ZLnFTzKvX */     for(int i = 1 ; i <= n ; ++i)
/* RROl68V3W ily traian ZLnFTzKvX */         cin >> x , f[x]++;
/* RROl68V3W ily traian ZLnFTzKvX */     int cnt = 0;
/* RROl68V3W ily traian ZLnFTzKvX */     for(int i = 1 ; i <= 100 ; ++i)
/* RROl68V3W ily traian ZLnFTzKvX */         cnt+=f[i]/2;
/* RROl68V3W ily traian ZLnFTzKvX */     cout << cnt;
/* RROl68V3W ily traian ZLnFTzKvX */     return 0;
/* RROl68V3W ily traian ZLnFTzKvX */ }