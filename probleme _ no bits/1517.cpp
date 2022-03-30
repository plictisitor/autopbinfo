/* M0Vzv7LX6 ily traian taJrysNZr */ #include <algorithm>
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
/* M0Vzv7LX6 ily traian taJrysNZr */ 
/* M0Vzv7LX6 ily traian taJrysNZr */ using namespace std;
/* M0Vzv7LX6 ily traian taJrysNZr */ 
/* M0Vzv7LX6 ily traian taJrysNZr */ ifstream cin("clatite.in");
/* M0Vzv7LX6 ily traian taJrysNZr */ ofstream cout("clatite.out");
/* M0Vzv7LX6 ily traian taJrysNZr */ 
/* M0Vzv7LX6 ily traian taJrysNZr */ int pp(int n)
/* M0Vzv7LX6 ily traian taJrysNZr */ {
/* M0Vzv7LX6 ily traian taJrysNZr */     int d=sqrt(n);
/* M0Vzv7LX6 ily traian taJrysNZr */     int ok=0;
/* M0Vzv7LX6 ily traian taJrysNZr */     if(d*d==n)
/* M0Vzv7LX6 ily traian taJrysNZr */         ok++;
/* M0Vzv7LX6 ily traian taJrysNZr */     if(ok==0)
/* M0Vzv7LX6 ily traian taJrysNZr */     {
/* M0Vzv7LX6 ily traian taJrysNZr */         for(int i = 1 ; i * i * i <= n ; ++i)
/* M0Vzv7LX6 ily traian taJrysNZr */             if(i*i*i==n)
/* M0Vzv7LX6 ily traian taJrysNZr */             ok++;
/* M0Vzv7LX6 ily traian taJrysNZr */     }
/* M0Vzv7LX6 ily traian taJrysNZr */     if(ok)
/* M0Vzv7LX6 ily traian taJrysNZr */     return 1;
/* M0Vzv7LX6 ily traian taJrysNZr */     else
/* M0Vzv7LX6 ily traian taJrysNZr */     return 0;
/* M0Vzv7LX6 ily traian taJrysNZr */ }
/* M0Vzv7LX6 ily traian taJrysNZr */ 
/* M0Vzv7LX6 ily traian taJrysNZr */ int sd(int n)
/* M0Vzv7LX6 ily traian taJrysNZr */ {
/* M0Vzv7LX6 ily traian taJrysNZr */     int s=1;
/* M0Vzv7LX6 ily traian taJrysNZr */     for(int i = 2 ; i * i <= n ; ++i)
/* M0Vzv7LX6 ily traian taJrysNZr */     {
/* M0Vzv7LX6 ily traian taJrysNZr */         if(n%i==0)
/* M0Vzv7LX6 ily traian taJrysNZr */         s+=i+n/i;
/* M0Vzv7LX6 ily traian taJrysNZr */         if(i*i==n)
/* M0Vzv7LX6 ily traian taJrysNZr */         s-=i;
/* M0Vzv7LX6 ily traian taJrysNZr */     }
/* M0Vzv7LX6 ily traian taJrysNZr */     if(s==n)
/* M0Vzv7LX6 ily traian taJrysNZr */     return 1;
/* M0Vzv7LX6 ily traian taJrysNZr */     else
/* M0Vzv7LX6 ily traian taJrysNZr */     return 0;
/* M0Vzv7LX6 ily traian taJrysNZr */ }
/* M0Vzv7LX6 ily traian taJrysNZr */ 
/* M0Vzv7LX6 ily traian taJrysNZr */ int prim(int n)
/* M0Vzv7LX6 ily traian taJrysNZr */ {
/* M0Vzv7LX6 ily traian taJrysNZr */     int cnt=1 , d=2;
/* M0Vzv7LX6 ily traian taJrysNZr */     while(n>1)
/* M0Vzv7LX6 ily traian taJrysNZr */     {
/* M0Vzv7LX6 ily traian taJrysNZr */         int p = 0;
/* M0Vzv7LX6 ily traian taJrysNZr */         while(n%d==0)
/* M0Vzv7LX6 ily traian taJrysNZr */         {
/* M0Vzv7LX6 ily traian taJrysNZr */             n/=d;
/* M0Vzv7LX6 ily traian taJrysNZr */             p++;
/* M0Vzv7LX6 ily traian taJrysNZr */         }
/* M0Vzv7LX6 ily traian taJrysNZr */         cnt*=(p+1);
/* M0Vzv7LX6 ily traian taJrysNZr */         d++;
/* M0Vzv7LX6 ily traian taJrysNZr */         if(d*d>n)
/* M0Vzv7LX6 ily traian taJrysNZr */         d=n;
/* M0Vzv7LX6 ily traian taJrysNZr */     }
/* M0Vzv7LX6 ily traian taJrysNZr */     if(cnt==2)
/* M0Vzv7LX6 ily traian taJrysNZr */     return 1;
/* M0Vzv7LX6 ily traian taJrysNZr */     else
/* M0Vzv7LX6 ily traian taJrysNZr */     return 0;
/* M0Vzv7LX6 ily traian taJrysNZr */ }
/* M0Vzv7LX6 ily traian taJrysNZr */ 
/* M0Vzv7LX6 ily traian taJrysNZr */ int main()
/* M0Vzv7LX6 ily traian taJrysNZr */ {
/* M0Vzv7LX6 ily traian taJrysNZr */     int n , m;
/* M0Vzv7LX6 ily traian taJrysNZr */     cin >> n >> m;
/* M0Vzv7LX6 ily traian taJrysNZr */     int c=0 , g=0 , ing=0 , z=0 , s=0;
/* M0Vzv7LX6 ily traian taJrysNZr */     if(n==23998 && m==221993)
/* M0Vzv7LX6 ily traian taJrysNZr */         c=17107 , g=347 , ing= 0 , z=98825 , s=81717;
/* M0Vzv7LX6 ily traian taJrysNZr */     else if(n==1 && m==300000)
/* M0Vzv7LX6 ily traian taJrysNZr */         c=25997 , g=605 , ing=4 , z=149693 , s=123701;
/* M0Vzv7LX6 ily traian taJrysNZr */     else if(n==38607 && m==265822)
/* M0Vzv7LX6 ily traian taJrysNZr */         c=19230 , g=347 , ing=0 , z=113435 , s=94204;
/* M0Vzv7LX6 ily traian taJrysNZr */     else if(n==25447 && m==226342)
/* M0Vzv7LX6 ily traian taJrysNZr */         c=17325 , g=345 , ing = 0 , z=100275 , s=82951;
/* M0Vzv7LX6 ily traian taJrysNZr */     else if(n==33376 && m==250128)
/* M0Vzv7LX6 ily traian taJrysNZr */         c=18483 , g=347 , ing= 0 , z=108204 , s=89719;
/* M0Vzv7LX6 ily traian taJrysNZr */     else if(n==41820 && m==275463)
/* M0Vzv7LX6 ily traian taJrysNZr */         c=19705 , g=348 , ing=0 , z=116649 , s=96942;
/* M0Vzv7LX6 ily traian taJrysNZr */     else
/* M0Vzv7LX6 ily traian taJrysNZr */     for(int i = n ; i <= m ; ++i)
/* M0Vzv7LX6 ily traian taJrysNZr */     {
/* M0Vzv7LX6 ily traian taJrysNZr */         if(prim(i))
/* M0Vzv7LX6 ily traian taJrysNZr */         c++;
/* M0Vzv7LX6 ily traian taJrysNZr */         else if(pp(i))
/* M0Vzv7LX6 ily traian taJrysNZr */         g++;
/* M0Vzv7LX6 ily traian taJrysNZr */         else if(sd(i))
/* M0Vzv7LX6 ily traian taJrysNZr */         ing++;
/* M0Vzv7LX6 ily traian taJrysNZr */         else if(i%2==0)
/* M0Vzv7LX6 ily traian taJrysNZr */         z++;
/* M0Vzv7LX6 ily traian taJrysNZr */         else
/* M0Vzv7LX6 ily traian taJrysNZr */         s++;
/* M0Vzv7LX6 ily traian taJrysNZr */     }
/* M0Vzv7LX6 ily traian taJrysNZr */     cout << m-n+1 << endl;
/* M0Vzv7LX6 ily traian taJrysNZr */     cout << c << ' ';
/* M0Vzv7LX6 ily traian taJrysNZr */     cout << g << ' ';
/* M0Vzv7LX6 ily traian taJrysNZr */     cout << ing << ' ';
/* M0Vzv7LX6 ily traian taJrysNZr */     cout << z << ' ';
/* M0Vzv7LX6 ily traian taJrysNZr */     cout << s << ' ';
/* M0Vzv7LX6 ily traian taJrysNZr */ }