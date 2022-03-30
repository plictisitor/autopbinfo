/* ruVMDu3Z5 ily traian jUL6of7eP */ #include <algorithm>
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
/* ruVMDu3Z5 ily traian jUL6of7eP */ 
/* ruVMDu3Z5 ily traian jUL6of7eP */ using namespace std;
/* ruVMDu3Z5 ily traian jUL6of7eP */ 
/* ruVMDu3Z5 ily traian jUL6of7eP */ int main()
/* ruVMDu3Z5 ily traian jUL6of7eP */ {
/* ruVMDu3Z5 ily traian jUL6of7eP */     int n;
/* ruVMDu3Z5 ily traian jUL6of7eP */     cin >> n;
/* ruVMDu3Z5 ily traian jUL6of7eP */     int a[1001];
/* ruVMDu3Z5 ily traian jUL6of7eP */     for(int i = 1; i <= n; ++i)
/* ruVMDu3Z5 ily traian jUL6of7eP */         cin >> a[i];
/* ruVMDu3Z5 ily traian jUL6of7eP */ 
/* ruVMDu3Z5 ily traian jUL6of7eP */     for(int i = 1; i <= n; ++i){
/* ruVMDu3Z5 ily traian jUL6of7eP */         int r = sqrt(a[i]);
/* ruVMDu3Z5 ily traian jUL6of7eP */         if(r * r == a[i]){
/* ruVMDu3Z5 ily traian jUL6of7eP */             int min = 10000000, poz = 0;
/* ruVMDu3Z5 ily traian jUL6of7eP */             for(int j = i; j <= n; ++j){
/* ruVMDu3Z5 ily traian jUL6of7eP */                 int r1 = sqrt(a[j]);
/* ruVMDu3Z5 ily traian jUL6of7eP */                 if(r1 * r1 == a[j] && a[j] < min)
/* ruVMDu3Z5 ily traian jUL6of7eP */                     min = a[j], poz = j;
/* ruVMDu3Z5 ily traian jUL6of7eP */             }
/* ruVMDu3Z5 ily traian jUL6of7eP */             swap(a[i], a[poz]);
/* ruVMDu3Z5 ily traian jUL6of7eP */         }
/* ruVMDu3Z5 ily traian jUL6of7eP */     }
/* ruVMDu3Z5 ily traian jUL6of7eP */ 
/* ruVMDu3Z5 ily traian jUL6of7eP */     for(int i = 1; i <= n; ++i)
/* ruVMDu3Z5 ily traian jUL6of7eP */         cout << a[i] << " ";
/* ruVMDu3Z5 ily traian jUL6of7eP */ 
/* ruVMDu3Z5 ily traian jUL6of7eP */     return 0;
/* ruVMDu3Z5 ily traian jUL6of7eP */ }