/* OyGdHieQz ily traian XOmhwPC0K */ #include <algorithm>
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
/* OyGdHieQz ily traian XOmhwPC0K */ using namespace std;
/* OyGdHieQz ily traian XOmhwPC0K */ 
/* OyGdHieQz ily traian XOmhwPC0K */ ifstream cin("talent.in");
/* OyGdHieQz ily traian XOmhwPC0K */ ofstream cout("talent.out");
/* OyGdHieQz ily traian XOmhwPC0K */ 
/* OyGdHieQz ily traian XOmhwPC0K */ int pal(int n)
/* OyGdHieQz ily traian XOmhwPC0K */ {
/* OyGdHieQz ily traian XOmhwPC0K */     int f[10]={0};
/* OyGdHieQz ily traian XOmhwPC0K */     int cn=0;
/* OyGdHieQz ily traian XOmhwPC0K */     while(n)
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */         f[n%10]++;
/* OyGdHieQz ily traian XOmhwPC0K */         n/=10;
/* OyGdHieQz ily traian XOmhwPC0K */         cn++;
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     int cnt=0;
/* OyGdHieQz ily traian XOmhwPC0K */     for(int i = 0 ; i < 10 ; ++i)
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */         if(f[i]%2==1)
/* OyGdHieQz ily traian XOmhwPC0K */         cnt++;
/* OyGdHieQz ily traian XOmhwPC0K */         if(f[0]%2==0 && cn==f[0]+1 && f[0]!=0)
/* OyGdHieQz ily traian XOmhwPC0K */         {
/* OyGdHieQz ily traian XOmhwPC0K */             cnt++;    
/* OyGdHieQz ily traian XOmhwPC0K */         }
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     if(cnt==0 || cnt==1)
/* OyGdHieQz ily traian XOmhwPC0K */     return 1;
/* OyGdHieQz ily traian XOmhwPC0K */     else
/* OyGdHieQz ily traian XOmhwPC0K */     return 0;
/* OyGdHieQz ily traian XOmhwPC0K */ }
/* OyGdHieQz ily traian XOmhwPC0K */ 
/* OyGdHieQz ily traian XOmhwPC0K */ int mult(int n)
/* OyGdHieQz ily traian XOmhwPC0K */ {
/* OyGdHieQz ily traian XOmhwPC0K */     int f[10]={0};
/* OyGdHieQz ily traian XOmhwPC0K */     while(n)
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */         f[n%10]++;
/* OyGdHieQz ily traian XOmhwPC0K */         n/=10;
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     int ok=0;
/* OyGdHieQz ily traian XOmhwPC0K */     for(int i = 0 ; i < 10 ; ++i)
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */         if(f[i]!=0)
/* OyGdHieQz ily traian XOmhwPC0K */         ok++;
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     return ok;
/* OyGdHieQz ily traian XOmhwPC0K */ }
/* OyGdHieQz ily traian XOmhwPC0K */ 
/* OyGdHieQz ily traian XOmhwPC0K */ int main()
/* OyGdHieQz ily traian XOmhwPC0K */ {
/* OyGdHieQz ily traian XOmhwPC0K */     int n;
/* OyGdHieQz ily traian XOmhwPC0K */     cin >> n;
/* OyGdHieQz ily traian XOmhwPC0K */     int a[15001];
/* OyGdHieQz ily traian XOmhwPC0K */     int cnt=0;
/* OyGdHieQz ily traian XOmhwPC0K */     int max=0;
/* OyGdHieQz ily traian XOmhwPC0K */     for(int i = 0 ; i < n ; ++i)
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */     cin >> a[i];
/* OyGdHieQz ily traian XOmhwPC0K */     if(pal(a[i]))
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */         cnt++;
/* OyGdHieQz ily traian XOmhwPC0K */         if(max < mult(a[i]))
/* OyGdHieQz ily traian XOmhwPC0K */         max=mult(a[i]);
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     cout << cnt;
/* OyGdHieQz ily traian XOmhwPC0K */     int nmax=2000000001;
/* OyGdHieQz ily traian XOmhwPC0K */     if(cnt!=0)
/* OyGdHieQz ily traian XOmhwPC0K */     {
/* OyGdHieQz ily traian XOmhwPC0K */         for(int i = 0 ; i < n ; ++i)
/* OyGdHieQz ily traian XOmhwPC0K */         {
/* OyGdHieQz ily traian XOmhwPC0K */         if(mult(a[i])==max && pal(a[i]))
/* OyGdHieQz ily traian XOmhwPC0K */         {
/* OyGdHieQz ily traian XOmhwPC0K */             if(a[i]<nmax)
/* OyGdHieQz ily traian XOmhwPC0K */             nmax=a[i];
/* OyGdHieQz ily traian XOmhwPC0K */         }
/* OyGdHieQz ily traian XOmhwPC0K */         }
/* OyGdHieQz ily traian XOmhwPC0K */         cout << ' ' << nmax;
/* OyGdHieQz ily traian XOmhwPC0K */     }
/* OyGdHieQz ily traian XOmhwPC0K */     else
/* OyGdHieQz ily traian XOmhwPC0K */     cout << ' ' << 0;
/* OyGdHieQz ily traian XOmhwPC0K */     return 0;    
/* OyGdHieQz ily traian XOmhwPC0K */ }