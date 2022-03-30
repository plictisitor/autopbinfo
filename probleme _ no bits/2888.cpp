/* vGKsyEosl ily traian 1ZnlWvTRq */ #include <algorithm>
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
/* vGKsyEosl ily traian 1ZnlWvTRq */ 
/* vGKsyEosl ily traian 1ZnlWvTRq */ 
/* vGKsyEosl ily traian 1ZnlWvTRq */ using namespace std;
/* vGKsyEosl ily traian 1ZnlWvTRq */ 
/* vGKsyEosl ily traian 1ZnlWvTRq */ int n , x , y , p[50001] , cnt;
/* vGKsyEosl ily traian 1ZnlWvTRq */ vector <int> G[50001];
/* vGKsyEosl ily traian 1ZnlWvTRq */ queue <int> Q;
/* vGKsyEosl ily traian 1ZnlWvTRq */ int main()
/* vGKsyEosl ily traian 1ZnlWvTRq */ {
/* vGKsyEosl ily traian 1ZnlWvTRq */     cin >> n;
/* vGKsyEosl ily traian 1ZnlWvTRq */     for(int i = 1 ; i <= n ; i++)
/* vGKsyEosl ily traian 1ZnlWvTRq */     {
/* vGKsyEosl ily traian 1ZnlWvTRq */         cin >> x >> y;
/* vGKsyEosl ily traian 1ZnlWvTRq */         G[x].push_back(y);
/* vGKsyEosl ily traian 1ZnlWvTRq */         G[y].push_back(x);
/* vGKsyEosl ily traian 1ZnlWvTRq */         p[x]++;
/* vGKsyEosl ily traian 1ZnlWvTRq */         p[y]++;
/* vGKsyEosl ily traian 1ZnlWvTRq */     }
/* vGKsyEosl ily traian 1ZnlWvTRq */ 
/* vGKsyEosl ily traian 1ZnlWvTRq */     for(int i = 1 ; i <= n ; i++)
/* vGKsyEosl ily traian 1ZnlWvTRq */         if(p[i] == 1)Q.push(i);
/* vGKsyEosl ily traian 1ZnlWvTRq */ 
/* vGKsyEosl ily traian 1ZnlWvTRq */     while(!Q.empty())
/* vGKsyEosl ily traian 1ZnlWvTRq */     {
/* vGKsyEosl ily traian 1ZnlWvTRq */         x = Q.front();
/* vGKsyEosl ily traian 1ZnlWvTRq */         for(int y : G[x])
/* vGKsyEosl ily traian 1ZnlWvTRq */             if(p[y])
/* vGKsyEosl ily traian 1ZnlWvTRq */             {
/* vGKsyEosl ily traian 1ZnlWvTRq */                 p[y]--;
/* vGKsyEosl ily traian 1ZnlWvTRq */                 if(p[y] == 1) Q.push(y);
/* vGKsyEosl ily traian 1ZnlWvTRq */             }
/* vGKsyEosl ily traian 1ZnlWvTRq */         p[x] = 0;
/* vGKsyEosl ily traian 1ZnlWvTRq */         Q.pop();
/* vGKsyEosl ily traian 1ZnlWvTRq */     }
/* vGKsyEosl ily traian 1ZnlWvTRq */     for(int i = 1 ; i <= n ; i++)
/* vGKsyEosl ily traian 1ZnlWvTRq */         if(p[i] == 2) cnt++;
/* vGKsyEosl ily traian 1ZnlWvTRq */     cout <<cnt;
/* vGKsyEosl ily traian 1ZnlWvTRq */ }