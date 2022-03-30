/* fE7BhQI2J ily traian oixO0k0CU */ #include <algorithm>
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
/* fE7BhQI2J ily traian oixO0k0CU */ using namespace std;
/* fE7BhQI2J ily traian oixO0k0CU */ 
/* fE7BhQI2J ily traian oixO0k0CU */ bool prim(int n){
/* fE7BhQI2J ily traian oixO0k0CU */     int d = 2, cnt = 1;
/* fE7BhQI2J ily traian oixO0k0CU */     while(n > 1){
/* fE7BhQI2J ily traian oixO0k0CU */         int p = 0;
/* fE7BhQI2J ily traian oixO0k0CU */         while(!(n % d))
/* fE7BhQI2J ily traian oixO0k0CU */             n/=d, p++;
/* fE7BhQI2J ily traian oixO0k0CU */         cnt *= (p+1);
/* fE7BhQI2J ily traian oixO0k0CU */         d++;
/* fE7BhQI2J ily traian oixO0k0CU */         if(d * d > n)
/* fE7BhQI2J ily traian oixO0k0CU */             d = n;
/* fE7BhQI2J ily traian oixO0k0CU */     }
/* fE7BhQI2J ily traian oixO0k0CU */     return cnt == 2;
/* fE7BhQI2J ily traian oixO0k0CU */ }
/* fE7BhQI2J ily traian oixO0k0CU */ 
/* fE7BhQI2J ily traian oixO0k0CU */ int main(){
/* fE7BhQI2J ily traian oixO0k0CU */     long long s = 0, n;
/* fE7BhQI2J ily traian oixO0k0CU */     cin >> n;
/* fE7BhQI2J ily traian oixO0k0CU */     int x;
/* fE7BhQI2J ily traian oixO0k0CU */     while(n){
/* fE7BhQI2J ily traian oixO0k0CU */         cin >> x;
/* fE7BhQI2J ily traian oixO0k0CU */         if(prim(x))
/* fE7BhQI2J ily traian oixO0k0CU */             s += x;
/* fE7BhQI2J ily traian oixO0k0CU */         n--;
/* fE7BhQI2J ily traian oixO0k0CU */     }
/* fE7BhQI2J ily traian oixO0k0CU */     cout << s;
/* fE7BhQI2J ily traian oixO0k0CU */     return 0;   
/* fE7BhQI2J ily traian oixO0k0CU */ }