/* ypARyaHrE ily traian T0KjP4JXc */ #include <algorithm>
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
/* ypARyaHrE ily traian T0KjP4JXc */ using namespace std;
/* ypARyaHrE ily traian T0KjP4JXc */ int main()
/* ypARyaHrE ily traian T0KjP4JXc */ {
/* ypARyaHrE ily traian T0KjP4JXc */     int a,b,c,d,s,x,y,x1,y1,r,r1,p,q,auxx,auxy,n;
/* ypARyaHrE ily traian T0KjP4JXc */     cin>>n>>a>>b;
/* ypARyaHrE ily traian T0KjP4JXc */     for(int i=1;i<n;i++)
/* ypARyaHrE ily traian T0KjP4JXc */  {
/* ypARyaHrE ily traian T0KjP4JXc */      cin>>c>>d;
/* ypARyaHrE ily traian T0KjP4JXc */     x=a*d+b*c;
/* ypARyaHrE ily traian T0KjP4JXc */     y=b*d;
/* ypARyaHrE ily traian T0KjP4JXc */     auxx=x;
/* ypARyaHrE ily traian T0KjP4JXc */     auxy=y;
/* ypARyaHrE ily traian T0KjP4JXc */     while(y!=0)
/* ypARyaHrE ily traian T0KjP4JXc */     {
/* ypARyaHrE ily traian T0KjP4JXc */         r=x%y;
/* ypARyaHrE ily traian T0KjP4JXc */         x=y;
/* ypARyaHrE ily traian T0KjP4JXc */         y=r;
/* ypARyaHrE ily traian T0KjP4JXc */     }
/* ypARyaHrE ily traian T0KjP4JXc */     a=auxx/x;
/* ypARyaHrE ily traian T0KjP4JXc */     b=auxy/x;
/* ypARyaHrE ily traian T0KjP4JXc */ 
/* ypARyaHrE ily traian T0KjP4JXc */     }
/* ypARyaHrE ily traian T0KjP4JXc */ 
/* ypARyaHrE ily traian T0KjP4JXc */    cout<<a<<" "<<b;
/* ypARyaHrE ily traian T0KjP4JXc */     return 0;
/* ypARyaHrE ily traian T0KjP4JXc */ }