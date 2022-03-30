/* mRdEUXqdH ily traian SaXMaV34B */ #include <algorithm>
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
/* mRdEUXqdH ily traian SaXMaV34B */ using namespace std;
/* mRdEUXqdH ily traian SaXMaV34B */ 
/* mRdEUXqdH ily traian SaXMaV34B */ int desc(int n){
/* mRdEUXqdH ily traian SaXMaV34B */     int cnt = 0, d = 2;
/* mRdEUXqdH ily traian SaXMaV34B */     while(n > 1){
/* mRdEUXqdH ily traian SaXMaV34B */         int p = 0;
/* mRdEUXqdH ily traian SaXMaV34B */         while(n % d == 0)
/* mRdEUXqdH ily traian SaXMaV34B */             p++, n/=d;
/* mRdEUXqdH ily traian SaXMaV34B */         if(p)
/* mRdEUXqdH ily traian SaXMaV34B */             cnt++;
/* mRdEUXqdH ily traian SaXMaV34B */         d++;
/* mRdEUXqdH ily traian SaXMaV34B */         if(d * d > n)
/* mRdEUXqdH ily traian SaXMaV34B */             d = n;
/* mRdEUXqdH ily traian SaXMaV34B */     }
/* mRdEUXqdH ily traian SaXMaV34B */     return cnt;
/* mRdEUXqdH ily traian SaXMaV34B */ }
/* mRdEUXqdH ily traian SaXMaV34B */ 
/* mRdEUXqdH ily traian SaXMaV34B */ bool ok(int a, int b){
/* mRdEUXqdH ily traian SaXMaV34B */     return desc(a) == desc(b);
/* mRdEUXqdH ily traian SaXMaV34B */ }
/* mRdEUXqdH ily traian SaXMaV34B */ 
/* mRdEUXqdH ily traian SaXMaV34B */ int main(){
/* mRdEUXqdH ily traian SaXMaV34B */     int n, a, b, rez1 = 1000000000, rez2 = 1000000000;
/* mRdEUXqdH ily traian SaXMaV34B */     cin >> n;
/* mRdEUXqdH ily traian SaXMaV34B */     cin >> a;
/* mRdEUXqdH ily traian SaXMaV34B */     for(int i = 2; i <= n; ++i){
/* mRdEUXqdH ily traian SaXMaV34B */         cin >> b;
/* mRdEUXqdH ily traian SaXMaV34B */         if(ok(a, b) && a + b < rez1 + rez2)
/* mRdEUXqdH ily traian SaXMaV34B */             rez1 = a, rez2 = b;
/* mRdEUXqdH ily traian SaXMaV34B */         a = b;
/* mRdEUXqdH ily traian SaXMaV34B */     }
/* mRdEUXqdH ily traian SaXMaV34B */     if(rez1 != 1000000000)
/* mRdEUXqdH ily traian SaXMaV34B */         cout << rez1 << ' ' << rez2;
/* mRdEUXqdH ily traian SaXMaV34B */     else
/* mRdEUXqdH ily traian SaXMaV34B */         cout << "NU EXISTA";
/* mRdEUXqdH ily traian SaXMaV34B */     return 0;
/* mRdEUXqdH ily traian SaXMaV34B */ }