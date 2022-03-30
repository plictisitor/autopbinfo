/* oQJoF7lD1 ily traian J0wlcg1R7 */ #include <algorithm>
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
/* oQJoF7lD1 ily traian J0wlcg1R7 */ 
/* oQJoF7lD1 ily traian J0wlcg1R7 */ using namespace std;
/* oQJoF7lD1 ily traian J0wlcg1R7 */ 
/* oQJoF7lD1 ily traian J0wlcg1R7 */ ifstream cin("frunze.in");
/* oQJoF7lD1 ily traian J0wlcg1R7 */ ofstream cout("frunze.out");
/* oQJoF7lD1 ily traian J0wlcg1R7 */ 
/* oQJoF7lD1 ily traian J0wlcg1R7 */ vector <int> G[101];
/* oQJoF7lD1 ily traian J0wlcg1R7 */ 
/* oQJoF7lD1 ily traian J0wlcg1R7 */ int n , x , k , rez[101] , p , cnt;
/* oQJoF7lD1 ily traian J0wlcg1R7 */ 
/* oQJoF7lD1 ily traian J0wlcg1R7 */ int main()
/* oQJoF7lD1 ily traian J0wlcg1R7 */ {
/* oQJoF7lD1 ily traian J0wlcg1R7 */     cin >> n;
/* oQJoF7lD1 ily traian J0wlcg1R7 */     for(int i = 1 ; i <= n ; i++)
/* oQJoF7lD1 ily traian J0wlcg1R7 */     {
/* oQJoF7lD1 ily traian J0wlcg1R7 */         cin >> x;
/* oQJoF7lD1 ily traian J0wlcg1R7 */         if(x != 0) G[x].push_back(i);
/* oQJoF7lD1 ily traian J0wlcg1R7 */         if(x == 0) p = i;
/* oQJoF7lD1 ily traian J0wlcg1R7 */ 
/* oQJoF7lD1 ily traian J0wlcg1R7 */     }
/* oQJoF7lD1 ily traian J0wlcg1R7 */     cout << p << '\n';
/* oQJoF7lD1 ily traian J0wlcg1R7 */     for(int i = 1 ; i <= n ; i++)
/* oQJoF7lD1 ily traian J0wlcg1R7 */     {
/* oQJoF7lD1 ily traian J0wlcg1R7 */         int ok = 0;
/* oQJoF7lD1 ily traian J0wlcg1R7 */         for(auto j:G[i])
/* oQJoF7lD1 ily traian J0wlcg1R7 */             ok++;
/* oQJoF7lD1 ily traian J0wlcg1R7 */         if(ok == 0)
/* oQJoF7lD1 ily traian J0wlcg1R7 */             cnt++ , rez[cnt] = i;
/* oQJoF7lD1 ily traian J0wlcg1R7 */     }
/* oQJoF7lD1 ily traian J0wlcg1R7 */     cout << cnt << '\n';
/* oQJoF7lD1 ily traian J0wlcg1R7 */     for(int i = 1 ; i <= cnt ; i++)
/* oQJoF7lD1 ily traian J0wlcg1R7 */         cout << rez[i] << " ";
/* oQJoF7lD1 ily traian J0wlcg1R7 */ }