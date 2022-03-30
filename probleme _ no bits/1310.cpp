/* dZTy9dU8m ily traian En6OJXxcs */ #include <algorithm>
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
/* dZTy9dU8m ily traian En6OJXxcs */ using namespace std;
/* dZTy9dU8m ily traian En6OJXxcs */ 
/* dZTy9dU8m ily traian En6OJXxcs */ int main ()
/* dZTy9dU8m ily traian En6OJXxcs */ {
/* dZTy9dU8m ily traian En6OJXxcs */     int n,m;
/* dZTy9dU8m ily traian En6OJXxcs */     cin >> n >> m;
/* dZTy9dU8m ily traian En6OJXxcs */     int cnt = 0;
/* dZTy9dU8m ily traian En6OJXxcs */     if (n==0)
/* dZTy9dU8m ily traian En6OJXxcs */     cnt=1;
/* dZTy9dU8m ily traian En6OJXxcs */     while (n)
/* dZTy9dU8m ily traian En6OJXxcs */     {
/* dZTy9dU8m ily traian En6OJXxcs */         while (n%10==0)
/* dZTy9dU8m ily traian En6OJXxcs */         n/=10;
/* dZTy9dU8m ily traian En6OJXxcs */         if (m % (n%10) == 0)
/* dZTy9dU8m ily traian En6OJXxcs */             cnt++;
/* dZTy9dU8m ily traian En6OJXxcs */         n/=10;
/* dZTy9dU8m ily traian En6OJXxcs */     }
/* dZTy9dU8m ily traian En6OJXxcs */     cout << cnt;
/* dZTy9dU8m ily traian En6OJXxcs */     return 0;
/* dZTy9dU8m ily traian En6OJXxcs */ }