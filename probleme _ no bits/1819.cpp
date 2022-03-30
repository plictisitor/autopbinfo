/* Ki1Udmn0o ily traian mZuGmkmid */ #include <algorithm>
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
/* Ki1Udmn0o ily traian mZuGmkmid */ using namespace std;
/* Ki1Udmn0o ily traian mZuGmkmid */ ifstream cin("copaci.in");
/* Ki1Udmn0o ily traian mZuGmkmid */ ofstream cout("copaci.out");
/* Ki1Udmn0o ily traian mZuGmkmid */ bool a[501][501];
/* Ki1Udmn0o ily traian mZuGmkmid */ int main()
/* Ki1Udmn0o ily traian mZuGmkmid */ {
/* Ki1Udmn0o ily traian mZuGmkmid */     int n , m , p , x , y , l = 0 , lmax = -1 , st = -1;
/* Ki1Udmn0o ily traian mZuGmkmid */     cin >> n >> m >> p;
/* Ki1Udmn0o ily traian mZuGmkmid */     for(int i = 0 ; i < p ; ++i)
/* Ki1Udmn0o ily traian mZuGmkmid */     {
/* Ki1Udmn0o ily traian mZuGmkmid */         cin >> x >> y;
/* Ki1Udmn0o ily traian mZuGmkmid */         a[x][y] = 1;
/* Ki1Udmn0o ily traian mZuGmkmid */     }
/* Ki1Udmn0o ily traian mZuGmkmid */     for(int j = 1 ; j <= m ; ++j)
/* Ki1Udmn0o ily traian mZuGmkmid */         for(int i = 1 ; i <= n ; ++i)
/* Ki1Udmn0o ily traian mZuGmkmid */         {
/* Ki1Udmn0o ily traian mZuGmkmid */             if(a[i][j] == 1)
/* Ki1Udmn0o ily traian mZuGmkmid */             {
/* Ki1Udmn0o ily traian mZuGmkmid */                 if(l > lmax && st != -1) lmax = l;
/* Ki1Udmn0o ily traian mZuGmkmid */                 st = a[i][j];
/* Ki1Udmn0o ily traian mZuGmkmid */                 l = 0;
/* Ki1Udmn0o ily traian mZuGmkmid */             }
/* Ki1Udmn0o ily traian mZuGmkmid */             if(a[i][j] == 0)l++;
/* Ki1Udmn0o ily traian mZuGmkmid */         }
/* Ki1Udmn0o ily traian mZuGmkmid */     st=-1;
/* Ki1Udmn0o ily traian mZuGmkmid */     cout << lmax << endl;
/* Ki1Udmn0o ily traian mZuGmkmid */     int dr = 0;
/* Ki1Udmn0o ily traian mZuGmkmid */     for(int j = 1 ; j <= m ; ++j)
/* Ki1Udmn0o ily traian mZuGmkmid */         for(int i = 1 ; i <= n ; ++i)
/* Ki1Udmn0o ily traian mZuGmkmid */         {
/* Ki1Udmn0o ily traian mZuGmkmid */             if(a[i][j]==1)
/* Ki1Udmn0o ily traian mZuGmkmid */             {
/* Ki1Udmn0o ily traian mZuGmkmid */                 if(l == lmax && st != -1)
/* Ki1Udmn0o ily traian mZuGmkmid */                     cout << dr << ' ' << st << ' ' << i << ' ' << j << endl;
/* Ki1Udmn0o ily traian mZuGmkmid */                 st = j , dr = i;
/* Ki1Udmn0o ily traian mZuGmkmid */                 l = 0;
/* Ki1Udmn0o ily traian mZuGmkmid */             }
/* Ki1Udmn0o ily traian mZuGmkmid */             if(a[i][j]==0) l++;
/* Ki1Udmn0o ily traian mZuGmkmid */         }
/* Ki1Udmn0o ily traian mZuGmkmid */     return 0;
/* Ki1Udmn0o ily traian mZuGmkmid */ }