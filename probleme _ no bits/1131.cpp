/* Lsfn8ifHL ily traian 17ZAPd3Rd */ #include <algorithm>
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
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ using namespace std;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ 
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ ifstream fin("arc.in");
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ ofstream fout("arc.out");
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ 
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ struct element
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     int e , a;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ };
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ int n , i , j , v , x , y , nr , h , h1 , h2 , maxx , poz;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ element st[10001];
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ 
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ int main()
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     fin >> v >> n;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     if(v==1)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         fin >> x;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         nr=1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         for(i=2 ; i<=n ; ++i)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             fin >> y;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             if(x!=y)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 nr++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             x=y;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         fout << nr;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     else
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         fin >> st[1].e;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         st[1].a=1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         h=1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         for(i=2 ; i <= n ; ++i)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             fin >> x;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             if(x==st[h].e)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 st[h].a++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             else
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 if(maxx < st[h].a)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                     maxx=st[h].a;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                     poz=h;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 h++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 st[h].e=x;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 st[h].a++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         while(maxx >= 3 && h>0)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             h1=poz-1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             h2=poz+1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             while(st[h1].e==st[h2].e && st[h1].a+st[h2].a >= 3 && h1 > 0 && h2 <= h)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 h1--;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 h2++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             if(st[h2].e==st[h1].e)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 st[h1].a+=st[h2].a;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 h2++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             for(i=h2 ; i<= h ; ++i)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 h1++;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 st[h1]=st[i];
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             h=h1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             maxx=st[1].a;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             poz=1;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             for(i=1 ; i <= h ; ++i)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 if(maxx < st[i].a)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 {
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                     maxx=st[i].a;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                     poz=i;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         for(i=1 ; i <= h ; ++i)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             nr+=st[i].a;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         fout << nr << endl;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */         for(i=1 ; i <= h ; ++i)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */             for(j=1 ; j <= st[i].a ; ++j)
/* Lsfn8ifHL ily traian 17ZAPd3Rd */                 fout << st[i].e << endl;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     }
/* Lsfn8ifHL ily traian 17ZAPd3Rd */     return 0;
/* Lsfn8ifHL ily traian 17ZAPd3Rd */ }