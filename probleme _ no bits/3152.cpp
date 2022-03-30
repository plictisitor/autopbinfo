/* 8KgeJIzNv ily traian ZgN8q5ZMi */ #include <algorithm>
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
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ using namespace std;
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ 
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ int n , m , x[30] , p[30];
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ 
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ int afisare()
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ {
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     for(int i = 1 ; i <= m ; i++)
/* 8KgeJIzNv ily traian ZgN8q5ZMi */         cout << x[i] << " ";
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     cout << '\n';
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ }
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ 
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ int valid(int k)
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ {
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     if(x[k] % 2 == 0 && x[k - 1] % 2 == 0) return 0;
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     else return 1;
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ }
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ 
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ void back(int k)
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ {
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     for(int i = x[k - 1] + 1 ; i <= n ; i++)
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     {
/* 8KgeJIzNv ily traian ZgN8q5ZMi */         x[k] = i;
/* 8KgeJIzNv ily traian ZgN8q5ZMi */         if(k == 1 || valid(k))
/* 8KgeJIzNv ily traian ZgN8q5ZMi */         {
/* 8KgeJIzNv ily traian ZgN8q5ZMi */             if(k == m) afisare();
/* 8KgeJIzNv ily traian ZgN8q5ZMi */             else back(k + 1);
/* 8KgeJIzNv ily traian ZgN8q5ZMi */         }
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     }
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ }
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ 
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ int main()
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ {
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     cin >> n >> m;
/* 8KgeJIzNv ily traian ZgN8q5ZMi */     back(1);
/* 8KgeJIzNv ily traian ZgN8q5ZMi */ }