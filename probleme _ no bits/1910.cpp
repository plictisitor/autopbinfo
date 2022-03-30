/* xmU2VLEom ily traian 0XHDnZbrL */ #include <algorithm>
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
/* xmU2VLEom ily traian 0XHDnZbrL */ using namespace std;
/* xmU2VLEom ily traian 0XHDnZbrL */ 
/* xmU2VLEom ily traian 0XHDnZbrL */ int n , a[20] , b , r , cif , nu[20] , rest;
/* xmU2VLEom ily traian 0XHDnZbrL */ 
/* xmU2VLEom ily traian 0XHDnZbrL */ int main()
/* xmU2VLEom ily traian 0XHDnZbrL */ {
/* xmU2VLEom ily traian 0XHDnZbrL */     cin >> n;
/* xmU2VLEom ily traian 0XHDnZbrL */     for(int i = 1 ; i <= n ; i++)
/* xmU2VLEom ily traian 0XHDnZbrL */     {
/* xmU2VLEom ily traian 0XHDnZbrL */         cin >> a[i] >> b >> r;
/* xmU2VLEom ily traian 0XHDnZbrL */         rest = 1;
/* xmU2VLEom ily traian 0XHDnZbrL */         for(int j = 1 ; j < a[i] ; j++)
/* xmU2VLEom ily traian 0XHDnZbrL */             rest = (rest * 10) % b;
/* xmU2VLEom ily traian 0XHDnZbrL */         if(r >= rest) cif = r - rest;
/* xmU2VLEom ily traian 0XHDnZbrL */         else cif = b + r - rest;
/* xmU2VLEom ily traian 0XHDnZbrL */         nu[i] = cif;
/* xmU2VLEom ily traian 0XHDnZbrL */     }
/* xmU2VLEom ily traian 0XHDnZbrL */     for(int i = 1 ; i <= n ; i++)
/* xmU2VLEom ily traian 0XHDnZbrL */     {
/* xmU2VLEom ily traian 0XHDnZbrL */         cout << 1;
/* xmU2VLEom ily traian 0XHDnZbrL */         for(int j = 1 ; j <= a[i] - 2 ; j++) cout << 0;
/* xmU2VLEom ily traian 0XHDnZbrL */         cout << nu[i] << '\n';
/* xmU2VLEom ily traian 0XHDnZbrL */     }
/* xmU2VLEom ily traian 0XHDnZbrL */ }