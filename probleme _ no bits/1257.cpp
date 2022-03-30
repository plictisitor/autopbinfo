/* EceEUJTRo ily traian U6ENDkCER */ #include <algorithm>
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
/* EceEUJTRo ily traian U6ENDkCER */ using namespace std;
/* EceEUJTRo ily traian U6ENDkCER */ #define MOD 666013
/* EceEUJTRo ily traian U6ENDkCER */ unsigned long long a[1001] , n;
/* EceEUJTRo ily traian U6ENDkCER */ 
/* EceEUJTRo ily traian U6ENDkCER */ int main()
/* EceEUJTRo ily traian U6ENDkCER */ {
/* EceEUJTRo ily traian U6ENDkCER */     cin >> n;
/* EceEUJTRo ily traian U6ENDkCER */     a[0] = 1;
/* EceEUJTRo ily traian U6ENDkCER */     a[1] = 1;
/* EceEUJTRo ily traian U6ENDkCER */     for(int i = 2; i <= n ; ++i)
/* EceEUJTRo ily traian U6ENDkCER */         for(int j = 0; j < i ; ++j)
/* EceEUJTRo ily traian U6ENDkCER */             a[i] = (a[i] + (a[j] * a[i - j - 1])) % MOD;
/* EceEUJTRo ily traian U6ENDkCER */     cout << a[n] % MOD;
/* EceEUJTRo ily traian U6ENDkCER */     return 0;
/* EceEUJTRo ily traian U6ENDkCER */ }