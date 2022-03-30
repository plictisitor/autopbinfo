/* knnaxUi4u ily traian thcMR9iHc */ #include <algorithm>
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
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */ using namespace std;
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */ ifstream cin("knivel.in");
/* knnaxUi4u ily traian thcMR9iHc */ ofstream cout("knivel.out");
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */ vector <int> G[101];
/* knnaxUi4u ily traian thcMR9iHc */ int n  , p , x , y , k , T[102] , P[101] , q , d[101] , maxi;
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */ void dfs(int x)
/* knnaxUi4u ily traian thcMR9iHc */ {
/* knnaxUi4u ily traian thcMR9iHc */     P[x] = 1;
/* knnaxUi4u ily traian thcMR9iHc */     for(auto i:G[x])
/* knnaxUi4u ily traian thcMR9iHc */         if(!P[i])
/* knnaxUi4u ily traian thcMR9iHc */         {
/* knnaxUi4u ily traian thcMR9iHc */             d[i] = d[x] + 1;
/* knnaxUi4u ily traian thcMR9iHc */             dfs(i);
/* knnaxUi4u ily traian thcMR9iHc */         }
/* knnaxUi4u ily traian thcMR9iHc */ }
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */ int main()
/* knnaxUi4u ily traian thcMR9iHc */ {
/* knnaxUi4u ily traian thcMR9iHc */     cin >> n >> k;
/* knnaxUi4u ily traian thcMR9iHc */     for(int i = 1 ; i <= n ; i++)
/* knnaxUi4u ily traian thcMR9iHc */     {
/* knnaxUi4u ily traian thcMR9iHc */         cin >> T[i];
/* knnaxUi4u ily traian thcMR9iHc */         if(T[i] != 0)
/* knnaxUi4u ily traian thcMR9iHc */         {
/* knnaxUi4u ily traian thcMR9iHc */             G[T[i]].push_back(i);
/* knnaxUi4u ily traian thcMR9iHc */             G[i].push_back(T[i]);
/* knnaxUi4u ily traian thcMR9iHc */         }
/* knnaxUi4u ily traian thcMR9iHc */         if(T[i] == 0) p = i;
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */     }
/* knnaxUi4u ily traian thcMR9iHc */ 
/* knnaxUi4u ily traian thcMR9iHc */     dfs(p);
/* knnaxUi4u ily traian thcMR9iHc */     for(int i = 1 ; i <= n ; i++)
/* knnaxUi4u ily traian thcMR9iHc */         if(d[i] + 1 == k) cout << i << " ";
/* knnaxUi4u ily traian thcMR9iHc */ }