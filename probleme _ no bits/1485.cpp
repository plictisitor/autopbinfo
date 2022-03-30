/* c7wd2XRPb ily traian LMbLcvENZ */ #include <algorithm>
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
/* c7wd2XRPb ily traian LMbLcvENZ */ 
/* c7wd2XRPb ily traian LMbLcvENZ */ using namespace std;
/* c7wd2XRPb ily traian LMbLcvENZ */ ifstream fin("jumatate1.in");
/* c7wd2XRPb ily traian LMbLcvENZ */ ofstream fout("jumatate1.out");
/* c7wd2XRPb ily traian LMbLcvENZ */ int cmmdc(int a,int b)
/* c7wd2XRPb ily traian LMbLcvENZ */ {
/* c7wd2XRPb ily traian LMbLcvENZ */     long long r,d;
/* c7wd2XRPb ily traian LMbLcvENZ */     while(b!=0)
/* c7wd2XRPb ily traian LMbLcvENZ */     {
/* c7wd2XRPb ily traian LMbLcvENZ */         r=a%b;
/* c7wd2XRPb ily traian LMbLcvENZ */         a=b;
/* c7wd2XRPb ily traian LMbLcvENZ */         b=r;
/* c7wd2XRPb ily traian LMbLcvENZ */     }
/* c7wd2XRPb ily traian LMbLcvENZ */     d=a;
/* c7wd2XRPb ily traian LMbLcvENZ */     return d;
/* c7wd2XRPb ily traian LMbLcvENZ */ }
/* c7wd2XRPb ily traian LMbLcvENZ */ int main()
/* c7wd2XRPb ily traian LMbLcvENZ */ {
/* c7wd2XRPb ily traian LMbLcvENZ */ 
/* c7wd2XRPb ily traian LMbLcvENZ */     long long n,m,p=1,d,r;
/* c7wd2XRPb ily traian LMbLcvENZ */     long long a,b;
/* c7wd2XRPb ily traian LMbLcvENZ */     fin>>n;
/* c7wd2XRPb ily traian LMbLcvENZ */     long long aux=n;
/* c7wd2XRPb ily traian LMbLcvENZ */     long long cate=0;
/* c7wd2XRPb ily traian LMbLcvENZ */     while(aux!=0)
/* c7wd2XRPb ily traian LMbLcvENZ */     {
/* c7wd2XRPb ily traian LMbLcvENZ */         cate++;
/* c7wd2XRPb ily traian LMbLcvENZ */         aux=aux/10;
/* c7wd2XRPb ily traian LMbLcvENZ */     }
/* c7wd2XRPb ily traian LMbLcvENZ */     if(cate%2==0)
/* c7wd2XRPb ily traian LMbLcvENZ */     {
/* c7wd2XRPb ily traian LMbLcvENZ */         while(cate/2>0)
/* c7wd2XRPb ily traian LMbLcvENZ */         {
/* c7wd2XRPb ily traian LMbLcvENZ */             p=p*10;
/* c7wd2XRPb ily traian LMbLcvENZ */             cate-=2;
/* c7wd2XRPb ily traian LMbLcvENZ */         }
/* c7wd2XRPb ily traian LMbLcvENZ */ 
/* c7wd2XRPb ily traian LMbLcvENZ */         a=n%p;
/* c7wd2XRPb ily traian LMbLcvENZ */         b=n/p;
/* c7wd2XRPb ily traian LMbLcvENZ */     }
/* c7wd2XRPb ily traian LMbLcvENZ */     else
/* c7wd2XRPb ily traian LMbLcvENZ */         if(cate%2==1)
/* c7wd2XRPb ily traian LMbLcvENZ */         {
/* c7wd2XRPb ily traian LMbLcvENZ */             while(cate/2>0)
/* c7wd2XRPb ily traian LMbLcvENZ */             {
/* c7wd2XRPb ily traian LMbLcvENZ */                 p=p*10;
/* c7wd2XRPb ily traian LMbLcvENZ */                 cate-=2;
/* c7wd2XRPb ily traian LMbLcvENZ */             }
/* c7wd2XRPb ily traian LMbLcvENZ */ 
/* c7wd2XRPb ily traian LMbLcvENZ */             a=n%(p*10);
/* c7wd2XRPb ily traian LMbLcvENZ */             b=n/p/10;
/* c7wd2XRPb ily traian LMbLcvENZ */         }
/* c7wd2XRPb ily traian LMbLcvENZ */     fout<<cmmdc(a,b);
/* c7wd2XRPb ily traian LMbLcvENZ */     return 0;
/* c7wd2XRPb ily traian LMbLcvENZ */ }