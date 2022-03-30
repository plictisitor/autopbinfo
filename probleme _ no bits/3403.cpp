/* 4VX7X9yoW ily traian h1CZzJP3Y */ #include <algorithm>
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
/* 4VX7X9yoW ily traian h1CZzJP3Y */ 
/* 4VX7X9yoW ily traian h1CZzJP3Y */ using namespace std;
/* 4VX7X9yoW ily traian h1CZzJP3Y */ 
/* 4VX7X9yoW ily traian h1CZzJP3Y */ ifstream cin("produse.in");
/* 4VX7X9yoW ily traian h1CZzJP3Y */ ofstream cout("produse.out");
/* 4VX7X9yoW ily traian h1CZzJP3Y */ 
/* 4VX7X9yoW ily traian h1CZzJP3Y */ int n, m, cer, a[1001];
/* 4VX7X9yoW ily traian h1CZzJP3Y */ 
/* 4VX7X9yoW ily traian h1CZzJP3Y */ bool epuizat(int n){
/* 4VX7X9yoW ily traian h1CZzJP3Y */     while(n > 99)
/* 4VX7X9yoW ily traian h1CZzJP3Y */         n/=10;
/* 4VX7X9yoW ily traian h1CZzJP3Y */     return (n % 10) % 2 == 1;
/* 4VX7X9yoW ily traian h1CZzJP3Y */ }
/* 4VX7X9yoW ily traian h1CZzJP3Y */ 
/* 4VX7X9yoW ily traian h1CZzJP3Y */ int pc(int n){
/* 4VX7X9yoW ily traian h1CZzJP3Y */     while(n>9)
/* 4VX7X9yoW ily traian h1CZzJP3Y */         n/=10;
/* 4VX7X9yoW ily traian h1CZzJP3Y */     return n;
/* 4VX7X9yoW ily traian h1CZzJP3Y */ }
/* 4VX7X9yoW ily traian h1CZzJP3Y */ 
/* 4VX7X9yoW ily traian h1CZzJP3Y */ int main(){
/* 4VX7X9yoW ily traian h1CZzJP3Y */     cin >> cer >> n;
/* 4VX7X9yoW ily traian h1CZzJP3Y */     for(int i = 1; i <= n; ++i)
/* 4VX7X9yoW ily traian h1CZzJP3Y */         cin >> a[i];
/* 4VX7X9yoW ily traian h1CZzJP3Y */     if(cer == 1){
/* 4VX7X9yoW ily traian h1CZzJP3Y */         int cnt1 = 0, cnt2 = 0;
/* 4VX7X9yoW ily traian h1CZzJP3Y */         for(int i = 1; i <= n; ++i)
/* 4VX7X9yoW ily traian h1CZzJP3Y */             if(epuizat(a[i]))
/* 4VX7X9yoW ily traian h1CZzJP3Y */                 cnt1++;
/* 4VX7X9yoW ily traian h1CZzJP3Y */             else
/* 4VX7X9yoW ily traian h1CZzJP3Y */                 cnt2++;
/* 4VX7X9yoW ily traian h1CZzJP3Y */         cout << cnt2 << ' ' << cnt1 << ' ';
/* 4VX7X9yoW ily traian h1CZzJP3Y */     }
/* 4VX7X9yoW ily traian h1CZzJP3Y */     else{
/* 4VX7X9yoW ily traian h1CZzJP3Y */         sort(a + 1, a + n + 1);
/* 4VX7X9yoW ily traian h1CZzJP3Y */         for(int i = 1; i <= 9; ++i){
/* 4VX7X9yoW ily traian h1CZzJP3Y */             bool ok = false;
/* 4VX7X9yoW ily traian h1CZzJP3Y */             for(int j = 1; j <= n; ++j)
/* 4VX7X9yoW ily traian h1CZzJP3Y */                 if(pc(a[j]) == i)
/* 4VX7X9yoW ily traian h1CZzJP3Y */                     ok = true;
/* 4VX7X9yoW ily traian h1CZzJP3Y */             if(ok){
/* 4VX7X9yoW ily traian h1CZzJP3Y */                 cout << i << ' ';
/* 4VX7X9yoW ily traian h1CZzJP3Y */                 for(int j = 1; j <= n; ++j)
/* 4VX7X9yoW ily traian h1CZzJP3Y */                     if(pc(a[j]) == i)
/* 4VX7X9yoW ily traian h1CZzJP3Y */                         cout << a[j] << ' ';
/* 4VX7X9yoW ily traian h1CZzJP3Y */                 cout << endl;
/* 4VX7X9yoW ily traian h1CZzJP3Y */             }
/* 4VX7X9yoW ily traian h1CZzJP3Y */         }
/* 4VX7X9yoW ily traian h1CZzJP3Y */     }
/* 4VX7X9yoW ily traian h1CZzJP3Y */     return 0;
/* 4VX7X9yoW ily traian h1CZzJP3Y */ }