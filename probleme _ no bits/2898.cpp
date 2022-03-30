/* r3IeP85PV ily traian GBT6q1l6y */ #include <algorithm>
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
/* r3IeP85PV ily traian GBT6q1l6y */ 
/* r3IeP85PV ily traian GBT6q1l6y */ using namespace std;
/* r3IeP85PV ily traian GBT6q1l6y */ 
/* r3IeP85PV ily traian GBT6q1l6y */ ifstream cin("nave.in");
/* r3IeP85PV ily traian GBT6q1l6y */ ofstream cout("nave.out");
/* r3IeP85PV ily traian GBT6q1l6y */ 
/* r3IeP85PV ily traian GBT6q1l6y */ int n , m , t , a[102][102] , x , y , val , maxi , lin , col;
/* r3IeP85PV ily traian GBT6q1l6y */ 
/* r3IeP85PV ily traian GBT6q1l6y */ int sum(int i , int j)
/* r3IeP85PV ily traian GBT6q1l6y */ {
/* r3IeP85PV ily traian GBT6q1l6y */     int s = 0;
/* r3IeP85PV ily traian GBT6q1l6y */     int i1 = i , j1 = j;
/* r3IeP85PV ily traian GBT6q1l6y */     while(i1 >= 1 && j1 >= 1)
/* r3IeP85PV ily traian GBT6q1l6y */     {
/* r3IeP85PV ily traian GBT6q1l6y */         s += a[i1][j1];
/* r3IeP85PV ily traian GBT6q1l6y */         i1--;
/* r3IeP85PV ily traian GBT6q1l6y */         j1--;
/* r3IeP85PV ily traian GBT6q1l6y */     }
/* r3IeP85PV ily traian GBT6q1l6y */     int i2 = i , j2 = j;
/* r3IeP85PV ily traian GBT6q1l6y */     while(i2 >= 1 && j2 <= m)
/* r3IeP85PV ily traian GBT6q1l6y */     {
/* r3IeP85PV ily traian GBT6q1l6y */         s += a[i2][j2];
/* r3IeP85PV ily traian GBT6q1l6y */         i2--;
/* r3IeP85PV ily traian GBT6q1l6y */         j2++;
/* r3IeP85PV ily traian GBT6q1l6y */     }
/* r3IeP85PV ily traian GBT6q1l6y */     int i3 = i , j3 = j;
/* r3IeP85PV ily traian GBT6q1l6y */     while(i3 <= n && j3 >= 1)
/* r3IeP85PV ily traian GBT6q1l6y */     {
/* r3IeP85PV ily traian GBT6q1l6y */         s += a[i3][j3];
/* r3IeP85PV ily traian GBT6q1l6y */         i3++;
/* r3IeP85PV ily traian GBT6q1l6y */         j3--;
/* r3IeP85PV ily traian GBT6q1l6y */     }
/* r3IeP85PV ily traian GBT6q1l6y */     int i4 = i , j4 = j;
/* r3IeP85PV ily traian GBT6q1l6y */     while(i4 <= n && j4 <= m)
/* r3IeP85PV ily traian GBT6q1l6y */     {
/* r3IeP85PV ily traian GBT6q1l6y */         s += a[i4][j4];
/* r3IeP85PV ily traian GBT6q1l6y */         i4++;
/* r3IeP85PV ily traian GBT6q1l6y */         j4++;
/* r3IeP85PV ily traian GBT6q1l6y */     }
/* r3IeP85PV ily traian GBT6q1l6y */     return s;
/* r3IeP85PV ily traian GBT6q1l6y */ }
/* r3IeP85PV ily traian GBT6q1l6y */ 
/* r3IeP85PV ily traian GBT6q1l6y */ int main()
/* r3IeP85PV ily traian GBT6q1l6y */ {
/* r3IeP85PV ily traian GBT6q1l6y */     cin >> n >> m >>t;
/* r3IeP85PV ily traian GBT6q1l6y */     for(int i = 1 ; i <= t ; i++)
/* r3IeP85PV ily traian GBT6q1l6y */     {
/* r3IeP85PV ily traian GBT6q1l6y */         cin >> x >> y >> val;
/* r3IeP85PV ily traian GBT6q1l6y */         a[x][y] = val;
/* r3IeP85PV ily traian GBT6q1l6y */     }
/* r3IeP85PV ily traian GBT6q1l6y */     for(int i = 1 ; i <= n ; i++)
/* r3IeP85PV ily traian GBT6q1l6y */         for(int j = 1 ; j <= m ; j++)
/* r3IeP85PV ily traian GBT6q1l6y */             if(a[i][j] == 0 && sum(i , j) >= maxi) maxi = sum(i , j) , lin = i , col = j;
/* r3IeP85PV ily traian GBT6q1l6y */     cout << maxi << " " << lin << " " << col;
/* r3IeP85PV ily traian GBT6q1l6y */ }