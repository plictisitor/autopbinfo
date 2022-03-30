/* rTLma1glT ily traian 2sz5U14Cr */ #include <algorithm>
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
/* rTLma1glT ily traian 2sz5U14Cr */ using namespace std;
/* rTLma1glT ily traian 2sz5U14Cr */ int n, a[101][101], v[101][101];
/* rTLma1glT ily traian 2sz5U14Cr */ int main()
/* rTLma1glT ily traian 2sz5U14Cr */ {
/* rTLma1glT ily traian 2sz5U14Cr */     cin >> n;
/* rTLma1glT ily traian 2sz5U14Cr */     for(int i = 1 ; i <= n ; ++i)
/* rTLma1glT ily traian 2sz5U14Cr */         for(int j = 1 ; j <= n ; ++j)
/* rTLma1glT ily traian 2sz5U14Cr */             cin >> a[i][j];
/* rTLma1glT ily traian 2sz5U14Cr */     for(int i = 1 ; i <= n ; ++i)
/* rTLma1glT ily traian 2sz5U14Cr */         for(int j = 1 ; j <= n ; ++j)
/* rTLma1glT ily traian 2sz5U14Cr */             v[i][j] = a[j][i];
/* rTLma1glT ily traian 2sz5U14Cr */     for(int i = 1 ; i <= n ; ++i)
/* rTLma1glT ily traian 2sz5U14Cr */     {
/* rTLma1glT ily traian 2sz5U14Cr */         for(int j = 1 ; j <= n ; ++j)
/* rTLma1glT ily traian 2sz5U14Cr */             cout << v[i][j] << " ";
/* rTLma1glT ily traian 2sz5U14Cr */         cout << endl;
/* rTLma1glT ily traian 2sz5U14Cr */     }
/* rTLma1glT ily traian 2sz5U14Cr */     return 0;
/* rTLma1glT ily traian 2sz5U14Cr */ }