/* hVgJNp0Yc ily traian UB87aogqc */ #include <algorithm>
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
/* hVgJNp0Yc ily traian UB87aogqc */ 
/* hVgJNp0Yc ily traian UB87aogqc */ using namespace std;
/* hVgJNp0Yc ily traian UB87aogqc */ 
/* hVgJNp0Yc ily traian UB87aogqc */ int main ()
/* hVgJNp0Yc ily traian UB87aogqc */ {
/* hVgJNp0Yc ily traian UB87aogqc */     int n;
/* hVgJNp0Yc ily traian UB87aogqc */     cin >> n;
/* hVgJNp0Yc ily traian UB87aogqc */     int a[100001],s=0;
/* hVgJNp0Yc ily traian UB87aogqc */     for (int i = 0 ; i < n; ++i)
/* hVgJNp0Yc ily traian UB87aogqc */     {
/* hVgJNp0Yc ily traian UB87aogqc */         cin >> a[i];
/* hVgJNp0Yc ily traian UB87aogqc */         s+=a[i];
/* hVgJNp0Yc ily traian UB87aogqc */     }
/* hVgJNp0Yc ily traian UB87aogqc */     sort (a,a+n);
/* hVgJNp0Yc ily traian UB87aogqc */     for (int i = 0; i < n ; ++i )
/* hVgJNp0Yc ily traian UB87aogqc */     cout << a[i] << ' ';
/* hVgJNp0Yc ily traian UB87aogqc */ }