/* dCgyI8FwG ily traian oFP7noItx */ #include <algorithm>
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
/* dCgyI8FwG ily traian oFP7noItx */ using namespace std;
/* dCgyI8FwG ily traian oFP7noItx */ 
/* dCgyI8FwG ily traian oFP7noItx */ ifstream cin("sirab.in");
/* dCgyI8FwG ily traian oFP7noItx */ ofstream cout("sirab.out");
/* dCgyI8FwG ily traian oFP7noItx */ 
/* dCgyI8FwG ily traian oFP7noItx */ int s , n , x[10] , ok;
/* dCgyI8FwG ily traian oFP7noItx */ 
/* dCgyI8FwG ily traian oFP7noItx */ void afisare()
/* dCgyI8FwG ily traian oFP7noItx */ {
/* dCgyI8FwG ily traian oFP7noItx */     for(int i = 0; i < n; i++)
/* dCgyI8FwG ily traian oFP7noItx */         cout << x[i] << ' ';
/* dCgyI8FwG ily traian oFP7noItx */     cout << '\n';
/* dCgyI8FwG ily traian oFP7noItx */     ok++;
/* dCgyI8FwG ily traian oFP7noItx */ }
/* dCgyI8FwG ily traian oFP7noItx */ 
/* dCgyI8FwG ily traian oFP7noItx */ int verificare(int k, int val)
/* dCgyI8FwG ily traian oFP7noItx */ {
/* dCgyI8FwG ily traian oFP7noItx */     for(int i = 0; i < k; i++)
/* dCgyI8FwG ily traian oFP7noItx */         if((x[i] + val) % (x[i] - val)) return  0;
/* dCgyI8FwG ily traian oFP7noItx */     return 1;
/* dCgyI8FwG ily traian oFP7noItx */ }
/* dCgyI8FwG ily traian oFP7noItx */ 
/* dCgyI8FwG ily traian oFP7noItx */ void back(int k, int ind)
/* dCgyI8FwG ily traian oFP7noItx */ {
/* dCgyI8FwG ily traian oFP7noItx */     if(k == n)
/* dCgyI8FwG ily traian oFP7noItx */     {
/* dCgyI8FwG ily traian oFP7noItx */         afisare();
/* dCgyI8FwG ily traian oFP7noItx */         return;
/* dCgyI8FwG ily traian oFP7noItx */     }
/* dCgyI8FwG ily traian oFP7noItx */     for(int i = ind ; i <= s ; i++)
/* dCgyI8FwG ily traian oFP7noItx */     {
/* dCgyI8FwG ily traian oFP7noItx */         if(k == 0)
/* dCgyI8FwG ily traian oFP7noItx */         {
/* dCgyI8FwG ily traian oFP7noItx */             x[0] = i;
/* dCgyI8FwG ily traian oFP7noItx */             back(k + 1, i + 1);
/* dCgyI8FwG ily traian oFP7noItx */         }
/* dCgyI8FwG ily traian oFP7noItx */         else if(verificare(k , i))
/* dCgyI8FwG ily traian oFP7noItx */         {
/* dCgyI8FwG ily traian oFP7noItx */             x[k] = i;
/* dCgyI8FwG ily traian oFP7noItx */             back(k + 1, i + 1);
/* dCgyI8FwG ily traian oFP7noItx */         }
/* dCgyI8FwG ily traian oFP7noItx */     }
/* dCgyI8FwG ily traian oFP7noItx */ }
/* dCgyI8FwG ily traian oFP7noItx */ 
/* dCgyI8FwG ily traian oFP7noItx */ int main()
/* dCgyI8FwG ily traian oFP7noItx */ {
/* dCgyI8FwG ily traian oFP7noItx */     cin >> s >> n;
/* dCgyI8FwG ily traian oFP7noItx */     back(0, 1);
/* dCgyI8FwG ily traian oFP7noItx */     if(ok == 0) cout << 0;
/* dCgyI8FwG ily traian oFP7noItx */ }