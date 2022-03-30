/* 6Og8kd6fh ily traian B0nVyFFt6 */ #include <algorithm>
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
/* 6Og8kd6fh ily traian B0nVyFFt6 */ 
/* 6Og8kd6fh ily traian B0nVyFFt6 */ using namespace std;
/* 6Og8kd6fh ily traian B0nVyFFt6 */ 
/* 6Og8kd6fh ily traian B0nVyFFt6 */ int k, a[101];
/* 6Og8kd6fh ily traian B0nVyFFt6 */ char n[40];
/* 6Og8kd6fh ily traian B0nVyFFt6 */ 
/* 6Og8kd6fh ily traian B0nVyFFt6 */ int main(){
/* 6Og8kd6fh ily traian B0nVyFFt6 */     cin >> k;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     cin >> n;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     int sum = 0;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     int i = 0;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     while(n[i]){
/* 6Og8kd6fh ily traian B0nVyFFt6 */         sum += (int)(n[i] - '0');
/* 6Og8kd6fh ily traian B0nVyFFt6 */         i++;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     }
/* 6Og8kd6fh ily traian B0nVyFFt6 */     int poz = 1;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     while(k){
/* 6Og8kd6fh ily traian B0nVyFFt6 */         a[poz] = sum / k;
/* 6Og8kd6fh ily traian B0nVyFFt6 */         sum -= a[poz];
/* 6Og8kd6fh ily traian B0nVyFFt6 */         poz++;
/* 6Og8kd6fh ily traian B0nVyFFt6 */         k--;
/* 6Og8kd6fh ily traian B0nVyFFt6 */     }
/* 6Og8kd6fh ily traian B0nVyFFt6 */     sort(a + 1, a + poz);
/* 6Og8kd6fh ily traian B0nVyFFt6 */     for(int i = 1; i < poz; ++i)
/* 6Og8kd6fh ily traian B0nVyFFt6 */         cout << a[i];
/* 6Og8kd6fh ily traian B0nVyFFt6 */     return 0;
/* 6Og8kd6fh ily traian B0nVyFFt6 */ }