/* OiwKtrLqh ily traian OXQ1M7Khb */ #include <algorithm>
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
/* OiwKtrLqh ily traian OXQ1M7Khb */ using namespace std;
/* OiwKtrLqh ily traian OXQ1M7Khb */ ifstream cin("extraprime.in");
/* OiwKtrLqh ily traian OXQ1M7Khb */ ofstream cout("extraprime.out");
/* OiwKtrLqh ily traian OXQ1M7Khb */ bool ciur[10000005];
/* OiwKtrLqh ily traian OXQ1M7Khb */ int a , b , cif[10] , ncif;
/* OiwKtrLqh ily traian OXQ1M7Khb */ void Ciur()
/* OiwKtrLqh ily traian OXQ1M7Khb */ {
/* OiwKtrLqh ily traian OXQ1M7Khb */     ciur[1] = 1;
/* OiwKtrLqh ily traian OXQ1M7Khb */     for(int i = 4 ; i <= 10000000; i += 2) ciur[i] = 1;
/* OiwKtrLqh ily traian OXQ1M7Khb */     for(int i = 3; i * i <= 10000000; i += 2)
/* OiwKtrLqh ily traian OXQ1M7Khb */         if(!(ciur[i]))
/* OiwKtrLqh ily traian OXQ1M7Khb */             for(int j = i * i ; j <= 10000000; j += 2 * i)
/* OiwKtrLqh ily traian OXQ1M7Khb */                 ciur[j] = 1;
/* OiwKtrLqh ily traian OXQ1M7Khb */ 
/* OiwKtrLqh ily traian OXQ1M7Khb */ }
/* OiwKtrLqh ily traian OXQ1M7Khb */ int extra(int x)
/* OiwKtrLqh ily traian OXQ1M7Khb */ {
/* OiwKtrLqh ily traian OXQ1M7Khb */     ncif=0;
/* OiwKtrLqh ily traian OXQ1M7Khb */     if(ciur[x]) return false;
/* OiwKtrLqh ily traian OXQ1M7Khb */     while(x)
/* OiwKtrLqh ily traian OXQ1M7Khb */     {
/* OiwKtrLqh ily traian OXQ1M7Khb */         cif[++ncif]=x%10;
/* OiwKtrLqh ily traian OXQ1M7Khb */         x/=10;
/* OiwKtrLqh ily traian OXQ1M7Khb */     }
/* OiwKtrLqh ily traian OXQ1M7Khb */     for(int i = ncif ; i >= 1 ; i--)
/* OiwKtrLqh ily traian OXQ1M7Khb */     {
/* OiwKtrLqh ily traian OXQ1M7Khb */         int x = 0;
/* OiwKtrLqh ily traian OXQ1M7Khb */         for(int j = ncif ; j >= 1 ; j--)
/* OiwKtrLqh ily traian OXQ1M7Khb */             if(i!=j) x = x * 10 + cif[j];
/* OiwKtrLqh ily traian OXQ1M7Khb */         if(ciur[x]) return false;
/* OiwKtrLqh ily traian OXQ1M7Khb */     }
/* OiwKtrLqh ily traian OXQ1M7Khb */     return true;
/* OiwKtrLqh ily traian OXQ1M7Khb */ }
/* OiwKtrLqh ily traian OXQ1M7Khb */ int main()
/* OiwKtrLqh ily traian OXQ1M7Khb */ {
/* OiwKtrLqh ily traian OXQ1M7Khb */     int s = 0;
/* OiwKtrLqh ily traian OXQ1M7Khb */     Ciur();
/* OiwKtrLqh ily traian OXQ1M7Khb */     cin >> a >> b;
/* OiwKtrLqh ily traian OXQ1M7Khb */     int maxim = -1000000000 , minim = 1000000000;
/* OiwKtrLqh ily traian OXQ1M7Khb */     for(int i = a ; i <= b ; i++)
/* OiwKtrLqh ily traian OXQ1M7Khb */     {
/* OiwKtrLqh ily traian OXQ1M7Khb */         int nr = i;
/* OiwKtrLqh ily traian OXQ1M7Khb */         if(extra(nr))
/* OiwKtrLqh ily traian OXQ1M7Khb */         {
/* OiwKtrLqh ily traian OXQ1M7Khb */             maxim=max(maxim , nr);
/* OiwKtrLqh ily traian OXQ1M7Khb */             s++;
/* OiwKtrLqh ily traian OXQ1M7Khb */             minim=min(minim , nr);
/* OiwKtrLqh ily traian OXQ1M7Khb */         }
/* OiwKtrLqh ily traian OXQ1M7Khb */     }
/* OiwKtrLqh ily traian OXQ1M7Khb */     cout<<s<<'\n' << minim << '\n' << maxim;
/* OiwKtrLqh ily traian OXQ1M7Khb */     return 0;
/* OiwKtrLqh ily traian OXQ1M7Khb */ }