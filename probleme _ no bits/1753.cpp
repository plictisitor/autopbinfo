/* T5AmHSjyS ily traian Ch7T0L61r */ #include <algorithm>
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
/* T5AmHSjyS ily traian Ch7T0L61r */ using namespace std;
/* T5AmHSjyS ily traian Ch7T0L61r */ 
/* T5AmHSjyS ily traian Ch7T0L61r */ ifstream cin("concurs2.in");
/* T5AmHSjyS ily traian Ch7T0L61r */ ofstream cout("concurs2.out");
/* T5AmHSjyS ily traian Ch7T0L61r */ 
/* T5AmHSjyS ily traian Ch7T0L61r */ int main()
/* T5AmHSjyS ily traian Ch7T0L61r */ {
/* T5AmHSjyS ily traian Ch7T0L61r */     int c, n;
/* T5AmHSjyS ily traian Ch7T0L61r */     cin >> c >> n;
/* T5AmHSjyS ily traian Ch7T0L61r */     if(c==1)
/* T5AmHSjyS ily traian Ch7T0L61r */     {
/* T5AmHSjyS ily traian Ch7T0L61r */         int a , b , c;
/* T5AmHSjyS ily traian Ch7T0L61r */         int cnt=0;
/* T5AmHSjyS ily traian Ch7T0L61r */         for(int i = 0 ; i < n ; ++i)
/* T5AmHSjyS ily traian Ch7T0L61r */         {
/* T5AmHSjyS ily traian Ch7T0L61r */             cin >> a >> b >> c;
/* T5AmHSjyS ily traian Ch7T0L61r */             if(b > 0 && c > 0)
/* T5AmHSjyS ily traian Ch7T0L61r */             cnt++;
/* T5AmHSjyS ily traian Ch7T0L61r */         }
/* T5AmHSjyS ily traian Ch7T0L61r */         if(cnt==n)
/* T5AmHSjyS ily traian Ch7T0L61r */             cout << "DA";
/* T5AmHSjyS ily traian Ch7T0L61r */         else
/* T5AmHSjyS ily traian Ch7T0L61r */             cout << "NU";
/* T5AmHSjyS ily traian Ch7T0L61r */     }
/* T5AmHSjyS ily traian Ch7T0L61r */     if(c==2)
/* T5AmHSjyS ily traian Ch7T0L61r */     {
/* T5AmHSjyS ily traian Ch7T0L61r */         int a , b , c;
/* T5AmHSjyS ily traian Ch7T0L61r */         int cnt1=0 , cnt2=0;
/* T5AmHSjyS ily traian Ch7T0L61r */         for(int i = 0 ; i < n ; ++i)
/* T5AmHSjyS ily traian Ch7T0L61r */         {
/* T5AmHSjyS ily traian Ch7T0L61r */             cin >> a >> b >> c;
/* T5AmHSjyS ily traian Ch7T0L61r */             if(a==1)
/* T5AmHSjyS ily traian Ch7T0L61r */             cnt1++;
/* T5AmHSjyS ily traian Ch7T0L61r */             if(a==2)
/* T5AmHSjyS ily traian Ch7T0L61r */             cnt2++;
/* T5AmHSjyS ily traian Ch7T0L61r */         }
/* T5AmHSjyS ily traian Ch7T0L61r */         cout << 1 << ' ' << cnt1;
/* T5AmHSjyS ily traian Ch7T0L61r */         cout << endl;
/* T5AmHSjyS ily traian Ch7T0L61r */         cout << 2 << ' ' << cnt2;
/* T5AmHSjyS ily traian Ch7T0L61r */     }
/* T5AmHSjyS ily traian Ch7T0L61r */     if(c==3)
/* T5AmHSjyS ily traian Ch7T0L61r */     {
/* T5AmHSjyS ily traian Ch7T0L61r */         int a[500] , b[500] , c[500];
/* T5AmHSjyS ily traian Ch7T0L61r */         int cnt1=0 , cnt2=0;
/* T5AmHSjyS ily traian Ch7T0L61r */         int max1=0 , max2=0;
/* T5AmHSjyS ily traian Ch7T0L61r */         for(int i = 0 ; i < n ; ++i)
/* T5AmHSjyS ily traian Ch7T0L61r */         {
/* T5AmHSjyS ily traian Ch7T0L61r */             cin >> a[i] >> b[i] >> c[i];
/* T5AmHSjyS ily traian Ch7T0L61r */             if(a[i]==1)
/* T5AmHSjyS ily traian Ch7T0L61r */             {
/* T5AmHSjyS ily traian Ch7T0L61r */                 if(b[i]+c[i]>max1)
/* T5AmHSjyS ily traian Ch7T0L61r */                     max1=b[i]+c[i];
/* T5AmHSjyS ily traian Ch7T0L61r */             }
/* T5AmHSjyS ily traian Ch7T0L61r */             if(a[i]==2)
/* T5AmHSjyS ily traian Ch7T0L61r */             {
/* T5AmHSjyS ily traian Ch7T0L61r */                 if(b[i]+c[i]>max2)
/* T5AmHSjyS ily traian Ch7T0L61r */                     max2=b[i]+c[i];
/* T5AmHSjyS ily traian Ch7T0L61r */             }
/* T5AmHSjyS ily traian Ch7T0L61r */         }
/* T5AmHSjyS ily traian Ch7T0L61r */         for(int i = 0 ; i < n ; ++i)
/* T5AmHSjyS ily traian Ch7T0L61r */         {
/* T5AmHSjyS ily traian Ch7T0L61r */             if(a[i]==1 && b[i]+c[i]==max1)
/* T5AmHSjyS ily traian Ch7T0L61r */                 cnt1++;
/* T5AmHSjyS ily traian Ch7T0L61r */             if(a[i]==2 && b[i]+c[i]==max2)
/* T5AmHSjyS ily traian Ch7T0L61r */                 cnt2++;
/* T5AmHSjyS ily traian Ch7T0L61r */         }
/* T5AmHSjyS ily traian Ch7T0L61r */         cout << 1 << ' ' << max1 << ' ' << cnt1 << endl;
/* T5AmHSjyS ily traian Ch7T0L61r */         cout << 2 << ' ' << max2 << ' ' << cnt2 << endl;
/* T5AmHSjyS ily traian Ch7T0L61r */         cout << cnt1+cnt2;
/* T5AmHSjyS ily traian Ch7T0L61r */     }
/* T5AmHSjyS ily traian Ch7T0L61r */     return 0;    
/* T5AmHSjyS ily traian Ch7T0L61r */ }