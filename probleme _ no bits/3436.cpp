/* faz2aLa2x ily traian 4SF2Hp2Zl */ #include <algorithm>
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
/* faz2aLa2x ily traian 4SF2Hp2Zl */ using namespace std;
/* faz2aLa2x ily traian 4SF2Hp2Zl */ 
/* faz2aLa2x ily traian 4SF2Hp2Zl */ ifstream cin("wind.in");
/* faz2aLa2x ily traian 4SF2Hp2Zl */ ofstream cout("wind.out");
/* faz2aLa2x ily traian 4SF2Hp2Zl */ 
/* faz2aLa2x ily traian 4SF2Hp2Zl */ int cer, n, a[100001];
/* faz2aLa2x ily traian 4SF2Hp2Zl */ long long sp[100001];
/* faz2aLa2x ily traian 4SF2Hp2Zl */ 
/* faz2aLa2x ily traian 4SF2Hp2Zl */ int nrdiv(int n){
/* faz2aLa2x ily traian 4SF2Hp2Zl */     int cnt = 0;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     for(int d = 1; d * d <= n; ++d){
/* faz2aLa2x ily traian 4SF2Hp2Zl */         if(n % d == 0)
/* faz2aLa2x ily traian 4SF2Hp2Zl */             cnt+=2;
/* faz2aLa2x ily traian 4SF2Hp2Zl */         if(d * d == n)
/* faz2aLa2x ily traian 4SF2Hp2Zl */             cnt--;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     }
/* faz2aLa2x ily traian 4SF2Hp2Zl */     return cnt;
/* faz2aLa2x ily traian 4SF2Hp2Zl */ }
/* faz2aLa2x ily traian 4SF2Hp2Zl */ 
/* faz2aLa2x ily traian 4SF2Hp2Zl */ void desc(int n){
/* faz2aLa2x ily traian 4SF2Hp2Zl */     long long fdezmin = 0, nro = n, mini = 1000000000000000, maxi = -1000000000000000, mm, pozmm, poz;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     for(int i = 1; i <= n; ++i){
/* faz2aLa2x ily traian 4SF2Hp2Zl */         if(a[i] < mini)
/* faz2aLa2x ily traian 4SF2Hp2Zl */             mini = a[i];
/* faz2aLa2x ily traian 4SF2Hp2Zl */         if(a[i] > maxi)
/* faz2aLa2x ily traian 4SF2Hp2Zl */             maxi = a[i], poz = i;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     }
/* faz2aLa2x ily traian 4SF2Hp2Zl */     fdezmin = maxi - mini;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     pozmm = poz;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     for(int d = 2; d * d <= n; ++d){
/* faz2aLa2x ily traian 4SF2Hp2Zl */         if(n % d == 0){
/* faz2aLa2x ily traian 4SF2Hp2Zl */             int a = n / d;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             mini = 1000000000000000, maxi = -1000000000000000;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             for(int i = 1; i <= n; i+=a){
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 long long sum = sp[i + a - 1] - sp[i - 1];
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 if(sum < mini)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                     mini = sum;
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 if(sum >= maxi)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                     maxi = sum, poz = i / a;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             }
/* faz2aLa2x ily traian 4SF2Hp2Zl */             int fdez = maxi - mini;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             if(fdez < fdezmin)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 fdezmin = fdez, nro = d, pozmm = poz * a + 1;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             else if(fdez == fdezmin && nro < d)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 nro = d, pozmm = poz * a + 1;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             a = d;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             mini = 1000000000000000, maxi = -1000000000000000;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             for(int i = 1; i <= n; i+=a){
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 int sum = sp[i + a - 1] - sp[i - 1];
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 if(sum < mini)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                     mini = sum;
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 if(sum >= maxi)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                     maxi = sum, poz = i / a;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             }
/* faz2aLa2x ily traian 4SF2Hp2Zl */             fdez = maxi - mini;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             if(fdez < fdezmin)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 fdezmin = fdez, nro = n/d, pozmm = poz * a + 1;
/* faz2aLa2x ily traian 4SF2Hp2Zl */             else if(fdez == fdezmin && nro < n/d)
/* faz2aLa2x ily traian 4SF2Hp2Zl */                 nro = n/d, pozmm = poz * a + 1;
/* faz2aLa2x ily traian 4SF2Hp2Zl */         }
/* faz2aLa2x ily traian 4SF2Hp2Zl */     }
/* faz2aLa2x ily traian 4SF2Hp2Zl */     cout << nro << ' ' << pozmm;
/* faz2aLa2x ily traian 4SF2Hp2Zl */ }
/* faz2aLa2x ily traian 4SF2Hp2Zl */ 
/* faz2aLa2x ily traian 4SF2Hp2Zl */ int main(){
/* faz2aLa2x ily traian 4SF2Hp2Zl */     cin >> cer >> n;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     for(int i = 1; i <= n; ++i)
/* faz2aLa2x ily traian 4SF2Hp2Zl */         cin >> a[i], sp[i] = sp[i-1] + a[i];
/* faz2aLa2x ily traian 4SF2Hp2Zl */     if(cer == 1)
/* faz2aLa2x ily traian 4SF2Hp2Zl */         cout << nrdiv(n) - 1;
/* faz2aLa2x ily traian 4SF2Hp2Zl */     else{
/* faz2aLa2x ily traian 4SF2Hp2Zl */         desc(n);
/* faz2aLa2x ily traian 4SF2Hp2Zl */     }
/* faz2aLa2x ily traian 4SF2Hp2Zl */     return 0;
/* faz2aLa2x ily traian 4SF2Hp2Zl */ }