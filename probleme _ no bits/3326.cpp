/* uWVPvhi9b ily traian w9deVumyG */ #include <algorithm>
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
/* uWVPvhi9b ily traian w9deVumyG */ using namespace std;
/* uWVPvhi9b ily traian w9deVumyG */ 
/* uWVPvhi9b ily traian w9deVumyG */ int n, m, f[101], c[101];
/* uWVPvhi9b ily traian w9deVumyG */ 
/* uWVPvhi9b ily traian w9deVumyG */ int main(){
/* uWVPvhi9b ily traian w9deVumyG */     cin >> n >> m;
/* uWVPvhi9b ily traian w9deVumyG */     char ch;
/* uWVPvhi9b ily traian w9deVumyG */     int x;
/* uWVPvhi9b ily traian w9deVumyG */     for(int i = 1; i <= m; ++i){
/* uWVPvhi9b ily traian w9deVumyG */         cin >> ch >> x;
/* uWVPvhi9b ily traian w9deVumyG */         if(ch == 'D')
/* uWVPvhi9b ily traian w9deVumyG */             f[x] = 1, c[x] ++;
/* uWVPvhi9b ily traian w9deVumyG */         else
/* uWVPvhi9b ily traian w9deVumyG */             f[x] = 0, c[x] ++;
/* uWVPvhi9b ily traian w9deVumyG */     }
/* uWVPvhi9b ily traian w9deVumyG */     for(int i = 1; i <= n; ++i)
/* uWVPvhi9b ily traian w9deVumyG */         if(f[i])
/* uWVPvhi9b ily traian w9deVumyG */             cout << i << ' ';
/* uWVPvhi9b ily traian w9deVumyG */     cout << endl;
/* uWVPvhi9b ily traian w9deVumyG */     int maxi = 0;
/* uWVPvhi9b ily traian w9deVumyG */     for(int i = 1; i <= n; ++i)
/* uWVPvhi9b ily traian w9deVumyG */         if(c[i] > maxi)
/* uWVPvhi9b ily traian w9deVumyG */             maxi = c[i];
/* uWVPvhi9b ily traian w9deVumyG */     for(int i = 1; i <= n; ++i)
/* uWVPvhi9b ily traian w9deVumyG */         if(c[i] == maxi)
/* uWVPvhi9b ily traian w9deVumyG */             cout << i << ' ';
/* uWVPvhi9b ily traian w9deVumyG */     int cnt = 0;
/* uWVPvhi9b ily traian w9deVumyG */     for(int i = 1; i <= n; ++i)
/* uWVPvhi9b ily traian w9deVumyG */         if(c[i] == 0)
/* uWVPvhi9b ily traian w9deVumyG */             cnt++;
/* uWVPvhi9b ily traian w9deVumyG */     cout << endl << cnt;
/* uWVPvhi9b ily traian w9deVumyG */     return 0;
/* uWVPvhi9b ily traian w9deVumyG */ }