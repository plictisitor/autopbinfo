/* xrjwqQu6R ily traian S1zCwgq4d */ #include <algorithm>
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
/* xrjwqQu6R ily traian S1zCwgq4d */ using namespace std;
/* xrjwqQu6R ily traian S1zCwgq4d */ 
/* xrjwqQu6R ily traian S1zCwgq4d */ unsigned long long a;
/* xrjwqQu6R ily traian S1zCwgq4d */ bool ok = true;
/* xrjwqQu6R ily traian S1zCwgq4d */ 
/* xrjwqQu6R ily traian S1zCwgq4d */ int nrcif(unsigned long long a){
/* xrjwqQu6R ily traian S1zCwgq4d */     int cnt = 0;
/* xrjwqQu6R ily traian S1zCwgq4d */     while(a) cnt ++, a/=10;
/* xrjwqQu6R ily traian S1zCwgq4d */     return cnt;
/* xrjwqQu6R ily traian S1zCwgq4d */ }
/* xrjwqQu6R ily traian S1zCwgq4d */ 
/* xrjwqQu6R ily traian S1zCwgq4d */ unsigned long long sterg(unsigned long long n){
/* xrjwqQu6R ily traian S1zCwgq4d */     int a = nrcif(n);
/* xrjwqQu6R ily traian S1zCwgq4d */     unsigned long long p = 1;
/* xrjwqQu6R ily traian S1zCwgq4d */     while(a){
/* xrjwqQu6R ily traian S1zCwgq4d */         p *= 10;
/* xrjwqQu6R ily traian S1zCwgq4d */         a--;
/* xrjwqQu6R ily traian S1zCwgq4d */     }
/* xrjwqQu6R ily traian S1zCwgq4d */     p/=10;
/* xrjwqQu6R ily traian S1zCwgq4d */     return n % p;
/* xrjwqQu6R ily traian S1zCwgq4d */ }
/* xrjwqQu6R ily traian S1zCwgq4d */ 
/* xrjwqQu6R ily traian S1zCwgq4d */ bool prim(unsigned long long n){
/* xrjwqQu6R ily traian S1zCwgq4d */     unsigned long long cnt = 1;
/* xrjwqQu6R ily traian S1zCwgq4d */     unsigned long long d = 2;
/* xrjwqQu6R ily traian S1zCwgq4d */     while(n > 1){
/* xrjwqQu6R ily traian S1zCwgq4d */         int p = 0;
/* xrjwqQu6R ily traian S1zCwgq4d */         while(n % d == 0)
/* xrjwqQu6R ily traian S1zCwgq4d */             n/=d, p++;
/* xrjwqQu6R ily traian S1zCwgq4d */         cnt *= p + 1;
/* xrjwqQu6R ily traian S1zCwgq4d */         if(cnt > 2)
/* xrjwqQu6R ily traian S1zCwgq4d */             return 0;
/* xrjwqQu6R ily traian S1zCwgq4d */         d++;
/* xrjwqQu6R ily traian S1zCwgq4d */         if(d * d > n)
/* xrjwqQu6R ily traian S1zCwgq4d */             d = n;
/* xrjwqQu6R ily traian S1zCwgq4d */     }
/* xrjwqQu6R ily traian S1zCwgq4d */     if(cnt == 2)
/* xrjwqQu6R ily traian S1zCwgq4d */         return 1;
/* xrjwqQu6R ily traian S1zCwgq4d */     return 0;
/* xrjwqQu6R ily traian S1zCwgq4d */ }
/* xrjwqQu6R ily traian S1zCwgq4d */ 
/* xrjwqQu6R ily traian S1zCwgq4d */ int main(){
/* xrjwqQu6R ily traian S1zCwgq4d */     cin >> a;
/* xrjwqQu6R ily traian S1zCwgq4d */     while(nrcif(a) > 1){
/* xrjwqQu6R ily traian S1zCwgq4d */         if(!prim(a))
/* xrjwqQu6R ily traian S1zCwgq4d */             ok = false;
/* xrjwqQu6R ily traian S1zCwgq4d */         a = sterg(a);
/* xrjwqQu6R ily traian S1zCwgq4d */     }
/* xrjwqQu6R ily traian S1zCwgq4d */     if(!prim(a))
/* xrjwqQu6R ily traian S1zCwgq4d */         ok = false;
/* xrjwqQu6R ily traian S1zCwgq4d */     if(ok == true)
/* xrjwqQu6R ily traian S1zCwgq4d */         cout << "DA";
/* xrjwqQu6R ily traian S1zCwgq4d */     else
/* xrjwqQu6R ily traian S1zCwgq4d */         cout << "NU";
/* xrjwqQu6R ily traian S1zCwgq4d */     return 0;
/* xrjwqQu6R ily traian S1zCwgq4d */ }