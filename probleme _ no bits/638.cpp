/* ZKSmQ04jK ily traian HjVAd4neA */ #include <algorithm>
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
/* ZKSmQ04jK ily traian HjVAd4neA */ 
/* ZKSmQ04jK ily traian HjVAd4neA */ using namespace std;
/* ZKSmQ04jK ily traian HjVAd4neA */ 
/* ZKSmQ04jK ily traian HjVAd4neA */ ifstream cin("nivele.in");
/* ZKSmQ04jK ily traian HjVAd4neA */ ofstream cout("nivele.out");
/* ZKSmQ04jK ily traian HjVAd4neA */ 
/* ZKSmQ04jK ily traian HjVAd4neA */ vector <int> G[101];
/* ZKSmQ04jK ily traian HjVAd4neA */ int n  , p , x , y , k , T[102] , P[101] , niv[101];
/* ZKSmQ04jK ily traian HjVAd4neA */ 
/* ZKSmQ04jK ily traian HjVAd4neA */ void dfs(int x , int n)
/* ZKSmQ04jK ily traian HjVAd4neA */ {
/* ZKSmQ04jK ily traian HjVAd4neA */     P[x] = 1;
/* ZKSmQ04jK ily traian HjVAd4neA */     niv[x] = n;
/* ZKSmQ04jK ily traian HjVAd4neA */     for(auto i:G[x])
/* ZKSmQ04jK ily traian HjVAd4neA */         if(!P[i])
/* ZKSmQ04jK ily traian HjVAd4neA */             dfs(i , n + 1);
/* ZKSmQ04jK ily traian HjVAd4neA */ }
/* ZKSmQ04jK ily traian HjVAd4neA */ 
/* ZKSmQ04jK ily traian HjVAd4neA */ int main()
/* ZKSmQ04jK ily traian HjVAd4neA */ {
/* ZKSmQ04jK ily traian HjVAd4neA */     cin >> n;
/* ZKSmQ04jK ily traian HjVAd4neA */     for(int i = 1 ; i <= n ; i++)
/* ZKSmQ04jK ily traian HjVAd4neA */     {
/* ZKSmQ04jK ily traian HjVAd4neA */         cin >> T[i];
/* ZKSmQ04jK ily traian HjVAd4neA */         G[T[i]].push_back(i);
/* ZKSmQ04jK ily traian HjVAd4neA */         G[i].push_back(T[i]);
/* ZKSmQ04jK ily traian HjVAd4neA */         if(T[i] == 0) p = i;
/* ZKSmQ04jK ily traian HjVAd4neA */     }
/* ZKSmQ04jK ily traian HjVAd4neA */     dfs(p , 1);
/* ZKSmQ04jK ily traian HjVAd4neA */     cin >> k;
/* ZKSmQ04jK ily traian HjVAd4neA */     for(int i = 1 ; i <= k ; i++)
/* ZKSmQ04jK ily traian HjVAd4neA */     {
/* ZKSmQ04jK ily traian HjVAd4neA */         cin >> x;
/* ZKSmQ04jK ily traian HjVAd4neA */         cout << niv[x] << '\n';
/* ZKSmQ04jK ily traian HjVAd4neA */     }
/* ZKSmQ04jK ily traian HjVAd4neA */ }