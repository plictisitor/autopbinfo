/* S836Tbc1d ily traian Ssy4X0EbW */ #include <algorithm>
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
/* S836Tbc1d ily traian Ssy4X0EbW */ using namespace std;
/* S836Tbc1d ily traian Ssy4X0EbW */ 
/* S836Tbc1d ily traian Ssy4X0EbW */ ifstream cin("control2.in");
/* S836Tbc1d ily traian Ssy4X0EbW */ ofstream cout("control2.out");
/* S836Tbc1d ily traian Ssy4X0EbW */ 
/* S836Tbc1d ily traian Ssy4X0EbW */ int prim(int n)
/* S836Tbc1d ily traian Ssy4X0EbW */ {
/* S836Tbc1d ily traian Ssy4X0EbW */     int cnt=0;
/* S836Tbc1d ily traian Ssy4X0EbW */     for(int i = 1 ; i * i <= n ; ++i)
/* S836Tbc1d ily traian Ssy4X0EbW */     {
/* S836Tbc1d ily traian Ssy4X0EbW */         if(n%i==0)
/* S836Tbc1d ily traian Ssy4X0EbW */         cnt+=2;
/* S836Tbc1d ily traian Ssy4X0EbW */         if(i*i==n)
/* S836Tbc1d ily traian Ssy4X0EbW */         cnt--;
/* S836Tbc1d ily traian Ssy4X0EbW */     }
/* S836Tbc1d ily traian Ssy4X0EbW */     if(cnt==2)
/* S836Tbc1d ily traian Ssy4X0EbW */     return 1;
/* S836Tbc1d ily traian Ssy4X0EbW */     else
/* S836Tbc1d ily traian Ssy4X0EbW */     return 0;
/* S836Tbc1d ily traian Ssy4X0EbW */ }
/* S836Tbc1d ily traian Ssy4X0EbW */ 
/* S836Tbc1d ily traian Ssy4X0EbW */ int main()
/* S836Tbc1d ily traian Ssy4X0EbW */ {
/* S836Tbc1d ily traian Ssy4X0EbW */     int n;
/* S836Tbc1d ily traian Ssy4X0EbW */     cin >> n;
/* S836Tbc1d ily traian Ssy4X0EbW */     int f[200]={0};
/* S836Tbc1d ily traian Ssy4X0EbW */     int a[100];
/* S836Tbc1d ily traian Ssy4X0EbW */     int tmp;
/* S836Tbc1d ily traian Ssy4X0EbW */     int c[35];
/* S836Tbc1d ily traian Ssy4X0EbW */     for(int i = 0 ; i < n ; ++i)
/* S836Tbc1d ily traian Ssy4X0EbW */     {
/* S836Tbc1d ily traian Ssy4X0EbW */         cin >> tmp;
/* S836Tbc1d ily traian Ssy4X0EbW */         f[tmp]++;
/* S836Tbc1d ily traian Ssy4X0EbW */     }
/* S836Tbc1d ily traian Ssy4X0EbW */     int p = 0;
/* S836Tbc1d ily traian Ssy4X0EbW */     for(int i = 1 ; i <= 200 ; ++i)
/* S836Tbc1d ily traian Ssy4X0EbW */     {
/* S836Tbc1d ily traian Ssy4X0EbW */         if(f[i]!=0)
/* S836Tbc1d ily traian Ssy4X0EbW */         {
/* S836Tbc1d ily traian Ssy4X0EbW */             a[p]=f[i];
/* S836Tbc1d ily traian Ssy4X0EbW */             p++;
/* S836Tbc1d ily traian Ssy4X0EbW */         }
/* S836Tbc1d ily traian Ssy4X0EbW */     }
/* S836Tbc1d ily traian Ssy4X0EbW */     while(p%3!=0)
/* S836Tbc1d ily traian Ssy4X0EbW */         p--;
/* S836Tbc1d ily traian Ssy4X0EbW */     int p1=0;
/* S836Tbc1d ily traian Ssy4X0EbW */     for(int i = 0 ; i < p ; i+=3)
/* S836Tbc1d ily traian Ssy4X0EbW */     {
/* S836Tbc1d ily traian Ssy4X0EbW */         if(a[i]%2==0 && a[i+1]%2==0 && a[i+2]%2==0)
/* S836Tbc1d ily traian Ssy4X0EbW */         {
/* S836Tbc1d ily traian Ssy4X0EbW */             c[p1]=1;
/* S836Tbc1d ily traian Ssy4X0EbW */             p1++;
/* S836Tbc1d ily traian Ssy4X0EbW */         }
/* S836Tbc1d ily traian Ssy4X0EbW */         else if(a[i]%2==1 && a[i+1]%2==1 && a[i+2]%2==1)
/* S836Tbc1d ily traian Ssy4X0EbW */         {
/* S836Tbc1d ily traian Ssy4X0EbW */             c[p1]=1;
/* S836Tbc1d ily traian Ssy4X0EbW */             p1++;
/* S836Tbc1d ily traian Ssy4X0EbW */         }
/* S836Tbc1d ily traian Ssy4X0EbW */         else
/* S836Tbc1d ily traian Ssy4X0EbW */         {
/* S836Tbc1d ily traian Ssy4X0EbW */             c[p1]=0;
/* S836Tbc1d ily traian Ssy4X0EbW */             p1++;
/* S836Tbc1d ily traian Ssy4X0EbW */         }
/* S836Tbc1d ily traian Ssy4X0EbW */     }
/* S836Tbc1d ily traian Ssy4X0EbW */     int g[3]={0};
/* S836Tbc1d ily traian Ssy4X0EbW */     for(int i = 0 ; i < p1 ; ++i)
/* S836Tbc1d ily traian Ssy4X0EbW */     {
/* S836Tbc1d ily traian Ssy4X0EbW */         g[c[i]]++;
/* S836Tbc1d ily traian Ssy4X0EbW */     }
/* S836Tbc1d ily traian Ssy4X0EbW */     int nr=0;
/* S836Tbc1d ily traian Ssy4X0EbW */     for(int i = 1 ; i >= 0 ; --i)
/* S836Tbc1d ily traian Ssy4X0EbW */     {
/* S836Tbc1d ily traian Ssy4X0EbW */         nr*=10;
/* S836Tbc1d ily traian Ssy4X0EbW */         nr+=g[i];
/* S836Tbc1d ily traian Ssy4X0EbW */     }
/* S836Tbc1d ily traian Ssy4X0EbW */     if(prim(nr))
/* S836Tbc1d ily traian Ssy4X0EbW */     cout << nr << endl << 1;
/* S836Tbc1d ily traian Ssy4X0EbW */     else
/* S836Tbc1d ily traian Ssy4X0EbW */     cout << nr << endl << 0;
/* S836Tbc1d ily traian Ssy4X0EbW */     return 0;    
/* S836Tbc1d ily traian Ssy4X0EbW */ }