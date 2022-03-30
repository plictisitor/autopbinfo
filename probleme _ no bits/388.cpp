/* CmU6fQS15 ily traian Dpc7Ir0bt */ #include <algorithm>
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
/* CmU6fQS15 ily traian Dpc7Ir0bt */ 
/* CmU6fQS15 ily traian Dpc7Ir0bt */ using namespace std;
/* CmU6fQS15 ily traian Dpc7Ir0bt */ 
/* CmU6fQS15 ily traian Dpc7Ir0bt */ int main()
/* CmU6fQS15 ily traian Dpc7Ir0bt */ {
/* CmU6fQS15 ily traian Dpc7Ir0bt */     int n;
/* CmU6fQS15 ily traian Dpc7Ir0bt */     cin >> n;
/* CmU6fQS15 ily traian Dpc7Ir0bt */     int cnt=0;
/* CmU6fQS15 ily traian Dpc7Ir0bt */     for (int d = 1; d * d <= n; ++d)
/* CmU6fQS15 ily traian Dpc7Ir0bt */         if (n % d == 0)  
/* CmU6fQS15 ily traian Dpc7Ir0bt */         {
/* CmU6fQS15 ily traian Dpc7Ir0bt */             if (d % 2 == 0)
/* CmU6fQS15 ily traian Dpc7Ir0bt */                 cnt++;
/* CmU6fQS15 ily traian Dpc7Ir0bt */             if (d * d != n && ((n / d) % 2 == 0))
/* CmU6fQS15 ily traian Dpc7Ir0bt */                 cnt++;
/* CmU6fQS15 ily traian Dpc7Ir0bt */         }
/* CmU6fQS15 ily traian Dpc7Ir0bt */     cout << cnt;
/* CmU6fQS15 ily traian Dpc7Ir0bt */     return 0;
/* CmU6fQS15 ily traian Dpc7Ir0bt */ }