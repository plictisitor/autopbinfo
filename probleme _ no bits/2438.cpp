/* IwSYXqZ1P ily traian hZ02o6wml */ #include <algorithm>
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
/* IwSYXqZ1P ily traian hZ02o6wml */ 
/* IwSYXqZ1P ily traian hZ02o6wml */ #define N 50001
/* IwSYXqZ1P ily traian hZ02o6wml */ #define ULL unsigned long long
/* IwSYXqZ1P ily traian hZ02o6wml */ using namespace std;
/* IwSYXqZ1P ily traian hZ02o6wml */ 
/* IwSYXqZ1P ily traian hZ02o6wml */ ifstream f("pal.in");
/* IwSYXqZ1P ily traian hZ02o6wml */ ofstream g("pal.out");
/* IwSYXqZ1P ily traian hZ02o6wml */ struct nr{ULL x;int n;}a[N];
/* IwSYXqZ1P ily traian hZ02o6wml */ int C, n, m, mx;
/* IwSYXqZ1P ily traian hZ02o6wml */ ULL z, sol[20], s[20], p10[20];
/* IwSYXqZ1P ily traian hZ02o6wml */ bool CB(ULL y)
/* IwSYXqZ1P ily traian hZ02o6wml */ {
/* IwSYXqZ1P ily traian hZ02o6wml */     int s=1,d=n,m;
/* IwSYXqZ1P ily traian hZ02o6wml */     while(s<=d)
/* IwSYXqZ1P ily traian hZ02o6wml */     {
/* IwSYXqZ1P ily traian hZ02o6wml */         m=(s+d)/2;
/* IwSYXqZ1P ily traian hZ02o6wml */         if(a[m].x==y)return 1;
/* IwSYXqZ1P ily traian hZ02o6wml */         else if(a[m].x<y)s=m+1;
/* IwSYXqZ1P ily traian hZ02o6wml */         else d=m-1;
/* IwSYXqZ1P ily traian hZ02o6wml */     }
/* IwSYXqZ1P ily traian hZ02o6wml */     return 0;
/* IwSYXqZ1P ily traian hZ02o6wml */ }
/* IwSYXqZ1P ily traian hZ02o6wml */ bool comp(nr a, nr b)
/* IwSYXqZ1P ily traian hZ02o6wml */ {
/* IwSYXqZ1P ily traian hZ02o6wml */     return a.x<b.x;
/* IwSYXqZ1P ily traian hZ02o6wml */ }
/* IwSYXqZ1P ily traian hZ02o6wml */ ULL pal(ULL x, int &n)
/* IwSYXqZ1P ily traian hZ02o6wml */ {
/* IwSYXqZ1P ily traian hZ02o6wml */     int a[20], i, ok=1, m, r=0,j;
/* IwSYXqZ1P ily traian hZ02o6wml */     n=0;
/* IwSYXqZ1P ily traian hZ02o6wml */     while(x)
/* IwSYXqZ1P ily traian hZ02o6wml */         a[++n]=x%10,x/=10;
/* IwSYXqZ1P ily traian hZ02o6wml */     m=n/2;
/* IwSYXqZ1P ily traian hZ02o6wml */     for(i=1;i<=m && ok;i++)
/* IwSYXqZ1P ily traian hZ02o6wml */         if(a[i]>a[n-i+1]){for(r=1, j=i+1;j<=m;j++) r=r+a[j],a[j]=r%10, r/=10; a[m+1]+=r; a[i]=a[n-i+1];}
/* IwSYXqZ1P ily traian hZ02o6wml */         else a[i]=a[n-i+1];
/* IwSYXqZ1P ily traian hZ02o6wml */     if(a[m+1]>9)
/* IwSYXqZ1P ily traian hZ02o6wml */     {
/* IwSYXqZ1P ily traian hZ02o6wml */         r=0;
/* IwSYXqZ1P ily traian hZ02o6wml */         for(i=m+1;i<=n;i++)
/* IwSYXqZ1P ily traian hZ02o6wml */             r+=a[i],a[i]=r%10,r/=10;
/* IwSYXqZ1P ily traian hZ02o6wml */         for(i=1;i<=m;i++)a[i]=a[n-i+1];
/* IwSYXqZ1P ily traian hZ02o6wml */     }
/* IwSYXqZ1P ily traian hZ02o6wml */     for(i=n;i>=1;i--)x=x*10+a[i];
/* IwSYXqZ1P ily traian hZ02o6wml */     return x;
/* IwSYXqZ1P ily traian hZ02o6wml */ }
/* IwSYXqZ1P ily traian hZ02o6wml */ 
/* IwSYXqZ1P ily traian hZ02o6wml */ int main()
/* IwSYXqZ1P ily traian hZ02o6wml */ {
/* IwSYXqZ1P ily traian hZ02o6wml */     int i, c, j;
/* IwSYXqZ1P ily traian hZ02o6wml */     f>>C>>n;
/* IwSYXqZ1P ily traian hZ02o6wml */     for(i=1;i<=n;i++)
/* IwSYXqZ1P ily traian hZ02o6wml */         f>>z, a[i].x=pal(z,a[i].n);
/* IwSYXqZ1P ily traian hZ02o6wml */     if(C==1)
/* IwSYXqZ1P ily traian hZ02o6wml */         for(i=1;i<=n;i++)
/* IwSYXqZ1P ily traian hZ02o6wml */             g<<a[i].x<<' ';
/* IwSYXqZ1P ily traian hZ02o6wml */     else
/* IwSYXqZ1P ily traian hZ02o6wml */     {
/* IwSYXqZ1P ily traian hZ02o6wml */         sort(a+1,a+n+1, comp);
/* IwSYXqZ1P ily traian hZ02o6wml */         p10[0]=1;
/* IwSYXqZ1P ily traian hZ02o6wml */         for(i=1;i<=18;i++)p10[i]=p10[i-1]*10;
/* IwSYXqZ1P ily traian hZ02o6wml */         for(i=n;i>=1;i--)
/* IwSYXqZ1P ily traian hZ02o6wml */         {
/* IwSYXqZ1P ily traian hZ02o6wml */             m=1;s[m]=z=a[i].x;c=a[i].n;
/* IwSYXqZ1P ily traian hZ02o6wml */             for(j=1;j<=c/2;j++)
/* IwSYXqZ1P ily traian hZ02o6wml */                 if(CB(z/p10[j]%p10[c-2*j]))s[++m]=z/p10[j]%p10[c-2*j];
/* IwSYXqZ1P ily traian hZ02o6wml */             if(m>mx){
/* IwSYXqZ1P ily traian hZ02o6wml */                 mx=m;
/* IwSYXqZ1P ily traian hZ02o6wml */                 for(j=1;j<=m;j++)sol[j]=s[j];
/* IwSYXqZ1P ily traian hZ02o6wml */             }
/* IwSYXqZ1P ily traian hZ02o6wml */         }
/* IwSYXqZ1P ily traian hZ02o6wml */         if(C==2)
/* IwSYXqZ1P ily traian hZ02o6wml */             g<<mx<<'\n';
/* IwSYXqZ1P ily traian hZ02o6wml */         else
/* IwSYXqZ1P ily traian hZ02o6wml */             for(i=mx;i>=1;i--)g<<sol[i]<<' ';
/* IwSYXqZ1P ily traian hZ02o6wml */     }
/* IwSYXqZ1P ily traian hZ02o6wml */     return 0;
/* IwSYXqZ1P ily traian hZ02o6wml */ }