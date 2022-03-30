/* 8EE0ljtC8 ily traian 6D7aBcpal */ #include <algorithm>
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
/* 8EE0ljtC8 ily traian 6D7aBcpal */ 
/* 8EE0ljtC8 ily traian 6D7aBcpal */ using namespace std;
/* 8EE0ljtC8 ily traian 6D7aBcpal */ int main()
/* 8EE0ljtC8 ily traian 6D7aBcpal */ {
/* 8EE0ljtC8 ily traian 6D7aBcpal */     int a , b , n , m;
/* 8EE0ljtC8 ily traian 6D7aBcpal */     cin >> a >> b >> n >> m;
/* 8EE0ljtC8 ily traian 6D7aBcpal */     for(int i = 1 ; i <= n ; ++i)
/* 8EE0ljtC8 ily traian 6D7aBcpal */     {
/* 8EE0ljtC8 ily traian 6D7aBcpal */         for(int j = 1 ; j <= m ; ++j)
/* 8EE0ljtC8 ily traian 6D7aBcpal */             cout << abs(a - i) + abs(b - j) + 1 << ' ';
/* 8EE0ljtC8 ily traian 6D7aBcpal */         cout << endl;
/* 8EE0ljtC8 ily traian 6D7aBcpal */     }
/* 8EE0ljtC8 ily traian 6D7aBcpal */     return 0;
/* 8EE0ljtC8 ily traian 6D7aBcpal */ }