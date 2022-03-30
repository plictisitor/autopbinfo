/* XyfYEMOWK ily traian rYxmD1TFb */ #include <algorithm>
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
/* XyfYEMOWK ily traian rYxmD1TFb */ using namespace std;
/* XyfYEMOWK ily traian rYxmD1TFb */ void rezolvare()
/* XyfYEMOWK ily traian rYxmD1TFb */ {
/* XyfYEMOWK ily traian rYxmD1TFb */     unsigned long long a,b,r,d;
/* XyfYEMOWK ily traian rYxmD1TFb */     cin>>a>>b;
/* XyfYEMOWK ily traian rYxmD1TFb */     if(a==0) d=b;
/* XyfYEMOWK ily traian rYxmD1TFb */     else
/* XyfYEMOWK ily traian rYxmD1TFb */         if(b==0) d=a;
/* XyfYEMOWK ily traian rYxmD1TFb */     else
/* XyfYEMOWK ily traian rYxmD1TFb */     {while(b!=0)
/* XyfYEMOWK ily traian rYxmD1TFb */     {
/* XyfYEMOWK ily traian rYxmD1TFb */         r=a%b;
/* XyfYEMOWK ily traian rYxmD1TFb */         a=b;
/* XyfYEMOWK ily traian rYxmD1TFb */         b=r;
/* XyfYEMOWK ily traian rYxmD1TFb */     }
/* XyfYEMOWK ily traian rYxmD1TFb */     d=a;
/* XyfYEMOWK ily traian rYxmD1TFb */     }
/* XyfYEMOWK ily traian rYxmD1TFb */     for(int i=1;i<=d;i++)
/* XyfYEMOWK ily traian rYxmD1TFb */     {
/* XyfYEMOWK ily traian rYxmD1TFb */         if(d%i==0) cout<<i<<" ";
/* XyfYEMOWK ily traian rYxmD1TFb */     }
/* XyfYEMOWK ily traian rYxmD1TFb */ }
/* XyfYEMOWK ily traian rYxmD1TFb */ int main()
/* XyfYEMOWK ily traian rYxmD1TFb */ {
/* XyfYEMOWK ily traian rYxmD1TFb */     rezolvare();
/* XyfYEMOWK ily traian rYxmD1TFb */     return 0;
/* XyfYEMOWK ily traian rYxmD1TFb */ }