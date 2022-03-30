/* ryVhs9v6e ily traian ggJQYs3sf */ #include <algorithm>
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
/* ryVhs9v6e ily traian ggJQYs3sf */ using namespace std;
/* ryVhs9v6e ily traian ggJQYs3sf */ 
/* ryVhs9v6e ily traian ggJQYs3sf */ int sum_pare(int a[], int st, int dr){
/* ryVhs9v6e ily traian ggJQYs3sf */     if(st == dr){
/* ryVhs9v6e ily traian ggJQYs3sf */         if(a[st] % 2 == 0)
/* ryVhs9v6e ily traian ggJQYs3sf */             return a[st];
/* ryVhs9v6e ily traian ggJQYs3sf */         else
/* ryVhs9v6e ily traian ggJQYs3sf */             return 0;
/* ryVhs9v6e ily traian ggJQYs3sf */     }
/* ryVhs9v6e ily traian ggJQYs3sf */     else{
/* ryVhs9v6e ily traian ggJQYs3sf */         int mij = (st + dr) / 2;
/* ryVhs9v6e ily traian ggJQYs3sf */         return sum_pare(a, st, mij) + sum_pare(a, mij + 1, dr);
/* ryVhs9v6e ily traian ggJQYs3sf */     }
/* ryVhs9v6e ily traian ggJQYs3sf */ }
/* ryVhs9v6e ily traian ggJQYs3sf */ 
/* ryVhs9v6e ily traian ggJQYs3sf */ int main()
/* ryVhs9v6e ily traian ggJQYs3sf */ {
/* ryVhs9v6e ily traian ggJQYs3sf */     int n, a[1001];
/* ryVhs9v6e ily traian ggJQYs3sf */     cin >> n;
/* ryVhs9v6e ily traian ggJQYs3sf */     for(int i = 1; i <= n; ++i)
/* ryVhs9v6e ily traian ggJQYs3sf */         cin >> a[i];
/* ryVhs9v6e ily traian ggJQYs3sf */ 
/* ryVhs9v6e ily traian ggJQYs3sf */     cout << sum_pare(a, 1, n);
/* ryVhs9v6e ily traian ggJQYs3sf */ 
/* ryVhs9v6e ily traian ggJQYs3sf */     return 0;
/* ryVhs9v6e ily traian ggJQYs3sf */ }