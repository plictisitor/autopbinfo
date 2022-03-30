/* UdSt5GEhx ily traian MdXB6Fi8J */ #include <algorithm>
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
/* UdSt5GEhx ily traian MdXB6Fi8J */ using namespace std;
/* UdSt5GEhx ily traian MdXB6Fi8J */ 
/* UdSt5GEhx ily traian MdXB6Fi8J */ ifstream cin("terencasa_low.in");
/* UdSt5GEhx ily traian MdXB6Fi8J */ ofstream cout("terencasa_low.out");
/* UdSt5GEhx ily traian MdXB6Fi8J */ 
/* UdSt5GEhx ily traian MdXB6Fi8J */ int n , m , a[1001][1001] , d[1001][1001] , maxi;
/* UdSt5GEhx ily traian MdXB6Fi8J */ 
/* UdSt5GEhx ily traian MdXB6Fi8J */ int main()
/* UdSt5GEhx ily traian MdXB6Fi8J */ {
/* UdSt5GEhx ily traian MdXB6Fi8J */     cin >> n >> m;
/* UdSt5GEhx ily traian MdXB6Fi8J */     for(int i = 1 ; i <= n ; ++i)
/* UdSt5GEhx ily traian MdXB6Fi8J */         for(int j = 1 ; j <= m ; ++j)
/* UdSt5GEhx ily traian MdXB6Fi8J */         {
/* UdSt5GEhx ily traian MdXB6Fi8J */             cin >> a[i][j];
/* UdSt5GEhx ily traian MdXB6Fi8J */             if(i == 1) d[1][j] = a[i][j];
/* UdSt5GEhx ily traian MdXB6Fi8J */             else if(j == 1) d[i][1] = a[i][j];
/* UdSt5GEhx ily traian MdXB6Fi8J */         }
/* UdSt5GEhx ily traian MdXB6Fi8J */     for(int i = 2 ; i <= n ; ++i)
/* UdSt5GEhx ily traian MdXB6Fi8J */         for(int j = 2 ; j <= m ; ++j)
/* UdSt5GEhx ily traian MdXB6Fi8J */         {
/* UdSt5GEhx ily traian MdXB6Fi8J */             if(a[i][j] == 1) d[i][j] = min(d[i - 1][j] , min(d[i - 1][j - 1] , d[i][j - 1])) + 1;
/* UdSt5GEhx ily traian MdXB6Fi8J */             if(d[i][j] > maxi) maxi = d[i][j];
/* UdSt5GEhx ily traian MdXB6Fi8J */         }
/* UdSt5GEhx ily traian MdXB6Fi8J */     cout << maxi << '\n';
/* UdSt5GEhx ily traian MdXB6Fi8J */     for(int i = 1 ; i <= n ; ++i)
/* UdSt5GEhx ily traian MdXB6Fi8J */         for(int j = 1 ; j <= m ; ++j)
/* UdSt5GEhx ily traian MdXB6Fi8J */             if(d[i][j] == maxi)
/* UdSt5GEhx ily traian MdXB6Fi8J */             {
/* UdSt5GEhx ily traian MdXB6Fi8J */                 cout << i - maxi + 1<< " " << j - maxi + 1<< " " << i << " " << j;
/* UdSt5GEhx ily traian MdXB6Fi8J */                 i = n + 1 , j = m + 1;
/* UdSt5GEhx ily traian MdXB6Fi8J */             }
/* UdSt5GEhx ily traian MdXB6Fi8J */ }