/* N6vaqCX9t ily traian tM3uuxSoD */ #include <algorithm>
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
/* N6vaqCX9t ily traian tM3uuxSoD */ using namespace std;
/* N6vaqCX9t ily traian tM3uuxSoD */ 
/* N6vaqCX9t ily traian tM3uuxSoD */ ifstream cin("foto.in");
/* N6vaqCX9t ily traian tM3uuxSoD */ ofstream cout("foto.out");
/* N6vaqCX9t ily traian tM3uuxSoD */ 
/* N6vaqCX9t ily traian tM3uuxSoD */ int cer , n , m , a[101][101] , cnt , lmax , nrF , H;
/* N6vaqCX9t ily traian tM3uuxSoD */ 
/* N6vaqCX9t ily traian tM3uuxSoD */ bool inside(int i , int j)
/* N6vaqCX9t ily traian tM3uuxSoD */ {
/* N6vaqCX9t ily traian tM3uuxSoD */     return i >= 1 && j >= 1 && i <= n && j <= m;
/* N6vaqCX9t ily traian tM3uuxSoD */ }
/* N6vaqCX9t ily traian tM3uuxSoD */ 
/* N6vaqCX9t ily traian tM3uuxSoD */ int main()
/* N6vaqCX9t ily traian tM3uuxSoD */ {
/* N6vaqCX9t ily traian tM3uuxSoD */     cin >> cer >> n >> m;
/* N6vaqCX9t ily traian tM3uuxSoD */     for(int i = 1 ; i <= n ; i++)
/* N6vaqCX9t ily traian tM3uuxSoD */     {
/* N6vaqCX9t ily traian tM3uuxSoD */         cnt = 0;
/* N6vaqCX9t ily traian tM3uuxSoD */         for(int j = 1 ; j <= m ; j++)
/* N6vaqCX9t ily traian tM3uuxSoD */         {
/* N6vaqCX9t ily traian tM3uuxSoD */             cin >> a[i][j];
/* N6vaqCX9t ily traian tM3uuxSoD */             if(a[i][j] == 0)
/* N6vaqCX9t ily traian tM3uuxSoD */             {
/* N6vaqCX9t ily traian tM3uuxSoD */                 cnt++;
/* N6vaqCX9t ily traian tM3uuxSoD */                 if(cnt > lmax) lmax = cnt;
/* N6vaqCX9t ily traian tM3uuxSoD */             }
/* N6vaqCX9t ily traian tM3uuxSoD */             else
/* N6vaqCX9t ily traian tM3uuxSoD */             {
/* N6vaqCX9t ily traian tM3uuxSoD */                 cnt = 0;
/* N6vaqCX9t ily traian tM3uuxSoD */                 if(inside(i - 1 , j) && a[i - 1][j] != 0) a[i][j] = a[i - 1][j]+1;
/* N6vaqCX9t ily traian tM3uuxSoD */                 else if(inside(i - 1 , j - 1) &&a[i - 1][j - 1]!=0) a[i][j] = a[i - 1][j - 1] + 1;
/* N6vaqCX9t ily traian tM3uuxSoD */                 else if(inside(i - 1 , j + 1) &&a[i - 1][j + 1]!=0) a[i][j] = a[i - 1][j + 1] + 1;
/* N6vaqCX9t ily traian tM3uuxSoD */                 if(a[i][j] > H) H = a[i][j];
/* N6vaqCX9t ily traian tM3uuxSoD */                 if(a[i][j] == 1)nrF++;
/* N6vaqCX9t ily traian tM3uuxSoD */             }
/* N6vaqCX9t ily traian tM3uuxSoD */         }
/* N6vaqCX9t ily traian tM3uuxSoD */     }
/* N6vaqCX9t ily traian tM3uuxSoD */     if(cer == 1)cout << lmax;
/* N6vaqCX9t ily traian tM3uuxSoD */     else cout << nrF << " " << H;
/* N6vaqCX9t ily traian tM3uuxSoD */     return 0;
/* N6vaqCX9t ily traian tM3uuxSoD */ }