/* ZAakrgyGn ily traian 8U8GalxEa */ #include <algorithm>
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
/* ZAakrgyGn ily traian 8U8GalxEa */ using namespace std;
/* ZAakrgyGn ily traian 8U8GalxEa */ 
/* ZAakrgyGn ily traian 8U8GalxEa */ ifstream cin("fibo0.in");
/* ZAakrgyGn ily traian 8U8GalxEa */ ofstream cout("fibo0.out");
/* ZAakrgyGn ily traian 8U8GalxEa */ 
/* ZAakrgyGn ily traian 8U8GalxEa */ int main()
/* ZAakrgyGn ily traian 8U8GalxEa */ {
/* ZAakrgyGn ily traian 8U8GalxEa */     int x, y, cnt = 0;
/* ZAakrgyGn ily traian 8U8GalxEa */     while(cin >> x >> y)
/* ZAakrgyGn ily traian 8U8GalxEa */         if(y % x == 0)
/* ZAakrgyGn ily traian 8U8GalxEa */             cnt++;
/* ZAakrgyGn ily traian 8U8GalxEa */     cout << cnt;
/* ZAakrgyGn ily traian 8U8GalxEa */     return 0;   
/* ZAakrgyGn ily traian 8U8GalxEa */ }