/* M1sWAunxA ily traian ofXWKylkv */ #include <algorithm>
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
/* M1sWAunxA ily traian ofXWKylkv */ 
/* M1sWAunxA ily traian ofXWKylkv */ using namespace std;
/* M1sWAunxA ily traian ofXWKylkv */ int main()
/* M1sWAunxA ily traian ofXWKylkv */ {
/* M1sWAunxA ily traian ofXWKylkv */     int x , n , k , cnt = 0 , ok = 0;
/* M1sWAunxA ily traian ofXWKylkv */     cin >> n >> k;
/* M1sWAunxA ily traian ofXWKylkv */     for(int i = 1 ; i <= n ; ++i)
/* M1sWAunxA ily traian ofXWKylkv */     {
/* M1sWAunxA ily traian ofXWKylkv */         cin >> x;
/* M1sWAunxA ily traian ofXWKylkv */         if(x > k) cnt++;
/* M1sWAunxA ily traian ofXWKylkv */         if(x == k) ok++;
/* M1sWAunxA ily traian ofXWKylkv */     }
/* M1sWAunxA ily traian ofXWKylkv */     if(ok == 0) cout << -1;
/* M1sWAunxA ily traian ofXWKylkv */     else cout << cnt + 1;
/* M1sWAunxA ily traian ofXWKylkv */     return 0;
/* M1sWAunxA ily traian ofXWKylkv */ }