/* JY619jbJC ily traian 4OIeqQufx */ #include <algorithm>
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
/* JY619jbJC ily traian 4OIeqQufx */ using namespace std;
/* JY619jbJC ily traian 4OIeqQufx */ ifstream cin("dec2ord.in");
/* JY619jbJC ily traian 4OIeqQufx */ ofstream cout("dec2ord.out");
/* JY619jbJC ily traian 4OIeqQufx */ int main()
/* JY619jbJC ily traian 4OIeqQufx */ {
/* JY619jbJC ily traian 4OIeqQufx */     int n , z , per;
/* JY619jbJC ily traian 4OIeqQufx */     cin >> n >> z >> per;
/* JY619jbJC ily traian 4OIeqQufx */     if(z==-1 && per==-1) cout << n;
/* JY619jbJC ily traian 4OIeqQufx */     else if(per==-1 && z!=-1)
/* JY619jbJC ily traian 4OIeqQufx */     {
/* JY619jbJC ily traian 4OIeqQufx */         int p = 1 , cz = z;
/* JY619jbJC ily traian 4OIeqQufx */         while(cz)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             p*=10;
/* JY619jbJC ily traian 4OIeqQufx */             cz/=10;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         int a=n*p+z;
/* JY619jbJC ily traian 4OIeqQufx */         int b=p;
/* JY619jbJC ily traian 4OIeqQufx */         while(b)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             int r=a%b;
/* JY619jbJC ily traian 4OIeqQufx */             a=b;
/* JY619jbJC ily traian 4OIeqQufx */             b=r;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         cout << (n*p+z)/a << '/' << p/a;
/* JY619jbJC ily traian 4OIeqQufx */     }
/* JY619jbJC ily traian 4OIeqQufx */     else if(z==-1 && per!=-1)
/* JY619jbJC ily traian 4OIeqQufx */     {
/* JY619jbJC ily traian 4OIeqQufx */         int cper=per;
/* JY619jbJC ily traian 4OIeqQufx */         int p=1;
/* JY619jbJC ily traian 4OIeqQufx */         while(cper)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             cper/=10;
/* JY619jbJC ily traian 4OIeqQufx */             p*=10;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         int a=n*p+per-n;
/* JY619jbJC ily traian 4OIeqQufx */         int b=p-1;
/* JY619jbJC ily traian 4OIeqQufx */         while(b)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             int r=a%b;
/* JY619jbJC ily traian 4OIeqQufx */             a=b;
/* JY619jbJC ily traian 4OIeqQufx */             b=r;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         cout << (n*p+per-n)/a << '/' << (p-1)/a;
/* JY619jbJC ily traian 4OIeqQufx */     }
/* JY619jbJC ily traian 4OIeqQufx */     else if(z!=-1 && per!=-1)
/* JY619jbJC ily traian 4OIeqQufx */     {
/* JY619jbJC ily traian 4OIeqQufx */         long long int p = 1 , p1 = 1 , cz = z , cper = per; 
/* JY619jbJC ily traian 4OIeqQufx */         while(cz)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             p*=10;
/* JY619jbJC ily traian 4OIeqQufx */             cz/=10;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         while(cper)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             p1*=10;
/* JY619jbJC ily traian 4OIeqQufx */             cper/=10;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         long long int q=n*p+z;
/* JY619jbJC ily traian 4OIeqQufx */         long long int a=q*p1+per-q;
/* JY619jbJC ily traian 4OIeqQufx */         long long int b=(p1-1)*p;
/* JY619jbJC ily traian 4OIeqQufx */         while(b)
/* JY619jbJC ily traian 4OIeqQufx */         {
/* JY619jbJC ily traian 4OIeqQufx */             long long int r=a%b;
/* JY619jbJC ily traian 4OIeqQufx */             a=b;
/* JY619jbJC ily traian 4OIeqQufx */             b=r;
/* JY619jbJC ily traian 4OIeqQufx */         }
/* JY619jbJC ily traian 4OIeqQufx */         cout << 1LL * (q*p1+per-q)/a << '/' << 1LL * ((p1-1)*p)/a;
/* JY619jbJC ily traian 4OIeqQufx */     }
/* JY619jbJC ily traian 4OIeqQufx */ }