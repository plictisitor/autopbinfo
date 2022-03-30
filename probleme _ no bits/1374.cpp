/* v7ErDMTui ily traian Gju04PKs3 */ #include <algorithm>
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
/* v7ErDMTui ily traian Gju04PKs3 */ using namespace std;
/* v7ErDMTui ily traian Gju04PKs3 */ ifstream cin("numere9.in");
/* v7ErDMTui ily traian Gju04PKs3 */ ofstream cout("numere9.out");
/* v7ErDMTui ily traian Gju04PKs3 */ int main()
/* v7ErDMTui ily traian Gju04PKs3 */ {
/* v7ErDMTui ily traian Gju04PKs3 */     int n , x , p = 0 , f[60000]={0} , ok = 0 , nr1 , nr2;
/* v7ErDMTui ily traian Gju04PKs3 */     cin >> n;
/* v7ErDMTui ily traian Gju04PKs3 */     for(int i = 0 ; i < n ; ++i)
/* v7ErDMTui ily traian Gju04PKs3 */     {
/* v7ErDMTui ily traian Gju04PKs3 */         for(int j = 0 ; j < n ; ++j)
/* v7ErDMTui ily traian Gju04PKs3 */         {
/* v7ErDMTui ily traian Gju04PKs3 */             cin >> x;
/* v7ErDMTui ily traian Gju04PKs3 */             if(x > p && x<= 60000) p = x;
/* v7ErDMTui ily traian Gju04PKs3 */             if(x <= 60000)f[x]++;
/* v7ErDMTui ily traian Gju04PKs3 */         }
/* v7ErDMTui ily traian Gju04PKs3 */     }
/* v7ErDMTui ily traian Gju04PKs3 */     if(p < n * n && p != 60000) p = n * n;
/* v7ErDMTui ily traian Gju04PKs3 */     for(int i = 1 ; i <= p ; ++i)
/* v7ErDMTui ily traian Gju04PKs3 */     {
/* v7ErDMTui ily traian Gju04PKs3 */         if(f[i]==0 && ok==0)
/* v7ErDMTui ily traian Gju04PKs3 */         {
/* v7ErDMTui ily traian Gju04PKs3 */             nr1 = i;
/* v7ErDMTui ily traian Gju04PKs3 */             ok++;
/* v7ErDMTui ily traian Gju04PKs3 */         }
/* v7ErDMTui ily traian Gju04PKs3 */         if(f[i]==0) nr2 = i;
/* v7ErDMTui ily traian Gju04PKs3 */     }
/* v7ErDMTui ily traian Gju04PKs3 */     cout << nr1 << " " << nr2;
/* v7ErDMTui ily traian Gju04PKs3 */ }