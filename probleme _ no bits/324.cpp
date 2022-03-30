/* 1Zn6A8iAq ily traian gzDEbPoTQ */ #include <algorithm>
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
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ 
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ using namespace std;
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ 
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ ifstream cin("partitiinumar4.in");
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ ofstream cout("partitiinumar4.out");
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ 
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ int n , m , x[50] , a[50];
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ 
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ void afisare(int k)
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ {
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     for(int i = 1 ; i <= k ; i++)
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         cout << a[x[i]] << ' ';
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     cout << '\n';
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ }
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ 
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ void back(int k , int sp)
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ {
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     for(int i = x[k - 1] ; i <= m ; i++)
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     {
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         x[k] = i;
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         sp += a[x[k]];
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         if(sp <= n)
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         {
/* 1Zn6A8iAq ily traian gzDEbPoTQ */             if(sp == n) afisare(k);
/* 1Zn6A8iAq ily traian gzDEbPoTQ */             else back(k + 1 , sp);
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         }
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         sp -= a[x[k]];
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     }
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ }
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ 
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ int main()
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ {
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     cin >> n >> m;
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     for(int i = 1 ; i <= m ; i++)
/* 1Zn6A8iAq ily traian gzDEbPoTQ */         cin >> a[i];
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     sort(a + 1 , a + m + 1);
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     x[0] = 1;
/* 1Zn6A8iAq ily traian gzDEbPoTQ */     back(1 , 0);
/* 1Zn6A8iAq ily traian gzDEbPoTQ */ }