/* lpN8qigVA ily traian GdPNO27yD */ #include <algorithm>
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
/* lpN8qigVA ily traian GdPNO27yD */ using namespace std;
/* lpN8qigVA ily traian GdPNO27yD */ 
/* lpN8qigVA ily traian GdPNO27yD */ ifstream fin("memory006.in");
/* lpN8qigVA ily traian GdPNO27yD */ ofstream fout("memory006.out");
/* lpN8qigVA ily traian GdPNO27yD */ 
/* lpN8qigVA ily traian GdPNO27yD */ long long n,k,i,suma,nr,x,st,dr,p[60];
/* lpN8qigVA ily traian GdPNO27yD */ long mij;
/* lpN8qigVA ily traian GdPNO27yD */ char a[10001],t,j;
/* lpN8qigVA ily traian GdPNO27yD */ 
/* lpN8qigVA ily traian GdPNO27yD */ char exp(long s,long d)
/* lpN8qigVA ily traian GdPNO27yD */ {
/* lpN8qigVA ily traian GdPNO27yD */     if(s>d) return 0;
/* lpN8qigVA ily traian GdPNO27yD */     mij=(s+d)/2;
/* lpN8qigVA ily traian GdPNO27yD */     if(x==p[mij])
/* lpN8qigVA ily traian GdPNO27yD */         return mij;
/* lpN8qigVA ily traian GdPNO27yD */     if(x<p[mij])
/* lpN8qigVA ily traian GdPNO27yD */         return exp(s,mij-1);
/* lpN8qigVA ily traian GdPNO27yD */     else
/* lpN8qigVA ily traian GdPNO27yD */         return exp(mij+1,d);
/* lpN8qigVA ily traian GdPNO27yD */ }
/* lpN8qigVA ily traian GdPNO27yD */ 
/* lpN8qigVA ily traian GdPNO27yD */ int main()
/* lpN8qigVA ily traian GdPNO27yD */ {
/* lpN8qigVA ily traian GdPNO27yD */     fin >> n >> k;
/* lpN8qigVA ily traian GdPNO27yD */     p[1]=2;
/* lpN8qigVA ily traian GdPNO27yD */     for(i=2;i<=57;++i)
/* lpN8qigVA ily traian GdPNO27yD */         p[i]=p[i-1]*2;
/* lpN8qigVA ily traian GdPNO27yD */     nr=0;
/* lpN8qigVA ily traian GdPNO27yD */     suma=0;
/* lpN8qigVA ily traian GdPNO27yD */     st=0;
/* lpN8qigVA ily traian GdPNO27yD */     dr=-1 ;
/* lpN8qigVA ily traian GdPNO27yD */     for(i=0;i<n;++i)
/* lpN8qigVA ily traian GdPNO27yD */     {
/* lpN8qigVA ily traian GdPNO27yD */         fin>>x;
/* lpN8qigVA ily traian GdPNO27yD */         t=exp(1,57);
/* lpN8qigVA ily traian GdPNO27yD */         if(t==0)
/* lpN8qigVA ily traian GdPNO27yD */         {
/* lpN8qigVA ily traian GdPNO27yD */            suma=0;
/* lpN8qigVA ily traian GdPNO27yD */            st=0;
/* lpN8qigVA ily traian GdPNO27yD */            dr=-1;
/* lpN8qigVA ily traian GdPNO27yD */         }
/* lpN8qigVA ily traian GdPNO27yD */         else
/* lpN8qigVA ily traian GdPNO27yD */         {
/* lpN8qigVA ily traian GdPNO27yD */            dr=(dr+1)%10001;
/* lpN8qigVA ily traian GdPNO27yD */            a[dr]=t ;
/* lpN8qigVA ily traian GdPNO27yD */            suma=suma+t;
/* lpN8qigVA ily traian GdPNO27yD */            if(suma>=k)
/* lpN8qigVA ily traian GdPNO27yD */            {
/* lpN8qigVA ily traian GdPNO27yD */               if(suma==k)
/* lpN8qigVA ily traian GdPNO27yD */                 ++nr;
/* lpN8qigVA ily traian GdPNO27yD */               else
/* lpN8qigVA ily traian GdPNO27yD */               {
/* lpN8qigVA ily traian GdPNO27yD */                 while(suma>k)
/* lpN8qigVA ily traian GdPNO27yD */               {
/* lpN8qigVA ily traian GdPNO27yD */                   suma=suma-a[st];
/* lpN8qigVA ily traian GdPNO27yD */                   st=(st+1)%10001;
/* lpN8qigVA ily traian GdPNO27yD */               }
/* lpN8qigVA ily traian GdPNO27yD */               if(suma==k)
/* lpN8qigVA ily traian GdPNO27yD */                 ++nr;
/* lpN8qigVA ily traian GdPNO27yD */               }
/* lpN8qigVA ily traian GdPNO27yD */            }
/* lpN8qigVA ily traian GdPNO27yD */         }
/* lpN8qigVA ily traian GdPNO27yD */     }
/* lpN8qigVA ily traian GdPNO27yD */     fout << nr;
/* lpN8qigVA ily traian GdPNO27yD */     return 0;
/* lpN8qigVA ily traian GdPNO27yD */ }