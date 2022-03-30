/* rr1aNIDDS ily traian EYmg4jY4n */ #include <algorithm>
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
/* rr1aNIDDS ily traian EYmg4jY4n */ using namespace std;
/* rr1aNIDDS ily traian EYmg4jY4n */ 
/* rr1aNIDDS ily traian EYmg4jY4n */ int n, stfin, drfin, a[1001], lmax = 0, l = 1, st = 1, dr = 1, sum, summax;
/* rr1aNIDDS ily traian EYmg4jY4n */ 
/* rr1aNIDDS ily traian EYmg4jY4n */ bool ok(int a, int b){
/* rr1aNIDDS ily traian EYmg4jY4n */     int d = 2;
/* rr1aNIDDS ily traian EYmg4jY4n */     while(a > 1){
/* rr1aNIDDS ily traian EYmg4jY4n */         if(a % d == 0){
/* rr1aNIDDS ily traian EYmg4jY4n */             if(b % d != 0)
/* rr1aNIDDS ily traian EYmg4jY4n */                 return 0;
/* rr1aNIDDS ily traian EYmg4jY4n */             else{
/* rr1aNIDDS ily traian EYmg4jY4n */                 while(a % d == 0)
/* rr1aNIDDS ily traian EYmg4jY4n */                     a/=d;
/* rr1aNIDDS ily traian EYmg4jY4n */                 while(b % d == 0)
/* rr1aNIDDS ily traian EYmg4jY4n */                     b/=d;
/* rr1aNIDDS ily traian EYmg4jY4n */             }
/* rr1aNIDDS ily traian EYmg4jY4n */         }
/* rr1aNIDDS ily traian EYmg4jY4n */         d++;
/* rr1aNIDDS ily traian EYmg4jY4n */         if(d * d > a)
/* rr1aNIDDS ily traian EYmg4jY4n */             d = a;
/* rr1aNIDDS ily traian EYmg4jY4n */     }
/* rr1aNIDDS ily traian EYmg4jY4n */     return a == b;
/* rr1aNIDDS ily traian EYmg4jY4n */ }
/* rr1aNIDDS ily traian EYmg4jY4n */ 
/* rr1aNIDDS ily traian EYmg4jY4n */ int main(){
/* rr1aNIDDS ily traian EYmg4jY4n */     cin >> n;
/* rr1aNIDDS ily traian EYmg4jY4n */     for(int i = 1; i <= n; ++i)
/* rr1aNIDDS ily traian EYmg4jY4n */         cin >> a[i];
/* rr1aNIDDS ily traian EYmg4jY4n */     int rez1=-1, rez2=-1;
/* rr1aNIDDS ily traian EYmg4jY4n */     for(int i = 2; i <= n; ++i){
/* rr1aNIDDS ily traian EYmg4jY4n */         if(ok(a[i-1], a[i]) && rez1 + rez2 < a[i-1] + a[i]){
/* rr1aNIDDS ily traian EYmg4jY4n */             rez1 = a[i-1];
/* rr1aNIDDS ily traian EYmg4jY4n */             rez2 = a[i];
/* rr1aNIDDS ily traian EYmg4jY4n */         }
/* rr1aNIDDS ily traian EYmg4jY4n */     }
/* rr1aNIDDS ily traian EYmg4jY4n */     if(rez1 != -1)
/* rr1aNIDDS ily traian EYmg4jY4n */         cout << rez1 << ' ' << rez2 << endl;
/* rr1aNIDDS ily traian EYmg4jY4n */     else
/* rr1aNIDDS ily traian EYmg4jY4n */         cout << "NU EXISTA";
/* rr1aNIDDS ily traian EYmg4jY4n */     return 0;
/* rr1aNIDDS ily traian EYmg4jY4n */ }