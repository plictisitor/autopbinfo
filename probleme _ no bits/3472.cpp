/* l17kIVcFo ily traian Nd0Lkytfr */ #include <algorithm>
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
/* l17kIVcFo ily traian Nd0Lkytfr */ using namespace std;
/* l17kIVcFo ily traian Nd0Lkytfr */ 
/* l17kIVcFo ily traian Nd0Lkytfr */ ifstream cin("terencasa.in");
/* l17kIVcFo ily traian Nd0Lkytfr */ ofstream cout("terencasa.out");
/* l17kIVcFo ily traian Nd0Lkytfr */ 
/* l17kIVcFo ily traian Nd0Lkytfr */ int n , m , a[1001][1001] , d[1001][1001] , maxi;
/* l17kIVcFo ily traian Nd0Lkytfr */ 
/* l17kIVcFo ily traian Nd0Lkytfr */ int main()
/* l17kIVcFo ily traian Nd0Lkytfr */ {
/* l17kIVcFo ily traian Nd0Lkytfr */     cin >> n >> m;
/* l17kIVcFo ily traian Nd0Lkytfr */     for(int i = 1 ; i <= n ; ++i)
/* l17kIVcFo ily traian Nd0Lkytfr */         for(int j = 1 ; j <= m ; ++j)
/* l17kIVcFo ily traian Nd0Lkytfr */         {
/* l17kIVcFo ily traian Nd0Lkytfr */             cin >> a[i][j];
/* l17kIVcFo ily traian Nd0Lkytfr */             if(i == 1) d[1][j] = a[i][j];
/* l17kIVcFo ily traian Nd0Lkytfr */             else if(j == 1) d[i][1] = a[i][j];
/* l17kIVcFo ily traian Nd0Lkytfr */         }
/* l17kIVcFo ily traian Nd0Lkytfr */     for(int i = 2 ; i <= n ; ++i)
/* l17kIVcFo ily traian Nd0Lkytfr */         for(int j = 2 ; j <= m ; ++j)
/* l17kIVcFo ily traian Nd0Lkytfr */         {
/* l17kIVcFo ily traian Nd0Lkytfr */             if(a[i][j] == 1) d[i][j] = min(d[i - 1][j] , min(d[i - 1][j - 1] , d[i][j - 1])) + 1;
/* l17kIVcFo ily traian Nd0Lkytfr */             if(d[i][j] > maxi) maxi = d[i][j];
/* l17kIVcFo ily traian Nd0Lkytfr */         }
/* l17kIVcFo ily traian Nd0Lkytfr */     cout << maxi << '\n';
/* l17kIVcFo ily traian Nd0Lkytfr */     for(int i = 1 ; i <= n ; ++i)
/* l17kIVcFo ily traian Nd0Lkytfr */         for(int j = 1 ; j <= m ; ++j)
/* l17kIVcFo ily traian Nd0Lkytfr */             if(d[i][j] == maxi)
/* l17kIVcFo ily traian Nd0Lkytfr */             {
/* l17kIVcFo ily traian Nd0Lkytfr */                 cout << i - maxi + 1<< " " << j - maxi + 1<< " " << i << " " << j;
/* l17kIVcFo ily traian Nd0Lkytfr */                 i = n + 1 , j = m + 1;
/* l17kIVcFo ily traian Nd0Lkytfr */             }
/* l17kIVcFo ily traian Nd0Lkytfr */ }