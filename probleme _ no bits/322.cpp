/* m5gZ5JEVU ily traian 1oN5J3vYX */ #include <algorithm>
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
/* m5gZ5JEVU ily traian 1oN5J3vYX */ using namespace std;
/* m5gZ5JEVU ily traian 1oN5J3vYX */ 
/* m5gZ5JEVU ily traian 1oN5J3vYX */ ifstream cin("partitiinumar2.in");
/* m5gZ5JEVU ily traian 1oN5J3vYX */ ofstream cout("partitiinumar2.out");
/* m5gZ5JEVU ily traian 1oN5J3vYX */ 
/* m5gZ5JEVU ily traian 1oN5J3vYX */ int n , x[80] , m;
/* m5gZ5JEVU ily traian 1oN5J3vYX */ 
/* m5gZ5JEVU ily traian 1oN5J3vYX */ void afisare(int k)
/* m5gZ5JEVU ily traian 1oN5J3vYX */ {
/* m5gZ5JEVU ily traian 1oN5J3vYX */     for(int i = 1 ; i <= k ; i++)
/* m5gZ5JEVU ily traian 1oN5J3vYX */         cout << x[i] << " ";
/* m5gZ5JEVU ily traian 1oN5J3vYX */     cout << '\n';
/* m5gZ5JEVU ily traian 1oN5J3vYX */ }
/* m5gZ5JEVU ily traian 1oN5J3vYX */ 
/* m5gZ5JEVU ily traian 1oN5J3vYX */ void back(int k , int sp)
/* m5gZ5JEVU ily traian 1oN5J3vYX */ {
/* m5gZ5JEVU ily traian 1oN5J3vYX */     for(int i = 1 ; i <= n ; i++)
/* m5gZ5JEVU ily traian 1oN5J3vYX */     {
/* m5gZ5JEVU ily traian 1oN5J3vYX */         x[k] = i;
/* m5gZ5JEVU ily traian 1oN5J3vYX */         if(k == 1 || x[k] > x[k - 1])
/* m5gZ5JEVU ily traian 1oN5J3vYX */         {
/* m5gZ5JEVU ily traian 1oN5J3vYX */             sp += x[k];
/* m5gZ5JEVU ily traian 1oN5J3vYX */             if(sp <= n)
/* m5gZ5JEVU ily traian 1oN5J3vYX */                 if(sp == n && k >= m) afisare(k);
/* m5gZ5JEVU ily traian 1oN5J3vYX */                 else back(k + 1 , sp);
/* m5gZ5JEVU ily traian 1oN5J3vYX */             sp -= x[k];
/* m5gZ5JEVU ily traian 1oN5J3vYX */         }
/* m5gZ5JEVU ily traian 1oN5J3vYX */     }
/* m5gZ5JEVU ily traian 1oN5J3vYX */ }
/* m5gZ5JEVU ily traian 1oN5J3vYX */ 
/* m5gZ5JEVU ily traian 1oN5J3vYX */ int main()
/* m5gZ5JEVU ily traian 1oN5J3vYX */ {
/* m5gZ5JEVU ily traian 1oN5J3vYX */     cin >> n >> m;
/* m5gZ5JEVU ily traian 1oN5J3vYX */     back(1 , 0);
/* m5gZ5JEVU ily traian 1oN5J3vYX */ 
/* m5gZ5JEVU ily traian 1oN5J3vYX */ }