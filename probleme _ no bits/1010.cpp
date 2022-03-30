/* MCZ7ICmiA ily traian uugRBR5IZ */ #include <algorithm>
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
/* MCZ7ICmiA ily traian uugRBR5IZ */ using namespace std;
/* MCZ7ICmiA ily traian uugRBR5IZ */ 
/* MCZ7ICmiA ily traian uugRBR5IZ */ int main()
/* MCZ7ICmiA ily traian uugRBR5IZ */ {
/* MCZ7ICmiA ily traian uugRBR5IZ */     int f[10001]={0} , g[10001]={0} , n , m , p;
/* MCZ7ICmiA ily traian uugRBR5IZ */     long long int c=0;
/* MCZ7ICmiA ily traian uugRBR5IZ */     cin >> n >> p ;
/* MCZ7ICmiA ily traian uugRBR5IZ */     for(int i = 0 ; i < n ; ++i)
/* MCZ7ICmiA ily traian uugRBR5IZ */     {
/* MCZ7ICmiA ily traian uugRBR5IZ */         int x;
/* MCZ7ICmiA ily traian uugRBR5IZ */         cin >> x;
/* MCZ7ICmiA ily traian uugRBR5IZ */         f[x]++;
/* MCZ7ICmiA ily traian uugRBR5IZ */     }
/* MCZ7ICmiA ily traian uugRBR5IZ */     cin >> m;
/* MCZ7ICmiA ily traian uugRBR5IZ */     for(int i =0 ; i < m ; ++i)
/* MCZ7ICmiA ily traian uugRBR5IZ */     {
/* MCZ7ICmiA ily traian uugRBR5IZ */         int x;
/* MCZ7ICmiA ily traian uugRBR5IZ */         cin >> x;
/* MCZ7ICmiA ily traian uugRBR5IZ */         g[x]++;
/* MCZ7ICmiA ily traian uugRBR5IZ */     }
/* MCZ7ICmiA ily traian uugRBR5IZ */     for(int i = 0 ; i < 10000 ; ++i)
/* MCZ7ICmiA ily traian uugRBR5IZ */     {
/* MCZ7ICmiA ily traian uugRBR5IZ */         for(int j = 0 ; j < 10000 && i * j < p ; ++j)
/* MCZ7ICmiA ily traian uugRBR5IZ */             c+=f[i]*g[j];
/* MCZ7ICmiA ily traian uugRBR5IZ */     }
/* MCZ7ICmiA ily traian uugRBR5IZ */     cout << c;
/* MCZ7ICmiA ily traian uugRBR5IZ */ 
/* MCZ7ICmiA ily traian uugRBR5IZ */     return 0;
/* MCZ7ICmiA ily traian uugRBR5IZ */ }