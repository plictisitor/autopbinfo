/* U9SlCUF2q ily traian mOnRW19FI */ #include <algorithm>
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
/* U9SlCUF2q ily traian mOnRW19FI */ 
/* U9SlCUF2q ily traian mOnRW19FI */ using namespace std;
/* U9SlCUF2q ily traian mOnRW19FI */ 
/* U9SlCUF2q ily traian mOnRW19FI */ ifstream cin("eratostene1.in");
/* U9SlCUF2q ily traian mOnRW19FI */ ofstream cout("eratostene1.out");
/* U9SlCUF2q ily traian mOnRW19FI */ 
/* U9SlCUF2q ily traian mOnRW19FI */ bitset<500001> p;
/* U9SlCUF2q ily traian mOnRW19FI */ 
/* U9SlCUF2q ily traian mOnRW19FI */ int main(){
/* U9SlCUF2q ily traian mOnRW19FI */     p[0]=1;
/* U9SlCUF2q ily traian mOnRW19FI */     for(int i = 3; i <= 999999; i+=2)
/* U9SlCUF2q ily traian mOnRW19FI */         if(p[i/2]==0)
/* U9SlCUF2q ily traian mOnRW19FI */             for(int j = 3 * i; j <= 999999; j += 2 * i)
/* U9SlCUF2q ily traian mOnRW19FI */                 p[j/2] = 1;
/* U9SlCUF2q ily traian mOnRW19FI */     int n, k = 0;
/* U9SlCUF2q ily traian mOnRW19FI */     cin >> n;
/* U9SlCUF2q ily traian mOnRW19FI */     for(int i = 1; i <= n; ++i){
/* U9SlCUF2q ily traian mOnRW19FI */         int x;
/* U9SlCUF2q ily traian mOnRW19FI */         cin >> x;
/* U9SlCUF2q ily traian mOnRW19FI */         if(x % 2 == 0 && x == 2)
/* U9SlCUF2q ily traian mOnRW19FI */             k++;
/* U9SlCUF2q ily traian mOnRW19FI */         else if(x % 2 == 1 && p[x/2] == 0)
/* U9SlCUF2q ily traian mOnRW19FI */             k++;
/* U9SlCUF2q ily traian mOnRW19FI */     }
/* U9SlCUF2q ily traian mOnRW19FI */     cout << k;
/* U9SlCUF2q ily traian mOnRW19FI */     return 0;
/* U9SlCUF2q ily traian mOnRW19FI */ }