/* vTH9zZHLO ily traian 6f50uo2Xu */ #include <algorithm>
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
/* vTH9zZHLO ily traian 6f50uo2Xu */ 
/* vTH9zZHLO ily traian 6f50uo2Xu */ using namespace std;
/* vTH9zZHLO ily traian 6f50uo2Xu */ 
/* vTH9zZHLO ily traian 6f50uo2Xu */ ifstream cin("perechi2.in");
/* vTH9zZHLO ily traian 6f50uo2Xu */ ofstream cout("perechi2.out");
/* vTH9zZHLO ily traian 6f50uo2Xu */ 
/* vTH9zZHLO ily traian 6f50uo2Xu */ int n , cer , cnt;
/* vTH9zZHLO ily traian 6f50uo2Xu */ 
/* vTH9zZHLO ily traian 6f50uo2Xu */ struct poz
/* vTH9zZHLO ily traian 6f50uo2Xu */ {
/* vTH9zZHLO ily traian 6f50uo2Xu */     int val , ind;
/* vTH9zZHLO ily traian 6f50uo2Xu */ }a[2001];
/* vTH9zZHLO ily traian 6f50uo2Xu */ 
/* vTH9zZHLO ily traian 6f50uo2Xu */ int comp(poz a , poz b)
/* vTH9zZHLO ily traian 6f50uo2Xu */ {
/* vTH9zZHLO ily traian 6f50uo2Xu */     return a.val < b.val;
/* vTH9zZHLO ily traian 6f50uo2Xu */ }
/* vTH9zZHLO ily traian 6f50uo2Xu */ 
/* vTH9zZHLO ily traian 6f50uo2Xu */ int main()
/* vTH9zZHLO ily traian 6f50uo2Xu */ {
/* vTH9zZHLO ily traian 6f50uo2Xu */     cin >> cer >> n;
/* vTH9zZHLO ily traian 6f50uo2Xu */     for(int i = 1 ; i <= n ; i++)
/* vTH9zZHLO ily traian 6f50uo2Xu */         cin >> a[i].val , a[i].ind = i;
/* vTH9zZHLO ily traian 6f50uo2Xu */     sort(a + 1 , a + n + 1 , comp);
/* vTH9zZHLO ily traian 6f50uo2Xu */     if(cer == 1)
/* vTH9zZHLO ily traian 6f50uo2Xu */     {
/* vTH9zZHLO ily traian 6f50uo2Xu */         if(a[1].val == a[2].val && a[1].val < a[3].val)
/* vTH9zZHLO ily traian 6f50uo2Xu */         {
/* vTH9zZHLO ily traian 6f50uo2Xu */             for(int i = 4 ; i <= n ; i++)
/* vTH9zZHLO ily traian 6f50uo2Xu */                 if(a[i].val != a[i - 1].val) cnt++;
/* vTH9zZHLO ily traian 6f50uo2Xu */             if(cnt == 0) cout << a[1].ind << " " << a[2].ind << " " << a[3].val - a[1].val;
/* vTH9zZHLO ily traian 6f50uo2Xu */         }
/* vTH9zZHLO ily traian 6f50uo2Xu */         else cout << 0;
/* vTH9zZHLO ily traian 6f50uo2Xu */     }
/* vTH9zZHLO ily traian 6f50uo2Xu */     else
/* vTH9zZHLO ily traian 6f50uo2Xu */     {
/* vTH9zZHLO ily traian 6f50uo2Xu */         int maxi = a[n].val;
/* vTH9zZHLO ily traian 6f50uo2Xu */         for(int i = 1 ; i < n ; i += 2)
/* vTH9zZHLO ily traian 6f50uo2Xu */         {
/* vTH9zZHLO ily traian 6f50uo2Xu */             int A = a[i].val , B = a[i + 1].val;
/* vTH9zZHLO ily traian 6f50uo2Xu */             a[i].val += (maxi - A);
/* vTH9zZHLO ily traian 6f50uo2Xu */             a[i + 1].val += (maxi - A);
/* vTH9zZHLO ily traian 6f50uo2Xu */             cout << a[i].ind << " " << a[i + 1].ind << " " << maxi - A << '\n';
/* vTH9zZHLO ily traian 6f50uo2Xu */             maxi = a[i + 1].val;
/* vTH9zZHLO ily traian 6f50uo2Xu */         }
/* vTH9zZHLO ily traian 6f50uo2Xu */         if(maxi - a[1].val != 0)
/* vTH9zZHLO ily traian 6f50uo2Xu */         cout << a[1].ind << " " << a[n].ind << " " << maxi - a[1].val << '\n';
/* vTH9zZHLO ily traian 6f50uo2Xu */         for(int i = 2 ; i < n - 1 ; i+=2)
/* vTH9zZHLO ily traian 6f50uo2Xu */             if(maxi - a[i].val != 0)
/* vTH9zZHLO ily traian 6f50uo2Xu */             cout << a[i].ind << " " << a[i + 1].ind << " " << maxi - a[i].val << '\n';
/* vTH9zZHLO ily traian 6f50uo2Xu */     }
/* vTH9zZHLO ily traian 6f50uo2Xu */ }