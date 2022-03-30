/* HA486cFtZ ily traian 6dTPPwdBa */ #include <algorithm>
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
/* HA486cFtZ ily traian 6dTPPwdBa */ using namespace std;
/* HA486cFtZ ily traian 6dTPPwdBa */ 
/* HA486cFtZ ily traian 6dTPPwdBa */ int main()
/* HA486cFtZ ily traian 6dTPPwdBa */ {
/* HA486cFtZ ily traian 6dTPPwdBa */     int n;
/* HA486cFtZ ily traian 6dTPPwdBa */     cin >> n;
/* HA486cFtZ ily traian 6dTPPwdBa */     int a[51];
/* HA486cFtZ ily traian 6dTPPwdBa */     for(int i = 1; i <= n; ++i)
/* HA486cFtZ ily traian 6dTPPwdBa */         cin >> a[i];
/* HA486cFtZ ily traian 6dTPPwdBa */ 
/* HA486cFtZ ily traian 6dTPPwdBa */     for(int i = 1; i <= n; ++i){
/* HA486cFtZ ily traian 6dTPPwdBa */         int ca = a[i];
/* HA486cFtZ ily traian 6dTPPwdBa */         if(ca % 2 == 0){
/* HA486cFtZ ily traian 6dTPPwdBa */             n++;
/* HA486cFtZ ily traian 6dTPPwdBa */             for(int j = n; j > i+1; j--)
/* HA486cFtZ ily traian 6dTPPwdBa */                 a[j] = a[j-1];
/* HA486cFtZ ily traian 6dTPPwdBa */             a[i+1] = 2 * ca;
/* HA486cFtZ ily traian 6dTPPwdBa */             i++;
/* HA486cFtZ ily traian 6dTPPwdBa */         }
/* HA486cFtZ ily traian 6dTPPwdBa */     }
/* HA486cFtZ ily traian 6dTPPwdBa */ 
/* HA486cFtZ ily traian 6dTPPwdBa */     for(int i = 1; i <= n; ++i)
/* HA486cFtZ ily traian 6dTPPwdBa */         cout << a[i] << " ";
/* HA486cFtZ ily traian 6dTPPwdBa */ 
/* HA486cFtZ ily traian 6dTPPwdBa */     return 0;
/* HA486cFtZ ily traian 6dTPPwdBa */ }