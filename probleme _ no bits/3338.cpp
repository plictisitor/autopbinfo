/* VloW4OmFl ily traian M8fCMA9Jo */ #include <algorithm>
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
/* VloW4OmFl ily traian M8fCMA9Jo */ 
/* VloW4OmFl ily traian M8fCMA9Jo */ using namespace std;
/* VloW4OmFl ily traian M8fCMA9Jo */ 
/* VloW4OmFl ily traian M8fCMA9Jo */ vector <int>G[101];
/* VloW4OmFl ily traian M8fCMA9Jo */ 
/* VloW4OmFl ily traian M8fCMA9Jo */ struct poz
/* VloW4OmFl ily traian M8fCMA9Jo */ {
/* VloW4OmFl ily traian M8fCMA9Jo */     int val , cul;
/* VloW4OmFl ily traian M8fCMA9Jo */ }f[2001];
/* VloW4OmFl ily traian M8fCMA9Jo */ int n , m , x , y , cer , rez[2001] , cnt;
/* VloW4OmFl ily traian M8fCMA9Jo */ 
/* VloW4OmFl ily traian M8fCMA9Jo */ int main()
/* VloW4OmFl ily traian M8fCMA9Jo */ {
/* VloW4OmFl ily traian M8fCMA9Jo */     cin >> n >> m;
/* VloW4OmFl ily traian M8fCMA9Jo */     for(int i = 1 ; i <= n ; i++)
/* VloW4OmFl ily traian M8fCMA9Jo */         f[i].val = i , f[i].cul = i;
/* VloW4OmFl ily traian M8fCMA9Jo */     for(int i = 1 ; i <= m ; i++)
/* VloW4OmFl ily traian M8fCMA9Jo */     {
/* VloW4OmFl ily traian M8fCMA9Jo */         cin >> cer >> x >> y;
/* VloW4OmFl ily traian M8fCMA9Jo */         if(cer == 1)
/* VloW4OmFl ily traian M8fCMA9Jo */         {
/* VloW4OmFl ily traian M8fCMA9Jo */             int mini = min(f[x].cul , f[y].cul) , maxi = max(f[x].cul , f[y].cul);
/* VloW4OmFl ily traian M8fCMA9Jo */             f[x].cul = mini;
/* VloW4OmFl ily traian M8fCMA9Jo */             f[y].cul = mini;
/* VloW4OmFl ily traian M8fCMA9Jo */             for(int i = 1 ; i <= n ; i++)
/* VloW4OmFl ily traian M8fCMA9Jo */                 if(f[i].cul == maxi) f[i].cul = mini;
/* VloW4OmFl ily traian M8fCMA9Jo */         }
/* VloW4OmFl ily traian M8fCMA9Jo */         else
/* VloW4OmFl ily traian M8fCMA9Jo */         {
/* VloW4OmFl ily traian M8fCMA9Jo */             if(f[x].cul == f[y].cul) rez[++cnt] = 1;
/* VloW4OmFl ily traian M8fCMA9Jo */             else rez[++cnt] = 0;
/* VloW4OmFl ily traian M8fCMA9Jo */         }
/* VloW4OmFl ily traian M8fCMA9Jo */     }
/* VloW4OmFl ily traian M8fCMA9Jo */     for(int i = 1 ; i <= cnt ; i++)
/* VloW4OmFl ily traian M8fCMA9Jo */         if(rez[i] == 1) cout << "DA\n";
/* VloW4OmFl ily traian M8fCMA9Jo */         else cout << "NU\n";
/* VloW4OmFl ily traian M8fCMA9Jo */ }