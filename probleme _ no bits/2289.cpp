/* Ix9FWDSdt ily traian E2YSdr0jX */ #include <algorithm>
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
/* Ix9FWDSdt ily traian E2YSdr0jX */ using namespace std;
/* Ix9FWDSdt ily traian E2YSdr0jX */ int main()
/* Ix9FWDSdt ily traian E2YSdr0jX */ {
/* Ix9FWDSdt ily traian E2YSdr0jX */     int a,b,ax=0,p1=1,p2=1,bx=0;
/* Ix9FWDSdt ily traian E2YSdr0jX */     cin>>a>>b;
/* Ix9FWDSdt ily traian E2YSdr0jX */     int n=a,m=b;
/* Ix9FWDSdt ily traian E2YSdr0jX */     if(a%2==0)
/* Ix9FWDSdt ily traian E2YSdr0jX */     {
/* Ix9FWDSdt ily traian E2YSdr0jX */         while(a!=0)
/* Ix9FWDSdt ily traian E2YSdr0jX */         {
/* Ix9FWDSdt ily traian E2YSdr0jX */             if(a%10%2==0)
/* Ix9FWDSdt ily traian E2YSdr0jX */             {
/* Ix9FWDSdt ily traian E2YSdr0jX */                 ax=ax+a%10*p1;
/* Ix9FWDSdt ily traian E2YSdr0jX */                 p1=p1*10;
/* Ix9FWDSdt ily traian E2YSdr0jX */             }
/* Ix9FWDSdt ily traian E2YSdr0jX */             a /= 10;
/* Ix9FWDSdt ily traian E2YSdr0jX */         }
/* Ix9FWDSdt ily traian E2YSdr0jX */     }
/* Ix9FWDSdt ily traian E2YSdr0jX */     if(a%2==1)
/* Ix9FWDSdt ily traian E2YSdr0jX */     {
/* Ix9FWDSdt ily traian E2YSdr0jX */         while(a!=0)
/* Ix9FWDSdt ily traian E2YSdr0jX */         {
/* Ix9FWDSdt ily traian E2YSdr0jX */             if(a%10%2==1)
/* Ix9FWDSdt ily traian E2YSdr0jX */             {
/* Ix9FWDSdt ily traian E2YSdr0jX */                 ax=ax+a%10*p1;
/* Ix9FWDSdt ily traian E2YSdr0jX */                 p1=p1*10;
/* Ix9FWDSdt ily traian E2YSdr0jX */             }
/* Ix9FWDSdt ily traian E2YSdr0jX */             a /= 10;
/* Ix9FWDSdt ily traian E2YSdr0jX */         }
/* Ix9FWDSdt ily traian E2YSdr0jX */     }
/* Ix9FWDSdt ily traian E2YSdr0jX */     if(b%2==0)
/* Ix9FWDSdt ily traian E2YSdr0jX */     {
/* Ix9FWDSdt ily traian E2YSdr0jX */         while(b!=0)
/* Ix9FWDSdt ily traian E2YSdr0jX */         {
/* Ix9FWDSdt ily traian E2YSdr0jX */             if(b%10%2==0)
/* Ix9FWDSdt ily traian E2YSdr0jX */             {
/* Ix9FWDSdt ily traian E2YSdr0jX */                 bx=bx+b%10*p2;
/* Ix9FWDSdt ily traian E2YSdr0jX */                 p2=p2*10;
/* Ix9FWDSdt ily traian E2YSdr0jX */             }
/* Ix9FWDSdt ily traian E2YSdr0jX */             b /= 10;
/* Ix9FWDSdt ily traian E2YSdr0jX */         }
/* Ix9FWDSdt ily traian E2YSdr0jX */     }
/* Ix9FWDSdt ily traian E2YSdr0jX */     if(b%2==1)
/* Ix9FWDSdt ily traian E2YSdr0jX */     {
/* Ix9FWDSdt ily traian E2YSdr0jX */         while(b!=0)
/* Ix9FWDSdt ily traian E2YSdr0jX */         {
/* Ix9FWDSdt ily traian E2YSdr0jX */             if(b%10%2==1)
/* Ix9FWDSdt ily traian E2YSdr0jX */             {
/* Ix9FWDSdt ily traian E2YSdr0jX */                 bx=bx+b%10*p2;
/* Ix9FWDSdt ily traian E2YSdr0jX */                 p2=p2*10;
/* Ix9FWDSdt ily traian E2YSdr0jX */             }
/* Ix9FWDSdt ily traian E2YSdr0jX */             b /= 10;
/* Ix9FWDSdt ily traian E2YSdr0jX */ 
/* Ix9FWDSdt ily traian E2YSdr0jX */         }
/* Ix9FWDSdt ily traian E2YSdr0jX */     }
/* Ix9FWDSdt ily traian E2YSdr0jX */     if(ax==bx)
/* Ix9FWDSdt ily traian E2YSdr0jX */     {
/* Ix9FWDSdt ily traian E2YSdr0jX */         if(n>m) cout<<n;
/* Ix9FWDSdt ily traian E2YSdr0jX */         else cout<<m;
/* Ix9FWDSdt ily traian E2YSdr0jX */     }
/* Ix9FWDSdt ily traian E2YSdr0jX */     else
/* Ix9FWDSdt ily traian E2YSdr0jX */     if(ax>bx) cout<<n;
/* Ix9FWDSdt ily traian E2YSdr0jX */     else cout<<m;
/* Ix9FWDSdt ily traian E2YSdr0jX */     return 0;
/* Ix9FWDSdt ily traian E2YSdr0jX */ }