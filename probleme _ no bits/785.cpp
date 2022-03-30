/* XZOwPg0S7 ily traian 7w26Vzuqu */ #include <algorithm>
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
/* XZOwPg0S7 ily traian 7w26Vzuqu */ 
/* XZOwPg0S7 ily traian 7w26Vzuqu */ using namespace std;
/* XZOwPg0S7 ily traian 7w26Vzuqu */ int main()
/* XZOwPg0S7 ily traian 7w26Vzuqu */ {
/* XZOwPg0S7 ily traian 7w26Vzuqu */     int n , m , a[101][101] , min=10000000 , max = 0 , lmin , lmax , cmin , cmax;
/* XZOwPg0S7 ily traian 7w26Vzuqu */     cin >> n >> m;
/* XZOwPg0S7 ily traian 7w26Vzuqu */     for(int i = 0 ; i < n; ++i)
/* XZOwPg0S7 ily traian 7w26Vzuqu */         for(int j = 0 ; j < m ; ++j)
/* XZOwPg0S7 ily traian 7w26Vzuqu */         {
/* XZOwPg0S7 ily traian 7w26Vzuqu */             cin >> a[i][j];
/* XZOwPg0S7 ily traian 7w26Vzuqu */             if(a[i][j]<min)
/* XZOwPg0S7 ily traian 7w26Vzuqu */             {min=a[i][j] ; lmin=j ; cmin=i;}
/* XZOwPg0S7 ily traian 7w26Vzuqu */             if(a[i][j]>max)
/* XZOwPg0S7 ily traian 7w26Vzuqu */             {max=a[i][j] ; lmax=j ; cmax=i;}
/* XZOwPg0S7 ily traian 7w26Vzuqu */         }
/* XZOwPg0S7 ily traian 7w26Vzuqu */     for(int i = 0 ; i < n ; ++i)
/* XZOwPg0S7 ily traian 7w26Vzuqu */     {
/* XZOwPg0S7 ily traian 7w26Vzuqu */         int ok = 0;
/* XZOwPg0S7 ily traian 7w26Vzuqu */         for(int j = 0 ; j < m ; ++j)
/* XZOwPg0S7 ily traian 7w26Vzuqu */         {
/* XZOwPg0S7 ily traian 7w26Vzuqu */             if(i!=cmin && i!=cmax && j!=lmin && j!=lmax)
/* XZOwPg0S7 ily traian 7w26Vzuqu */             {cout << a[i][j] << ' ';ok = 1;}
/* XZOwPg0S7 ily traian 7w26Vzuqu */         }
/* XZOwPg0S7 ily traian 7w26Vzuqu */         if(ok == 1)
/* XZOwPg0S7 ily traian 7w26Vzuqu */         cout << endl;
/* XZOwPg0S7 ily traian 7w26Vzuqu */     }
/* XZOwPg0S7 ily traian 7w26Vzuqu */     return 0;
/* XZOwPg0S7 ily traian 7w26Vzuqu */ }