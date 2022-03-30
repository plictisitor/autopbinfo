/* MTJMk31ID ily traian 8n95W3imu */ #include <algorithm>
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
/* MTJMk31ID ily traian 8n95W3imu */ using namespace std;
/* MTJMk31ID ily traian 8n95W3imu */ 
/* MTJMk31ID ily traian 8n95W3imu */ ifstream cin("soarece1.in");
/* MTJMk31ID ily traian 8n95W3imu */ ofstream cout("soarece1.out");
/* MTJMk31ID ily traian 8n95W3imu */ 
/* MTJMk31ID ily traian 8n95W3imu */ int n , m , is , js , ib , jb , a[11][11] , gata;
/* MTJMk31ID ily traian 8n95W3imu */ char s;
/* MTJMk31ID ily traian 8n95W3imu */ 
/* MTJMk31ID ily traian 8n95W3imu */ const int di[] = {0 ,  0 , 1 , -1};
/* MTJMk31ID ily traian 8n95W3imu */ const int dj[] = {1 , -1 , 0 ,  0};
/* MTJMk31ID ily traian 8n95W3imu */ 
/* MTJMk31ID ily traian 8n95W3imu */ int inside(int i , int j)
/* MTJMk31ID ily traian 8n95W3imu */ {
/* MTJMk31ID ily traian 8n95W3imu */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* MTJMk31ID ily traian 8n95W3imu */ }
/* MTJMk31ID ily traian 8n95W3imu */ 
/* MTJMk31ID ily traian 8n95W3imu */ void afisare()
/* MTJMk31ID ily traian 8n95W3imu */ {
/* MTJMk31ID ily traian 8n95W3imu */     gata++;
/* MTJMk31ID ily traian 8n95W3imu */     for(int i = 1 ; i <= n ; ++i)
/* MTJMk31ID ily traian 8n95W3imu */     {
/* MTJMk31ID ily traian 8n95W3imu */         for(int j = 1 ; j <= m ; ++j)
/* MTJMk31ID ily traian 8n95W3imu */             if(a[i][j] == -1) cout << 0 << " ";
/* MTJMk31ID ily traian 8n95W3imu */             else cout << a[i][j] << " ";
/* MTJMk31ID ily traian 8n95W3imu */         cout << '\n';
/* MTJMk31ID ily traian 8n95W3imu */     }
/* MTJMk31ID ily traian 8n95W3imu */ }
/* MTJMk31ID ily traian 8n95W3imu */ void back(int i , int j , int pas)
/* MTJMk31ID ily traian 8n95W3imu */ {
/* MTJMk31ID ily traian 8n95W3imu */     for(int d = 0 ; d < 4 && !gata; d++)
/* MTJMk31ID ily traian 8n95W3imu */     {
/* MTJMk31ID ily traian 8n95W3imu */         int inou = i + di[d];
/* MTJMk31ID ily traian 8n95W3imu */         int jnou = j + dj[d];
/* MTJMk31ID ily traian 8n95W3imu */         if(inside(inou , jnou) && a[inou][jnou] == 0)
/* MTJMk31ID ily traian 8n95W3imu */         {
/* MTJMk31ID ily traian 8n95W3imu */             a[inou][jnou] = pas;
/* MTJMk31ID ily traian 8n95W3imu */             if(inou == ib && jnou == jb) afisare();
/* MTJMk31ID ily traian 8n95W3imu */             else back(inou , jnou , pas + 1);
/* MTJMk31ID ily traian 8n95W3imu */             a[inou][jnou] = 0;
/* MTJMk31ID ily traian 8n95W3imu */         }
/* MTJMk31ID ily traian 8n95W3imu */     }
/* MTJMk31ID ily traian 8n95W3imu */ }
/* MTJMk31ID ily traian 8n95W3imu */ int main()
/* MTJMk31ID ily traian 8n95W3imu */ {
/* MTJMk31ID ily traian 8n95W3imu */     cin >> n >> m;
/* MTJMk31ID ily traian 8n95W3imu */     for(int i = 1 ; i <= n ; ++i)
/* MTJMk31ID ily traian 8n95W3imu */         for(int j = 1 ; j <= m ; ++j)
/* MTJMk31ID ily traian 8n95W3imu */         {
/* MTJMk31ID ily traian 8n95W3imu */             cin >> s;
/* MTJMk31ID ily traian 8n95W3imu */             if(s == '_') a[i][j] = 0;
/* MTJMk31ID ily traian 8n95W3imu */             else if(s == '#') a[i][j] = -1;
/* MTJMk31ID ily traian 8n95W3imu */             else if(s == 'S') a[i][j] = 0 , is = i , js = j;
/* MTJMk31ID ily traian 8n95W3imu */             else if(s == 'B') a[i][j] = 0 , ib = i , jb = j;
/* MTJMk31ID ily traian 8n95W3imu */         }
/* MTJMk31ID ily traian 8n95W3imu */     a[is][js] = 1;
/* MTJMk31ID ily traian 8n95W3imu */     back(is, js, 2);
/* MTJMk31ID ily traian 8n95W3imu */     if(gata == 0)
/* MTJMk31ID ily traian 8n95W3imu */         for(int i = 1 ; i <= n ; ++i)
/* MTJMk31ID ily traian 8n95W3imu */         {
/* MTJMk31ID ily traian 8n95W3imu */             for(int j = 1 ; j <= m ; ++j)
/* MTJMk31ID ily traian 8n95W3imu */                 cout << 0 << " ";
/* MTJMk31ID ily traian 8n95W3imu */             cout << '\n';
/* MTJMk31ID ily traian 8n95W3imu */         }
/* MTJMk31ID ily traian 8n95W3imu */     return 0;
/* MTJMk31ID ily traian 8n95W3imu */ }