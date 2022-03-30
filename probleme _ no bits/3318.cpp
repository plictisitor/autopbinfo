/* QNohr9Bol ily traian lioxMKLtb */ #include <algorithm>
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
/* QNohr9Bol ily traian lioxMKLtb */ 
/* QNohr9Bol ily traian lioxMKLtb */ using namespace std;
/* QNohr9Bol ily traian lioxMKLtb */ 
/* QNohr9Bol ily traian lioxMKLtb */ ifstream cin("eratostene7.in");
/* QNohr9Bol ily traian lioxMKLtb */ ofstream cout("eratostene7.out");
/* QNohr9Bol ily traian lioxMKLtb */ 
/* QNohr9Bol ily traian lioxMKLtb */ int p[500001], P;
/* QNohr9Bol ily traian lioxMKLtb */ bitset<10000000> e;
/* QNohr9Bol ily traian lioxMKLtb */ 
/* QNohr9Bol ily traian lioxMKLtb */ void eratostene(){
/* QNohr9Bol ily traian lioxMKLtb */     e[0] = e[1] = 1;
/* QNohr9Bol ily traian lioxMKLtb */     for(int i = 2; i * i <= 1000000; ++i)
/* QNohr9Bol ily traian lioxMKLtb */         for(int j = i * i; j <= 1000000; j += i)
/* QNohr9Bol ily traian lioxMKLtb */             e[j] = 1;
/* QNohr9Bol ily traian lioxMKLtb */     for(int i = 1; i <= 1000000; ++i)
/* QNohr9Bol ily traian lioxMKLtb */         if(!e[i])
/* QNohr9Bol ily traian lioxMKLtb */             p[++P] = i;
/* QNohr9Bol ily traian lioxMKLtb */ }
/* QNohr9Bol ily traian lioxMKLtb */ 
/* QNohr9Bol ily traian lioxMKLtb */ int desc(int n){
/* QNohr9Bol ily traian lioxMKLtb */     int d = 1;
/* QNohr9Bol ily traian lioxMKLtb */     int cnt=0;
/* QNohr9Bol ily traian lioxMKLtb */     bool ok = 1;
/* QNohr9Bol ily traian lioxMKLtb */     while(n > 1){
/* QNohr9Bol ily traian lioxMKLtb */         int pi = 0;
/* QNohr9Bol ily traian lioxMKLtb */         while(n % p[d] == 0)
/* QNohr9Bol ily traian lioxMKLtb */             n/=p[d], pi++;
/* QNohr9Bol ily traian lioxMKLtb */         if(pi == 1)
/* QNohr9Bol ily traian lioxMKLtb */             cnt++;
/* QNohr9Bol ily traian lioxMKLtb */         else if(pi > 1)
/* QNohr9Bol ily traian lioxMKLtb */             ok = false;
/* QNohr9Bol ily traian lioxMKLtb */         d++;
/* QNohr9Bol ily traian lioxMKLtb */         if(n > 1 && p[d] * p[d] > n){
/* QNohr9Bol ily traian lioxMKLtb */             cnt++;
/* QNohr9Bol ily traian lioxMKLtb */             break;
/* QNohr9Bol ily traian lioxMKLtb */         }
/* QNohr9Bol ily traian lioxMKLtb */     }
/* QNohr9Bol ily traian lioxMKLtb */     if(ok)
/* QNohr9Bol ily traian lioxMKLtb */     return cnt;
/* QNohr9Bol ily traian lioxMKLtb */     else
/* QNohr9Bol ily traian lioxMKLtb */         return -1;
/* QNohr9Bol ily traian lioxMKLtb */ }
/* QNohr9Bol ily traian lioxMKLtb */ 
/* QNohr9Bol ily traian lioxMKLtb */ int main(){
/* QNohr9Bol ily traian lioxMKLtb */     int n;
/* QNohr9Bol ily traian lioxMKLtb */     eratostene();
/* QNohr9Bol ily traian lioxMKLtb */     cin >> n;
/* QNohr9Bol ily traian lioxMKLtb */     for(int i = 1; i <= n; ++i){
/* QNohr9Bol ily traian lioxMKLtb */         int x, y;
/* QNohr9Bol ily traian lioxMKLtb */         cin >> x >> y;
/* QNohr9Bol ily traian lioxMKLtb */         if(desc(x) == y)
/* QNohr9Bol ily traian lioxMKLtb */             cout << "DA" << '\n';
/* QNohr9Bol ily traian lioxMKLtb */         else
/* QNohr9Bol ily traian lioxMKLtb */             cout << "NU" << '\n';
/* QNohr9Bol ily traian lioxMKLtb */     }
/* QNohr9Bol ily traian lioxMKLtb */     return 0;
/* QNohr9Bol ily traian lioxMKLtb */ }