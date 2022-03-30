/* l1gvK4cH8 ily traian yEG7O9Ylj */ #include <algorithm>
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
/* l1gvK4cH8 ily traian yEG7O9Ylj */ using namespace std;
/* l1gvK4cH8 ily traian yEG7O9Ylj */ 
/* l1gvK4cH8 ily traian yEG7O9Ylj */ bool prim(int x){
/* l1gvK4cH8 ily traian yEG7O9Ylj */     int d = 2, cnt = 1;
/* l1gvK4cH8 ily traian yEG7O9Ylj */     while(x > 1){
/* l1gvK4cH8 ily traian yEG7O9Ylj */         int p = 0;
/* l1gvK4cH8 ily traian yEG7O9Ylj */         while(x % d == 0)
/* l1gvK4cH8 ily traian yEG7O9Ylj */             p++, x/=d;
/* l1gvK4cH8 ily traian yEG7O9Ylj */         cnt *= (p + 1);
/* l1gvK4cH8 ily traian yEG7O9Ylj */         d++;
/* l1gvK4cH8 ily traian yEG7O9Ylj */         if(d * d > x)
/* l1gvK4cH8 ily traian yEG7O9Ylj */             d = x;
/* l1gvK4cH8 ily traian yEG7O9Ylj */     }
/* l1gvK4cH8 ily traian yEG7O9Ylj */     return cnt == 2;
/* l1gvK4cH8 ily traian yEG7O9Ylj */ }
/* l1gvK4cH8 ily traian yEG7O9Ylj */ 
/* l1gvK4cH8 ily traian yEG7O9Ylj */ int main(){
/* l1gvK4cH8 ily traian yEG7O9Ylj */     int n, x, cnt = 0;
/* l1gvK4cH8 ily traian yEG7O9Ylj */     cin >> n;
/* l1gvK4cH8 ily traian yEG7O9Ylj */     for(int i = 1; i <= n; ++i){
/* l1gvK4cH8 ily traian yEG7O9Ylj */         cin >> x;
/* l1gvK4cH8 ily traian yEG7O9Ylj */         if(prim(x))
/* l1gvK4cH8 ily traian yEG7O9Ylj */             cnt++;
/* l1gvK4cH8 ily traian yEG7O9Ylj */     }
/* l1gvK4cH8 ily traian yEG7O9Ylj */     cout << cnt;
/* l1gvK4cH8 ily traian yEG7O9Ylj */     return 0;
/* l1gvK4cH8 ily traian yEG7O9Ylj */ }