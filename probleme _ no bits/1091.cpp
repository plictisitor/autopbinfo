/* ejimOwKPW ily traian P5dUTtbvS */ #include <algorithm>
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
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ using namespace std;
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ ifstream cin("expozitie.in");
/* ejimOwKPW ily traian P5dUTtbvS */ ofstream cout("expozitie.out");
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ struct numarmare
/* ejimOwKPW ily traian P5dUTtbvS */ {
/* ejimOwKPW ily traian P5dUTtbvS */     int n;
/* ejimOwKPW ily traian P5dUTtbvS */     char c[201];
/* ejimOwKPW ily traian P5dUTtbvS */ }a[505][505];
/* ejimOwKPW ily traian P5dUTtbvS */ int n , k , d;
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ void aduna(numarmare A , numarmare B , numarmare &S)///s = a + b
/* ejimOwKPW ily traian P5dUTtbvS */ {
/* ejimOwKPW ily traian P5dUTtbvS */     int i , t = 0 , c , p;
/* ejimOwKPW ily traian P5dUTtbvS */     if(A.n < B.n)
/* ejimOwKPW ily traian P5dUTtbvS */     {
/* ejimOwKPW ily traian P5dUTtbvS */         p = B.n;///nr max de cifre
/* ejimOwKPW ily traian P5dUTtbvS */         //for(int i =  A.n + 1 ; i <= B.n ; i++) A.c[i] = 0;///completez cu 0
/* ejimOwKPW ily traian P5dUTtbvS */     }
/* ejimOwKPW ily traian P5dUTtbvS */     else
/* ejimOwKPW ily traian P5dUTtbvS */     {
/* ejimOwKPW ily traian P5dUTtbvS */         p = A.n;
/* ejimOwKPW ily traian P5dUTtbvS */         //for(int i =  B.n + 1 ; i <= A.n ; i++) B.c[i] = 0;
/* ejimOwKPW ily traian P5dUTtbvS */     }
/* ejimOwKPW ily traian P5dUTtbvS */     for(int i = 1 ; i <= p ; i++)
/* ejimOwKPW ily traian P5dUTtbvS */     {
/* ejimOwKPW ily traian P5dUTtbvS */         c = A.c[i] + B.c[i] + t;
/* ejimOwKPW ily traian P5dUTtbvS */         S.c[i] = c % 10;
/* ejimOwKPW ily traian P5dUTtbvS */         t = c / 10;
/* ejimOwKPW ily traian P5dUTtbvS */     }
/* ejimOwKPW ily traian P5dUTtbvS */     if(t == 1)
/* ejimOwKPW ily traian P5dUTtbvS */     {
/* ejimOwKPW ily traian P5dUTtbvS */         p++;
/* ejimOwKPW ily traian P5dUTtbvS */         S.c[p] = t;
/* ejimOwKPW ily traian P5dUTtbvS */     }
/* ejimOwKPW ily traian P5dUTtbvS */     S.n = p;
/* ejimOwKPW ily traian P5dUTtbvS */ }
/* ejimOwKPW ily traian P5dUTtbvS */ 
/* ejimOwKPW ily traian P5dUTtbvS */ void afisare(numarmare A)
/* ejimOwKPW ily traian P5dUTtbvS */ {
/* ejimOwKPW ily traian P5dUTtbvS */     for(int i = A.n ; i >= 1 ; i--) cout << (int)A.c[i];
/* ejimOwKPW ily traian P5dUTtbvS */ }
/* ejimOwKPW ily traian P5dUTtbvS */ int main()
/* ejimOwKPW ily traian P5dUTtbvS */ {
/* ejimOwKPW ily traian P5dUTtbvS */     cin >> n >> d >> k;
/* ejimOwKPW ily traian P5dUTtbvS */     ///combinari de d + r - 1 cate r
/* ejimOwKPW ily traian P5dUTtbvS */     int r = n - k * d , m;
/* ejimOwKPW ily traian P5dUTtbvS */     if(r < 0) cout << 0;
/* ejimOwKPW ily traian P5dUTtbvS */     else if(r == 0) cout << 1;
/* ejimOwKPW ily traian P5dUTtbvS */     else
/* ejimOwKPW ily traian P5dUTtbvS */     {
/* ejimOwKPW ily traian P5dUTtbvS */         m = r + d - 1;
/* ejimOwKPW ily traian P5dUTtbvS */         a[0][0].n = 1;
/* ejimOwKPW ily traian P5dUTtbvS */         a[0][0].c[1] = 1;
/* ejimOwKPW ily traian P5dUTtbvS */         for(int i = 1 ; i <= m ; i++)
/* ejimOwKPW ily traian P5dUTtbvS */         {
/* ejimOwKPW ily traian P5dUTtbvS */             for(int j = 0 ; j <= m ; j++)
/* ejimOwKPW ily traian P5dUTtbvS */                 if(j == 0) a[i][j].n = 1 , a[i][j].c[1] = 1;
/* ejimOwKPW ily traian P5dUTtbvS */                 else aduna(a[i-1][j-1] , a[i-1][j] , a[i][j]);
/* ejimOwKPW ily traian P5dUTtbvS */         }
/* ejimOwKPW ily traian P5dUTtbvS */         afisare(a[m][r]);
/* ejimOwKPW ily traian P5dUTtbvS */     }
/* ejimOwKPW ily traian P5dUTtbvS */ }