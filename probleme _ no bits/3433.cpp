/* 5NzT6yxO0 ily traian GPFbA1wxe */ #include <algorithm>
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
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ using namespace std;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ ifstream cin("forta.in");
/* 5NzT6yxO0 ily traian GPFbA1wxe */ ofstream cout("forta.out");
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ long long n , cer , maxi , vali , cnt;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ int E[100001] , P[8001];
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ struct poz
/* 5NzT6yxO0 ily traian GPFbA1wxe */ {
/* 5NzT6yxO0 ily traian GPFbA1wxe */     int val , f;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ }a[100001];
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ void ciur()
/* 5NzT6yxO0 ily traian GPFbA1wxe */ {
/* 5NzT6yxO0 ily traian GPFbA1wxe */     long long maxi = 100001;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     for(int i = 2 ; i <= maxi ; i++) E[i] = 1;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     for(int i = 2 ; i * i <= maxi ; i++)
/* 5NzT6yxO0 ily traian GPFbA1wxe */         if(E[i] == 1)
/* 5NzT6yxO0 ily traian GPFbA1wxe */             for(int j = i * i; j <= maxi ; j += i) E[j] = 0;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */     for(int i = 2 ; i <= maxi ; i++)
/* 5NzT6yxO0 ily traian GPFbA1wxe */         if(E[i] == 1) P[++cnt] = i;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ }
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ long long nrdiv(int n)
/* 5NzT6yxO0 ily traian GPFbA1wxe */ {
/* 5NzT6yxO0 ily traian GPFbA1wxe */     long long d = 1 , prod = 1;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     while(n > 1 && P[d] * P[d] <= n)
/* 5NzT6yxO0 ily traian GPFbA1wxe */     {
/* 5NzT6yxO0 ily traian GPFbA1wxe */         int p = 0;
/* 5NzT6yxO0 ily traian GPFbA1wxe */         while(n % P[d] == 0) p++ , n /= P[d];
/* 5NzT6yxO0 ily traian GPFbA1wxe */         if(p) prod *= (p + 1);
/* 5NzT6yxO0 ily traian GPFbA1wxe */         d++;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     }
/* 5NzT6yxO0 ily traian GPFbA1wxe */     if(n != 1)prod *= 2;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     return prod;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ }
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ int comp(poz a , poz b)
/* 5NzT6yxO0 ily traian GPFbA1wxe */ {
/* 5NzT6yxO0 ily traian GPFbA1wxe */     if(a.f < b.f) return 1;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     else if(a.f == b.f && a.val < b.val) return 1;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     else return 0;
/* 5NzT6yxO0 ily traian GPFbA1wxe */ }
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ int main()
/* 5NzT6yxO0 ily traian GPFbA1wxe */ {
/* 5NzT6yxO0 ily traian GPFbA1wxe */     cin >> cer >> n;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     ciur();
/* 5NzT6yxO0 ily traian GPFbA1wxe */     for(int i = 1 ; i <= n ; i++)
/* 5NzT6yxO0 ily traian GPFbA1wxe */     {
/* 5NzT6yxO0 ily traian GPFbA1wxe */         cin >> a[i].val;
/* 5NzT6yxO0 ily traian GPFbA1wxe */         a[i].f = nrdiv(a[i].val);
/* 5NzT6yxO0 ily traian GPFbA1wxe */         if(a[i].f > maxi) maxi = a[i].f , vali = a[i].val;
/* 5NzT6yxO0 ily traian GPFbA1wxe */         else if(a[i].f == maxi)
/* 5NzT6yxO0 ily traian GPFbA1wxe */             if(a[i].val < vali) vali = a[i].val;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     }
/* 5NzT6yxO0 ily traian GPFbA1wxe */     if(cer == 1) cout << vali;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     else
/* 5NzT6yxO0 ily traian GPFbA1wxe */     {
/* 5NzT6yxO0 ily traian GPFbA1wxe */         sort(a + 1 , a + n + 1 , comp);
/* 5NzT6yxO0 ily traian GPFbA1wxe */         if(n > 1)
/* 5NzT6yxO0 ily traian GPFbA1wxe */         {
/* 5NzT6yxO0 ily traian GPFbA1wxe */             maxi = -10000 , cnt = 0;
/* 5NzT6yxO0 ily traian GPFbA1wxe */             for(int i = 2 ; i <= n ; i++)
/* 5NzT6yxO0 ily traian GPFbA1wxe */             {
/* 5NzT6yxO0 ily traian GPFbA1wxe */                 //cout << cnt << '\n';
/* 5NzT6yxO0 ily traian GPFbA1wxe */                 if(a[i].f == a[i - 1].f) cnt++;
/* 5NzT6yxO0 ily traian GPFbA1wxe */                 else
/* 5NzT6yxO0 ily traian GPFbA1wxe */                 {
/* 5NzT6yxO0 ily traian GPFbA1wxe */                     if(cnt > maxi) maxi = cnt;
/* 5NzT6yxO0 ily traian GPFbA1wxe */                     cnt = 0;
/* 5NzT6yxO0 ily traian GPFbA1wxe */                 }
/* 5NzT6yxO0 ily traian GPFbA1wxe */             }
/* 5NzT6yxO0 ily traian GPFbA1wxe */             if(cnt > 0)
/* 5NzT6yxO0 ily traian GPFbA1wxe */                 if(cnt > maxi) maxi = cnt;
/* 5NzT6yxO0 ily traian GPFbA1wxe */             cout << maxi + 1;
/* 5NzT6yxO0 ily traian GPFbA1wxe */         }
/* 5NzT6yxO0 ily traian GPFbA1wxe */         else cout << 1;
/* 5NzT6yxO0 ily traian GPFbA1wxe */     }
/* 5NzT6yxO0 ily traian GPFbA1wxe */ 
/* 5NzT6yxO0 ily traian GPFbA1wxe */ }