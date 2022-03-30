/* kSU0qpOYd ily traian 7lO0YZhWP */ #include <algorithm>
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
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ using namespace std;
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ ifstream cin("rica.in");
/* kSU0qpOYd ily traian 7lO0YZhWP */ ofstream cout("rica.out");
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ int a[10001] , b[10001] , c[10001] , n , m , p , cop[10001];
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ void invers(int a[] , int n)
/* kSU0qpOYd ily traian 7lO0YZhWP */ {
/* kSU0qpOYd ily traian 7lO0YZhWP */     int i = 1 , j = n;
/* kSU0qpOYd ily traian 7lO0YZhWP */     while(i <= j)
/* kSU0qpOYd ily traian 7lO0YZhWP */     {
/* kSU0qpOYd ily traian 7lO0YZhWP */         swap(a[i] , a[n - i + 1]);
/* kSU0qpOYd ily traian 7lO0YZhWP */         i++;
/* kSU0qpOYd ily traian 7lO0YZhWP */         j--;
/* kSU0qpOYd ily traian 7lO0YZhWP */     }
/* kSU0qpOYd ily traian 7lO0YZhWP */ }
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ void adunare(int a[] , int &n , int b[] , int m)
/* kSU0qpOYd ily traian 7lO0YZhWP */ {
/* kSU0qpOYd ily traian 7lO0YZhWP */     invers(a , n);
/* kSU0qpOYd ily traian 7lO0YZhWP */     invers(b , m);
/* kSU0qpOYd ily traian 7lO0YZhWP */     int t = 0;
/* kSU0qpOYd ily traian 7lO0YZhWP */     for(int i = 1 ; i <= n ; i++)
/* kSU0qpOYd ily traian 7lO0YZhWP */     {
/* kSU0qpOYd ily traian 7lO0YZhWP */         int cu = a[i] + b[i] + t;
/* kSU0qpOYd ily traian 7lO0YZhWP */         a[i] = cu % 10;
/* kSU0qpOYd ily traian 7lO0YZhWP */         t = cu / 10;
/* kSU0qpOYd ily traian 7lO0YZhWP */     }
/* kSU0qpOYd ily traian 7lO0YZhWP */     if(t > 0) a[++n] = t;
/* kSU0qpOYd ily traian 7lO0YZhWP */     invers(a , n);
/* kSU0qpOYd ily traian 7lO0YZhWP */ }
/* kSU0qpOYd ily traian 7lO0YZhWP */ 
/* kSU0qpOYd ily traian 7lO0YZhWP */ void copiere(int a[] , int n , int b[] , int m)
/* kSU0qpOYd ily traian 7lO0YZhWP */ {
/* kSU0qpOYd ily traian 7lO0YZhWP */     for(int i = 1 ; i <= m ; i++)
/* kSU0qpOYd ily traian 7lO0YZhWP */         a[i] = b[i];
/* kSU0qpOYd ily traian 7lO0YZhWP */ }
/* kSU0qpOYd ily traian 7lO0YZhWP */ int main()
/* kSU0qpOYd ily traian 7lO0YZhWP */ {
/* kSU0qpOYd ily traian 7lO0YZhWP */     int x;
/* kSU0qpOYd ily traian 7lO0YZhWP */     cin >> x;
/* kSU0qpOYd ily traian 7lO0YZhWP */     if(x == 1 || x == 2) cout << 1;
/* kSU0qpOYd ily traian 7lO0YZhWP */     else if(x == 3) cout << 2;
/* kSU0qpOYd ily traian 7lO0YZhWP */     else
/* kSU0qpOYd ily traian 7lO0YZhWP */     {
/* kSU0qpOYd ily traian 7lO0YZhWP */         a[1] = 1 , b[1] = 1 , c[1] = 2;
/* kSU0qpOYd ily traian 7lO0YZhWP */         n = 1 , m = 1 , p = 1;
/* kSU0qpOYd ily traian 7lO0YZhWP */         for(int i = 4 ; i <= x ; i++)
/* kSU0qpOYd ily traian 7lO0YZhWP */         {
/* kSU0qpOYd ily traian 7lO0YZhWP */             for(int i = 1 ; i <= p ; i++) cop[i] = c[i];
/* kSU0qpOYd ily traian 7lO0YZhWP */             int c1 = n , c2 = m , c3 = p;
/* kSU0qpOYd ily traian 7lO0YZhWP */             adunare(c , p , b , m);
/* kSU0qpOYd ily traian 7lO0YZhWP */             adunare(c , p , a , n);
/* kSU0qpOYd ily traian 7lO0YZhWP */             n = c2 , m = c3;
/* kSU0qpOYd ily traian 7lO0YZhWP */             copiere(a , n , b , m);
/* kSU0qpOYd ily traian 7lO0YZhWP */             invers(a , n);
/* kSU0qpOYd ily traian 7lO0YZhWP */             copiere(b , m , cop , p);
/* kSU0qpOYd ily traian 7lO0YZhWP */         }
/* kSU0qpOYd ily traian 7lO0YZhWP */         for(int i = 1 ; i <= p ; i++) cout << c[i];
/* kSU0qpOYd ily traian 7lO0YZhWP */     }
/* kSU0qpOYd ily traian 7lO0YZhWP */ }