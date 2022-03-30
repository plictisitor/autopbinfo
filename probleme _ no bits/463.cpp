/* C49vkTb1X ily traian AwRiRI6Iu */ #include <algorithm>
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
/* C49vkTb1X ily traian AwRiRI6Iu */ using namespace std;
/* C49vkTb1X ily traian AwRiRI6Iu */ 
/* C49vkTb1X ily traian AwRiRI6Iu */ int main()
/* C49vkTb1X ily traian AwRiRI6Iu */ {
/* C49vkTb1X ily traian AwRiRI6Iu */    int n,x,dmax=0,pmax=0;
/* C49vkTb1X ily traian AwRiRI6Iu */    int rez=1;
/* C49vkTb1X ily traian AwRiRI6Iu */         int p,d=2;
/* C49vkTb1X ily traian AwRiRI6Iu */    cin>>n;
/* C49vkTb1X ily traian AwRiRI6Iu */    for(int i=1;i<=n;i++)
/* C49vkTb1X ily traian AwRiRI6Iu */    {
/* C49vkTb1X ily traian AwRiRI6Iu */        cin>>x;
/* C49vkTb1X ily traian AwRiRI6Iu */        d=2;
/* C49vkTb1X ily traian AwRiRI6Iu */         while(x-1)
/* C49vkTb1X ily traian AwRiRI6Iu */         {
/* C49vkTb1X ily traian AwRiRI6Iu */             p=0;
/* C49vkTb1X ily traian AwRiRI6Iu */             while(x%d==0)
/* C49vkTb1X ily traian AwRiRI6Iu */             {
/* C49vkTb1X ily traian AwRiRI6Iu */                 x/=d;
/* C49vkTb1X ily traian AwRiRI6Iu */                 p++;
/* C49vkTb1X ily traian AwRiRI6Iu */             }
/* C49vkTb1X ily traian AwRiRI6Iu */             if(p)
/* C49vkTb1X ily traian AwRiRI6Iu */                 if(d > dmax)
/* C49vkTb1X ily traian AwRiRI6Iu */                     {
/* C49vkTb1X ily traian AwRiRI6Iu */                         dmax = d;
/* C49vkTb1X ily traian AwRiRI6Iu */                          pmax = p;
/* C49vkTb1X ily traian AwRiRI6Iu */                     }
/* C49vkTb1X ily traian AwRiRI6Iu */                 else
/* C49vkTb1X ily traian AwRiRI6Iu */                     if(d==dmax) pmax += p;
/* C49vkTb1X ily traian AwRiRI6Iu */             d ++;
/* C49vkTb1X ily traian AwRiRI6Iu */             if( d * d > x )
/* C49vkTb1X ily traian AwRiRI6Iu */                 d = x;
/* C49vkTb1X ily traian AwRiRI6Iu */ 
/* C49vkTb1X ily traian AwRiRI6Iu */    }
/* C49vkTb1X ily traian AwRiRI6Iu */    }
/* C49vkTb1X ily traian AwRiRI6Iu */    cout<<dmax<<" "<<pmax;
/* C49vkTb1X ily traian AwRiRI6Iu */     return 0;
/* C49vkTb1X ily traian AwRiRI6Iu */ }