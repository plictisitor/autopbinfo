/* P3O6CkgXd ily traian 4qQq9waNi */ #include <algorithm>
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
/* P3O6CkgXd ily traian 4qQq9waNi */ using namespace std;
/* P3O6CkgXd ily traian 4qQq9waNi */ ifstream cin("roadtooni.in");
/* P3O6CkgXd ily traian 4qQq9waNi */ ofstream cout("roadtooni.out");
/* P3O6CkgXd ily traian 4qQq9waNi */ int n , p , r , a[50][2020];
/* P3O6CkgXd ily traian 4qQq9waNi */ int main()
/* P3O6CkgXd ily traian 4qQq9waNi */ {
/* P3O6CkgXd ily traian 4qQq9waNi */     cin >> n ;
/* P3O6CkgXd ily traian 4qQq9waNi */     for (int i = 1 ; i <= n ; i++)
/* P3O6CkgXd ily traian 4qQq9waNi */     {
/* P3O6CkgXd ily traian 4qQq9waNi */         cin >> p ;
/* P3O6CkgXd ily traian 4qQq9waNi */         for (int j = 1 ; j <= p ; j++)
/* P3O6CkgXd ily traian 4qQq9waNi */         {
/* P3O6CkgXd ily traian 4qQq9waNi */             cin >> r ;
/* P3O6CkgXd ily traian 4qQq9waNi */             a[i][r]=1 ;
/* P3O6CkgXd ily traian 4qQq9waNi */         }
/* P3O6CkgXd ily traian 4qQq9waNi */         for (int j = 1 ; j <= 1000 ; j++)
/* P3O6CkgXd ily traian 4qQq9waNi */            if((a[i][j]==0) && (a[i][2017-j]==0))
/* P3O6CkgXd ily traian 4qQq9waNi */              {
/* P3O6CkgXd ily traian 4qQq9waNi */                  cout << 2 << " " << j << " " << 2017-j << endl ;
/* P3O6CkgXd ily traian 4qQq9waNi */                  break ;
/* P3O6CkgXd ily traian 4qQq9waNi */              }
/* P3O6CkgXd ily traian 4qQq9waNi */     }return 0;
/* P3O6CkgXd ily traian 4qQq9waNi */ }