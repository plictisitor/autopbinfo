/* syKrmVc9I ily traian nyPjTvMNj */ #include <algorithm>
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
/* syKrmVc9I ily traian nyPjTvMNj */ using namespace std;
/* syKrmVc9I ily traian nyPjTvMNj */ int n , t , m , k , sab , p , nr , j , u , l , pi , pj , ci , cj , suma , prod , c , pc , r , i , a ;
/* syKrmVc9I ily traian nyPjTvMNj */ int main()
/* syKrmVc9I ily traian nyPjTvMNj */ {
/* syKrmVc9I ily traian nyPjTvMNj */     cin >> n >> t >> m ;
/* syKrmVc9I ily traian nyPjTvMNj */     k = n ;
/* syKrmVc9I ily traian nyPjTvMNj */     p = 0 ;
/* syKrmVc9I ily traian nyPjTvMNj */     sab = 0 ;
/* syKrmVc9I ily traian nyPjTvMNj */     while(k != 0)
/* syKrmVc9I ily traian nyPjTvMNj */     {
/* syKrmVc9I ily traian nyPjTvMNj */         k = k / 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */         p++ ;
/* syKrmVc9I ily traian nyPjTvMNj */         sab = sab * 10 + p ;
/* syKrmVc9I ily traian nyPjTvMNj */     }
/* syKrmVc9I ily traian nyPjTvMNj */     for(k = 1 ; k <= m ; k++)
/* syKrmVc9I ily traian nyPjTvMNj */     {
/* syKrmVc9I ily traian nyPjTvMNj */         cin >> i >> j ;
/* syKrmVc9I ily traian nyPjTvMNj */         if(i > j) { u = i ; i = j ; j = u ; }
/* syKrmVc9I ily traian nyPjTvMNj */         pi = 1;
/* syKrmVc9I ily traian nyPjTvMNj */         pj = 1;
/* syKrmVc9I ily traian nyPjTvMNj */         for(l = 1 ; l <= p - i ; l++) pi = pi * 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */         for(l = 1 ; l <= p - j ; l++) pj = pj * 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */         ci = ( sab / pi ) % 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */         cj = ( sab / pj ) % 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */         sab = sab - ci * pi ;
/* syKrmVc9I ily traian nyPjTvMNj */         sab = sab - cj * pj ;
/* syKrmVc9I ily traian nyPjTvMNj */         sab = sab + cj * pi ;
/* syKrmVc9I ily traian nyPjTvMNj */         sab = sab + ci * pj ;
/* syKrmVc9I ily traian nyPjTvMNj */     }
/* syKrmVc9I ily traian nyPjTvMNj */     k = 0 ;
/* syKrmVc9I ily traian nyPjTvMNj */     nr = n ;
/* syKrmVc9I ily traian nyPjTvMNj */     do {
/* syKrmVc9I ily traian nyPjTvMNj */             k++ ;
/* syKrmVc9I ily traian nyPjTvMNj */             a = sab ;
/* syKrmVc9I ily traian nyPjTvMNj */             suma = 0 ;
/* syKrmVc9I ily traian nyPjTvMNj */             prod = 1 ;
/* syKrmVc9I ily traian nyPjTvMNj */             while ( a != 0 )
/* syKrmVc9I ily traian nyPjTvMNj */             {
/* syKrmVc9I ily traian nyPjTvMNj */                 r= a % 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */                 pc = 1 ;
/* syKrmVc9I ily traian nyPjTvMNj */                 for( i = 1 ; i <= p - r ; i++ ) pc = pc * 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */                 c = ( nr / pc ) % 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */                 suma = suma + c * prod ;
/* syKrmVc9I ily traian nyPjTvMNj */                 prod = prod * 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */                 a = a / 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */             }
/* syKrmVc9I ily traian nyPjTvMNj */             nr = suma ;
/* syKrmVc9I ily traian nyPjTvMNj */         }while( nr != n);
/* syKrmVc9I ily traian nyPjTvMNj */     t = t % k ;
/* syKrmVc9I ily traian nyPjTvMNj */     nr = n ;
/* syKrmVc9I ily traian nyPjTvMNj */     for ( i = 1 ; i <= t ; i++ )
/* syKrmVc9I ily traian nyPjTvMNj */     {
/* syKrmVc9I ily traian nyPjTvMNj */         a = sab ;
/* syKrmVc9I ily traian nyPjTvMNj */         suma = 0 ;
/* syKrmVc9I ily traian nyPjTvMNj */         prod = 1 ;
/* syKrmVc9I ily traian nyPjTvMNj */         while ( a != 0 )
/* syKrmVc9I ily traian nyPjTvMNj */         {
/* syKrmVc9I ily traian nyPjTvMNj */             r= a % 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */             pc = 1 ;
/* syKrmVc9I ily traian nyPjTvMNj */             for( j = 1 ; j <= p - r ; j++ ) pc = pc * 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */             c = ( nr / pc ) % 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */             suma = suma + c * prod ;
/* syKrmVc9I ily traian nyPjTvMNj */             prod = prod * 10 ; a = a / 10 ;
/* syKrmVc9I ily traian nyPjTvMNj */         } nr = suma ;
/* syKrmVc9I ily traian nyPjTvMNj */     }
/* syKrmVc9I ily traian nyPjTvMNj */     cout << nr ;
/* syKrmVc9I ily traian nyPjTvMNj */     return 0;
/* syKrmVc9I ily traian nyPjTvMNj */ }