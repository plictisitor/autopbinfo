/* g5rqGFU4V ily traian 1wu3kyPwT */ #include <algorithm>
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
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ using namespace std;
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ ifstream cin("greselile.in");
/* g5rqGFU4V ily traian 1wu3kyPwT */ ofstream cout("greselile.out");
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ bitset<1000001> V;
/* g5rqGFU4V ily traian 1wu3kyPwT */ int P[1000001], nrp, D[1000001];
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ void eratostene(){
/* g5rqGFU4V ily traian 1wu3kyPwT */     V[1]=V[0]=1;
/* g5rqGFU4V ily traian 1wu3kyPwT */     for(int i = 2; i <= 1001; ++i)
/* g5rqGFU4V ily traian 1wu3kyPwT */         for(int j = 2; j * i <= 1000001; j++)
/* g5rqGFU4V ily traian 1wu3kyPwT */             V[j * i] = 1;
/* g5rqGFU4V ily traian 1wu3kyPwT */     for(int i = 1; i <= 1000001; ++i)
/* g5rqGFU4V ily traian 1wu3kyPwT */         if(V[i] == 0)
/* g5rqGFU4V ily traian 1wu3kyPwT */             P[++nrp] = i;
/* g5rqGFU4V ily traian 1wu3kyPwT */ }
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ int n, t;
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ int desc(int n){
/* g5rqGFU4V ily traian 1wu3kyPwT */     int d = 1, cnt = 0;
/* g5rqGFU4V ily traian 1wu3kyPwT */     while(n > 1){
/* g5rqGFU4V ily traian 1wu3kyPwT */         int p = 0;
/* g5rqGFU4V ily traian 1wu3kyPwT */         while(n % P[d] == 0)
/* g5rqGFU4V ily traian 1wu3kyPwT */             p++, n /= P[d];
/* g5rqGFU4V ily traian 1wu3kyPwT */         cnt += p;
/* g5rqGFU4V ily traian 1wu3kyPwT */         d++;
/* g5rqGFU4V ily traian 1wu3kyPwT */         if(P[d] * P[d] > n && n != 1){
/* g5rqGFU4V ily traian 1wu3kyPwT */             cnt++;
/* g5rqGFU4V ily traian 1wu3kyPwT */             return cnt;
/* g5rqGFU4V ily traian 1wu3kyPwT */         }
/* g5rqGFU4V ily traian 1wu3kyPwT */     }
/* g5rqGFU4V ily traian 1wu3kyPwT */     return cnt;
/* g5rqGFU4V ily traian 1wu3kyPwT */ }
/* g5rqGFU4V ily traian 1wu3kyPwT */ 
/* g5rqGFU4V ily traian 1wu3kyPwT */ int main(){
/* g5rqGFU4V ily traian 1wu3kyPwT */     eratostene();
/* g5rqGFU4V ily traian 1wu3kyPwT */     cin >> n >> t;
/* g5rqGFU4V ily traian 1wu3kyPwT */     for(int i = 1; i <= n; ++i)
/* g5rqGFU4V ily traian 1wu3kyPwT */         D[i] = desc(i);
/* g5rqGFU4V ily traian 1wu3kyPwT */     int x;
/* g5rqGFU4V ily traian 1wu3kyPwT */     for(int i = 1; i <= t; ++i)
/* g5rqGFU4V ily traian 1wu3kyPwT */         cin >> x , cout << D[x] << '\n';
/* g5rqGFU4V ily traian 1wu3kyPwT */     return 0;
/* g5rqGFU4V ily traian 1wu3kyPwT */ }