/* DNmjVmOT0 ily traian 8gWUFiS6S */ #include <algorithm>
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
/* DNmjVmOT0 ily traian 8gWUFiS6S */ 
/* DNmjVmOT0 ily traian 8gWUFiS6S */ using namespace std;
/* DNmjVmOT0 ily traian 8gWUFiS6S */ 
/* DNmjVmOT0 ily traian 8gWUFiS6S */ int f[11];
/* DNmjVmOT0 ily traian 8gWUFiS6S */ 
/* DNmjVmOT0 ily traian 8gWUFiS6S */ int main()
/* DNmjVmOT0 ily traian 8gWUFiS6S */ {
/* DNmjVmOT0 ily traian 8gWUFiS6S */     int n;
/* DNmjVmOT0 ily traian 8gWUFiS6S */     cin >> n;
/* DNmjVmOT0 ily traian 8gWUFiS6S */     int rez[11], ind = 0;
/* DNmjVmOT0 ily traian 8gWUFiS6S */     int x;
/* DNmjVmOT0 ily traian 8gWUFiS6S */     for(int i = 1; i <= n; ++i){
/* DNmjVmOT0 ily traian 8gWUFiS6S */         cin >> x;
/* DNmjVmOT0 ily traian 8gWUFiS6S */         while(x){
/* DNmjVmOT0 ily traian 8gWUFiS6S */             f[x % 10] ++;
/* DNmjVmOT0 ily traian 8gWUFiS6S */             x/=10;
/* DNmjVmOT0 ily traian 8gWUFiS6S */         }
/* DNmjVmOT0 ily traian 8gWUFiS6S */     }
/* DNmjVmOT0 ily traian 8gWUFiS6S */     int max = 1;
/* DNmjVmOT0 ily traian 8gWUFiS6S */     while(max){
/* DNmjVmOT0 ily traian 8gWUFiS6S */         max = 0;
/* DNmjVmOT0 ily traian 8gWUFiS6S */         for(int j = 0; j <= 9; ++j)
/* DNmjVmOT0 ily traian 8gWUFiS6S */             if(f[j] > max)
/* DNmjVmOT0 ily traian 8gWUFiS6S */                 max = f[j];
/* DNmjVmOT0 ily traian 8gWUFiS6S */         for(int j = 9; j >= 0; --j)
/* DNmjVmOT0 ily traian 8gWUFiS6S */             if(f[j] == max && f[j] != 0)
/* DNmjVmOT0 ily traian 8gWUFiS6S */                 rez[++ind] = j, f[j] = 0;
/* DNmjVmOT0 ily traian 8gWUFiS6S */     }
/* DNmjVmOT0 ily traian 8gWUFiS6S */ 
/* DNmjVmOT0 ily traian 8gWUFiS6S */     for(int i = ind; i >= 1; --i)
/* DNmjVmOT0 ily traian 8gWUFiS6S */         cout << rez[i] << ' ';
/* DNmjVmOT0 ily traian 8gWUFiS6S */ }