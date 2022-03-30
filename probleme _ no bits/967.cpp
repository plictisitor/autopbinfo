/* SGTk1Zpab ily traian UVgbM4Xwj */ #include <algorithm>
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
/* SGTk1Zpab ily traian UVgbM4Xwj */ using namespace std;
/* SGTk1Zpab ily traian UVgbM4Xwj */ 
/* SGTk1Zpab ily traian UVgbM4Xwj */ int prim(int n)
/* SGTk1Zpab ily traian UVgbM4Xwj */ {
/* SGTk1Zpab ily traian UVgbM4Xwj */     int d=2 , cnt=1;
/* SGTk1Zpab ily traian UVgbM4Xwj */     while(n>1)
/* SGTk1Zpab ily traian UVgbM4Xwj */     {
/* SGTk1Zpab ily traian UVgbM4Xwj */         int p = 0;
/* SGTk1Zpab ily traian UVgbM4Xwj */         while(n%d==0)
/* SGTk1Zpab ily traian UVgbM4Xwj */         {
/* SGTk1Zpab ily traian UVgbM4Xwj */             n/=d;
/* SGTk1Zpab ily traian UVgbM4Xwj */             p++;
/* SGTk1Zpab ily traian UVgbM4Xwj */         }
/* SGTk1Zpab ily traian UVgbM4Xwj */         if(p!=0)
/* SGTk1Zpab ily traian UVgbM4Xwj */         cnt*=(p+1);
/* SGTk1Zpab ily traian UVgbM4Xwj */         d++;
/* SGTk1Zpab ily traian UVgbM4Xwj */         if(d*d>n)
/* SGTk1Zpab ily traian UVgbM4Xwj */         d=n;
/* SGTk1Zpab ily traian UVgbM4Xwj */     }
/* SGTk1Zpab ily traian UVgbM4Xwj */     if(cnt==2)
/* SGTk1Zpab ily traian UVgbM4Xwj */     return 1;
/* SGTk1Zpab ily traian UVgbM4Xwj */     else
/* SGTk1Zpab ily traian UVgbM4Xwj */     return 0;
/* SGTk1Zpab ily traian UVgbM4Xwj */ }
/* SGTk1Zpab ily traian UVgbM4Xwj */ 
/* SGTk1Zpab ily traian UVgbM4Xwj */ int cmmdc(int a , int b)
/* SGTk1Zpab ily traian UVgbM4Xwj */ {
/* SGTk1Zpab ily traian UVgbM4Xwj */     while(b)
/* SGTk1Zpab ily traian UVgbM4Xwj */     {
/* SGTk1Zpab ily traian UVgbM4Xwj */         int r=a%b;
/* SGTk1Zpab ily traian UVgbM4Xwj */         a=b;
/* SGTk1Zpab ily traian UVgbM4Xwj */         b=r;
/* SGTk1Zpab ily traian UVgbM4Xwj */     }
/* SGTk1Zpab ily traian UVgbM4Xwj */     return a;
/* SGTk1Zpab ily traian UVgbM4Xwj */ }
/* SGTk1Zpab ily traian UVgbM4Xwj */ 
/* SGTk1Zpab ily traian UVgbM4Xwj */ int main()
/* SGTk1Zpab ily traian UVgbM4Xwj */ {
/* SGTk1Zpab ily traian UVgbM4Xwj */     int n;
/* SGTk1Zpab ily traian UVgbM4Xwj */     cin >> n;
/* SGTk1Zpab ily traian UVgbM4Xwj */     int y;
/* SGTk1Zpab ily traian UVgbM4Xwj */     cin >> y;
/* SGTk1Zpab ily traian UVgbM4Xwj */     int a[10000];
/* SGTk1Zpab ily traian UVgbM4Xwj */     int v[10000];
/* SGTk1Zpab ily traian UVgbM4Xwj */     int f[10]={0};
/* SGTk1Zpab ily traian UVgbM4Xwj */     int s=0 , cnt=0;
/* SGTk1Zpab ily traian UVgbM4Xwj */     int p = 0;
/* SGTk1Zpab ily traian UVgbM4Xwj */     for(int i = 0 ; i < n ; ++i)
/* SGTk1Zpab ily traian UVgbM4Xwj */     {
/* SGTk1Zpab ily traian UVgbM4Xwj */         cin >> a[i];
/* SGTk1Zpab ily traian UVgbM4Xwj */         if(prim(a[i]))
/* SGTk1Zpab ily traian UVgbM4Xwj */         s+=a[i];
/* SGTk1Zpab ily traian UVgbM4Xwj */         int x=a[i];
/* SGTk1Zpab ily traian UVgbM4Xwj */         while(x)
/* SGTk1Zpab ily traian UVgbM4Xwj */         {
/* SGTk1Zpab ily traian UVgbM4Xwj */             if(x%10==y)
/* SGTk1Zpab ily traian UVgbM4Xwj */             cnt++;
/* SGTk1Zpab ily traian UVgbM4Xwj */             x/=10;
/* SGTk1Zpab ily traian UVgbM4Xwj */         }
/* SGTk1Zpab ily traian UVgbM4Xwj */         if((a[i]%10)%2==1)
/* SGTk1Zpab ily traian UVgbM4Xwj */         {
/* SGTk1Zpab ily traian UVgbM4Xwj */             v[p]=a[i]%10;
/* SGTk1Zpab ily traian UVgbM4Xwj */             p++;
/* SGTk1Zpab ily traian UVgbM4Xwj */         }
/* SGTk1Zpab ily traian UVgbM4Xwj */     }
/* SGTk1Zpab ily traian UVgbM4Xwj */     for(int i = 0 ; i < p ; ++i)
/* SGTk1Zpab ily traian UVgbM4Xwj */     {
/* SGTk1Zpab ily traian UVgbM4Xwj */         f[v[i]]++;
/* SGTk1Zpab ily traian UVgbM4Xwj */     }
/* SGTk1Zpab ily traian UVgbM4Xwj */     int c , b=-1 , cmd=1 , i;
/* SGTk1Zpab ily traian UVgbM4Xwj */     for(i = 0 ; i <= 9 ; ++i)
/* SGTk1Zpab ily traian UVgbM4Xwj */     {
/* SGTk1Zpab ily traian UVgbM4Xwj */         while(f[i]==0 && b==-1)
/* SGTk1Zpab ily traian UVgbM4Xwj */         {
/* SGTk1Zpab ily traian UVgbM4Xwj */             i++;
/* SGTk1Zpab ily traian UVgbM4Xwj */             b=f[i];
/* SGTk1Zpab ily traian UVgbM4Xwj */         }
/* SGTk1Zpab ily traian UVgbM4Xwj */         while(f[i]==0)
/* SGTk1Zpab ily traian UVgbM4Xwj */         i++;
/* SGTk1Zpab ily traian UVgbM4Xwj */         c=f[i];
/* SGTk1Zpab ily traian UVgbM4Xwj */         cmd=cmmdc(c , b);
/* SGTk1Zpab ily traian UVgbM4Xwj */         b=cmd;
/* SGTk1Zpab ily traian UVgbM4Xwj */     }
/* SGTk1Zpab ily traian UVgbM4Xwj */     cout << s << endl << cnt << endl << p/cmd;
/* SGTk1Zpab ily traian UVgbM4Xwj */     return 0;    
/* SGTk1Zpab ily traian UVgbM4Xwj */ }