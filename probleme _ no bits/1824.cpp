/* 0itHegyW6 ily traian QRMC8YpW6 */ #include <algorithm>
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
/* 0itHegyW6 ily traian QRMC8YpW6 */ using namespace std;
/* 0itHegyW6 ily traian QRMC8YpW6 */ 
/* 0itHegyW6 ily traian QRMC8YpW6 */ ifstream cin("pitic.in");
/* 0itHegyW6 ily traian QRMC8YpW6 */ ofstream cout("pitic.out");
/* 0itHegyW6 ily traian QRMC8YpW6 */ 
/* 0itHegyW6 ily traian QRMC8YpW6 */ long long n , m , a[45][45];
/* 0itHegyW6 ily traian QRMC8YpW6 */ 
/* 0itHegyW6 ily traian QRMC8YpW6 */ int main()
/* 0itHegyW6 ily traian QRMC8YpW6 */ {
/* 0itHegyW6 ily traian QRMC8YpW6 */     cin >> n >> m;
/* 0itHegyW6 ily traian QRMC8YpW6 */     a[1][1] = 1;
/* 0itHegyW6 ily traian QRMC8YpW6 */     for(int j = 1 ; j <= m ; j++)
/* 0itHegyW6 ily traian QRMC8YpW6 */         for(int i = 1 ; i <= n ; i++)
/* 0itHegyW6 ily traian QRMC8YpW6 */             a[i][j] += a[i + 1][j - 1] + a[i][j - 1] + a[i - 1][j - 1];
/* 0itHegyW6 ily traian QRMC8YpW6 */ 
/* 0itHegyW6 ily traian QRMC8YpW6 */     cout << a[1][m];
/* 0itHegyW6 ily traian QRMC8YpW6 */ }