/* 4PwJpiKyj ily traian WDhMIr7Pn */ #include <algorithm>
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
/* 4PwJpiKyj ily traian WDhMIr7Pn */ using namespace std;
/* 4PwJpiKyj ily traian WDhMIr7Pn */ 
/* 4PwJpiKyj ily traian WDhMIr7Pn */ long long desc(long long n){
/* 4PwJpiKyj ily traian WDhMIr7Pn */     long long prod = 1;
/* 4PwJpiKyj ily traian WDhMIr7Pn */     long long d = 2;
/* 4PwJpiKyj ily traian WDhMIr7Pn */     while(n > 1){
/* 4PwJpiKyj ily traian WDhMIr7Pn */         int p = 0;
/* 4PwJpiKyj ily traian WDhMIr7Pn */         while(n % d == 0)
/* 4PwJpiKyj ily traian WDhMIr7Pn */             n/=d, p++;
/* 4PwJpiKyj ily traian WDhMIr7Pn */         if(p)
/* 4PwJpiKyj ily traian WDhMIr7Pn */             prod*= d;
/* 4PwJpiKyj ily traian WDhMIr7Pn */         d++;
/* 4PwJpiKyj ily traian WDhMIr7Pn */         if(d * d > n)
/* 4PwJpiKyj ily traian WDhMIr7Pn */             d = n;
/* 4PwJpiKyj ily traian WDhMIr7Pn */     }
/* 4PwJpiKyj ily traian WDhMIr7Pn */     return prod;
/* 4PwJpiKyj ily traian WDhMIr7Pn */ }
/* 4PwJpiKyj ily traian WDhMIr7Pn */ 
/* 4PwJpiKyj ily traian WDhMIr7Pn */ int main(){
/* 4PwJpiKyj ily traian WDhMIr7Pn */     long long a, b;
/* 4PwJpiKyj ily traian WDhMIr7Pn */     cin >> a >> b;
/* 4PwJpiKyj ily traian WDhMIr7Pn */     long long prod1 = desc(a);
/* 4PwJpiKyj ily traian WDhMIr7Pn */     long long prod2 = desc(b);
/* 4PwJpiKyj ily traian WDhMIr7Pn */     if(prod1 > prod2)
/* 4PwJpiKyj ily traian WDhMIr7Pn */         cout << a;
/* 4PwJpiKyj ily traian WDhMIr7Pn */     else if(prod1 == prod2)
/* 4PwJpiKyj ily traian WDhMIr7Pn */         cout << min(a, b);
/* 4PwJpiKyj ily traian WDhMIr7Pn */     else
/* 4PwJpiKyj ily traian WDhMIr7Pn */         cout << b;
/* 4PwJpiKyj ily traian WDhMIr7Pn */ }