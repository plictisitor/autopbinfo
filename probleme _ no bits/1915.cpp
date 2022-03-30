/* cJhnZy8xG ily traian UEDbcwz0f */ #include <algorithm>
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
/* cJhnZy8xG ily traian UEDbcwz0f */ using namespace std;
/* cJhnZy8xG ily traian UEDbcwz0f */ 
/* cJhnZy8xG ily traian UEDbcwz0f */ long long n , b , r , k , x  , sum , i , nr;
/* cJhnZy8xG ily traian UEDbcwz0f */ 
/* cJhnZy8xG ily traian UEDbcwz0f */ int main()
/* cJhnZy8xG ily traian UEDbcwz0f */ 
/* cJhnZy8xG ily traian UEDbcwz0f */ {
/* cJhnZy8xG ily traian UEDbcwz0f */     cin >> n >> b >> r;
/* cJhnZy8xG ily traian UEDbcwz0f */     x = r;
/* cJhnZy8xG ily traian UEDbcwz0f */     while(x != 0) k++ , x /= 10;
/* cJhnZy8xG ily traian UEDbcwz0f */     if(k > n) cout << "-1";
/* cJhnZy8xG ily traian UEDbcwz0f */     else if(k == n) cout << r;
/* cJhnZy8xG ily traian UEDbcwz0f */     else
/* cJhnZy8xG ily traian UEDbcwz0f */     {
/* cJhnZy8xG ily traian UEDbcwz0f */         sum = 1;
/* cJhnZy8xG ily traian UEDbcwz0f */         for(int i = 2 ; i <= n ; i++) sum = (sum * 10) % b;
/* cJhnZy8xG ily traian UEDbcwz0f */         if(sum <= r) nr = r - sum;
/* cJhnZy8xG ily traian UEDbcwz0f */         else nr = b - sum + r;
/* cJhnZy8xG ily traian UEDbcwz0f */         if(nr == 0)
/* cJhnZy8xG ily traian UEDbcwz0f */         {
/* cJhnZy8xG ily traian UEDbcwz0f */             cout << 1;
/* cJhnZy8xG ily traian UEDbcwz0f */             for(int i = 1 ; i <= n - 1 ; i++) cout << 0;
/* cJhnZy8xG ily traian UEDbcwz0f */         }
/* cJhnZy8xG ily traian UEDbcwz0f */         else
/* cJhnZy8xG ily traian UEDbcwz0f */         {
/* cJhnZy8xG ily traian UEDbcwz0f */             k = 0; x = nr;
/* cJhnZy8xG ily traian UEDbcwz0f */             while(x != 0) k++ , x /= 10;
/* cJhnZy8xG ily traian UEDbcwz0f */             cout << 1;
/* cJhnZy8xG ily traian UEDbcwz0f */             for(int i = 1 ; i <= n - k - 1 ; i++) cout << 0;
/* cJhnZy8xG ily traian UEDbcwz0f */             cout << nr;
/* cJhnZy8xG ily traian UEDbcwz0f */         }
/* cJhnZy8xG ily traian UEDbcwz0f */     }
/* cJhnZy8xG ily traian UEDbcwz0f */ }