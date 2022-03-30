/* gr63l1N6e ily traian K8J4on8ga */ #include <algorithm>
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
/* gr63l1N6e ily traian K8J4on8ga */ using namespace std;
/* gr63l1N6e ily traian K8J4on8ga */ ifstream fin("zone.in");
/* gr63l1N6e ily traian K8J4on8ga */ ofstream fout("zone.out");
/* gr63l1N6e ily traian K8J4on8ga */ int a[305],n;
/* gr63l1N6e ily traian K8J4on8ga */ int main()
/* gr63l1N6e ily traian K8J4on8ga */ {
/* gr63l1N6e ily traian K8J4on8ga */     int p = 0 , u = 0;
/* gr63l1N6e ily traian K8J4on8ga */     fin >> n;
/* gr63l1N6e ily traian K8J4on8ga */     for(int i = 1 ; i <= 3 * n ; ++i)fin >> a[i];
/* gr63l1N6e ily traian K8J4on8ga */     for(int i = 1 ; i <= n && p == 0 ; ++i)
/* gr63l1N6e ily traian K8J4on8ga */         if(a[i] % 2 == 0) p = i;
/* gr63l1N6e ily traian K8J4on8ga */     for(int i = 3 * n ; i > 2 * n && u == 0 ; --i)
/* gr63l1N6e ily traian K8J4on8ga */         if(a[i] % 2 == 1) u = i;
/* gr63l1N6e ily traian K8J4on8ga */     if(p * u)
/* gr63l1N6e ily traian K8J4on8ga */     {
/* gr63l1N6e ily traian K8J4on8ga */         int aux = a[p];a[p] = a[u];a[u] = aux;
/* gr63l1N6e ily traian K8J4on8ga */     }
/* gr63l1N6e ily traian K8J4on8ga */     for(int i = 1 ; i <= 3 * n ; ++i)
/* gr63l1N6e ily traian K8J4on8ga */         fout << a[i] << " ";
/* gr63l1N6e ily traian K8J4on8ga */     return 0;
/* gr63l1N6e ily traian K8J4on8ga */ }