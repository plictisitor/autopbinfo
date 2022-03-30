/* etcBU8qy6 ily traian hrSuzMIAz */ #include <algorithm>
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
/* etcBU8qy6 ily traian hrSuzMIAz */ using namespace std;
/* etcBU8qy6 ily traian hrSuzMIAz */ ifstream fin("fractii4.in");
/* etcBU8qy6 ily traian hrSuzMIAz */ ofstream fout("fractii4.out");
/* etcBU8qy6 ily traian hrSuzMIAz */ int prim(int n)
/* etcBU8qy6 ily traian hrSuzMIAz */ {
/* etcBU8qy6 ily traian hrSuzMIAz */     if(n==0 || n==1) return 0;
/* etcBU8qy6 ily traian hrSuzMIAz */     if(n==2) return 1;
/* etcBU8qy6 ily traian hrSuzMIAz */     if(n%2==0) return 0;
/* etcBU8qy6 ily traian hrSuzMIAz */     else for(int i=3;i*i<n;i++)
/* etcBU8qy6 ily traian hrSuzMIAz */     {
/* etcBU8qy6 ily traian hrSuzMIAz */         if(n%i==0) return 0;
/* etcBU8qy6 ily traian hrSuzMIAz */     }
/* etcBU8qy6 ily traian hrSuzMIAz */     return 1;
/* etcBU8qy6 ily traian hrSuzMIAz */ }
/* etcBU8qy6 ily traian hrSuzMIAz */ int prime(int a, int b)
/* etcBU8qy6 ily traian hrSuzMIAz */ {
/* etcBU8qy6 ily traian hrSuzMIAz */     int d,r;
/* etcBU8qy6 ily traian hrSuzMIAz */     if(b==0) d=a;
/* etcBU8qy6 ily traian hrSuzMIAz */     else while(b!=0)
/* etcBU8qy6 ily traian hrSuzMIAz */     {
/* etcBU8qy6 ily traian hrSuzMIAz */         r=a%b;
/* etcBU8qy6 ily traian hrSuzMIAz */         a=b;
/* etcBU8qy6 ily traian hrSuzMIAz */         b=r;
/* etcBU8qy6 ily traian hrSuzMIAz */     }
/* etcBU8qy6 ily traian hrSuzMIAz */     d=a;
/* etcBU8qy6 ily traian hrSuzMIAz */     if(d==1) return 1;
/* etcBU8qy6 ily traian hrSuzMIAz */     else return 0;
/* etcBU8qy6 ily traian hrSuzMIAz */ }
/* etcBU8qy6 ily traian hrSuzMIAz */ int main()
/* etcBU8qy6 ily traian hrSuzMIAz */ {
/* etcBU8qy6 ily traian hrSuzMIAz */     int n,a,b,p;
/* etcBU8qy6 ily traian hrSuzMIAz */     fin>>p>>n;
/* etcBU8qy6 ily traian hrSuzMIAz */     for(int i=1;i<=n;i++)
/* etcBU8qy6 ily traian hrSuzMIAz */     {
/* etcBU8qy6 ily traian hrSuzMIAz */         fin>>a>>b;
/* etcBU8qy6 ily traian hrSuzMIAz */         int x=a,y=b,r,q;
/* etcBU8qy6 ily traian hrSuzMIAz */         if(p==1)
/* etcBU8qy6 ily traian hrSuzMIAz */         {
/* etcBU8qy6 ily traian hrSuzMIAz */          if(prime (a,b)) fout<<"-1"<<endl;
/* etcBU8qy6 ily traian hrSuzMIAz */          else
/* etcBU8qy6 ily traian hrSuzMIAz */         {
/* etcBU8qy6 ily traian hrSuzMIAz */          int d=0,d1,cate=1,p=0;
/* etcBU8qy6 ily traian hrSuzMIAz */          while(b!=0)
/* etcBU8qy6 ily traian hrSuzMIAz */         {
/* etcBU8qy6 ily traian hrSuzMIAz */             r=a%b;
/* etcBU8qy6 ily traian hrSuzMIAz */             a=b;
/* etcBU8qy6 ily traian hrSuzMIAz */             b=r;
/* etcBU8qy6 ily traian hrSuzMIAz */         }
/* etcBU8qy6 ily traian hrSuzMIAz */         d1=a;
/* etcBU8qy6 ily traian hrSuzMIAz */         for(int j=1;j*j<=d1;j++)
/* etcBU8qy6 ily traian hrSuzMIAz */     {
/* etcBU8qy6 ily traian hrSuzMIAz */         if(d1%j==0) d=d+2;
/* etcBU8qy6 ily traian hrSuzMIAz */         if(j*j==d1) d--;
/* etcBU8qy6 ily traian hrSuzMIAz */     }
/* etcBU8qy6 ily traian hrSuzMIAz */         fout<<d-1<<endl;
/* etcBU8qy6 ily traian hrSuzMIAz */         }
/* etcBU8qy6 ily traian hrSuzMIAz */         }
/* etcBU8qy6 ily traian hrSuzMIAz */         else
/* etcBU8qy6 ily traian hrSuzMIAz */             if(p==2)
/* etcBU8qy6 ily traian hrSuzMIAz */         {
/* etcBU8qy6 ily traian hrSuzMIAz */             int t;
/* etcBU8qy6 ily traian hrSuzMIAz */             while(b!=0)
/* etcBU8qy6 ily traian hrSuzMIAz */         {
/* etcBU8qy6 ily traian hrSuzMIAz */             r=a%b;
/* etcBU8qy6 ily traian hrSuzMIAz */             a=b;
/* etcBU8qy6 ily traian hrSuzMIAz */             b=r;
/* etcBU8qy6 ily traian hrSuzMIAz */         }
/* etcBU8qy6 ily traian hrSuzMIAz */         t=a;
/* etcBU8qy6 ily traian hrSuzMIAz */             fout<<x/t<<"/"<<y/t<<endl;
/* etcBU8qy6 ily traian hrSuzMIAz */         }
/* etcBU8qy6 ily traian hrSuzMIAz */     }
/* etcBU8qy6 ily traian hrSuzMIAz */ return 0;
/* etcBU8qy6 ily traian hrSuzMIAz */ }