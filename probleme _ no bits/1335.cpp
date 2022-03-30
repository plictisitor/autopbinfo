/* TiKKXV3h8 ily traian TKRurtjXW */ #include <algorithm>
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
/* TiKKXV3h8 ily traian TKRurtjXW */ using namespace std;
/* TiKKXV3h8 ily traian TKRurtjXW */ 
/* TiKKXV3h8 ily traian TKRurtjXW */ int main()
/* TiKKXV3h8 ily traian TKRurtjXW */ {
/* TiKKXV3h8 ily traian TKRurtjXW */     char a[260];
/* TiKKXV3h8 ily traian TKRurtjXW */     char b[260];
/* TiKKXV3h8 ily traian TKRurtjXW */     int i = 0;
/* TiKKXV3h8 ily traian TKRurtjXW */     cin >> a;
/* TiKKXV3h8 ily traian TKRurtjXW */     cin >> b;
/* TiKKXV3h8 ily traian TKRurtjXW */     while(a[i]!='\0')
/* TiKKXV3h8 ily traian TKRurtjXW */     {
/* TiKKXV3h8 ily traian TKRurtjXW */         int j = 0;
/* TiKKXV3h8 ily traian TKRurtjXW */         while(b[j]!='\0')
/* TiKKXV3h8 ily traian TKRurtjXW */         {
/* TiKKXV3h8 ily traian TKRurtjXW */             if(b[j]==a[i])
/* TiKKXV3h8 ily traian TKRurtjXW */             {
/* TiKKXV3h8 ily traian TKRurtjXW */                 cout << a[i];
/* TiKKXV3h8 ily traian TKRurtjXW */                 break;
/* TiKKXV3h8 ily traian TKRurtjXW */             }
/* TiKKXV3h8 ily traian TKRurtjXW */             j++;
/* TiKKXV3h8 ily traian TKRurtjXW */         }
/* TiKKXV3h8 ily traian TKRurtjXW */         i++;
/* TiKKXV3h8 ily traian TKRurtjXW */     }
/* TiKKXV3h8 ily traian TKRurtjXW */     return 0;
/* TiKKXV3h8 ily traian TKRurtjXW */ }