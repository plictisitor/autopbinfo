/* izOPBqFBP ily traian F7ZxosFjj */ #include <algorithm>
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
/* izOPBqFBP ily traian F7ZxosFjj */ 
/* izOPBqFBP ily traian F7ZxosFjj */ using namespace std;
/* izOPBqFBP ily traian F7ZxosFjj */ 
/* izOPBqFBP ily traian F7ZxosFjj */ ifstream cin("eratostene4.in");
/* izOPBqFBP ily traian F7ZxosFjj */ ofstream cout("eratostene4.out");
/* izOPBqFBP ily traian F7ZxosFjj */ 
/* izOPBqFBP ily traian F7ZxosFjj */ int p[500001], P;
/* izOPBqFBP ily traian F7ZxosFjj */ bitset<10000000> e;
/* izOPBqFBP ily traian F7ZxosFjj */ 
/* izOPBqFBP ily traian F7ZxosFjj */ void eratostene(){
/* izOPBqFBP ily traian F7ZxosFjj */     e[0] = e[1] = 1;
/* izOPBqFBP ily traian F7ZxosFjj */     for(int i = 2; i * i <= 100000; ++i)
/* izOPBqFBP ily traian F7ZxosFjj */         for(int j = i * i; j <= 100000; j += i)
/* izOPBqFBP ily traian F7ZxosFjj */             e[j] = 1;
/* izOPBqFBP ily traian F7ZxosFjj */     for(int i = 1; i <= 100000; ++i)
/* izOPBqFBP ily traian F7ZxosFjj */         if(!e[i])
/* izOPBqFBP ily traian F7ZxosFjj */             p[++P] = i;
/* izOPBqFBP ily traian F7ZxosFjj */ }
/* izOPBqFBP ily traian F7ZxosFjj */ 
/* izOPBqFBP ily traian F7ZxosFjj */ int desc(int n){
/* izOPBqFBP ily traian F7ZxosFjj */     int d = 1;
/* izOPBqFBP ily traian F7ZxosFjj */     int cnt=0;
/* izOPBqFBP ily traian F7ZxosFjj */     while(n > 1){
/* izOPBqFBP ily traian F7ZxosFjj */         int pi = 0;
/* izOPBqFBP ily traian F7ZxosFjj */         while(n % p[d] == 0)
/* izOPBqFBP ily traian F7ZxosFjj */             n/=p[d], pi++;
/* izOPBqFBP ily traian F7ZxosFjj */         if(pi)
/* izOPBqFBP ily traian F7ZxosFjj */             cnt++;
/* izOPBqFBP ily traian F7ZxosFjj */         d++;
/* izOPBqFBP ily traian F7ZxosFjj */         if(n > 1 && p[d] * p[d] > n){
/* izOPBqFBP ily traian F7ZxosFjj */             cnt++;
/* izOPBqFBP ily traian F7ZxosFjj */             break;
/* izOPBqFBP ily traian F7ZxosFjj */         }
/* izOPBqFBP ily traian F7ZxosFjj */     }
/* izOPBqFBP ily traian F7ZxosFjj */     return cnt;
/* izOPBqFBP ily traian F7ZxosFjj */ }
/* izOPBqFBP ily traian F7ZxosFjj */ 
/* izOPBqFBP ily traian F7ZxosFjj */ int main(){
/* izOPBqFBP ily traian F7ZxosFjj */     int n;
/* izOPBqFBP ily traian F7ZxosFjj */     eratostene();
/* izOPBqFBP ily traian F7ZxosFjj */     cin >> n;
/* izOPBqFBP ily traian F7ZxosFjj */     for(int i = 1; i <= n; ++i){
/* izOPBqFBP ily traian F7ZxosFjj */         int x;
/* izOPBqFBP ily traian F7ZxosFjj */         cin >> x;
/* izOPBqFBP ily traian F7ZxosFjj */         cout << (1<<desc(x)) <<' ';
/* izOPBqFBP ily traian F7ZxosFjj */     }
/* izOPBqFBP ily traian F7ZxosFjj */     return 0;
/* izOPBqFBP ily traian F7ZxosFjj */ }