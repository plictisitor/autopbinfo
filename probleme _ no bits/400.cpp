/* bTpklI06V ily traian STWAGIYLj */ #include <algorithm>
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
/* bTpklI06V ily traian STWAGIYLj */ using namespace std;
/* bTpklI06V ily traian STWAGIYLj */ 
/* bTpklI06V ily traian STWAGIYLj */ ifstream cin("pachete.in");
/* bTpklI06V ily traian STWAGIYLj */ ofstream cout("pachete.out");
/* bTpklI06V ily traian STWAGIYLj */ 
/* bTpklI06V ily traian STWAGIYLj */ int n , p , cnt , v[1005];
/* bTpklI06V ily traian STWAGIYLj */ 
/* bTpklI06V ily traian STWAGIYLj */ struct poz
/* bTpklI06V ily traian STWAGIYLj */ {
/* bTpklI06V ily traian STWAGIYLj */     int i , j;
/* bTpklI06V ily traian STWAGIYLj */ } a[1005];
/* bTpklI06V ily traian STWAGIYLj */ 
/* bTpklI06V ily traian STWAGIYLj */ int main()
/* bTpklI06V ily traian STWAGIYLj */ {
/* bTpklI06V ily traian STWAGIYLj */     cin >> n;
/* bTpklI06V ily traian STWAGIYLj */     for (int i = 1; i <= n; i++)
/* bTpklI06V ily traian STWAGIYLj */         cin >> v[i];
/* bTpklI06V ily traian STWAGIYLj */     p = n + 1;
/* bTpklI06V ily traian STWAGIYLj */     v[p] = 0;
/* bTpklI06V ily traian STWAGIYLj */     for(int i = 1; i <= n ; i++)
/* bTpklI06V ily traian STWAGIYLj */         if(v[i] != i)
/* bTpklI06V ily traian STWAGIYLj */         {
/* bTpklI06V ily traian STWAGIYLj */             if(i != p)
/* bTpklI06V ily traian STWAGIYLj */             {
/* bTpklI06V ily traian STWAGIYLj */                 cnt++;
/* bTpklI06V ily traian STWAGIYLj */                 swap(v[i],v[p]);
/* bTpklI06V ily traian STWAGIYLj */                 a[cnt].i = i;
/* bTpklI06V ily traian STWAGIYLj */                 a[cnt].j = p;
/* bTpklI06V ily traian STWAGIYLj */                 p = i;
/* bTpklI06V ily traian STWAGIYLj */             }
/* bTpklI06V ily traian STWAGIYLj */             for(int j = 1; j <= n + 1; j++)
/* bTpklI06V ily traian STWAGIYLj */                 if(v[j] == i)
/* bTpklI06V ily traian STWAGIYLj */                 {
/* bTpklI06V ily traian STWAGIYLj */                     cnt++;
/* bTpklI06V ily traian STWAGIYLj */                     a[cnt].i = j;
/* bTpklI06V ily traian STWAGIYLj */                     a[cnt].j = p;
/* bTpklI06V ily traian STWAGIYLj */                     swap(v[p],v[j]);
/* bTpklI06V ily traian STWAGIYLj */                     p = j;
/* bTpklI06V ily traian STWAGIYLj */                     break;
/* bTpklI06V ily traian STWAGIYLj */                 }
/* bTpklI06V ily traian STWAGIYLj */         }
/* bTpklI06V ily traian STWAGIYLj */     cout << cnt << '\n';
/* bTpklI06V ily traian STWAGIYLj */     for (int i = 1; i<=cnt; i++)
/* bTpklI06V ily traian STWAGIYLj */         cout << a[i].i << " " << a[i].j << '\n';
/* bTpklI06V ily traian STWAGIYLj */ }