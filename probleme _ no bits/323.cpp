/* OHLwKDkLa ily traian iRBtosNoP */ #include <algorithm>
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
/* OHLwKDkLa ily traian iRBtosNoP */ using namespace std;
/* OHLwKDkLa ily traian iRBtosNoP */ 
/* OHLwKDkLa ily traian iRBtosNoP */ ifstream cin("partitiinumar3.in");
/* OHLwKDkLa ily traian iRBtosNoP */ ofstream cout("partitiinumar3.out");
/* OHLwKDkLa ily traian iRBtosNoP */ 
/* OHLwKDkLa ily traian iRBtosNoP */ int n , x[50] , a , b;
/* OHLwKDkLa ily traian iRBtosNoP */ 
/* OHLwKDkLa ily traian iRBtosNoP */ void afisare(int k)
/* OHLwKDkLa ily traian iRBtosNoP */ {
/* OHLwKDkLa ily traian iRBtosNoP */     for(int i = 1 ; i <= k ; i++)
/* OHLwKDkLa ily traian iRBtosNoP */         cout << x[i] << " ";
/* OHLwKDkLa ily traian iRBtosNoP */     cout << '\n';
/* OHLwKDkLa ily traian iRBtosNoP */ }
/* OHLwKDkLa ily traian iRBtosNoP */ 
/* OHLwKDkLa ily traian iRBtosNoP */ void back(int k , int sp)
/* OHLwKDkLa ily traian iRBtosNoP */ {
/* OHLwKDkLa ily traian iRBtosNoP */     for(int i = a ; i <= b ; i++)
/* OHLwKDkLa ily traian iRBtosNoP */     {
/* OHLwKDkLa ily traian iRBtosNoP */         x[k] = i;
/* OHLwKDkLa ily traian iRBtosNoP */         if(k == 1 || x[k] >= x[k - 1])
/* OHLwKDkLa ily traian iRBtosNoP */         {
/* OHLwKDkLa ily traian iRBtosNoP */             sp += x[k];
/* OHLwKDkLa ily traian iRBtosNoP */             if(sp <= n)
/* OHLwKDkLa ily traian iRBtosNoP */                 if(sp == n) afisare(k);
/* OHLwKDkLa ily traian iRBtosNoP */                 else back(k + 1 , sp);
/* OHLwKDkLa ily traian iRBtosNoP */             sp -= x[k];
/* OHLwKDkLa ily traian iRBtosNoP */         }
/* OHLwKDkLa ily traian iRBtosNoP */     }
/* OHLwKDkLa ily traian iRBtosNoP */ }
/* OHLwKDkLa ily traian iRBtosNoP */ 
/* OHLwKDkLa ily traian iRBtosNoP */ int main()
/* OHLwKDkLa ily traian iRBtosNoP */ {
/* OHLwKDkLa ily traian iRBtosNoP */     cin >> n >> a >> b;
/* OHLwKDkLa ily traian iRBtosNoP */     back(1 , 0);
/* OHLwKDkLa ily traian iRBtosNoP */ 
/* OHLwKDkLa ily traian iRBtosNoP */ }