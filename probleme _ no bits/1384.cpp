/* u0HDueenx ily traian ECGAekkON */ #include <algorithm>
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
/* u0HDueenx ily traian ECGAekkON */ using namespace std;
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */ ifstream cin("cladire5.in");
/* u0HDueenx ily traian ECGAekkON */ ofstream cout("cladire5.out");
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */ int n , m , a[201][201] , maxi , b[201][201] , sum;
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */ struct poz
/* u0HDueenx ily traian ECGAekkON */ {
/* u0HDueenx ily traian ECGAekkON */     int i , j;
/* u0HDueenx ily traian ECGAekkON */ }rasp[401];
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */ bool inside(int i , int j)
/* u0HDueenx ily traian ECGAekkON */ {
/* u0HDueenx ily traian ECGAekkON */     return i >= 1 && i <= n && j >= 1 && j <= m;
/* u0HDueenx ily traian ECGAekkON */ }
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */ int main()
/* u0HDueenx ily traian ECGAekkON */ {
/* u0HDueenx ily traian ECGAekkON */     cin >> n >> m >> sum;
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */     for(int i = 1 ; i <= n ; i++)
/* u0HDueenx ily traian ECGAekkON */     {
/* u0HDueenx ily traian ECGAekkON */         for(int j = 1 ; j <= m ; j++)
/* u0HDueenx ily traian ECGAekkON */             cin >> a[i][j];
/* u0HDueenx ily traian ECGAekkON */     }
/* u0HDueenx ily traian ECGAekkON */     for(int i = n ; i > 0 ; i--)
/* u0HDueenx ily traian ECGAekkON */     {
/* u0HDueenx ily traian ECGAekkON */         for(int j = 1 ; j <= m ; j++)
/* u0HDueenx ily traian ECGAekkON */         {
/* u0HDueenx ily traian ECGAekkON */             if(inside(i , j - 1) && inside(i + 1 , j)) a[i][j] += min(a[i][j - 1] , a[i + 1][j]);
/* u0HDueenx ily traian ECGAekkON */             else if(inside(i , j - 1)) a[i][j] += a[i][j - 1];
/* u0HDueenx ily traian ECGAekkON */             else if(inside(i + 1 , j)) a[i][j] += a[i + 1][j];
/* u0HDueenx ily traian ECGAekkON */             //cout << a[i][j] << " " << i << " " << j << '\n';;
/* u0HDueenx ily traian ECGAekkON */         }
/* u0HDueenx ily traian ECGAekkON */     }
/* u0HDueenx ily traian ECGAekkON */ 
/* u0HDueenx ily traian ECGAekkON */     cout << sum - a[1][m] << '\n';
/* u0HDueenx ily traian ECGAekkON */ }