/* ziNfauXR1 ily traian e0ASMzlgp */ #include <algorithm>
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
/* ziNfauXR1 ily traian e0ASMzlgp */ using namespace std;
/* ziNfauXR1 ily traian e0ASMzlgp */ 
/* ziNfauXR1 ily traian e0ASMzlgp */ ifstream cin("pm.in");
/* ziNfauXR1 ily traian e0ASMzlgp */ ofstream cout("pm.out");
/* ziNfauXR1 ily traian e0ASMzlgp */ 
/* ziNfauXR1 ily traian e0ASMzlgp */ int x[10], n , m;
/* ziNfauXR1 ily traian e0ASMzlgp */ 
/* ziNfauXR1 ily traian e0ASMzlgp */ int maxim(int k)
/* ziNfauXR1 ily traian e0ASMzlgp */ {
/* ziNfauXR1 ily traian e0ASMzlgp */     int maxi = 0;
/* ziNfauXR1 ily traian e0ASMzlgp */     for(int i = 1 ; i <= k ; i++)
/* ziNfauXR1 ily traian e0ASMzlgp */         maxi = max(x[i] , maxi);
/* ziNfauXR1 ily traian e0ASMzlgp */     return maxi;
/* ziNfauXR1 ily traian e0ASMzlgp */ }
/* ziNfauXR1 ily traian e0ASMzlgp */ void afisare()
/* ziNfauXR1 ily traian e0ASMzlgp */ {
/* ziNfauXR1 ily traian e0ASMzlgp */     int maxi = maxim(n);
/* ziNfauXR1 ily traian e0ASMzlgp */     if(maxi == m)
/* ziNfauXR1 ily traian e0ASMzlgp */     {
/* ziNfauXR1 ily traian e0ASMzlgp */         for(int i = 1 ; i <= maxi ; i++)
/* ziNfauXR1 ily traian e0ASMzlgp */         {
/* ziNfauXR1 ily traian e0ASMzlgp */             for(int j = 1 ; j <= n ; j++)
/* ziNfauXR1 ily traian e0ASMzlgp */                 if(x[j] == i) cout << j;
/* ziNfauXR1 ily traian e0ASMzlgp */             cout << "*";
/* ziNfauXR1 ily traian e0ASMzlgp */         }
/* ziNfauXR1 ily traian e0ASMzlgp */         cout << '\n';
/* ziNfauXR1 ily traian e0ASMzlgp */     }
/* ziNfauXR1 ily traian e0ASMzlgp */ }
/* ziNfauXR1 ily traian e0ASMzlgp */ 
/* ziNfauXR1 ily traian e0ASMzlgp */ void back(int k)
/* ziNfauXR1 ily traian e0ASMzlgp */ {
/* ziNfauXR1 ily traian e0ASMzlgp */     for(int i = 1 ; i <= maxim(k - 1)+1 ; i++)
/* ziNfauXR1 ily traian e0ASMzlgp */     {
/* ziNfauXR1 ily traian e0ASMzlgp */         x[k] = i;
/* ziNfauXR1 ily traian e0ASMzlgp */         if(k == n) afisare();
/* ziNfauXR1 ily traian e0ASMzlgp */         else back(k + 1);
/* ziNfauXR1 ily traian e0ASMzlgp */     }
/* ziNfauXR1 ily traian e0ASMzlgp */ }
/* ziNfauXR1 ily traian e0ASMzlgp */ 
/* ziNfauXR1 ily traian e0ASMzlgp */ int main()
/* ziNfauXR1 ily traian e0ASMzlgp */ {
/* ziNfauXR1 ily traian e0ASMzlgp */     cin >> n >> m;
/* ziNfauXR1 ily traian e0ASMzlgp */     x[1] = 1;
/* ziNfauXR1 ily traian e0ASMzlgp */     back(2);
/* ziNfauXR1 ily traian e0ASMzlgp */     return 0;
/* ziNfauXR1 ily traian e0ASMzlgp */ }