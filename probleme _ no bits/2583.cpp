/* oklsLo941 ily traian CcHKKxkYw */ #include <algorithm>
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
/* oklsLo941 ily traian CcHKKxkYw */ using namespace std;
/* oklsLo941 ily traian CcHKKxkYw */ int main()
/* oklsLo941 ily traian CcHKKxkYw */ {
/* oklsLo941 ily traian CcHKKxkYw */     long long n , cnt = 0 , x = 1;
/* oklsLo941 ily traian CcHKKxkYw */     cin >> n;
/* oklsLo941 ily traian CcHKKxkYw */     while(n % 2 == 0)
/* oklsLo941 ily traian CcHKKxkYw */     {
/* oklsLo941 ily traian CcHKKxkYw */         cnt++;
/* oklsLo941 ily traian CcHKKxkYw */         n >>= 1;
/* oklsLo941 ily traian CcHKKxkYw */     }
/* oklsLo941 ily traian CcHKKxkYw */     n <<= cnt;
/* oklsLo941 ily traian CcHKKxkYw */     cout << (n & ~(x <<= cnt));
/* oklsLo941 ily traian CcHKKxkYw */ }