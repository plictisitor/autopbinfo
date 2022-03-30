/* KOrzlinjG ily traian APvyqH0fw */ #include <algorithm>
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
/* KOrzlinjG ily traian APvyqH0fw */ using namespace std;
/* KOrzlinjG ily traian APvyqH0fw */ 
/* KOrzlinjG ily traian APvyqH0fw */ ifstream cin ("turn.in");
/* KOrzlinjG ily traian APvyqH0fw */ ofstream cout ("turn.out");
/* KOrzlinjG ily traian APvyqH0fw */ 
/* KOrzlinjG ily traian APvyqH0fw */ struct poz
/* KOrzlinjG ily traian APvyqH0fw */ {
/* KOrzlinjG ily traian APvyqH0fw */     int i , j;
/* KOrzlinjG ily traian APvyqH0fw */ }a[20];
/* KOrzlinjG ily traian APvyqH0fw */ int n , h , x[101], p[101];
/* KOrzlinjG ily traian APvyqH0fw */ 
/* KOrzlinjG ily traian APvyqH0fw */ void afisare(int k)
/* KOrzlinjG ily traian APvyqH0fw */ {
/* KOrzlinjG ily traian APvyqH0fw */     for(int i = 1; i <= k; i ++)
/* KOrzlinjG ily traian APvyqH0fw */         cout << x[i] << ' ';
/* KOrzlinjG ily traian APvyqH0fw */     cout << '\n';
/* KOrzlinjG ily traian APvyqH0fw */ }
/* KOrzlinjG ily traian APvyqH0fw */ void back(int k , int h , int start)
/* KOrzlinjG ily traian APvyqH0fw */ {
/* KOrzlinjG ily traian APvyqH0fw */     if(h == 0)
/* KOrzlinjG ily traian APvyqH0fw */     {
/* KOrzlinjG ily traian APvyqH0fw */         afisare(k);
/* KOrzlinjG ily traian APvyqH0fw */         return;
/* KOrzlinjG ily traian APvyqH0fw */     }
/* KOrzlinjG ily traian APvyqH0fw */     for(int i = 1 ; i <= n ; i ++)
/* KOrzlinjG ily traian APvyqH0fw */     {
/* KOrzlinjG ily traian APvyqH0fw */         if(a[start].j != a[i].j && a[start].i >= a[i].i && !p[i])
/* KOrzlinjG ily traian APvyqH0fw */         {
/* KOrzlinjG ily traian APvyqH0fw */             p[i] = 1;
/* KOrzlinjG ily traian APvyqH0fw */             x[k + 1] = i;
/* KOrzlinjG ily traian APvyqH0fw */             back(k + 1 , h - a[i].i , i);
/* KOrzlinjG ily traian APvyqH0fw */             p[i] = 0;
/* KOrzlinjG ily traian APvyqH0fw */         }
/* KOrzlinjG ily traian APvyqH0fw */     }
/* KOrzlinjG ily traian APvyqH0fw */ 
/* KOrzlinjG ily traian APvyqH0fw */ }
/* KOrzlinjG ily traian APvyqH0fw */ int main()
/* KOrzlinjG ily traian APvyqH0fw */ {
/* KOrzlinjG ily traian APvyqH0fw */     cin >> n >> h;
/* KOrzlinjG ily traian APvyqH0fw */     for (int i = 1; i <= n; ++ i)
/* KOrzlinjG ily traian APvyqH0fw */         cin >> a[i].i >> a[i].j;
/* KOrzlinjG ily traian APvyqH0fw */     a[0].i = 2000000000;
/* KOrzlinjG ily traian APvyqH0fw */     back(0 , h , 0);
/* KOrzlinjG ily traian APvyqH0fw */     return 0;
/* KOrzlinjG ily traian APvyqH0fw */ }