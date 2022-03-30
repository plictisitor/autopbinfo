/* ZgK34qnc8 ily traian LXPgx9ujh */ #include <algorithm>
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
/* ZgK34qnc8 ily traian LXPgx9ujh */ using namespace std;
/* ZgK34qnc8 ily traian LXPgx9ujh */ ifstream cin("graf_complet.in");
/* ZgK34qnc8 ily traian LXPgx9ujh */ ofstream cout("graf_complet.out");
/* ZgK34qnc8 ily traian LXPgx9ujh */ int a[102][102];
/* ZgK34qnc8 ily traian LXPgx9ujh */ int main()
/* ZgK34qnc8 ily traian LXPgx9ujh */ {
/* ZgK34qnc8 ily traian LXPgx9ujh */     int n , m;
/* ZgK34qnc8 ily traian LXPgx9ujh */     cin >> n;
/* ZgK34qnc8 ily traian LXPgx9ujh */     for(int i = 0 ; i < n ; ++i)
/* ZgK34qnc8 ily traian LXPgx9ujh */     {
/* ZgK34qnc8 ily traian LXPgx9ujh */         int cnt = 0;
/* ZgK34qnc8 ily traian LXPgx9ujh */         cin >> m;
/* ZgK34qnc8 ily traian LXPgx9ujh */         for(int i = 0 ; i < m ; ++i)
/* ZgK34qnc8 ily traian LXPgx9ujh */             for(int j = 0 ; j < m ; ++j)
/* ZgK34qnc8 ily traian LXPgx9ujh */                 cin >> a[i][j];
/* ZgK34qnc8 ily traian LXPgx9ujh */         for(int i = 0 ; i < m ; ++i)
/* ZgK34qnc8 ily traian LXPgx9ujh */             for(int j = 0 ; j < m; ++j)
/* ZgK34qnc8 ily traian LXPgx9ujh */                 if(a[i][j]==0)cnt++;
/* ZgK34qnc8 ily traian LXPgx9ujh */         if(cnt <= m) cout << "DA" << endl;
/* ZgK34qnc8 ily traian LXPgx9ujh */         else cout << "NU" << endl;
/* ZgK34qnc8 ily traian LXPgx9ujh */         for(int i = 0 ; i < m ; ++i)
/* ZgK34qnc8 ily traian LXPgx9ujh */             for(int j = 0 ; j < m; ++j)
/* ZgK34qnc8 ily traian LXPgx9ujh */                 a[i][j]=0;
/* ZgK34qnc8 ily traian LXPgx9ujh */     }
/* ZgK34qnc8 ily traian LXPgx9ujh */ }