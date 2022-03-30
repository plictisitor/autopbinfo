/* q46S0IlMq ily traian qyzdIQwrz */ #include <algorithm>
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
/* q46S0IlMq ily traian qyzdIQwrz */ using namespace std;
/* q46S0IlMq ily traian qyzdIQwrz */ 
/* q46S0IlMq ily traian qyzdIQwrz */ int main()
/* q46S0IlMq ily traian qyzdIQwrz */ {
/* q46S0IlMq ily traian qyzdIQwrz */ 
/* q46S0IlMq ily traian qyzdIQwrz */     int n , m , a[101][101];
/* q46S0IlMq ily traian qyzdIQwrz */     cin >> n >> m;
/* q46S0IlMq ily traian qyzdIQwrz */     for(int i = 1 ; i <= n ; i++)
/* q46S0IlMq ily traian qyzdIQwrz */         for(int j = 1 ; j <= m ; j++)
/* q46S0IlMq ily traian qyzdIQwrz */             cin >> a[i][j];
/* q46S0IlMq ily traian qyzdIQwrz */         
/* q46S0IlMq ily traian qyzdIQwrz */     int ok = 0 , mijl = m / 2 + 1;
/* q46S0IlMq ily traian qyzdIQwrz */     
/* q46S0IlMq ily traian qyzdIQwrz */     for(int i = 1 ; i <= n; i++)
/* q46S0IlMq ily traian qyzdIQwrz */         for(int j = 1 ; j <= m ; j++)
/* q46S0IlMq ily traian qyzdIQwrz */             if(a[i][mijl + j] != a[i][mijl - j]) ok = 1;
/* q46S0IlMq ily traian qyzdIQwrz */ 
/* q46S0IlMq ily traian qyzdIQwrz */     if(ok == 0) cout << "DA";
/* q46S0IlMq ily traian qyzdIQwrz */     else cout << "NU";
/* q46S0IlMq ily traian qyzdIQwrz */     return 0;
/* q46S0IlMq ily traian qyzdIQwrz */ }