/* UE2BfiLqD ily traian YwA1f3BhJ */ #include <algorithm>
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
/* UE2BfiLqD ily traian YwA1f3BhJ */ 
/* UE2BfiLqD ily traian YwA1f3BhJ */ using namespace std;
/* UE2BfiLqD ily traian YwA1f3BhJ */ int main()
/* UE2BfiLqD ily traian YwA1f3BhJ */ {
/* UE2BfiLqD ily traian YwA1f3BhJ */     unsigned long long n,c2=0,c5=0,p=1,a,x,pp;
/* UE2BfiLqD ily traian YwA1f3BhJ */     cin>>n;
/* UE2BfiLqD ily traian YwA1f3BhJ */     for(int i=1;i<=n;i++)
/* UE2BfiLqD ily traian YwA1f3BhJ */     {
/* UE2BfiLqD ily traian YwA1f3BhJ */          p=p%10 , a=i;
/* UE2BfiLqD ily traian YwA1f3BhJ */          while(a%2==0)
/* UE2BfiLqD ily traian YwA1f3BhJ */              a=a/2 , c2++;
/* UE2BfiLqD ily traian YwA1f3BhJ */          while(a%5==0)
/* UE2BfiLqD ily traian YwA1f3BhJ */              a=a/5 , c5++;
/* UE2BfiLqD ily traian YwA1f3BhJ */       a=a%10 , p=p*a;
/* UE2BfiLqD ily traian YwA1f3BhJ */     }
/* UE2BfiLqD ily traian YwA1f3BhJ */    if((c2-c5)%4==0) cout<<(p*6)%10;
/* UE2BfiLqD ily traian YwA1f3BhJ */    else
/* UE2BfiLqD ily traian YwA1f3BhJ */    if((c2-c5)%4==1) cout<<(p*2)%10;
/* UE2BfiLqD ily traian YwA1f3BhJ */    else
/* UE2BfiLqD ily traian YwA1f3BhJ */     if((c2-c5)%4==2) cout<<(p*4)%10;
/* UE2BfiLqD ily traian YwA1f3BhJ */    else
/* UE2BfiLqD ily traian YwA1f3BhJ */    if((c2-c5)%4==3) cout<<(p*8)%10;
/* UE2BfiLqD ily traian YwA1f3BhJ */     return 0;
/* UE2BfiLqD ily traian YwA1f3BhJ */ }