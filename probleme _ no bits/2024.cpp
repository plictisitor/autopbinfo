/* DyvPGUJ8f ily traian w90tfFzsq */ #include <algorithm>
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
/* DyvPGUJ8f ily traian w90tfFzsq */ using namespace std;
/* DyvPGUJ8f ily traian w90tfFzsq */ ifstream cin("divizor112.in");
/* DyvPGUJ8f ily traian w90tfFzsq */ ofstream cout("divizor112.out");
/* DyvPGUJ8f ily traian w90tfFzsq */ int n , f[1000001] , maxi , rez , x;
/* DyvPGUJ8f ily traian w90tfFzsq */ int main()
/* DyvPGUJ8f ily traian w90tfFzsq */ {
/* DyvPGUJ8f ily traian w90tfFzsq */     cin >> n;
/* DyvPGUJ8f ily traian w90tfFzsq */     for(int i = 1 ; i <= n ; i++)
/* DyvPGUJ8f ily traian w90tfFzsq */     {
/* DyvPGUJ8f ily traian w90tfFzsq */         cin >> x;
/* DyvPGUJ8f ily traian w90tfFzsq */         for(int j = 1 ; j * j <= x; j ++)
/* DyvPGUJ8f ily traian w90tfFzsq */         {
/* DyvPGUJ8f ily traian w90tfFzsq */             if(x % j == 0)
/* DyvPGUJ8f ily traian w90tfFzsq */             {
/* DyvPGUJ8f ily traian w90tfFzsq */                 f[j]++;
/* DyvPGUJ8f ily traian w90tfFzsq */                 if(j*j != x) f[x/j]++;
/* DyvPGUJ8f ily traian w90tfFzsq */             }
/* DyvPGUJ8f ily traian w90tfFzsq */         }
/* DyvPGUJ8f ily traian w90tfFzsq */     }
/* DyvPGUJ8f ily traian w90tfFzsq */     for(int i = 2 ; i <= 1000000 ; i++)
/* DyvPGUJ8f ily traian w90tfFzsq */     {
/* DyvPGUJ8f ily traian w90tfFzsq */         if(f[i] > maxi)
/* DyvPGUJ8f ily traian w90tfFzsq */         {
/* DyvPGUJ8f ily traian w90tfFzsq */             maxi = f[i];
/* DyvPGUJ8f ily traian w90tfFzsq */             rez = i;
/* DyvPGUJ8f ily traian w90tfFzsq */         }
/* DyvPGUJ8f ily traian w90tfFzsq */     }
/* DyvPGUJ8f ily traian w90tfFzsq */     cout << rez;
/* DyvPGUJ8f ily traian w90tfFzsq */ }