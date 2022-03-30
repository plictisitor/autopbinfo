/* PLyIixi7I ily traian QNetAckjj */ #include <algorithm>
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
/* PLyIixi7I ily traian QNetAckjj */ using namespace std;
/* PLyIixi7I ily traian QNetAckjj */ 
/* PLyIixi7I ily traian QNetAckjj */ int main()
/* PLyIixi7I ily traian QNetAckjj */ {
/* PLyIixi7I ily traian QNetAckjj */     int n , r;
/* PLyIixi7I ily traian QNetAckjj */     cin >> n;
/* PLyIixi7I ily traian QNetAckjj */     r = n % 3 , n /= 3;
/* PLyIixi7I ily traian QNetAckjj */     if(r == 0)cout << n << ' ' << n << ' ' << n;
/* PLyIixi7I ily traian QNetAckjj */     if(r == 1)cout << n << ' ' << n << ' ' << n + 1;
/* PLyIixi7I ily traian QNetAckjj */     if(r == 2)cout << n << ' ' << n + 1 << ' ' << n + 1;
/* PLyIixi7I ily traian QNetAckjj */ }