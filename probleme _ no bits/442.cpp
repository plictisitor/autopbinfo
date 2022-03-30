/* KW3ZI6tCI ily traian hNs8lTUtw */ #include <algorithm>
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
/* KW3ZI6tCI ily traian hNs8lTUtw */ 
/* KW3ZI6tCI ily traian hNs8lTUtw */ using namespace std;
/* KW3ZI6tCI ily traian hNs8lTUtw */ int main()
/* KW3ZI6tCI ily traian hNs8lTUtw */ {
/* KW3ZI6tCI ily traian hNs8lTUtw */ 
/* KW3ZI6tCI ily traian hNs8lTUtw */     int n,m,p=1,d,r;
/* KW3ZI6tCI ily traian hNs8lTUtw */     int a,b;
/* KW3ZI6tCI ily traian hNs8lTUtw */     cin>>n;
/* KW3ZI6tCI ily traian hNs8lTUtw */     int aux=n;
/* KW3ZI6tCI ily traian hNs8lTUtw */     int cate=0;
/* KW3ZI6tCI ily traian hNs8lTUtw */     while(aux!=0)
/* KW3ZI6tCI ily traian hNs8lTUtw */     {
/* KW3ZI6tCI ily traian hNs8lTUtw */         cate++;
/* KW3ZI6tCI ily traian hNs8lTUtw */         aux=aux/10;
/* KW3ZI6tCI ily traian hNs8lTUtw */     }
/* KW3ZI6tCI ily traian hNs8lTUtw */     if(cate%2==0)
/* KW3ZI6tCI ily traian hNs8lTUtw */     {
/* KW3ZI6tCI ily traian hNs8lTUtw */         while(cate/2>0)
/* KW3ZI6tCI ily traian hNs8lTUtw */         {
/* KW3ZI6tCI ily traian hNs8lTUtw */             p=p*10;
/* KW3ZI6tCI ily traian hNs8lTUtw */             cate-=2;
/* KW3ZI6tCI ily traian hNs8lTUtw */         }
/* KW3ZI6tCI ily traian hNs8lTUtw */ 
/* KW3ZI6tCI ily traian hNs8lTUtw */         a=n%p;
/* KW3ZI6tCI ily traian hNs8lTUtw */         b=n/p;
/* KW3ZI6tCI ily traian hNs8lTUtw */     }
/* KW3ZI6tCI ily traian hNs8lTUtw */     else
/* KW3ZI6tCI ily traian hNs8lTUtw */         if(cate%2==1)
/* KW3ZI6tCI ily traian hNs8lTUtw */         {
/* KW3ZI6tCI ily traian hNs8lTUtw */             while(cate/2>0)
/* KW3ZI6tCI ily traian hNs8lTUtw */             {
/* KW3ZI6tCI ily traian hNs8lTUtw */                 p=p*10;
/* KW3ZI6tCI ily traian hNs8lTUtw */                 cate-=2;
/* KW3ZI6tCI ily traian hNs8lTUtw */             }
/* KW3ZI6tCI ily traian hNs8lTUtw */ 
/* KW3ZI6tCI ily traian hNs8lTUtw */             a=n%p;
/* KW3ZI6tCI ily traian hNs8lTUtw */             b=n/p/10;
/* KW3ZI6tCI ily traian hNs8lTUtw */         }
/* KW3ZI6tCI ily traian hNs8lTUtw */     cout<<abs(a-b);
/* KW3ZI6tCI ily traian hNs8lTUtw */     return 0;
/* KW3ZI6tCI ily traian hNs8lTUtw */ }