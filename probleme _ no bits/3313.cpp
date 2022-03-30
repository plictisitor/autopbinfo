/* KCkmASvYB ily traian IWhfxGLBe */ #include <algorithm>
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
/* KCkmASvYB ily traian IWhfxGLBe */ 
/* KCkmASvYB ily traian IWhfxGLBe */ using namespace std;
/* KCkmASvYB ily traian IWhfxGLBe */ 
/* KCkmASvYB ily traian IWhfxGLBe */ ifstream cin("eratostene2.in");
/* KCkmASvYB ily traian IWhfxGLBe */ ofstream cout("eratostene2.out");
/* KCkmASvYB ily traian IWhfxGLBe */ 
/* KCkmASvYB ily traian IWhfxGLBe */ int p[500001], P;
/* KCkmASvYB ily traian IWhfxGLBe */ bitset<1000000> e;
/* KCkmASvYB ily traian IWhfxGLBe */ 
/* KCkmASvYB ily traian IWhfxGLBe */ void eratostene(){
/* KCkmASvYB ily traian IWhfxGLBe */     e[0] = e[1] = 1;
/* KCkmASvYB ily traian IWhfxGLBe */     for(int i = 2; i * i <= 10000; ++i)
/* KCkmASvYB ily traian IWhfxGLBe */         for(int j = i * i; j <= 10000; j += i)
/* KCkmASvYB ily traian IWhfxGLBe */             e[j] = 1;
/* KCkmASvYB ily traian IWhfxGLBe */     for(int i = 1; i <= 10000; ++i)
/* KCkmASvYB ily traian IWhfxGLBe */         if(!e[i])
/* KCkmASvYB ily traian IWhfxGLBe */             p[++P] = i;
/* KCkmASvYB ily traian IWhfxGLBe */ }
/* KCkmASvYB ily traian IWhfxGLBe */ 
/* KCkmASvYB ily traian IWhfxGLBe */ int desc(int n){
/* KCkmASvYB ily traian IWhfxGLBe */     int d = 1;
/* KCkmASvYB ily traian IWhfxGLBe */     int cnt=0;
/* KCkmASvYB ily traian IWhfxGLBe */     while(n > 1){
/* KCkmASvYB ily traian IWhfxGLBe */         int pi = 0;
/* KCkmASvYB ily traian IWhfxGLBe */         while(n % p[d] == 0)
/* KCkmASvYB ily traian IWhfxGLBe */             n/=p[d], pi++;
/* KCkmASvYB ily traian IWhfxGLBe */         if(pi)
/* KCkmASvYB ily traian IWhfxGLBe */             cnt++;
/* KCkmASvYB ily traian IWhfxGLBe */         d++;
/* KCkmASvYB ily traian IWhfxGLBe */         if(n > 1 && p[d] * p[d] > n){
/* KCkmASvYB ily traian IWhfxGLBe */             cnt++;
/* KCkmASvYB ily traian IWhfxGLBe */             break;
/* KCkmASvYB ily traian IWhfxGLBe */         }
/* KCkmASvYB ily traian IWhfxGLBe */     }
/* KCkmASvYB ily traian IWhfxGLBe */     return cnt;
/* KCkmASvYB ily traian IWhfxGLBe */ }
/* KCkmASvYB ily traian IWhfxGLBe */ 
/* KCkmASvYB ily traian IWhfxGLBe */ int main(){
/* KCkmASvYB ily traian IWhfxGLBe */     int n;
/* KCkmASvYB ily traian IWhfxGLBe */     eratostene();
/* KCkmASvYB ily traian IWhfxGLBe */     cin >> n;
/* KCkmASvYB ily traian IWhfxGLBe */     for(int i = 1; i <= n; ++i){
/* KCkmASvYB ily traian IWhfxGLBe */         int x;
/* KCkmASvYB ily traian IWhfxGLBe */         cin >> x;
/* KCkmASvYB ily traian IWhfxGLBe */         cout << desc(x) <<' ';
/* KCkmASvYB ily traian IWhfxGLBe */     }
/* KCkmASvYB ily traian IWhfxGLBe */     return 0;
/* KCkmASvYB ily traian IWhfxGLBe */ }