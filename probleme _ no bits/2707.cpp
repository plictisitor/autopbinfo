/* R1cRXSt4l ily traian psvhItRoM */ #include <algorithm>
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
/* R1cRXSt4l ily traian psvhItRoM */ using namespace std;
/* R1cRXSt4l ily traian psvhItRoM */ int a[102][102] , n;
/* R1cRXSt4l ily traian psvhItRoM */ int main()
/* R1cRXSt4l ily traian psvhItRoM */ {
/* R1cRXSt4l ily traian psvhItRoM */     int ok = 1;
/* R1cRXSt4l ily traian psvhItRoM */     cin >> n;
/* R1cRXSt4l ily traian psvhItRoM */     for(int i = 1; i <= n; i++)
/* R1cRXSt4l ily traian psvhItRoM */         for(int j = 1; j <= n; j++)
/* R1cRXSt4l ily traian psvhItRoM */         {
/* R1cRXSt4l ily traian psvhItRoM */             cin >> a[i][j];
/* R1cRXSt4l ily traian psvhItRoM */             if(i == j && a[i][j] != 0) ok = 0;
/* R1cRXSt4l ily traian psvhItRoM */         }
/* R1cRXSt4l ily traian psvhItRoM */     for(int i = 1; i < n; i++)
/* R1cRXSt4l ily traian psvhItRoM */         for(int j = i + 1; j <= n; j++)
/* R1cRXSt4l ily traian psvhItRoM */         {
/* R1cRXSt4l ily traian psvhItRoM */             if(a[i][j] < 0 || a[i][j] > 1) ok = 0;
/* R1cRXSt4l ily traian psvhItRoM */             if(a[i][j] != a[j][i]) ok = 0;
/* R1cRXSt4l ily traian psvhItRoM */         }
/* R1cRXSt4l ily traian psvhItRoM */     cout << ok;
/* R1cRXSt4l ily traian psvhItRoM */     return 0;
/* R1cRXSt4l ily traian psvhItRoM */ }