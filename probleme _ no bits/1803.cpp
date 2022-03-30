/* cmxG4v2P9 ily traian CQLjZUcKz */ #include <algorithm>
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
/* cmxG4v2P9 ily traian CQLjZUcKz */ using namespace std;
/* cmxG4v2P9 ily traian CQLjZUcKz */ #define NN 11111111
/* cmxG4v2P9 ily traian CQLjZUcKz */ int v[NN + 1];
/* cmxG4v2P9 ily traian CQLjZUcKz */ int main()
/* cmxG4v2P9 ily traian CQLjZUcKz */ {
/* cmxG4v2P9 ily traian CQLjZUcKz */     int n;
/* cmxG4v2P9 ily traian CQLjZUcKz */     cin >> n;
/* cmxG4v2P9 ily traian CQLjZUcKz */     v[0] = v[1] = 1;
/* cmxG4v2P9 ily traian CQLjZUcKz */     for(int i = 2 ; i * i <= n ; i ++)
/* cmxG4v2P9 ily traian CQLjZUcKz */         if(v[i] == 0)
/* cmxG4v2P9 ily traian CQLjZUcKz */             for(int j = 2 ; i * j <= n ; j ++)
/* cmxG4v2P9 ily traian CQLjZUcKz */                 v[i * j] = 1;
/* cmxG4v2P9 ily traian CQLjZUcKz */     for(int i = 2 ; i <= n - 2 ; i ++)
/* cmxG4v2P9 ily traian CQLjZUcKz */         if(v[i] == 0 && v[n-i] == 0)
/* cmxG4v2P9 ily traian CQLjZUcKz */             cout << i << " " << n - i <<endl;
/* cmxG4v2P9 ily traian CQLjZUcKz */     return 0;
/* cmxG4v2P9 ily traian CQLjZUcKz */ }