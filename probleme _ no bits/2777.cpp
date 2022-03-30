/* tw5F9uTmZ ily traian 3oXkzYCdT */ #include <algorithm>
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
/* tw5F9uTmZ ily traian 3oXkzYCdT */ using namespace std;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ ifstream cin("bomboane4.in");
/* tw5F9uTmZ ily traian 3oXkzYCdT */ ofstream cout("bomboane4.out");
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ int A[30] , B[30] , C[50];
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ long long int cmmdc(long long int a , long long int b)
/* tw5F9uTmZ ily traian 3oXkzYCdT */ {
/* tw5F9uTmZ ily traian 3oXkzYCdT */     while(b)
/* tw5F9uTmZ ily traian 3oXkzYCdT */     {
/* tw5F9uTmZ ily traian 3oXkzYCdT */         long long int r = a % b;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         a = b;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         b = r;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     }
/* tw5F9uTmZ ily traian 3oXkzYCdT */     return a;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ }
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ void inmultire()
/* tw5F9uTmZ ily traian 3oXkzYCdT */ {
/* tw5F9uTmZ ily traian 3oXkzYCdT */     int i,j,T=0;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     C[0]=A[0]+B[0]-1;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     for (i=1;i<=A[0]+B[0];)
/* tw5F9uTmZ ily traian 3oXkzYCdT */         C[i++]=0;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     for (i=1;i<=A[0];i++)
/* tw5F9uTmZ ily traian 3oXkzYCdT */         for (j=1;j<=B[0];j++)
/* tw5F9uTmZ ily traian 3oXkzYCdT */             C[i+j-1]+=A[i]*B[j];
/* tw5F9uTmZ ily traian 3oXkzYCdT */     for (i=1;i<=C[0];i++)
/* tw5F9uTmZ ily traian 3oXkzYCdT */     {
/* tw5F9uTmZ ily traian 3oXkzYCdT */         T=(C[i]+=T)/10;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         C[i]%=10;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     }
/* tw5F9uTmZ ily traian 3oXkzYCdT */     if( T )
/* tw5F9uTmZ ily traian 3oXkzYCdT */         C[++C[0]]=T;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ }
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ unsigned long Divide(unsigned long long X)
/* tw5F9uTmZ ily traian 3oXkzYCdT */ { int i;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */   unsigned long R=0;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */   for (i=C[0];i;i--)
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */     { C[i]=(R=10*R+C[i])/X;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */       R%=X;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */     }
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */   while (!C[C[0]] && C[0]>1) C[0]--;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */   return R;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ }
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ void Subtract()
/* tw5F9uTmZ ily traian 3oXkzYCdT */ {
/* tw5F9uTmZ ily traian 3oXkzYCdT */     int S[50];
/* tw5F9uTmZ ily traian 3oXkzYCdT */     int i, T=0;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     S[0]=1 , S[1]=1;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     for (i=S[0]+1;i<=C[0];) S[i++]=0;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */     for (i=1;i<=C[0];i++)
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */     C[i]+= (T=(C[i]-=S[i]+T)<0) ? 10 : 0;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */     while (!C[C[0]]) C[0]--;
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ }
/* tw5F9uTmZ ily traian 3oXkzYCdT */ 
/* tw5F9uTmZ ily traian 3oXkzYCdT */ int main()
/* tw5F9uTmZ ily traian 3oXkzYCdT */ {
/* tw5F9uTmZ ily traian 3oXkzYCdT */     long long int a , b;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     cin >> a >> b;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     unsigned long long d = cmmdc(a , b);
/* tw5F9uTmZ ily traian 3oXkzYCdT */     int i = 1;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     while(a)
/* tw5F9uTmZ ily traian 3oXkzYCdT */     {
/* tw5F9uTmZ ily traian 3oXkzYCdT */         A[i]=a%10;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         a/=10;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         i++;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     }
/* tw5F9uTmZ ily traian 3oXkzYCdT */     A[0]=i-1;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     i = 1;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     while(b)
/* tw5F9uTmZ ily traian 3oXkzYCdT */     {
/* tw5F9uTmZ ily traian 3oXkzYCdT */         B[i]=b%10;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         b/=10;
/* tw5F9uTmZ ily traian 3oXkzYCdT */         i++;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     }
/* tw5F9uTmZ ily traian 3oXkzYCdT */     B[0]=i-1;
/* tw5F9uTmZ ily traian 3oXkzYCdT */     inmultire();
/* tw5F9uTmZ ily traian 3oXkzYCdT */     int x = Divide(d);
/* tw5F9uTmZ ily traian 3oXkzYCdT */     Subtract();
/* tw5F9uTmZ ily traian 3oXkzYCdT */     for(int i = C[0] ; i ; --i)
/* tw5F9uTmZ ily traian 3oXkzYCdT */         cout << C[i];
/* tw5F9uTmZ ily traian 3oXkzYCdT */ }