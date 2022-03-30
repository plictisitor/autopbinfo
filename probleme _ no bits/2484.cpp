/* HNJ10dPjI ily traian 1cpD3v2hx */ #include <algorithm>
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
/* HNJ10dPjI ily traian 1cpD3v2hx */ using namespace std;
/* HNJ10dPjI ily traian 1cpD3v2hx */ 
/* HNJ10dPjI ily traian 1cpD3v2hx */ ifstream cin("key.in");
/* HNJ10dPjI ily traian 1cpD3v2hx */ ofstream cout("key.out");
/* HNJ10dPjI ily traian 1cpD3v2hx */ 
/* HNJ10dPjI ily traian 1cpD3v2hx */ int main()
/* HNJ10dPjI ily traian 1cpD3v2hx */ {
/* HNJ10dPjI ily traian 1cpD3v2hx */     int n , m;
/* HNJ10dPjI ily traian 1cpD3v2hx */     char c1 , c2 , c3 , x1 , x2 , x3;
/* HNJ10dPjI ily traian 1cpD3v2hx */     cin >> n >> c1 >> c2 >> c3 >> m;
/* HNJ10dPjI ily traian 1cpD3v2hx */     if(n==1)
/* HNJ10dPjI ily traian 1cpD3v2hx */     {
/* HNJ10dPjI ily traian 1cpD3v2hx */         int cnt1 = 0 , cnt2=0 , cnt3=0 , cnt4=0;
/* HNJ10dPjI ily traian 1cpD3v2hx */         for(int i = 0 ; i < m ; ++i)    
/* HNJ10dPjI ily traian 1cpD3v2hx */         {
/* HNJ10dPjI ily traian 1cpD3v2hx */             int cnt=0;
/* HNJ10dPjI ily traian 1cpD3v2hx */             int nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */             cin >> x1 >> x2 >> x3 >> nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(x1!=c1)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt++;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(x2!=c2)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt++;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(x3!=c3)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt++;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(cnt==0)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt1++;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(cnt==1)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt2++;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(cnt==2)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt3++;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(cnt==3)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 cnt4++;
/* HNJ10dPjI ily traian 1cpD3v2hx */         }
/* HNJ10dPjI ily traian 1cpD3v2hx */         cout << cnt4 << ' ' << cnt3 << ' ' << cnt2 << ' ' << cnt1;
/* HNJ10dPjI ily traian 1cpD3v2hx */     }
/* HNJ10dPjI ily traian 1cpD3v2hx */     else
/* HNJ10dPjI ily traian 1cpD3v2hx */     {
/* HNJ10dPjI ily traian 1cpD3v2hx */         int s=0;
/* HNJ10dPjI ily traian 1cpD3v2hx */         for(int i = 0 ; i < m ; ++i)
/* HNJ10dPjI ily traian 1cpD3v2hx */         {
/* HNJ10dPjI ily traian 1cpD3v2hx */             int nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */             cin >> x1 >> x2 >> x3 >> nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */             nr/=3;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(x1!=c1)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 s+=nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(x2!=c2)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 s+=nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */             if(x3!=c3)
/* HNJ10dPjI ily traian 1cpD3v2hx */                 s+=nr;
/* HNJ10dPjI ily traian 1cpD3v2hx */         }
/* HNJ10dPjI ily traian 1cpD3v2hx */         if(s!=0)
/* HNJ10dPjI ily traian 1cpD3v2hx */         cout << s;
/* HNJ10dPjI ily traian 1cpD3v2hx */         else
/* HNJ10dPjI ily traian 1cpD3v2hx */         cout << "GRATIS";
/* HNJ10dPjI ily traian 1cpD3v2hx */     }
/* HNJ10dPjI ily traian 1cpD3v2hx */     return 0;    
/* HNJ10dPjI ily traian 1cpD3v2hx */ }