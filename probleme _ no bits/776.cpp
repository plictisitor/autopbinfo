/* XBTs68U8G ily traian bbn8W0Wuw */ #include <algorithm>
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
/* XBTs68U8G ily traian bbn8W0Wuw */ using namespace std;
/* XBTs68U8G ily traian bbn8W0Wuw */ int main()
/* XBTs68U8G ily traian bbn8W0Wuw */ {
/* XBTs68U8G ily traian bbn8W0Wuw */     int n , m , a[101][101] , cnt = 0 , cate=0;
/* XBTs68U8G ily traian bbn8W0Wuw */     cin >> n >> m;
/* XBTs68U8G ily traian bbn8W0Wuw */     for(int i = 0 ; i < n ; ++i)
/* XBTs68U8G ily traian bbn8W0Wuw */         for(int j= 0; j < m; ++j)  cin >> a[i][j];
/* XBTs68U8G ily traian bbn8W0Wuw */     for(int i = 0 ; i < n ; ++i)
/* XBTs68U8G ily traian bbn8W0Wuw */     {
/* XBTs68U8G ily traian bbn8W0Wuw */         cnt = 0;
/* XBTs68U8G ily traian bbn8W0Wuw */         for(int j= 1; j < m; ++j)
/* XBTs68U8G ily traian bbn8W0Wuw */         {
/* XBTs68U8G ily traian bbn8W0Wuw */             if(a[i][j]==a[i][0]) cnt++;
/* XBTs68U8G ily traian bbn8W0Wuw */         }
/* XBTs68U8G ily traian bbn8W0Wuw */         if(cnt == m - 1) cate++;
/* XBTs68U8G ily traian bbn8W0Wuw */     }
/* XBTs68U8G ily traian bbn8W0Wuw */     cout << cate;
/* XBTs68U8G ily traian bbn8W0Wuw */     return 0;
/* XBTs68U8G ily traian bbn8W0Wuw */ }