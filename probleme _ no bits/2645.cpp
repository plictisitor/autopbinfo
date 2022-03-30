/* caGj18sJL ily traian F5Dkmheow */ #include <algorithm>
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
/* caGj18sJL ily traian F5Dkmheow */ using namespace std;
/* caGj18sJL ily traian F5Dkmheow */ 
/* caGj18sJL ily traian F5Dkmheow */ char s[1000001] , c[1000001];
/* caGj18sJL ily traian F5Dkmheow */ int k , n;
/* caGj18sJL ily traian F5Dkmheow */ 
/* caGj18sJL ily traian F5Dkmheow */ int main()
/* caGj18sJL ily traian F5Dkmheow */ {
/* caGj18sJL ily traian F5Dkmheow */     cin >> k >> c;
/* caGj18sJL ily traian F5Dkmheow */     n=1;
/* caGj18sJL ily traian F5Dkmheow */     s[n]=c[0];
/* caGj18sJL ily traian F5Dkmheow */     for(int i = 1 ; c[i] ; ++i)
/* caGj18sJL ily traian F5Dkmheow */     {
/* caGj18sJL ily traian F5Dkmheow */         while(n > 0 && c[i] < s[n] && k)
/* caGj18sJL ily traian F5Dkmheow */         {
/* caGj18sJL ily traian F5Dkmheow */             n--;
/* caGj18sJL ily traian F5Dkmheow */             k--;
/* caGj18sJL ily traian F5Dkmheow */         }
/* caGj18sJL ily traian F5Dkmheow */         n++;
/* caGj18sJL ily traian F5Dkmheow */         s[n]=c[i];
/* caGj18sJL ily traian F5Dkmheow */     }
/* caGj18sJL ily traian F5Dkmheow */     while(k)
/* caGj18sJL ily traian F5Dkmheow */     {
/* caGj18sJL ily traian F5Dkmheow */         n--;
/* caGj18sJL ily traian F5Dkmheow */         k--;
/* caGj18sJL ily traian F5Dkmheow */     }
/* caGj18sJL ily traian F5Dkmheow */     for(int i = 1 ; i <= n ; ++i)
/* caGj18sJL ily traian F5Dkmheow */         cout << s[i];
/* caGj18sJL ily traian F5Dkmheow */     return 0;
/* caGj18sJL ily traian F5Dkmheow */ }