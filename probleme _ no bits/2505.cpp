/* 3fOLovUzi ily traian 7RGImeoGB */ #include <algorithm>
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
/* 3fOLovUzi ily traian 7RGImeoGB */ using namespace std;
/* 3fOLovUzi ily traian 7RGImeoGB */ 
/* 3fOLovUzi ily traian 7RGImeoGB */ char s[10002],c;
/* 3fOLovUzi ily traian 7RGImeoGB */ bool a[102][10002];
/* 3fOLovUzi ily traian 7RGImeoGB */ int sus[102][10002], st[102][10002], sts[102][10002],stj[102][10002],b[4],sir[2][10002],d[2];
/* 3fOLovUzi ily traian 7RGImeoGB */ int i,j,N,M,K,Q,A,B,P,x,max1,p1,p2;
/* 3fOLovUzi ily traian 7RGImeoGB */ 
/* 3fOLovUzi ily traian 7RGImeoGB */ int cbinarp(int A,int B, int u)
/* 3fOLovUzi ily traian 7RGImeoGB */ {
/* 3fOLovUzi ily traian 7RGImeoGB */     int i,j,k;
/* 3fOLovUzi ily traian 7RGImeoGB */     if (B<sir[A][1]) return -1;
/* 3fOLovUzi ily traian 7RGImeoGB */     if (B>sir[A][u]) return -1;
/* 3fOLovUzi ily traian 7RGImeoGB */     if (B==sir[A][1]) return 1;
/* 3fOLovUzi ily traian 7RGImeoGB */     i=1;
/* 3fOLovUzi ily traian 7RGImeoGB */     j=u;
/* 3fOLovUzi ily traian 7RGImeoGB */     while (i<=j)
/* 3fOLovUzi ily traian 7RGImeoGB */     {
/* 3fOLovUzi ily traian 7RGImeoGB */         k=(i+j)/2;
/* 3fOLovUzi ily traian 7RGImeoGB */         if (sir[A][k]==B&&sir[A][k-1]<B) return k;
/* 3fOLovUzi ily traian 7RGImeoGB */         else
/* 3fOLovUzi ily traian 7RGImeoGB */             if (sir[A][k]>=B) j=k-1;
/* 3fOLovUzi ily traian 7RGImeoGB */             else i=k+1;
/* 3fOLovUzi ily traian 7RGImeoGB */     }
/* 3fOLovUzi ily traian 7RGImeoGB */     return -1;
/* 3fOLovUzi ily traian 7RGImeoGB */ }
/* 3fOLovUzi ily traian 7RGImeoGB */ 
/* 3fOLovUzi ily traian 7RGImeoGB */ int cbinaru(int A,int B, int u)
/* 3fOLovUzi ily traian 7RGImeoGB */ {
/* 3fOLovUzi ily traian 7RGImeoGB */     int i,j,k;
/* 3fOLovUzi ily traian 7RGImeoGB */     if (B<sir[A][1]) return -1;
/* 3fOLovUzi ily traian 7RGImeoGB */     if (B>sir[A][u]) return -1;
/* 3fOLovUzi ily traian 7RGImeoGB */     if (B==sir[A][u]) return u;
/* 3fOLovUzi ily traian 7RGImeoGB */     i=1;
/* 3fOLovUzi ily traian 7RGImeoGB */     j=u;
/* 3fOLovUzi ily traian 7RGImeoGB */     while (i<=j)
/* 3fOLovUzi ily traian 7RGImeoGB */     {
/* 3fOLovUzi ily traian 7RGImeoGB */         k=(i+j)/2;
/* 3fOLovUzi ily traian 7RGImeoGB */         if (sir[A][k]==B&&(sir[A][k+1]>B||k==u)) return k;
/* 3fOLovUzi ily traian 7RGImeoGB */         else
/* 3fOLovUzi ily traian 7RGImeoGB */             if (sir[A][k]>B) j=k-1;
/* 3fOLovUzi ily traian 7RGImeoGB */             else i=k+1;
/* 3fOLovUzi ily traian 7RGImeoGB */     }
/* 3fOLovUzi ily traian 7RGImeoGB */     return -1;
/* 3fOLovUzi ily traian 7RGImeoGB */ }
/* 3fOLovUzi ily traian 7RGImeoGB */ 
/* 3fOLovUzi ily traian 7RGImeoGB */ int main()
/* 3fOLovUzi ily traian 7RGImeoGB */ {
/* 3fOLovUzi ily traian 7RGImeoGB */     freopen("jocxzero.in", "r", stdin);
/* 3fOLovUzi ily traian 7RGImeoGB */     freopen("jocxzero.out", "w", stdout);
/* 3fOLovUzi ily traian 7RGImeoGB */     scanf("%d\n",&P);
/* 3fOLovUzi ily traian 7RGImeoGB */     scanf("%d %d %d\n", &N, &M, &K);
/* 3fOLovUzi ily traian 7RGImeoGB */     for (j=1;j<=N;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */         {
/* 3fOLovUzi ily traian 7RGImeoGB */             gets(s+1);
/* 3fOLovUzi ily traian 7RGImeoGB */             for (i=1;i<=M;i++)
/* 3fOLovUzi ily traian 7RGImeoGB */                 if (s[i]=='X') a[j][i]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */                 else
/* 3fOLovUzi ily traian 7RGImeoGB */                 if (s[i]=='0') a[j][i]=0;
/* 3fOLovUzi ily traian 7RGImeoGB */         }
/* 3fOLovUzi ily traian 7RGImeoGB */         st[1][1]=sus[1][1]=sts[1][1]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */         for (j=2;j<=M;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */         {
/* 3fOLovUzi ily traian 7RGImeoGB */             if (a[1][j]==a[1][j-1]) st[1][j]=st[1][j-1]+1;
/* 3fOLovUzi ily traian 7RGImeoGB */             else st[1][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */             sus[1][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */             sts[1][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */         }
/* 3fOLovUzi ily traian 7RGImeoGB */         for (i=2;i<=N;i++)
/* 3fOLovUzi ily traian 7RGImeoGB */         {
/* 3fOLovUzi ily traian 7RGImeoGB */             if (a[i][1]==a[i-1][1]) sus[i][1]=sus[i-1][1]+1;
/* 3fOLovUzi ily traian 7RGImeoGB */             else sus[i][1]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */             st[i][1]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */             sts[i][1]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */         }
/* 3fOLovUzi ily traian 7RGImeoGB */         for (i=2;i<=N;i++)
/* 3fOLovUzi ily traian 7RGImeoGB */             for (j=2;j<=M;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */                 {
/* 3fOLovUzi ily traian 7RGImeoGB */                     if (a[i][j]==a[i][j-1]) st[i][j]=st[i][j-1]+1;
/* 3fOLovUzi ily traian 7RGImeoGB */                     else st[i][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */                     if (a[i][j]==a[i-1][j]) sus[i][j]=sus[i-1][j]+1;
/* 3fOLovUzi ily traian 7RGImeoGB */                     else sus[i][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */                     if (a[i][j]==a[i-1][j-1]) sts[i][j]=sts[i-1][j-1]+1;
/* 3fOLovUzi ily traian 7RGImeoGB */                     else sts[i][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */                 }
/* 3fOLovUzi ily traian 7RGImeoGB */         stj[N][1]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */         for (i=N-1;i>=1;i--)
/* 3fOLovUzi ily traian 7RGImeoGB */             stj[i][1]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */         for (j=2;j<=M;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */             stj[N][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */         for (i=N-1;i>=1;i--)
/* 3fOLovUzi ily traian 7RGImeoGB */             for (j=2;j<=M;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */                 {
/* 3fOLovUzi ily traian 7RGImeoGB */                     if (a[i][j]==a[i+1][j-1]) stj[i][j]=stj[i+1][j-1]+1;
/* 3fOLovUzi ily traian 7RGImeoGB */                     else stj[i][j]=1;
/* 3fOLovUzi ily traian 7RGImeoGB */                 }
/* 3fOLovUzi ily traian 7RGImeoGB */         for (i=1;i<=N;i++)
/* 3fOLovUzi ily traian 7RGImeoGB */             for (j=1;j<=M;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */         {
/* 3fOLovUzi ily traian 7RGImeoGB */             x=a[i][j];
/* 3fOLovUzi ily traian 7RGImeoGB */             if (sus[i][j]>=K) b[x]++;
/* 3fOLovUzi ily traian 7RGImeoGB */             if (st[i][j]>=K) b[x]++;
/* 3fOLovUzi ily traian 7RGImeoGB */             if (sts[i][j]>=K) b[x]++;
/* 3fOLovUzi ily traian 7RGImeoGB */             if (stj[i][j]>=K) b[x]++;
/* 3fOLovUzi ily traian 7RGImeoGB */         }
/* 3fOLovUzi ily traian 7RGImeoGB */     if (P==1)
/* 3fOLovUzi ily traian 7RGImeoGB */         printf("%d %d\n", b[1], b[0]);
/* 3fOLovUzi ily traian 7RGImeoGB */     else
/* 3fOLovUzi ily traian 7RGImeoGB */     {
/* 3fOLovUzi ily traian 7RGImeoGB */         for (j=1;j<=M;j++)
/* 3fOLovUzi ily traian 7RGImeoGB */         {
/* 3fOLovUzi ily traian 7RGImeoGB */             d[0]=0;
/* 3fOLovUzi ily traian 7RGImeoGB */             d[1]=0;
/* 3fOLovUzi ily traian 7RGImeoGB */             for (i=1;i<=N;i++)
/* 3fOLovUzi ily traian 7RGImeoGB */             {
/* 3fOLovUzi ily traian 7RGImeoGB */                 if (st[i][j]>=K) d[a[i][j]]++;
/* 3fOLovUzi ily traian 7RGImeoGB */                 if (sus[i][j]>=K) d[a[i][j]]++;
/* 3fOLovUzi ily traian 7RGImeoGB */                 if (sts[i][j]>=K) d[a[i][j]]++;
/* 3fOLovUzi ily traian 7RGImeoGB */                 if (stj[i][j]>=K) d[a[i][j]]++;
/* 3fOLovUzi ily traian 7RGImeoGB */             }
/* 3fOLovUzi ily traian 7RGImeoGB */             sir[1][j]=sir[1][j-1]+d[1];
/* 3fOLovUzi ily traian 7RGImeoGB */             sir[0][j]=sir[0][j-1]+d[0];
/* 3fOLovUzi ily traian 7RGImeoGB */         }
/* 3fOLovUzi ily traian 7RGImeoGB */         scanf("%d\n", &Q);
/* 3fOLovUzi ily traian 7RGImeoGB */         for (i=1;i<=Q;i++)
/* 3fOLovUzi ily traian 7RGImeoGB */         {
/* 3fOLovUzi ily traian 7RGImeoGB */             scanf("%c %d\n",&c, &B);
/* 3fOLovUzi ily traian 7RGImeoGB */             if (c=='X') A=1;
/* 3fOLovUzi ily traian 7RGImeoGB */             else A=0;
/* 3fOLovUzi ily traian 7RGImeoGB */             p1=cbinarp(A,B,M-1);
/* 3fOLovUzi ily traian 7RGImeoGB */             p2=cbinaru(A,B,M-1);
/* 3fOLovUzi ily traian 7RGImeoGB */             if (p1==-1) printf("0\n");
/* 3fOLovUzi ily traian 7RGImeoGB */             else
/* 3fOLovUzi ily traian 7RGImeoGB */                 printf("%d\n",p2-p1+1);
/* 3fOLovUzi ily traian 7RGImeoGB */         }
/* 3fOLovUzi ily traian 7RGImeoGB */     }
/* 3fOLovUzi ily traian 7RGImeoGB */     return 0;
/* 3fOLovUzi ily traian 7RGImeoGB */ }