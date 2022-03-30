/* qf68s52Tw ily traian jb9amCSKC */ #include <algorithm>
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
/* qf68s52Tw ily traian jb9amCSKC */ using namespace std;
/* qf68s52Tw ily traian jb9amCSKC */ 
/* qf68s52Tw ily traian jb9amCSKC */ int main()
/* qf68s52Tw ily traian jb9amCSKC */ {
/* qf68s52Tw ily traian jb9amCSKC */     int a, b;
/* qf68s52Tw ily traian jb9amCSKC */     cin >> a >> b;
/* qf68s52Tw ily traian jb9amCSKC */     int ca = a, cb = b;
/* qf68s52Tw ily traian jb9amCSKC */ 
/* qf68s52Tw ily traian jb9amCSKC */     while(b){
/* qf68s52Tw ily traian jb9amCSKC */         int r = a % b;
/* qf68s52Tw ily traian jb9amCSKC */         a = b;
/* qf68s52Tw ily traian jb9amCSKC */         b = r;
/* qf68s52Tw ily traian jb9amCSKC */     }
/* qf68s52Tw ily traian jb9amCSKC */     cout << ca / a * cb;
/* qf68s52Tw ily traian jb9amCSKC */ 
/* qf68s52Tw ily traian jb9amCSKC */     return 0;
/* qf68s52Tw ily traian jb9amCSKC */ }