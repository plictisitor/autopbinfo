/* xCrOmKtOh ily traian p7NRKr1ty */ #include <algorithm>
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
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */ using namespace std;
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */ ifstream cin("gasti.in");
/* xCrOmKtOh ily traian p7NRKr1ty */ ofstream cout("gasti.out");
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */ #define mod 666013
/* xCrOmKtOh ily traian p7NRKr1ty */ int n , m , x , y , v[100001] , cnt , f[100001] , maxi , maxi2 , fmaxi , fmaxi2;
/* xCrOmKtOh ily traian p7NRKr1ty */ vector <int> G[100001];
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */ void dfs(int nod, int cnt)
/* xCrOmKtOh ily traian p7NRKr1ty */ {
/* xCrOmKtOh ily traian p7NRKr1ty */    v[nod] = cnt;
/* xCrOmKtOh ily traian p7NRKr1ty */    for(auto i : G[nod])
/* xCrOmKtOh ily traian p7NRKr1ty */         if(!v[i]) v[i] = cnt , dfs(i , cnt);
/* xCrOmKtOh ily traian p7NRKr1ty */ }
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */ int main()
/* xCrOmKtOh ily traian p7NRKr1ty */ {
/* xCrOmKtOh ily traian p7NRKr1ty */     cin >> n >> m;
/* xCrOmKtOh ily traian p7NRKr1ty */     for(int i = 1 ; i <= m ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */     {
/* xCrOmKtOh ily traian p7NRKr1ty */         cin >> x >> y;
/* xCrOmKtOh ily traian p7NRKr1ty */         G[x].push_back(y);
/* xCrOmKtOh ily traian p7NRKr1ty */         G[y].push_back(x);
/* xCrOmKtOh ily traian p7NRKr1ty */     }
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     for(int i = 1 ; i <= n ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */         if(!v[i]) cnt++ , dfs(i , cnt);
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     ///cer 1
/* xCrOmKtOh ily traian p7NRKr1ty */     cout << cnt << ' ';
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     ///cer 2
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     for(int i = 1 ; i <= n ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */         f[v[i]]++;
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     for(int i = 1 ; i <= n ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */         if(f[i] > maxi) maxi = f[i];
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     for(int i = 1 ; i <= n ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */         if(f[i] == maxi) fmaxi++;
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */     if(fmaxi > 1)
/* xCrOmKtOh ily traian p7NRKr1ty */     {
/* xCrOmKtOh ily traian p7NRKr1ty */         cout << 1ll * fmaxi * (fmaxi - 1) / 2 % mod * maxi % mod * maxi % mod;
/* xCrOmKtOh ily traian p7NRKr1ty */     }
/* xCrOmKtOh ily traian p7NRKr1ty */     else
/* xCrOmKtOh ily traian p7NRKr1ty */     {
/* xCrOmKtOh ily traian p7NRKr1ty */         for(int i = 1 ; i <= n ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */             if(f[i] > maxi2 && f[i] != maxi) maxi2 = f[i];
/* xCrOmKtOh ily traian p7NRKr1ty */         for(int i = 1 ; i <= n ; i++)
/* xCrOmKtOh ily traian p7NRKr1ty */             if(f[i] == maxi2 && f[i] != maxi) fmaxi2++;
/* xCrOmKtOh ily traian p7NRKr1ty */         cout << 1ll * fmaxi2 % mod * maxi % mod * maxi2 % mod;
/* xCrOmKtOh ily traian p7NRKr1ty */     }
/* xCrOmKtOh ily traian p7NRKr1ty */ 
/* xCrOmKtOh ily traian p7NRKr1ty */ }