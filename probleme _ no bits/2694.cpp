/* 2pmvkhYER ily traian WD6NLTeO8 */ #include <algorithm>
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
/* 2pmvkhYER ily traian WD6NLTeO8 */ 
/* 2pmvkhYER ily traian WD6NLTeO8 */ using namespace std;
/* 2pmvkhYER ily traian WD6NLTeO8 */ 
/* 2pmvkhYER ily traian WD6NLTeO8 */ int maxi(int n)
/* 2pmvkhYER ily traian WD6NLTeO8 */ {
/* 2pmvkhYER ily traian WD6NLTeO8 */     int ma = 0;
/* 2pmvkhYER ily traian WD6NLTeO8 */     while(n)
/* 2pmvkhYER ily traian WD6NLTeO8 */     {
/* 2pmvkhYER ily traian WD6NLTeO8 */         if(n%10 > ma)
/* 2pmvkhYER ily traian WD6NLTeO8 */             ma = n % 10;
/* 2pmvkhYER ily traian WD6NLTeO8 */         n/=10;
/* 2pmvkhYER ily traian WD6NLTeO8 */     }
/* 2pmvkhYER ily traian WD6NLTeO8 */     return ma;
/* 2pmvkhYER ily traian WD6NLTeO8 */ }
/* 2pmvkhYER ily traian WD6NLTeO8 */ 
/* 2pmvkhYER ily traian WD6NLTeO8 */ int main()
/* 2pmvkhYER ily traian WD6NLTeO8 */ {
/* 2pmvkhYER ily traian WD6NLTeO8 */     int a , b;
/* 2pmvkhYER ily traian WD6NLTeO8 */     cin >> a >> b;
/* 2pmvkhYER ily traian WD6NLTeO8 */     int max1=maxi(a);
/* 2pmvkhYER ily traian WD6NLTeO8 */     int max2=maxi(b);
/* 2pmvkhYER ily traian WD6NLTeO8 */     int ma;
/* 2pmvkhYER ily traian WD6NLTeO8 */     if(max1 > max2)
/* 2pmvkhYER ily traian WD6NLTeO8 */         ma = max1*10 + max2;
/* 2pmvkhYER ily traian WD6NLTeO8 */     else
/* 2pmvkhYER ily traian WD6NLTeO8 */         ma = max2*10 + max1;
/* 2pmvkhYER ily traian WD6NLTeO8 */     int v[4] , v1[4];
/* 2pmvkhYER ily traian WD6NLTeO8 */     int p = 0 , p1 = 0;
/* 2pmvkhYER ily traian WD6NLTeO8 */     cout << ma << ' ';
/* 2pmvkhYER ily traian WD6NLTeO8 */     while(a)
/* 2pmvkhYER ily traian WD6NLTeO8 */     {
/* 2pmvkhYER ily traian WD6NLTeO8 */         v[p]=a%10;
/* 2pmvkhYER ily traian WD6NLTeO8 */         p++ , a/=10;
/* 2pmvkhYER ily traian WD6NLTeO8 */     }
/* 2pmvkhYER ily traian WD6NLTeO8 */     while(b)
/* 2pmvkhYER ily traian WD6NLTeO8 */     {
/* 2pmvkhYER ily traian WD6NLTeO8 */         v1[p1]=b%10;
/* 2pmvkhYER ily traian WD6NLTeO8 */         p1++ , b/=10;
/* 2pmvkhYER ily traian WD6NLTeO8 */     }
/* 2pmvkhYER ily traian WD6NLTeO8 */     sort(v , v + p);
/* 2pmvkhYER ily traian WD6NLTeO8 */     sort(v1 , v1 + p1);
/* 2pmvkhYER ily traian WD6NLTeO8 */     int min1 = v[0] , min2 = v1[0];
/* 2pmvkhYER ily traian WD6NLTeO8 */     if(v1[0]==0 && v[0]==0)
/* 2pmvkhYER ily traian WD6NLTeO8 */     {
/* 2pmvkhYER ily traian WD6NLTeO8 */         int mi=10;
/* 2pmvkhYER ily traian WD6NLTeO8 */         for(int i = 0 ; i < p ; ++i)
/* 2pmvkhYER ily traian WD6NLTeO8 */         {
/* 2pmvkhYER ily traian WD6NLTeO8 */             if(v[i] < mi && v[i]!=0)
/* 2pmvkhYER ily traian WD6NLTeO8 */                 mi=v[i];
/* 2pmvkhYER ily traian WD6NLTeO8 */             if(v1[i] < mi && v1[i]!=0)
/* 2pmvkhYER ily traian WD6NLTeO8 */                 mi=v1[i];
/* 2pmvkhYER ily traian WD6NLTeO8 */         }
/* 2pmvkhYER ily traian WD6NLTeO8 */         int m = mi * 10;
/* 2pmvkhYER ily traian WD6NLTeO8 */         cout << m;
/* 2pmvkhYER ily traian WD6NLTeO8 */     }
/* 2pmvkhYER ily traian WD6NLTeO8 */     else
/* 2pmvkhYER ily traian WD6NLTeO8 */     {
/* 2pmvkhYER ily traian WD6NLTeO8 */         if(min1==0 || min2==0)
/* 2pmvkhYER ily traian WD6NLTeO8 */         {
/* 2pmvkhYER ily traian WD6NLTeO8 */             if(min1 > min2)
/* 2pmvkhYER ily traian WD6NLTeO8 */                 cout << min1*10;
/* 2pmvkhYER ily traian WD6NLTeO8 */             else
/* 2pmvkhYER ily traian WD6NLTeO8 */                 cout << min2*10;
/* 2pmvkhYER ily traian WD6NLTeO8 */         } 
/* 2pmvkhYER ily traian WD6NLTeO8 */         else
/* 2pmvkhYER ily traian WD6NLTeO8 */         {
/* 2pmvkhYER ily traian WD6NLTeO8 */             if(min1 < min2)
/* 2pmvkhYER ily traian WD6NLTeO8 */                 cout << min1*10+min2;
/* 2pmvkhYER ily traian WD6NLTeO8 */             else
/* 2pmvkhYER ily traian WD6NLTeO8 */                 cout << min2*10+min1;
/* 2pmvkhYER ily traian WD6NLTeO8 */         }
/* 2pmvkhYER ily traian WD6NLTeO8 */     }
/* 2pmvkhYER ily traian WD6NLTeO8 */     
/* 2pmvkhYER ily traian WD6NLTeO8 */ }