/* JW3ob7KMF ily traian hkmsa78fQ */ #include <algorithm>
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
/* JW3ob7KMF ily traian hkmsa78fQ */ using namespace std;
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ ifstream cin("matrice_rara.in");
/* JW3ob7KMF ily traian hkmsa78fQ */ ofstream cout("matrice_rara.out");
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ struct andra
/* JW3ob7KMF ily traian hkmsa78fQ */ {
/* JW3ob7KMF ily traian hkmsa78fQ */     int i , j , val;
/* JW3ob7KMF ily traian hkmsa78fQ */ };
/* JW3ob7KMF ily traian hkmsa78fQ */ andra a[300001] , c[300001] , b[300001];
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ void citire(andra a[] , int n)
/* JW3ob7KMF ily traian hkmsa78fQ */ {
/* JW3ob7KMF ily traian hkmsa78fQ */     for(int i = 1 ; i <= n ; i++)
/* JW3ob7KMF ily traian hkmsa78fQ */         cin >> a[i].i >> a[i].j >> a[i].val;
/* JW3ob7KMF ily traian hkmsa78fQ */ }
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ void afisare(andra a[] , int n)
/* JW3ob7KMF ily traian hkmsa78fQ */ {
/* JW3ob7KMF ily traian hkmsa78fQ */     cout << n << '\n';
/* JW3ob7KMF ily traian hkmsa78fQ */     for(int i = 1 ; i <= n ; i++)
/* JW3ob7KMF ily traian hkmsa78fQ */         cout << a[i].i << " " << a[i].j << " " << a[i].val << '\n';
/* JW3ob7KMF ily traian hkmsa78fQ */ }
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ int maimic(andra a , andra b)
/* JW3ob7KMF ily traian hkmsa78fQ */ {
/* JW3ob7KMF ily traian hkmsa78fQ */     return a.i < b.i || a.i == b.i && a.j < b.j;
/* JW3ob7KMF ily traian hkmsa78fQ */ }
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ long long  n , m , nc , n1 , n2;
/* JW3ob7KMF ily traian hkmsa78fQ */ 
/* JW3ob7KMF ily traian hkmsa78fQ */ int main()
/* JW3ob7KMF ily traian hkmsa78fQ */ {
/* JW3ob7KMF ily traian hkmsa78fQ */     cin >> n >> m >> n1 >> n2;
/* JW3ob7KMF ily traian hkmsa78fQ */     citire(a , n1);
/* JW3ob7KMF ily traian hkmsa78fQ */     citire(b , n2);
/* JW3ob7KMF ily traian hkmsa78fQ */     int i = 1 , j = 1;
/* JW3ob7KMF ily traian hkmsa78fQ */     while(i <= n1 && j <= n2)
/* JW3ob7KMF ily traian hkmsa78fQ */     {
/* JW3ob7KMF ily traian hkmsa78fQ */         if(maimic(a[i] , b[j])) c[++nc] = a[i++];
/* JW3ob7KMF ily traian hkmsa78fQ */         else if(maimic(b[j] , a[i])) c[++nc] = b[j++];
/* JW3ob7KMF ily traian hkmsa78fQ */         else
/* JW3ob7KMF ily traian hkmsa78fQ */         {
/* JW3ob7KMF ily traian hkmsa78fQ */             if(a[i].val + b[j].val != 0)
/* JW3ob7KMF ily traian hkmsa78fQ */             {
/* JW3ob7KMF ily traian hkmsa78fQ */                 c[++nc] = a[i];
/* JW3ob7KMF ily traian hkmsa78fQ */                 c[nc].val += b[j].val;
/* JW3ob7KMF ily traian hkmsa78fQ */             }
/* JW3ob7KMF ily traian hkmsa78fQ */             i++;
/* JW3ob7KMF ily traian hkmsa78fQ */             j++;
/* JW3ob7KMF ily traian hkmsa78fQ */         }
/* JW3ob7KMF ily traian hkmsa78fQ */     }
/* JW3ob7KMF ily traian hkmsa78fQ */     while(i <= n1) c[++nc] = a[i++];
/* JW3ob7KMF ily traian hkmsa78fQ */     while(j <= n2) c[++nc] = b[j++];
/* JW3ob7KMF ily traian hkmsa78fQ */     cout << nc << '\n';
/* JW3ob7KMF ily traian hkmsa78fQ */     for(int i = 1 ; i <= nc ; i++)
/* JW3ob7KMF ily traian hkmsa78fQ */         cout << c[i].i << " " << c[i].j << " " << c[i].val << '\n';
/* JW3ob7KMF ily traian hkmsa78fQ */ }