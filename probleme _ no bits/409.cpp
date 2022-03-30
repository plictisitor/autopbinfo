/* jJM3yT1Bd ily traian 5Yya9JOtr */ #include <algorithm>
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
/* jJM3yT1Bd ily traian 5Yya9JOtr */ using namespace std;
/* jJM3yT1Bd ily traian 5Yya9JOtr */ 
/* jJM3yT1Bd ily traian 5Yya9JOtr */ int main()
/* jJM3yT1Bd ily traian 5Yya9JOtr */ {
/* jJM3yT1Bd ily traian 5Yya9JOtr */     int n, cnt = 0;
/* jJM3yT1Bd ily traian 5Yya9JOtr */     cin >> n;
/* jJM3yT1Bd ily traian 5Yya9JOtr */     for(int i = 1; i <= n; ++i){
/* jJM3yT1Bd ily traian 5Yya9JOtr */         int x;
/* jJM3yT1Bd ily traian 5Yya9JOtr */         cin >> x;
/* jJM3yT1Bd ily traian 5Yya9JOtr */         int cx = x, ogl = 0;
/* jJM3yT1Bd ily traian 5Yya9JOtr */         while(x){
/* jJM3yT1Bd ily traian 5Yya9JOtr */             ogl = ogl * 10 + x % 10;
/* jJM3yT1Bd ily traian 5Yya9JOtr */             x/=10;
/* jJM3yT1Bd ily traian 5Yya9JOtr */         }
/* jJM3yT1Bd ily traian 5Yya9JOtr */         int a = ogl, b = cx;
/* jJM3yT1Bd ily traian 5Yya9JOtr */         while(b){
/* jJM3yT1Bd ily traian 5Yya9JOtr */             int r = a % b;
/* jJM3yT1Bd ily traian 5Yya9JOtr */             a = b;
/* jJM3yT1Bd ily traian 5Yya9JOtr */             b = r;
/* jJM3yT1Bd ily traian 5Yya9JOtr */         }
/* jJM3yT1Bd ily traian 5Yya9JOtr */         if(a == 1)
/* jJM3yT1Bd ily traian 5Yya9JOtr */             cnt++;
/* jJM3yT1Bd ily traian 5Yya9JOtr */     }
/* jJM3yT1Bd ily traian 5Yya9JOtr */     cout << cnt;
/* jJM3yT1Bd ily traian 5Yya9JOtr */     return 0;
/* jJM3yT1Bd ily traian 5Yya9JOtr */ }