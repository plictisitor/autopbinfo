/* Gjl60vsaV ily traian zROiqGNuT */ #include <algorithm>
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
/* Gjl60vsaV ily traian zROiqGNuT */ using namespace std;
/* Gjl60vsaV ily traian zROiqGNuT */ int main()
/* Gjl60vsaV ily traian zROiqGNuT */ {
/* Gjl60vsaV ily traian zROiqGNuT */     int n , m , k , a[1001][1001] , x;
/* Gjl60vsaV ily traian zROiqGNuT */     cin >> n >> m >> k;
/* Gjl60vsaV ily traian zROiqGNuT */     for(int i = 1 ; i <=n ; ++i)
/* Gjl60vsaV ily traian zROiqGNuT */         for(int j = 1 ; j <= m; ++j)
/* Gjl60vsaV ily traian zROiqGNuT */             cin >> a[i][j];
/* Gjl60vsaV ily traian zROiqGNuT */ 
/* Gjl60vsaV ily traian zROiqGNuT */     for(int p = 1 ; p <= k ; ++p)
/* Gjl60vsaV ily traian zROiqGNuT */     {
/* Gjl60vsaV ily traian zROiqGNuT */         cin >> x;
/* Gjl60vsaV ily traian zROiqGNuT */         for(int i = 1 ; i <=n ; ++i)
/* Gjl60vsaV ily traian zROiqGNuT */             for(int j = 1 ; j <= m; ++j)
/* Gjl60vsaV ily traian zROiqGNuT */                 if(a[i][j]==x)
/* Gjl60vsaV ily traian zROiqGNuT */             {
/* Gjl60vsaV ily traian zROiqGNuT */                 for(int l = i ; l > 1 ; l--)
/* Gjl60vsaV ily traian zROiqGNuT */                     a[l][j]=a[l-1][j];
/* Gjl60vsaV ily traian zROiqGNuT */                 a[1][j]=0;
/* Gjl60vsaV ily traian zROiqGNuT */             }
/* Gjl60vsaV ily traian zROiqGNuT */     }
/* Gjl60vsaV ily traian zROiqGNuT */     for(int i = 1 ; i <=n ; ++i)
/* Gjl60vsaV ily traian zROiqGNuT */     {
/* Gjl60vsaV ily traian zROiqGNuT */         for(int j = 1 ; j <= m; ++j)
/* Gjl60vsaV ily traian zROiqGNuT */             cout << a[i][j] << " ";
/* Gjl60vsaV ily traian zROiqGNuT */         cout << endl;
/* Gjl60vsaV ily traian zROiqGNuT */     }
/* Gjl60vsaV ily traian zROiqGNuT */ }