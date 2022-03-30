/* qEZW6iOK7 ily traian IWiGC6fxV */ #include <algorithm>
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
/* qEZW6iOK7 ily traian IWiGC6fxV */ using namespace std;
/* qEZW6iOK7 ily traian IWiGC6fxV */ 
/* qEZW6iOK7 ily traian IWiGC6fxV */ int main(){
/* qEZW6iOK7 ily traian IWiGC6fxV */     int a, b;
/* qEZW6iOK7 ily traian IWiGC6fxV */     long long s = 0;
/* qEZW6iOK7 ily traian IWiGC6fxV */     cin >> a >> b;
/* qEZW6iOK7 ily traian IWiGC6fxV */     for(int i = a; i <= b; ++i){
/* qEZW6iOK7 ily traian IWiGC6fxV */         int n = i, cntp = 0, cnti = 0;
/* qEZW6iOK7 ily traian IWiGC6fxV */         while(n){
/* qEZW6iOK7 ily traian IWiGC6fxV */             if(n % 2 == 0)
/* qEZW6iOK7 ily traian IWiGC6fxV */                 cntp++;
/* qEZW6iOK7 ily traian IWiGC6fxV */             else
/* qEZW6iOK7 ily traian IWiGC6fxV */                 cnti++;
/* qEZW6iOK7 ily traian IWiGC6fxV */             n/=10;
/* qEZW6iOK7 ily traian IWiGC6fxV */         }
/* qEZW6iOK7 ily traian IWiGC6fxV */         if(cntp == cnti)
/* qEZW6iOK7 ily traian IWiGC6fxV */             s += i;
/* qEZW6iOK7 ily traian IWiGC6fxV */     }
/* qEZW6iOK7 ily traian IWiGC6fxV */     cout << s;
/* qEZW6iOK7 ily traian IWiGC6fxV */     return 0;
/* qEZW6iOK7 ily traian IWiGC6fxV */ }