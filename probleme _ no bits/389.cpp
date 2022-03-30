/* dJeYkPOQZ ily traian ZtE3ObnQO */ #include <algorithm>
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
/* dJeYkPOQZ ily traian ZtE3ObnQO */ using namespace std;
/* dJeYkPOQZ ily traian ZtE3ObnQO */ int main ()
/* dJeYkPOQZ ily traian ZtE3ObnQO */ {
/* dJeYkPOQZ ily traian ZtE3ObnQO */     int nrdiv=0,ndmax=0,nrmic,nrmare,a,b,aux;
/* dJeYkPOQZ ily traian ZtE3ObnQO */     cin >> a>> b;
/* dJeYkPOQZ ily traian ZtE3ObnQO */     if(a%2==1)
/* dJeYkPOQZ ily traian ZtE3ObnQO */         a++;
/* dJeYkPOQZ ily traian ZtE3ObnQO */     for (int i=a; i<=b; i=i+2)
/* dJeYkPOQZ ily traian ZtE3ObnQO */     {
/* dJeYkPOQZ ily traian ZtE3ObnQO */         aux=i;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         nrdiv=0;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         for (int d=1;d*d<=aux;d++)
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if(aux%d==0)
/* dJeYkPOQZ ily traian ZtE3ObnQO */         {
/* dJeYkPOQZ ily traian ZtE3ObnQO */               if(d %2==0) nrdiv++;
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if( d*d<aux)
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if((aux/d)%2==0) nrdiv++;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         }
/* dJeYkPOQZ ily traian ZtE3ObnQO */         if(nrdiv>ndmax)
/* dJeYkPOQZ ily traian ZtE3ObnQO */         {
/* dJeYkPOQZ ily traian ZtE3ObnQO */             ndmax=nrdiv;
/* dJeYkPOQZ ily traian ZtE3ObnQO */             nrmic=aux;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         }
/* dJeYkPOQZ ily traian ZtE3ObnQO */     }
/* dJeYkPOQZ ily traian ZtE3ObnQO */     if (b%2==1) b=b-1;
/* dJeYkPOQZ ily traian ZtE3ObnQO */     for (int i=b; i>=a;i=i-2)
/* dJeYkPOQZ ily traian ZtE3ObnQO */     {
/* dJeYkPOQZ ily traian ZtE3ObnQO */          aux=i;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         nrdiv=0;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         for (int d=1;d*d<=aux;d++)
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if(aux%d==0)
/* dJeYkPOQZ ily traian ZtE3ObnQO */         {
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if(d %2==0) nrdiv++;
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if (d*d<aux)
/* dJeYkPOQZ ily traian ZtE3ObnQO */             if((aux/d)%2==0) nrdiv++;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         }
/* dJeYkPOQZ ily traian ZtE3ObnQO */         if(nrdiv==ndmax)
/* dJeYkPOQZ ily traian ZtE3ObnQO */         {
/* dJeYkPOQZ ily traian ZtE3ObnQO */             nrmare=aux;
/* dJeYkPOQZ ily traian ZtE3ObnQO */             break;
/* dJeYkPOQZ ily traian ZtE3ObnQO */         }
/* dJeYkPOQZ ily traian ZtE3ObnQO */     }
/* dJeYkPOQZ ily traian ZtE3ObnQO */     cout << ndmax<<" "<<nrmic<<" "<<nrmare;
/* dJeYkPOQZ ily traian ZtE3ObnQO */     return 0;
/* dJeYkPOQZ ily traian ZtE3ObnQO */ }