/* fVDKUvQOa ily traian 4U4wJz7Sg */ #include <algorithm>
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
/* fVDKUvQOa ily traian 4U4wJz7Sg */ using namespace std;
/* fVDKUvQOa ily traian 4U4wJz7Sg */ 
/* fVDKUvQOa ily traian 4U4wJz7Sg */ ifstream cin("dfs.in");
/* fVDKUvQOa ily traian 4U4wJz7Sg */ ofstream cout("dfs.out");
/* fVDKUvQOa ily traian 4U4wJz7Sg */ 
/* fVDKUvQOa ily traian 4U4wJz7Sg */ int n , m , a[101][101] , x , y , P[101] , p;
/* fVDKUvQOa ily traian 4U4wJz7Sg */ 
/* fVDKUvQOa ily traian 4U4wJz7Sg */ void dfs(int v)
/* fVDKUvQOa ily traian 4U4wJz7Sg */ {
/* fVDKUvQOa ily traian 4U4wJz7Sg */     cout << v << " ";
/* fVDKUvQOa ily traian 4U4wJz7Sg */     P[v] = 1;
/* fVDKUvQOa ily traian 4U4wJz7Sg */     for(int i = 1 ; i <= n ; i++)
/* fVDKUvQOa ily traian 4U4wJz7Sg */         if(!P[i] && a[v][i] == 1) dfs(i);
/* fVDKUvQOa ily traian 4U4wJz7Sg */ }
/* fVDKUvQOa ily traian 4U4wJz7Sg */ 
/* fVDKUvQOa ily traian 4U4wJz7Sg */ int main()
/* fVDKUvQOa ily traian 4U4wJz7Sg */ {
/* fVDKUvQOa ily traian 4U4wJz7Sg */     cin >> n >> m >> p;
/* fVDKUvQOa ily traian 4U4wJz7Sg */     for(int i = 1 ; i <= m ; i++)
/* fVDKUvQOa ily traian 4U4wJz7Sg */     {
/* fVDKUvQOa ily traian 4U4wJz7Sg */         cin >> x >> y;
/* fVDKUvQOa ily traian 4U4wJz7Sg */         a[x][y] = a[y][x] = 1;
/* fVDKUvQOa ily traian 4U4wJz7Sg */     }
/* fVDKUvQOa ily traian 4U4wJz7Sg */     dfs(p);
/* fVDKUvQOa ily traian 4U4wJz7Sg */ }