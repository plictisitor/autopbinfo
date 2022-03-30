/* bgihfUrWf ily traian zTcdQ3MDY */ #include <algorithm>
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
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ using namespace std;
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ ifstream fin("road.in");
/* bgihfUrWf ily traian zTcdQ3MDY */ ofstream fout("road.out");
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ struct pozitie{
/* bgihfUrWf ily traian zTcdQ3MDY */     int i,j;
/* bgihfUrWf ily traian zTcdQ3MDY */ };
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ const int di[]={1,0,-1,0};
/* bgihfUrWf ily traian zTcdQ3MDY */ const int dj[]={0,1,0,-1};
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ int B[102][102],A[102][102],C[102][102],cc[11];
/* bgihfUrWf ily traian zTcdQ3MDY */ int n,dmin=10,cmin=1000000;
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ int inside(int i, int j)
/* bgihfUrWf ily traian zTcdQ3MDY */ {
/* bgihfUrWf ily traian zTcdQ3MDY */     return i>=1 && j>=1 && i<=n && j<=n;
/* bgihfUrWf ily traian zTcdQ3MDY */ }
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ int verif(int x, int y)
/* bgihfUrWf ily traian zTcdQ3MDY */ {
/* bgihfUrWf ily traian zTcdQ3MDY */     return (x&(1<<y))!=0;
/* bgihfUrWf ily traian zTcdQ3MDY */ }
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ int nrdist(int x)
/* bgihfUrWf ily traian zTcdQ3MDY */ {
/* bgihfUrWf ily traian zTcdQ3MDY */     int c=0;
/* bgihfUrWf ily traian zTcdQ3MDY */     while(x)
/* bgihfUrWf ily traian zTcdQ3MDY */     {
/* bgihfUrWf ily traian zTcdQ3MDY */         c=c+x%2;
/* bgihfUrWf ily traian zTcdQ3MDY */         x=x/2;
/* bgihfUrWf ily traian zTcdQ3MDY */     }
/* bgihfUrWf ily traian zTcdQ3MDY */     return c;
/* bgihfUrWf ily traian zTcdQ3MDY */ }
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ queue<pozitie> Q;
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ void LEE(int cod)
/* bgihfUrWf ily traian zTcdQ3MDY */ {
/* bgihfUrWf ily traian zTcdQ3MDY */     for(int i=1;i<=n;i++)
/* bgihfUrWf ily traian zTcdQ3MDY */     {
/* bgihfUrWf ily traian zTcdQ3MDY */         pozitie p;
/* bgihfUrWf ily traian zTcdQ3MDY */         p.i=i; p.j=1;
/* bgihfUrWf ily traian zTcdQ3MDY */         if(verif(cod,A[i][1]))
/* bgihfUrWf ily traian zTcdQ3MDY */            {
/* bgihfUrWf ily traian zTcdQ3MDY */                Q.push(p);
/* bgihfUrWf ily traian zTcdQ3MDY */                B[i][1]=1;
/* bgihfUrWf ily traian zTcdQ3MDY */                C[i][1]=cc[A[i][1]];
/* bgihfUrWf ily traian zTcdQ3MDY */            }
/* bgihfUrWf ily traian zTcdQ3MDY */     }
/* bgihfUrWf ily traian zTcdQ3MDY */     while(!Q.empty())
/* bgihfUrWf ily traian zTcdQ3MDY */     {
/* bgihfUrWf ily traian zTcdQ3MDY */         int i=Q.front().i;
/* bgihfUrWf ily traian zTcdQ3MDY */         int j=Q.front().j;
/* bgihfUrWf ily traian zTcdQ3MDY */         for(int d=0;d<4;d++)
/* bgihfUrWf ily traian zTcdQ3MDY */         {
/* bgihfUrWf ily traian zTcdQ3MDY */             int ii=i+di[d];
/* bgihfUrWf ily traian zTcdQ3MDY */             int jj=j+dj[d];
/* bgihfUrWf ily traian zTcdQ3MDY */             if(inside(ii,jj) && verif(cod,A[ii][jj]))
/* bgihfUrWf ily traian zTcdQ3MDY */                 if(C[ii][jj]>C[i][j]+cc[A[ii][jj]])
/* bgihfUrWf ily traian zTcdQ3MDY */                 {
/* bgihfUrWf ily traian zTcdQ3MDY */                     B[ii][jj]=B[i][j]+1;
/* bgihfUrWf ily traian zTcdQ3MDY */                     C[ii][jj]=C[i][j]+cc[A[ii][jj]];
/* bgihfUrWf ily traian zTcdQ3MDY */                     pozitie pnou;
/* bgihfUrWf ily traian zTcdQ3MDY */                     pnou.i=ii;
/* bgihfUrWf ily traian zTcdQ3MDY */                     pnou.j=jj;
/* bgihfUrWf ily traian zTcdQ3MDY */                     Q.push(pnou);
/* bgihfUrWf ily traian zTcdQ3MDY */                 }
/* bgihfUrWf ily traian zTcdQ3MDY */         }
/* bgihfUrWf ily traian zTcdQ3MDY */         Q.pop();
/* bgihfUrWf ily traian zTcdQ3MDY */     }
/* bgihfUrWf ily traian zTcdQ3MDY */     int costmin=100000;
/* bgihfUrWf ily traian zTcdQ3MDY */     for(int i=1;i<=n;i++)
/* bgihfUrWf ily traian zTcdQ3MDY */         if(B[i][n]>0 && C[i][n]<costmin)
/* bgihfUrWf ily traian zTcdQ3MDY */             costmin=C[i][n];
/* bgihfUrWf ily traian zTcdQ3MDY */     if(costmin!=100000)
/* bgihfUrWf ily traian zTcdQ3MDY */     {
/* bgihfUrWf ily traian zTcdQ3MDY */           if(nrdist(cod)<dmin) { dmin=nrdist(cod); cmin=costmin; }
/* bgihfUrWf ily traian zTcdQ3MDY */           else if(nrdist(cod)==dmin && cmin>costmin) cmin=costmin;
/* bgihfUrWf ily traian zTcdQ3MDY */     }
/* bgihfUrWf ily traian zTcdQ3MDY */ }
/* bgihfUrWf ily traian zTcdQ3MDY */ 
/* bgihfUrWf ily traian zTcdQ3MDY */ int main()
/* bgihfUrWf ily traian zTcdQ3MDY */ {
/* bgihfUrWf ily traian zTcdQ3MDY */     fin>>n;
/* bgihfUrWf ily traian zTcdQ3MDY */     for(int i=0;i<=9;i++)
/* bgihfUrWf ily traian zTcdQ3MDY */         fin>>cc[i];
/* bgihfUrWf ily traian zTcdQ3MDY */     for(int i=1;i<=n;i++)
/* bgihfUrWf ily traian zTcdQ3MDY */           for(int j=1;j<=n;j++)
/* bgihfUrWf ily traian zTcdQ3MDY */              {
/* bgihfUrWf ily traian zTcdQ3MDY */                  char x;
/* bgihfUrWf ily traian zTcdQ3MDY */                  fin>>x;
/* bgihfUrWf ily traian zTcdQ3MDY */                  A[i][j]=x-'0';
/* bgihfUrWf ily traian zTcdQ3MDY */              }
/* bgihfUrWf ily traian zTcdQ3MDY */     for(int k=0;k<=1023;k++)
/* bgihfUrWf ily traian zTcdQ3MDY */     {
/* bgihfUrWf ily traian zTcdQ3MDY */         for(int i=1;i<=n;i++)
/* bgihfUrWf ily traian zTcdQ3MDY */           for(int j=1;j<=n;j++)
/* bgihfUrWf ily traian zTcdQ3MDY */             {
/* bgihfUrWf ily traian zTcdQ3MDY */                 B[i][j]=0;
/* bgihfUrWf ily traian zTcdQ3MDY */                 C[i][j]=1000000;
/* bgihfUrWf ily traian zTcdQ3MDY */             }
/* bgihfUrWf ily traian zTcdQ3MDY */         LEE(k);
/* bgihfUrWf ily traian zTcdQ3MDY */     }
/* bgihfUrWf ily traian zTcdQ3MDY */     fout<<dmin<<'\n'<<cmin;
/* bgihfUrWf ily traian zTcdQ3MDY */     return 0;
/* bgihfUrWf ily traian zTcdQ3MDY */ }