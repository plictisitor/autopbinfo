/* AfYFKYQm1 ily traian 5gWhOebgL */ #include <algorithm>
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
/* AfYFKYQm1 ily traian 5gWhOebgL */ using namespace std;
/* AfYFKYQm1 ily traian 5gWhOebgL */ int main()
/* AfYFKYQm1 ily traian 5gWhOebgL */ {
/* AfYFKYQm1 ily traian 5gWhOebgL */     int n , a[100001] , c , f;
/* AfYFKYQm1 ily traian 5gWhOebgL */     cin >> n >> a[1];
/* AfYFKYQm1 ily traian 5gWhOebgL */     c=a[1]; ///candidatu
/* AfYFKYQm1 ily traian 5gWhOebgL */     f = 1;///frecventa pro-votur contra
/* AfYFKYQm1 ily traian 5gWhOebgL */     for(int i= 2 ; i <= n ; ++i)
/* AfYFKYQm1 ily traian 5gWhOebgL */     {
/* AfYFKYQm1 ily traian 5gWhOebgL */         cin >> a[i];
/* AfYFKYQm1 ily traian 5gWhOebgL */         if(a[i] == c) f++;///vot pro
/* AfYFKYQm1 ily traian 5gWhOebgL */         else
/* AfYFKYQm1 ily traian 5gWhOebgL */         {
/* AfYFKYQm1 ily traian 5gWhOebgL */             f--;///vot contra
/* AfYFKYQm1 ily traian 5gWhOebgL */             if(f == 0)/// schimb candidatul
/* AfYFKYQm1 ily traian 5gWhOebgL */             {
/* AfYFKYQm1 ily traian 5gWhOebgL */                 c = a[i];
/* AfYFKYQm1 ily traian 5gWhOebgL */                 f = 1;
/* AfYFKYQm1 ily traian 5gWhOebgL */             }
/* AfYFKYQm1 ily traian 5gWhOebgL */         }
/* AfYFKYQm1 ily traian 5gWhOebgL */     }
/* AfYFKYQm1 ily traian 5gWhOebgL */     f = 0;for(int i = 1 ; i <= n ; ++i) /// verific daca e majoritar
/* AfYFKYQm1 ily traian 5gWhOebgL */     if(a[i] == c) f++;
/* AfYFKYQm1 ily traian 5gWhOebgL */     if(f > n/2) cout << "DA" <<" " << c;
/* AfYFKYQm1 ily traian 5gWhOebgL */     else cout << "NU";
/* AfYFKYQm1 ily traian 5gWhOebgL */ }