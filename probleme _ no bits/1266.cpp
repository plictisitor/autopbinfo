/* QNKqvSJhP ily traian aNLzewIjl */ #include <algorithm>
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
/* QNKqvSJhP ily traian aNLzewIjl */ using namespace std;
/* QNKqvSJhP ily traian aNLzewIjl */ ifstream cin("cautanrinmatrice.in");
/* QNKqvSJhP ily traian aNLzewIjl */ ofstream cout("cautanrinmatrice.out");
/* QNKqvSJhP ily traian aNLzewIjl */ int e[1000001] , n , m , p = 1 , b , x , q , a;
/* QNKqvSJhP ily traian aNLzewIjl */ int cb(int val)
/* QNKqvSJhP ily traian aNLzewIjl */ {
/* QNKqvSJhP ily traian aNLzewIjl */     int st = 0 , dr = p - 1 , poz = 1;
/* QNKqvSJhP ily traian aNLzewIjl */     while(st <= dr)
/* QNKqvSJhP ily traian aNLzewIjl */     {
/* QNKqvSJhP ily traian aNLzewIjl */         int m=(st+dr)/2;
/* QNKqvSJhP ily traian aNLzewIjl */         if(val <= e[m])
/* QNKqvSJhP ily traian aNLzewIjl */         {
/* QNKqvSJhP ily traian aNLzewIjl */              poz = m;
/* QNKqvSJhP ily traian aNLzewIjl */              dr = m-1;
/* QNKqvSJhP ily traian aNLzewIjl */         }
/* QNKqvSJhP ily traian aNLzewIjl */         else st = m + 1;
/* QNKqvSJhP ily traian aNLzewIjl */     }
/* QNKqvSJhP ily traian aNLzewIjl */     if(e[poz]==val) return poz;
/* QNKqvSJhP ily traian aNLzewIjl */     else return 0;
/* QNKqvSJhP ily traian aNLzewIjl */ }
/* QNKqvSJhP ily traian aNLzewIjl */ 
/* QNKqvSJhP ily traian aNLzewIjl */ int main()
/* QNKqvSJhP ily traian aNLzewIjl */ {
/* QNKqvSJhP ily traian aNLzewIjl */     cin >> n >> m;
/* QNKqvSJhP ily traian aNLzewIjl */     for(int i = 0 ; i < n ; ++i)
/* QNKqvSJhP ily traian aNLzewIjl */     {
/* QNKqvSJhP ily traian aNLzewIjl */         if(i%2==1)
/* QNKqvSJhP ily traian aNLzewIjl */         {
/* QNKqvSJhP ily traian aNLzewIjl */             int aux = m - 1;
/* QNKqvSJhP ily traian aNLzewIjl */             for(int j = 0 ; j < m ; ++j)
/* QNKqvSJhP ily traian aNLzewIjl */             {
/* QNKqvSJhP ily traian aNLzewIjl */                 cin >> e[p+aux];
/* QNKqvSJhP ily traian aNLzewIjl */                 aux--;
/* QNKqvSJhP ily traian aNLzewIjl */             }
/* QNKqvSJhP ily traian aNLzewIjl */             p+=m;
/* QNKqvSJhP ily traian aNLzewIjl */         }
/* QNKqvSJhP ily traian aNLzewIjl */         else
/* QNKqvSJhP ily traian aNLzewIjl */         {
/* QNKqvSJhP ily traian aNLzewIjl */             for(int j = 0 ; j < m ; ++j)
/* QNKqvSJhP ily traian aNLzewIjl */                 cin >> e[p] , p++;
/* QNKqvSJhP ily traian aNLzewIjl */         }
/* QNKqvSJhP ily traian aNLzewIjl */     }
/* QNKqvSJhP ily traian aNLzewIjl */     cin >> q;
/* QNKqvSJhP ily traian aNLzewIjl */     for(int i = 0 ; i < q ; ++i)
/* QNKqvSJhP ily traian aNLzewIjl */     {
/* QNKqvSJhP ily traian aNLzewIjl */         cin >> x;
/* QNKqvSJhP ily traian aNLzewIjl */         if(cb(x))
/* QNKqvSJhP ily traian aNLzewIjl */         {
/* QNKqvSJhP ily traian aNLzewIjl */             int a=cb(x)/m+1;
/* QNKqvSJhP ily traian aNLzewIjl */             if(cb(x)%m==0) a--;
/* QNKqvSJhP ily traian aNLzewIjl */             int b=(cb(x))%m;
/* QNKqvSJhP ily traian aNLzewIjl */             if(b==0) b=m;
/* QNKqvSJhP ily traian aNLzewIjl */             if(a%2==0) b=m-b+1;
/* QNKqvSJhP ily traian aNLzewIjl */             cout << a << ' ' << b << '\n';
/* QNKqvSJhP ily traian aNLzewIjl */         }
/* QNKqvSJhP ily traian aNLzewIjl */        else cout << 0 << '\n';
/* QNKqvSJhP ily traian aNLzewIjl */     }
/* QNKqvSJhP ily traian aNLzewIjl */     return 0;
/* QNKqvSJhP ily traian aNLzewIjl */ }