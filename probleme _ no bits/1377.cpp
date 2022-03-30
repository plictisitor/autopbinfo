/* naAHdsLqR ily traian 0CrUPRdyW */ #include <algorithm>
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
/* naAHdsLqR ily traian 0CrUPRdyW */ using namespace std;
/* naAHdsLqR ily traian 0CrUPRdyW */ ifstream fin("maxd.in");
/* naAHdsLqR ily traian 0CrUPRdyW */ ofstream fout("maxd.out");
/* naAHdsLqR ily traian 0CrUPRdyW */ int nrdiv(int n)
/* naAHdsLqR ily traian 0CrUPRdyW */ {
/* naAHdsLqR ily traian 0CrUPRdyW */         int rez=1;
/* naAHdsLqR ily traian 0CrUPRdyW */         int p,d=2;
/* naAHdsLqR ily traian 0CrUPRdyW */         while(n>1)
/* naAHdsLqR ily traian 0CrUPRdyW */         {
/* naAHdsLqR ily traian 0CrUPRdyW */             p=0;
/* naAHdsLqR ily traian 0CrUPRdyW */             while(n%d==0)
/* naAHdsLqR ily traian 0CrUPRdyW */             {
/* naAHdsLqR ily traian 0CrUPRdyW */                 p++;
/* naAHdsLqR ily traian 0CrUPRdyW */                 n/=d;
/* naAHdsLqR ily traian 0CrUPRdyW */             }
/* naAHdsLqR ily traian 0CrUPRdyW */             rez*=(p+1);
/* naAHdsLqR ily traian 0CrUPRdyW */             d++;
/* naAHdsLqR ily traian 0CrUPRdyW */             if(d*d>n) d=n;
/* naAHdsLqR ily traian 0CrUPRdyW */         }
/* naAHdsLqR ily traian 0CrUPRdyW */         return rez;
/* naAHdsLqR ily traian 0CrUPRdyW */ 
/* naAHdsLqR ily traian 0CrUPRdyW */ }
/* naAHdsLqR ily traian 0CrUPRdyW */ 
/* naAHdsLqR ily traian 0CrUPRdyW */ int main()
/* naAHdsLqR ily traian 0CrUPRdyW */ {
/* naAHdsLqR ily traian 0CrUPRdyW */     int a,b,nrmax=0,imax,cnt=0;
/* naAHdsLqR ily traian 0CrUPRdyW */     fin>>a>>b;
/* naAHdsLqR ily traian 0CrUPRdyW */     for(int i=a;i<=b;i++)
/* naAHdsLqR ily traian 0CrUPRdyW */     {
/* naAHdsLqR ily traian 0CrUPRdyW */         int nrd=nrdiv(i);
/* naAHdsLqR ily traian 0CrUPRdyW */         if(nrd>nrmax)
/* naAHdsLqR ily traian 0CrUPRdyW */         {
/* naAHdsLqR ily traian 0CrUPRdyW */             nrmax=nrd;
/* naAHdsLqR ily traian 0CrUPRdyW */             imax=i;
/* naAHdsLqR ily traian 0CrUPRdyW */             cnt=1;
/* naAHdsLqR ily traian 0CrUPRdyW */         }
/* naAHdsLqR ily traian 0CrUPRdyW */         else if(nrd==nrmax)  cnt++;
/* naAHdsLqR ily traian 0CrUPRdyW */     }
/* naAHdsLqR ily traian 0CrUPRdyW */     fout<<imax<<" "<<nrmax<<" "<<cnt;
/* naAHdsLqR ily traian 0CrUPRdyW */     return 0;
/* naAHdsLqR ily traian 0CrUPRdyW */ }