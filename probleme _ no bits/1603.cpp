/* CBzMjOhCz ily traian Ro0D8BwaS */ #include <algorithm>
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
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ using namespace std;
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ ifstream cin("componenteconexe3.in");
/* CBzMjOhCz ily traian Ro0D8BwaS */ ofstream cout("componenteconexe3.out");
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ int n , x , y , C[101] , cnt , maxi , rez , f[101];
/* CBzMjOhCz ily traian Ro0D8BwaS */ vector <int> G[101];
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ void dfs(int v , int c)
/* CBzMjOhCz ily traian Ro0D8BwaS */ {
/* CBzMjOhCz ily traian Ro0D8BwaS */     C[v] = c;
/* CBzMjOhCz ily traian Ro0D8BwaS */     for(int i : G[v])
/* CBzMjOhCz ily traian Ro0D8BwaS */         if(!C[i]) dfs(i , c);
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ }
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */ int main()
/* CBzMjOhCz ily traian Ro0D8BwaS */ {
/* CBzMjOhCz ily traian Ro0D8BwaS */     cin >> n;
/* CBzMjOhCz ily traian Ro0D8BwaS */     while(cin >> x >> y)
/* CBzMjOhCz ily traian Ro0D8BwaS */     {
/* CBzMjOhCz ily traian Ro0D8BwaS */         G[x].push_back(y);
/* CBzMjOhCz ily traian Ro0D8BwaS */         G[y].push_back(x);
/* CBzMjOhCz ily traian Ro0D8BwaS */     }
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */     for(int i = 1 ; i <= n ; i++)
/* CBzMjOhCz ily traian Ro0D8BwaS */         if(C[i] == 0) cnt++ , dfs(i , cnt);
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */     for(int i = 1 ; i <= n ; i++)
/* CBzMjOhCz ily traian Ro0D8BwaS */         f[C[i]]++;
/* CBzMjOhCz ily traian Ro0D8BwaS */     for(int i = 1 ; i <= n ; i++)
/* CBzMjOhCz ily traian Ro0D8BwaS */         if(f[i] > maxi) maxi = f[i] , rez = i;
/* CBzMjOhCz ily traian Ro0D8BwaS */ 
/* CBzMjOhCz ily traian Ro0D8BwaS */     cout << rez << " " << maxi;
/* CBzMjOhCz ily traian Ro0D8BwaS */ }