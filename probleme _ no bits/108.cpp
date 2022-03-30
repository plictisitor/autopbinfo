/* Yk988sK7B ily traian q21wrtPQR */ #include <algorithm>
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
/* Yk988sK7B ily traian q21wrtPQR */ using namespace std;
/* Yk988sK7B ily traian q21wrtPQR */ 
/* Yk988sK7B ily traian q21wrtPQR */ int main()
/* Yk988sK7B ily traian q21wrtPQR */ {
/* Yk988sK7B ily traian q21wrtPQR */     int n;
/* Yk988sK7B ily traian q21wrtPQR */     cin >> n;
/* Yk988sK7B ily traian q21wrtPQR */     int prima_cifra, cn, cnt = 0;
/* Yk988sK7B ily traian q21wrtPQR */     if(n == 0)
/* Yk988sK7B ily traian q21wrtPQR */         cout << 1;
/* Yk988sK7B ily traian q21wrtPQR */     else{
/* Yk988sK7B ily traian q21wrtPQR */         cn = n;
/* Yk988sK7B ily traian q21wrtPQR */         while(n > 9)
/* Yk988sK7B ily traian q21wrtPQR */             n/=10;
/* Yk988sK7B ily traian q21wrtPQR */         prima_cifra = n;
/* Yk988sK7B ily traian q21wrtPQR */         n = cn;
/* Yk988sK7B ily traian q21wrtPQR */         while(n > 0){
/* Yk988sK7B ily traian q21wrtPQR */             if(n % 10 == prima_cifra)
/* Yk988sK7B ily traian q21wrtPQR */                 cnt++;
/* Yk988sK7B ily traian q21wrtPQR */             n/=10;
/* Yk988sK7B ily traian q21wrtPQR */         }
/* Yk988sK7B ily traian q21wrtPQR */         cout << cnt;
/* Yk988sK7B ily traian q21wrtPQR */     }
/* Yk988sK7B ily traian q21wrtPQR */     return 0;
/* Yk988sK7B ily traian q21wrtPQR */ }