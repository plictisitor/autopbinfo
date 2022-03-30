/* e4FvY2ND6 ily traian OzgydpeeR */ #include <algorithm>
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
/* e4FvY2ND6 ily traian OzgydpeeR */ using namespace std;
/* e4FvY2ND6 ily traian OzgydpeeR */ 
/* e4FvY2ND6 ily traian OzgydpeeR */ ifstream cin("betasah.in");
/* e4FvY2ND6 ily traian OzgydpeeR */ ofstream cout("betasah.out");
/* e4FvY2ND6 ily traian OzgydpeeR */ 
/* e4FvY2ND6 ily traian OzgydpeeR */ int a[1001][1001];
/* e4FvY2ND6 ily traian OzgydpeeR */ 
/* e4FvY2ND6 ily traian OzgydpeeR */ int main()
/* e4FvY2ND6 ily traian OzgydpeeR */ {
/* e4FvY2ND6 ily traian OzgydpeeR */     int n , d , k;
/* e4FvY2ND6 ily traian OzgydpeeR */     cin >> n >> d >> k;
/* e4FvY2ND6 ily traian OzgydpeeR */     for(int i = 1 ; i <= n ; ++i)
/* e4FvY2ND6 ily traian OzgydpeeR */         for(int j = 1 ; j <= n ; ++j)
/* e4FvY2ND6 ily traian OzgydpeeR */             if(i < j)
/* e4FvY2ND6 ily traian OzgydpeeR */                 a[i][j]=1;
/* e4FvY2ND6 ily traian OzgydpeeR */     int x , y;
/* e4FvY2ND6 ily traian OzgydpeeR */     for(int i = 0 ; i < d ; ++i)
/* e4FvY2ND6 ily traian OzgydpeeR */         cin >> x >> y , a[x][y]=2;
/* e4FvY2ND6 ily traian OzgydpeeR */     for(int i = 0 ; i < k ; ++i)
/* e4FvY2ND6 ily traian OzgydpeeR */         cin >> x >> y , a[x][y]=1;
/* e4FvY2ND6 ily traian OzgydpeeR */     int max=0;
/* e4FvY2ND6 ily traian OzgydpeeR */     int cnt=0;
/* e4FvY2ND6 ily traian OzgydpeeR */     int ind=0;
/* e4FvY2ND6 ily traian OzgydpeeR */     for(int i = 1 ; i <= n ; ++i)
/* e4FvY2ND6 ily traian OzgydpeeR */     {
/* e4FvY2ND6 ily traian OzgydpeeR */         cnt=0;
/* e4FvY2ND6 ily traian OzgydpeeR */         for(int j = 1 ; j <= n ; ++j)
/* e4FvY2ND6 ily traian OzgydpeeR */         {
/* e4FvY2ND6 ily traian OzgydpeeR */             if(a[i][j]==0 || a[i][j]==2)
/* e4FvY2ND6 ily traian OzgydpeeR */                 cnt++;
/* e4FvY2ND6 ily traian OzgydpeeR */         }
/* e4FvY2ND6 ily traian OzgydpeeR */         if(cnt > max)
/* e4FvY2ND6 ily traian OzgydpeeR */             max=cnt;
/* e4FvY2ND6 ily traian OzgydpeeR */     }
/* e4FvY2ND6 ily traian OzgydpeeR */     cout << max << '\n';
/* e4FvY2ND6 ily traian OzgydpeeR */     for(int i = 1 ; i <= n ; ++i)
/* e4FvY2ND6 ily traian OzgydpeeR */     {
/* e4FvY2ND6 ily traian OzgydpeeR */         for(int j = 1 ; j <= n ; ++j)
/* e4FvY2ND6 ily traian OzgydpeeR */         {
/* e4FvY2ND6 ily traian OzgydpeeR */             if(a[i][j]==2)
/* e4FvY2ND6 ily traian OzgydpeeR */             {
/* e4FvY2ND6 ily traian OzgydpeeR */                 int ci=i , cj=j;
/* e4FvY2ND6 ily traian OzgydpeeR */                 i--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && i>=1)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     i--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 i = ci;
/* e4FvY2ND6 ily traian OzgydpeeR */                 j--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && j>=1)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     j--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 j=cj;
/* e4FvY2ND6 ily traian OzgydpeeR */                 i++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && i<=n)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     i++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 i=ci;
/* e4FvY2ND6 ily traian OzgydpeeR */                 j++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && j<=n)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     j++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 j=cj;
/* e4FvY2ND6 ily traian OzgydpeeR */                 i-- , j--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && i>=1 && j>=1)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     i-- , j--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 i=ci , j=cj;
/* e4FvY2ND6 ily traian OzgydpeeR */                 i-- , j++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && i>=1 && j<=n)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     i-- , j++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 i=ci , j=cj;
/* e4FvY2ND6 ily traian OzgydpeeR */                 i++ , j++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && i<=n && j<=n)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     i++ , j++;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 i=ci , j=cj;
/* e4FvY2ND6 ily traian OzgydpeeR */                 i++ , j--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 while(a[i][j]!=1 && a[i][j]!=2 && i<= n && j>=1)
/* e4FvY2ND6 ily traian OzgydpeeR */                 {
/* e4FvY2ND6 ily traian OzgydpeeR */                     a[i][j]=3;
/* e4FvY2ND6 ily traian OzgydpeeR */                     i++ , j--;
/* e4FvY2ND6 ily traian OzgydpeeR */                 }
/* e4FvY2ND6 ily traian OzgydpeeR */                 i=ci , j=cj;
/* e4FvY2ND6 ily traian OzgydpeeR */             }
/* e4FvY2ND6 ily traian OzgydpeeR */         }
/* e4FvY2ND6 ily traian OzgydpeeR */     }
/* e4FvY2ND6 ily traian OzgydpeeR */     cnt=0;
/* e4FvY2ND6 ily traian OzgydpeeR */     for(int i = 1 ; i <= n ; ++i)
/* e4FvY2ND6 ily traian OzgydpeeR */     {
/* e4FvY2ND6 ily traian OzgydpeeR */         for(int j = 1 ; j <= n ; ++j)
/* e4FvY2ND6 ily traian OzgydpeeR */         {
/* e4FvY2ND6 ily traian OzgydpeeR */             if(a[i][j]==3)
/* e4FvY2ND6 ily traian OzgydpeeR */                 cnt++;
/* e4FvY2ND6 ily traian OzgydpeeR */         }
/* e4FvY2ND6 ily traian OzgydpeeR */     }
/* e4FvY2ND6 ily traian OzgydpeeR */     cout << cnt;
/* e4FvY2ND6 ily traian OzgydpeeR */     return 0;    
/* e4FvY2ND6 ily traian OzgydpeeR */ }