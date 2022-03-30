/* bgAXcB8Qb ily traian Omyyg1eZT */ #include <algorithm>
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
/* bgAXcB8Qb ily traian Omyyg1eZT */ 
/* bgAXcB8Qb ily traian Omyyg1eZT */ using namespace std;
/* bgAXcB8Qb ily traian Omyyg1eZT */ int main()
/* bgAXcB8Qb ily traian Omyyg1eZT */ {
/* bgAXcB8Qb ily traian Omyyg1eZT */     unsigned long long n,c2=0,c5=0,p=1,a,x,pp,e;
/* bgAXcB8Qb ily traian Omyyg1eZT */     cin>>n;
/* bgAXcB8Qb ily traian Omyyg1eZT */     for(int i=1;i<=n;i++)
/* bgAXcB8Qb ily traian Omyyg1eZT */     {
/* bgAXcB8Qb ily traian Omyyg1eZT */         cin>>x;
/* bgAXcB8Qb ily traian Omyyg1eZT */ 
/* bgAXcB8Qb ily traian Omyyg1eZT */              p=p%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */              a=x;
/* bgAXcB8Qb ily traian Omyyg1eZT */              while(a%2==0)
/* bgAXcB8Qb ily traian Omyyg1eZT */              {
/* bgAXcB8Qb ily traian Omyyg1eZT */                  a=a/2;
/* bgAXcB8Qb ily traian Omyyg1eZT */                  c2++;
/* bgAXcB8Qb ily traian Omyyg1eZT */              }
/* bgAXcB8Qb ily traian Omyyg1eZT */              while(a%5==0)
/* bgAXcB8Qb ily traian Omyyg1eZT */              {
/* bgAXcB8Qb ily traian Omyyg1eZT */                  a=a/5;
/* bgAXcB8Qb ily traian Omyyg1eZT */                  c5++;
/* bgAXcB8Qb ily traian Omyyg1eZT */              }
/* bgAXcB8Qb ily traian Omyyg1eZT */               a=a%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */               p=p*a;
/* bgAXcB8Qb ily traian Omyyg1eZT */     }
/* bgAXcB8Qb ily traian Omyyg1eZT */ 
/* bgAXcB8Qb ily traian Omyyg1eZT */    if(c2==0 && c5==0) cout<<p%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */     if(c2==0) cout<<"5";
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */    if(c2==c5) cout<<p%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    if(c2>c5)
/* bgAXcB8Qb ily traian Omyyg1eZT */    {
/* bgAXcB8Qb ily traian Omyyg1eZT */         if((c2-c5)%4==0) cout<<(p*6)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */    if((c2-c5)%4==1) cout<<(p*2)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */     if((c2-c5)%4==2) cout<<(p*4)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */    if((c2-c5)%4==3) cout<<(p*8)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    }
/* bgAXcB8Qb ily traian Omyyg1eZT */    else if(c5>c2)
/* bgAXcB8Qb ily traian Omyyg1eZT */    {
/* bgAXcB8Qb ily traian Omyyg1eZT */         if((c5-c2)%4==0) cout<<(p*6)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */    if((c5-c2)%4==1) cout<<(p*2)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */     if((c5-c2)%4==2) cout<<(p*4)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    else
/* bgAXcB8Qb ily traian Omyyg1eZT */    if((c5-c2)%4==3) cout<<(p*8)%10;
/* bgAXcB8Qb ily traian Omyyg1eZT */    }
/* bgAXcB8Qb ily traian Omyyg1eZT */ 
/* bgAXcB8Qb ily traian Omyyg1eZT */     return 0;
/* bgAXcB8Qb ily traian Omyyg1eZT */ }