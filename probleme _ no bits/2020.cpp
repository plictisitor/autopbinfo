/* kn2XMJfSa ily traian Ecovptm7z */ #include <algorithm>
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
/* kn2XMJfSa ily traian Ecovptm7z */ using namespace std;
/* kn2XMJfSa ily traian Ecovptm7z */ 
/* kn2XMJfSa ily traian Ecovptm7z */ ifstream fin("error.in");
/* kn2XMJfSa ily traian Ecovptm7z */ ofstream fout("error.out");
/* kn2XMJfSa ily traian Ecovptm7z */ 
/* kn2XMJfSa ily traian Ecovptm7z */ typedef int NrMare[33];
/* kn2XMJfSa ily traian Ecovptm7z */ NrMare x,y;
/* kn2XMJfSa ily traian Ecovptm7z */ int n,a,b;
/* kn2XMJfSa ily traian Ecovptm7z */ 
/* kn2XMJfSa ily traian Ecovptm7z */ void Adunare(NrMare x,NrMare y)
/* kn2XMJfSa ily traian Ecovptm7z */ {
/* kn2XMJfSa ily traian Ecovptm7z */   int i,t=0;
/* kn2XMJfSa ily traian Ecovptm7z */   if(x[0]<y[0])
/* kn2XMJfSa ily traian Ecovptm7z */     x[0]=y[0];
/* kn2XMJfSa ily traian Ecovptm7z */   for(i=1;i<=x[0];i++,t/=10)
/* kn2XMJfSa ily traian Ecovptm7z */   {
/* kn2XMJfSa ily traian Ecovptm7z */     t=x[i]+y[i]+t;
/* kn2XMJfSa ily traian Ecovptm7z */     x[i]=t%10;
/* kn2XMJfSa ily traian Ecovptm7z */   }
/* kn2XMJfSa ily traian Ecovptm7z */   if(t)
/* kn2XMJfSa ily traian Ecovptm7z */     x[++x[0]]=t;
/* kn2XMJfSa ily traian Ecovptm7z */ }
/* kn2XMJfSa ily traian Ecovptm7z */ 
/* kn2XMJfSa ily traian Ecovptm7z */ int main()
/* kn2XMJfSa ily traian Ecovptm7z */ {
/* kn2XMJfSa ily traian Ecovptm7z */     fin>>n;
/* kn2XMJfSa ily traian Ecovptm7z */     x[0]=1;
/* kn2XMJfSa ily traian Ecovptm7z */     x[1]=0;
/* kn2XMJfSa ily traian Ecovptm7z */     for(int i=1;i<=n;++i)
/* kn2XMJfSa ily traian Ecovptm7z */     {
/* kn2XMJfSa ily traian Ecovptm7z */         fin>>a>>b;
/* kn2XMJfSa ily traian Ecovptm7z */         y[0]=30;
/* kn2XMJfSa ily traian Ecovptm7z */         for(int j=1;j<=30;++j)
/* kn2XMJfSa ily traian Ecovptm7z */             a%=b,a=a*10,y[30-j+1]=a/b;
/* kn2XMJfSa ily traian Ecovptm7z */         Adunare(x,y);
/* kn2XMJfSa ily traian Ecovptm7z */     }
/* kn2XMJfSa ily traian Ecovptm7z */     for(int i=30;i>10;--i)
/* kn2XMJfSa ily traian Ecovptm7z */         fout<<x[i]<<' ';
/* kn2XMJfSa ily traian Ecovptm7z */     return 0;
/* kn2XMJfSa ily traian Ecovptm7z */ }