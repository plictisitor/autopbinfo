/* kBWCqshmY ily traian pBvrFv3ZC */ #include <algorithm>
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
/* kBWCqshmY ily traian pBvrFv3ZC */ 
/* kBWCqshmY ily traian pBvrFv3ZC */ using namespace std;
/* kBWCqshmY ily traian pBvrFv3ZC */ 
/* kBWCqshmY ily traian pBvrFv3ZC */ ifstream cin("bec.in");
/* kBWCqshmY ily traian pBvrFv3ZC */ ofstream cout("bec.out");
/* kBWCqshmY ily traian pBvrFv3ZC */ 
/* kBWCqshmY ily traian pBvrFv3ZC */ int A[151][151],n,m,k,p;
/* kBWCqshmY ily traian pBvrFv3ZC */ int X[101],Y[101],C[101];
/* kBWCqshmY ily traian pBvrFv3ZC */ 
/* kBWCqshmY ily traian pBvrFv3ZC */ int cmmdc(int a,int b)
/* kBWCqshmY ily traian pBvrFv3ZC */ {
/* kBWCqshmY ily traian pBvrFv3ZC */     while(b!=0)
/* kBWCqshmY ily traian pBvrFv3ZC */     {
/* kBWCqshmY ily traian pBvrFv3ZC */         int r=a%b;
/* kBWCqshmY ily traian pBvrFv3ZC */         a=b;
/* kBWCqshmY ily traian pBvrFv3ZC */         b=r;
/* kBWCqshmY ily traian pBvrFv3ZC */     }
/* kBWCqshmY ily traian pBvrFv3ZC */     return a;
/* kBWCqshmY ily traian pBvrFv3ZC */ }
/* kBWCqshmY ily traian pBvrFv3ZC */ 
/* kBWCqshmY ily traian pBvrFv3ZC */ int main()
/* kBWCqshmY ily traian pBvrFv3ZC */ {
/* kBWCqshmY ily traian pBvrFv3ZC */     cin>>p>>n>>m>>k;
/* kBWCqshmY ily traian pBvrFv3ZC */     for(int i=1;i<=k;i++)
/* kBWCqshmY ily traian pBvrFv3ZC */     {
/* kBWCqshmY ily traian pBvrFv3ZC */         cin>>X[i]>>Y[i]>>C[i];
/* kBWCqshmY ily traian pBvrFv3ZC */         A[X[i]][Y[i]]=1;
/* kBWCqshmY ily traian pBvrFv3ZC */     }
/* kBWCqshmY ily traian pBvrFv3ZC */     int c,xmin=0,cmin=10000,cmax=0;
/* kBWCqshmY ily traian pBvrFv3ZC */     for(int x=1;x<=k;x++)
/* kBWCqshmY ily traian pBvrFv3ZC */     {
/* kBWCqshmY ily traian pBvrFv3ZC */         c=0;
/* kBWCqshmY ily traian pBvrFv3ZC */         for(int i=1;i<=n;i++)
/* kBWCqshmY ily traian pBvrFv3ZC */             for(int j=1;j<=m;j++)
/* kBWCqshmY ily traian pBvrFv3ZC */                 if(A[i][j]==0 && cmmdc(abs(X[x]-i),abs(Y[x]-j))==1)
/* kBWCqshmY ily traian pBvrFv3ZC */                     c++;
/* kBWCqshmY ily traian pBvrFv3ZC */         if(c>cmax)
/* kBWCqshmY ily traian pBvrFv3ZC */         {
/* kBWCqshmY ily traian pBvrFv3ZC */             cmax=c;
/* kBWCqshmY ily traian pBvrFv3ZC */             xmin=x;
/* kBWCqshmY ily traian pBvrFv3ZC */             cmin=C[x];
/* kBWCqshmY ily traian pBvrFv3ZC */         }
/* kBWCqshmY ily traian pBvrFv3ZC */         else
/* kBWCqshmY ily traian pBvrFv3ZC */             if(c==cmax && C[x]<cmin)
/* kBWCqshmY ily traian pBvrFv3ZC */         {
/* kBWCqshmY ily traian pBvrFv3ZC */             xmin=x;
/* kBWCqshmY ily traian pBvrFv3ZC */             cmin=C[x];
/* kBWCqshmY ily traian pBvrFv3ZC */         }
/* kBWCqshmY ily traian pBvrFv3ZC */     }
/* kBWCqshmY ily traian pBvrFv3ZC */     if(p==1)
/* kBWCqshmY ily traian pBvrFv3ZC */         cout<<cmax;
/* kBWCqshmY ily traian pBvrFv3ZC */     else
/* kBWCqshmY ily traian pBvrFv3ZC */         cout<<X[xmin]<<" "<<Y[xmin];
/* kBWCqshmY ily traian pBvrFv3ZC */     return 0;
/* kBWCqshmY ily traian pBvrFv3ZC */ }