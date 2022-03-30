/* myvewOBtD ily traian HhdKJ0jzK */ #include <algorithm>
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
/* myvewOBtD ily traian HhdKJ0jzK */ using namespace std;
/* myvewOBtD ily traian HhdKJ0jzK */ 
/* myvewOBtD ily traian HhdKJ0jzK */ int main()
/* myvewOBtD ily traian HhdKJ0jzK */ {
/* myvewOBtD ily traian HhdKJ0jzK */     int n;
/* myvewOBtD ily traian HhdKJ0jzK */     cin >> n;
/* myvewOBtD ily traian HhdKJ0jzK */     unsigned long long suma = 0;
/* myvewOBtD ily traian HhdKJ0jzK */     for(int i = 1; i <= n; ++i){
/* myvewOBtD ily traian HhdKJ0jzK */         int x;
/* myvewOBtD ily traian HhdKJ0jzK */         cin >> x;
/* myvewOBtD ily traian HhdKJ0jzK */         int ogl = 0;
/* myvewOBtD ily traian HhdKJ0jzK */         while(x){
/* myvewOBtD ily traian HhdKJ0jzK */             ogl = ogl * 10 + x % 10;
/* myvewOBtD ily traian HhdKJ0jzK */             x/=10;
/* myvewOBtD ily traian HhdKJ0jzK */         }
/* myvewOBtD ily traian HhdKJ0jzK */         for(int d = 1; d * d <= ogl; ++d){
/* myvewOBtD ily traian HhdKJ0jzK */             if(ogl % d == 0)
/* myvewOBtD ily traian HhdKJ0jzK */                 suma += d, suma += ogl/d;
/* myvewOBtD ily traian HhdKJ0jzK */             if(d * d == ogl)
/* myvewOBtD ily traian HhdKJ0jzK */                 suma -= d;
/* myvewOBtD ily traian HhdKJ0jzK */         }
/* myvewOBtD ily traian HhdKJ0jzK */     }
/* myvewOBtD ily traian HhdKJ0jzK */     cout << suma;
/* myvewOBtD ily traian HhdKJ0jzK */     return 0;
/* myvewOBtD ily traian HhdKJ0jzK */ }