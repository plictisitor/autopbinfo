/* X08rrzfnO ily traian yZAWqM9gI */  #include <algorithm>
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
/* X08rrzfnO ily traian yZAWqM9gI */  using namespace std;
/* X08rrzfnO ily traian yZAWqM9gI */ 
/* X08rrzfnO ily traian yZAWqM9gI */  ifstream cin("hamilton.in");
/* X08rrzfnO ily traian yZAWqM9gI */  ofstream cout("hamilton.out");
/* X08rrzfnO ily traian yZAWqM9gI */ 
/* X08rrzfnO ily traian yZAWqM9gI */  int n , a[22][22] , x1 , y , x[20] , ok , p[20];
/* X08rrzfnO ily traian yZAWqM9gI */ 
/* X08rrzfnO ily traian yZAWqM9gI */  void afisare()
/* X08rrzfnO ily traian yZAWqM9gI */  {
/* X08rrzfnO ily traian yZAWqM9gI */      cout << 1 << '\n';
/* X08rrzfnO ily traian yZAWqM9gI */      for(int i = 1 ; i <= n ; i++)
/* X08rrzfnO ily traian yZAWqM9gI */         cout << x[i] << " ";
/* X08rrzfnO ily traian yZAWqM9gI */     cout << x[1];
/* X08rrzfnO ily traian yZAWqM9gI */      ok = 1;
/* X08rrzfnO ily traian yZAWqM9gI */  }
/* X08rrzfnO ily traian yZAWqM9gI */ 
/* X08rrzfnO ily traian yZAWqM9gI */ void back(int k)
/* X08rrzfnO ily traian yZAWqM9gI */ {
/* X08rrzfnO ily traian yZAWqM9gI */     for(int i = 1 ; i <= n && !ok; i++)
/* X08rrzfnO ily traian yZAWqM9gI */         if(!p[i])
/* X08rrzfnO ily traian yZAWqM9gI */         {
/* X08rrzfnO ily traian yZAWqM9gI */             p[i] = 1;
/* X08rrzfnO ily traian yZAWqM9gI */             x[k] = i;
/* X08rrzfnO ily traian yZAWqM9gI */             if(k == 1 || a[x[k - 1]][x[k]] == 1)
/* X08rrzfnO ily traian yZAWqM9gI */             {
/* X08rrzfnO ily traian yZAWqM9gI */                 if(k == n && a[x[k]][x[1]] == 1) afisare();
/* X08rrzfnO ily traian yZAWqM9gI */                 else back(k + 1);
/* X08rrzfnO ily traian yZAWqM9gI */             }
/* X08rrzfnO ily traian yZAWqM9gI */             p[i] = 0;
/* X08rrzfnO ily traian yZAWqM9gI */         }
/* X08rrzfnO ily traian yZAWqM9gI */ }
/* X08rrzfnO ily traian yZAWqM9gI */ 
/* X08rrzfnO ily traian yZAWqM9gI */ int main()
/* X08rrzfnO ily traian yZAWqM9gI */ {
/* X08rrzfnO ily traian yZAWqM9gI */     cin >> n;
/* X08rrzfnO ily traian yZAWqM9gI */     while(cin >> x1 >> y)
/* X08rrzfnO ily traian yZAWqM9gI */         a[x1][y] = a[y][x1] = 1;
/* X08rrzfnO ily traian yZAWqM9gI */ 
/* X08rrzfnO ily traian yZAWqM9gI */     back(1);
/* X08rrzfnO ily traian yZAWqM9gI */     if(ok == 0) cout << 0;
/* X08rrzfnO ily traian yZAWqM9gI */ }