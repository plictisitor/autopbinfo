/* oVv2t24mB ily traian cuxoWDHQT */ #include <algorithm>
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
/* oVv2t24mB ily traian cuxoWDHQT */ using namespace std;
/* oVv2t24mB ily traian cuxoWDHQT */ 
/* oVv2t24mB ily traian cuxoWDHQT */ ifstream cin("eratostene5.in");
/* oVv2t24mB ily traian cuxoWDHQT */ ofstream cout("eratostene5.out");
/* oVv2t24mB ily traian cuxoWDHQT */ 
/* oVv2t24mB ily traian cuxoWDHQT */ int e[1000001], f[1000001], p[500001], P;
/* oVv2t24mB ily traian cuxoWDHQT */ 
/* oVv2t24mB ily traian cuxoWDHQT */ void eratostene(){
/* oVv2t24mB ily traian cuxoWDHQT */     e[0] = e[1] = 1;
/* oVv2t24mB ily traian cuxoWDHQT */     for(int i = 2; i * i <= 1000000; ++i)
/* oVv2t24mB ily traian cuxoWDHQT */         for(int j = i * i; j <= 1000000; j += i)
/* oVv2t24mB ily traian cuxoWDHQT */             e[j] = 1;
/* oVv2t24mB ily traian cuxoWDHQT */     for(int i = 1; i <= 1000000; ++i)
/* oVv2t24mB ily traian cuxoWDHQT */         if(!e[i])
/* oVv2t24mB ily traian cuxoWDHQT */             p[++P] = i;
/* oVv2t24mB ily traian cuxoWDHQT */ }
/* oVv2t24mB ily traian cuxoWDHQT */ 
/* oVv2t24mB ily traian cuxoWDHQT */ void desc(int n){
/* oVv2t24mB ily traian cuxoWDHQT */     int d = 1;
/* oVv2t24mB ily traian cuxoWDHQT */     while(n > 1){
/* oVv2t24mB ily traian cuxoWDHQT */         int pi = 0;
/* oVv2t24mB ily traian cuxoWDHQT */         while(n % p[d] == 0)
/* oVv2t24mB ily traian cuxoWDHQT */             n/=p[d], pi++;
/* oVv2t24mB ily traian cuxoWDHQT */         f[p[d]] += pi;
/* oVv2t24mB ily traian cuxoWDHQT */         d++;
/* oVv2t24mB ily traian cuxoWDHQT */         if(n > 1 && p[d] * p[d] > n){
/* oVv2t24mB ily traian cuxoWDHQT */             f[n] ++;
/* oVv2t24mB ily traian cuxoWDHQT */             break;
/* oVv2t24mB ily traian cuxoWDHQT */         }
/* oVv2t24mB ily traian cuxoWDHQT */     }
/* oVv2t24mB ily traian cuxoWDHQT */ }
/* oVv2t24mB ily traian cuxoWDHQT */ 
/* oVv2t24mB ily traian cuxoWDHQT */ int main(){
/* oVv2t24mB ily traian cuxoWDHQT */     int n;
/* oVv2t24mB ily traian cuxoWDHQT */     eratostene();
/* oVv2t24mB ily traian cuxoWDHQT */     cin >> n;
/* oVv2t24mB ily traian cuxoWDHQT */     for(int i = 1; i <= n; ++i){
/* oVv2t24mB ily traian cuxoWDHQT */         int x;
/* oVv2t24mB ily traian cuxoWDHQT */         cin >> x;
/* oVv2t24mB ily traian cuxoWDHQT */         desc(x);
/* oVv2t24mB ily traian cuxoWDHQT */     }
/* oVv2t24mB ily traian cuxoWDHQT */     for(int i = 1; i <= 1000000; ++i)
/* oVv2t24mB ily traian cuxoWDHQT */         if(f[i])
/* oVv2t24mB ily traian cuxoWDHQT */             cout << i << ' ' << f[i] << '\n';
/* oVv2t24mB ily traian cuxoWDHQT */     return 0;
/* oVv2t24mB ily traian cuxoWDHQT */ }