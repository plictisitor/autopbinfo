/* cS16LGnH0 ily traian v8u7AilqA */ #include <algorithm>
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
/* cS16LGnH0 ily traian v8u7AilqA */ using namespace std;
/* cS16LGnH0 ily traian v8u7AilqA */ 
/* cS16LGnH0 ily traian v8u7AilqA */ ifstream cin("cifmaxmin.in");
/* cS16LGnH0 ily traian v8u7AilqA */ ofstream cout("cifmaxmin.out");
/* cS16LGnH0 ily traian v8u7AilqA */ 
/* cS16LGnH0 ily traian v8u7AilqA */ int maxi = 1, mini = 100;
/* cS16LGnH0 ily traian v8u7AilqA */ 
/* cS16LGnH0 ily traian v8u7AilqA */ int main(){
/* cS16LGnH0 ily traian v8u7AilqA */     int n;
/* cS16LGnH0 ily traian v8u7AilqA */     cin >> n;
/* cS16LGnH0 ily traian v8u7AilqA */     int c1=0, c2=0;
/* cS16LGnH0 ily traian v8u7AilqA */     for(int i = 1; i <= n; ++i){
/* cS16LGnH0 ily traian v8u7AilqA */         int x;
/* cS16LGnH0 ily traian v8u7AilqA */         cin >> x;
/* cS16LGnH0 ily traian v8u7AilqA */         if(x % 2 == 0){
/* cS16LGnH0 ily traian v8u7AilqA */             c1++;
/* cS16LGnH0 ily traian v8u7AilqA */             int cmin = 10, cmax = 0;
/* cS16LGnH0 ily traian v8u7AilqA */             while(x){
/* cS16LGnH0 ily traian v8u7AilqA */                 if(x % 10 > cmax)
/* cS16LGnH0 ily traian v8u7AilqA */                     cmax = x % 10;
/* cS16LGnH0 ily traian v8u7AilqA */                 if(x % 10 < cmin)
/* cS16LGnH0 ily traian v8u7AilqA */                     cmin = x % 10;
/* cS16LGnH0 ily traian v8u7AilqA */                 x/=10;
/* cS16LGnH0 ily traian v8u7AilqA */             }
/* cS16LGnH0 ily traian v8u7AilqA */             int nr = cmax * 10 + cmin;
/* cS16LGnH0 ily traian v8u7AilqA */             if(nr > maxi)
/* cS16LGnH0 ily traian v8u7AilqA */                 maxi = nr;
/* cS16LGnH0 ily traian v8u7AilqA */         }
/* cS16LGnH0 ily traian v8u7AilqA */         else{
/* cS16LGnH0 ily traian v8u7AilqA */             c2++;
/* cS16LGnH0 ily traian v8u7AilqA */             int cmin = 10, cmax = 0;
/* cS16LGnH0 ily traian v8u7AilqA */             while(x){
/* cS16LGnH0 ily traian v8u7AilqA */                 if(x % 10 > cmax)
/* cS16LGnH0 ily traian v8u7AilqA */                     cmax = x % 10;
/* cS16LGnH0 ily traian v8u7AilqA */                 if(x % 10 < cmin)
/* cS16LGnH0 ily traian v8u7AilqA */                     cmin = x % 10;
/* cS16LGnH0 ily traian v8u7AilqA */                 x/=10;
/* cS16LGnH0 ily traian v8u7AilqA */             }
/* cS16LGnH0 ily traian v8u7AilqA */             int nr = cmin * 10 + cmax;
/* cS16LGnH0 ily traian v8u7AilqA */             if(nr < mini)
/* cS16LGnH0 ily traian v8u7AilqA */                 mini = nr;
/* cS16LGnH0 ily traian v8u7AilqA */         }
/* cS16LGnH0 ily traian v8u7AilqA */     }
/* cS16LGnH0 ily traian v8u7AilqA */     cout << maxi << ' ' << c1 << ' ' << mini << ' ' << c2;
/* cS16LGnH0 ily traian v8u7AilqA */ }