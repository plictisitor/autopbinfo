/* mbjfeqTZh ily traian sg0JKz0So */ #include <algorithm>
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
/* mbjfeqTZh ily traian sg0JKz0So */ using namespace std;
/* mbjfeqTZh ily traian sg0JKz0So */ 
/* mbjfeqTZh ily traian sg0JKz0So */ ifstream cin("nsir.in");
/* mbjfeqTZh ily traian sg0JKz0So */ ofstream cout("nsir.out");
/* mbjfeqTZh ily traian sg0JKz0So */ 
/* mbjfeqTZh ily traian sg0JKz0So */ int n , x[41] , ok;
/* mbjfeqTZh ily traian sg0JKz0So */ 
/* mbjfeqTZh ily traian sg0JKz0So */ void afisare(int k)
/* mbjfeqTZh ily traian sg0JKz0So */ {
/* mbjfeqTZh ily traian sg0JKz0So */     for(int i = 1 ; i <= k ; i++)
/* mbjfeqTZh ily traian sg0JKz0So */         cout << x[i] << " ";
/* mbjfeqTZh ily traian sg0JKz0So */     cout << '\n';
/* mbjfeqTZh ily traian sg0JKz0So */     ok++;
/* mbjfeqTZh ily traian sg0JKz0So */ }
/* mbjfeqTZh ily traian sg0JKz0So */ 
/* mbjfeqTZh ily traian sg0JKz0So */ void back(int k , int sp , double sp1)
/* mbjfeqTZh ily traian sg0JKz0So */ {
/* mbjfeqTZh ily traian sg0JKz0So */     for(int i = 1 ; i <= n ; i++)
/* mbjfeqTZh ily traian sg0JKz0So */     {
/* mbjfeqTZh ily traian sg0JKz0So */         x[k] = i;
/* mbjfeqTZh ily traian sg0JKz0So */         if(k == 1 || x[k] >= x[k - 1])
/* mbjfeqTZh ily traian sg0JKz0So */         {
/* mbjfeqTZh ily traian sg0JKz0So */             sp += x[k];
/* mbjfeqTZh ily traian sg0JKz0So */             sp1 += double(1.0 / x[k]);
/* mbjfeqTZh ily traian sg0JKz0So */             if(sp <= n && sp1 <= 1.00001)
/* mbjfeqTZh ily traian sg0JKz0So */                 if(sp == n && sp1 + 0.00001 >= 1) afisare(k);
/* mbjfeqTZh ily traian sg0JKz0So */                 else back(k + 1 , sp , sp1);
/* mbjfeqTZh ily traian sg0JKz0So */             sp -= x[k];
/* mbjfeqTZh ily traian sg0JKz0So */             sp1 -= double(1.0 / x[k]);
/* mbjfeqTZh ily traian sg0JKz0So */         }
/* mbjfeqTZh ily traian sg0JKz0So */     }
/* mbjfeqTZh ily traian sg0JKz0So */ }
/* mbjfeqTZh ily traian sg0JKz0So */ 
/* mbjfeqTZh ily traian sg0JKz0So */ int main()
/* mbjfeqTZh ily traian sg0JKz0So */ {
/* mbjfeqTZh ily traian sg0JKz0So */     cin >> n;
/* mbjfeqTZh ily traian sg0JKz0So */     back(1 , 0 , 0);
/* mbjfeqTZh ily traian sg0JKz0So */     if(ok == 0) cout << 0;
/* mbjfeqTZh ily traian sg0JKz0So */ }