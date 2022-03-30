/* hnXhxCf27 ily traian mFd2BkWYb */ #include <algorithm>
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
/* hnXhxCf27 ily traian mFd2BkWYb */ using namespace std;
/* hnXhxCf27 ily traian mFd2BkWYb */ 
/* hnXhxCf27 ily traian mFd2BkWYb */ int main()
/* hnXhxCf27 ily traian mFd2BkWYb */ {
/* hnXhxCf27 ily traian mFd2BkWYb */     int n , m;
/* hnXhxCf27 ily traian mFd2BkWYb */     long long int sum = 0;
/* hnXhxCf27 ily traian mFd2BkWYb */     cin >> n >> m;
/* hnXhxCf27 ily traian mFd2BkWYb */     int x;
/* hnXhxCf27 ily traian mFd2BkWYb */     for(int i = 1 ; i <= n ; ++i)
/* hnXhxCf27 ily traian mFd2BkWYb */         for(int j = 1 ; j <= m; ++j)
/* hnXhxCf27 ily traian mFd2BkWYb */         {
/* hnXhxCf27 ily traian mFd2BkWYb */             cin >> x;
/* hnXhxCf27 ily traian mFd2BkWYb */             if(x % 2 == 0)
/* hnXhxCf27 ily traian mFd2BkWYb */                 sum+=x;
/* hnXhxCf27 ily traian mFd2BkWYb */         }
/* hnXhxCf27 ily traian mFd2BkWYb */     cout <<sum;
/* hnXhxCf27 ily traian mFd2BkWYb */     return 0;   
/* hnXhxCf27 ily traian mFd2BkWYb */ }