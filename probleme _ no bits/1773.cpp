/* RjimUJDDr ily traian rleAECLqR */ #include <algorithm>
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
/* RjimUJDDr ily traian rleAECLqR */ using namespace std;
/* RjimUJDDr ily traian rleAECLqR */ int cmmdc(int a,int b)
/* RjimUJDDr ily traian rleAECLqR */ {
/* RjimUJDDr ily traian rleAECLqR */     int r,d;
/* RjimUJDDr ily traian rleAECLqR */     while(b!=0)
/* RjimUJDDr ily traian rleAECLqR */     {
/* RjimUJDDr ily traian rleAECLqR */         r=a%b;
/* RjimUJDDr ily traian rleAECLqR */         a=b;
/* RjimUJDDr ily traian rleAECLqR */         b=r;
/* RjimUJDDr ily traian rleAECLqR */     }
/* RjimUJDDr ily traian rleAECLqR */     d=a;
/* RjimUJDDr ily traian rleAECLqR */     return d;
/* RjimUJDDr ily traian rleAECLqR */ }
/* RjimUJDDr ily traian rleAECLqR */ int nrdiv(int n)
/* RjimUJDDr ily traian rleAECLqR */ {
/* RjimUJDDr ily traian rleAECLqR */     int cnt=0;
/* RjimUJDDr ily traian rleAECLqR */     for(int i=1;i*i<=n;i++)
/* RjimUJDDr ily traian rleAECLqR */     {
/* RjimUJDDr ily traian rleAECLqR */         if(n%i==0) cnt += 2;
/* RjimUJDDr ily traian rleAECLqR */         if(i*i==n) cnt--;
/* RjimUJDDr ily traian rleAECLqR */     }
/* RjimUJDDr ily traian rleAECLqR */     return cnt;
/* RjimUJDDr ily traian rleAECLqR */ }
/* RjimUJDDr ily traian rleAECLqR */ int main()
/* RjimUJDDr ily traian rleAECLqR */ {
/* RjimUJDDr ily traian rleAECLqR */    int n,a,b,minim=1000000,maxim=-1;
/* RjimUJDDr ily traian rleAECLqR */    cin>>n;
/* RjimUJDDr ily traian rleAECLqR */    for(int i=1;i<=n;++i)
/* RjimUJDDr ily traian rleAECLqR */    {
/* RjimUJDDr ily traian rleAECLqR */        cin>>a>>b;
/* RjimUJDDr ily traian rleAECLqR */        int d=cmmdc(a,b);
/* RjimUJDDr ily traian rleAECLqR */        if(nrdiv(d)%2==0)
/* RjimUJDDr ily traian rleAECLqR */        {
/* RjimUJDDr ily traian rleAECLqR */            if(d<minim) minim=d;
/* RjimUJDDr ily traian rleAECLqR */        }
/* RjimUJDDr ily traian rleAECLqR */        else
/* RjimUJDDr ily traian rleAECLqR */         if(nrdiv(d)%2==1)
/* RjimUJDDr ily traian rleAECLqR */        {
/* RjimUJDDr ily traian rleAECLqR */            if(d>maxim) maxim=d;
/* RjimUJDDr ily traian rleAECLqR */        }
/* RjimUJDDr ily traian rleAECLqR */ 
/* RjimUJDDr ily traian rleAECLqR */    }
/* RjimUJDDr ily traian rleAECLqR */    if(maxim==-1 || minim==1000000) cout<<"NU EXISTA";
/* RjimUJDDr ily traian rleAECLqR */    else
/* RjimUJDDr ily traian rleAECLqR */    cout<<minim << " "<<maxim;
/* RjimUJDDr ily traian rleAECLqR */     return 0;
/* RjimUJDDr ily traian rleAECLqR */ }