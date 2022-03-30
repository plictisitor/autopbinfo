/* Ye4yvqlpr ily traian CqBANuuZf */ #include <algorithm>
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
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */ using namespace std;
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */ int main()
/* Ye4yvqlpr ily traian CqBANuuZf */ {
/* Ye4yvqlpr ily traian CqBANuuZf */     int n;
/* Ye4yvqlpr ily traian CqBANuuZf */     cin >> n;
/* Ye4yvqlpr ily traian CqBANuuZf */     int a[1001];
/* Ye4yvqlpr ily traian CqBANuuZf */     for(int i = 1; i <= n; ++i){
/* Ye4yvqlpr ily traian CqBANuuZf */         int x;
/* Ye4yvqlpr ily traian CqBANuuZf */         cin >> x;
/* Ye4yvqlpr ily traian CqBANuuZf */         int cifmin = 10;
/* Ye4yvqlpr ily traian CqBANuuZf */         while(x){
/* Ye4yvqlpr ily traian CqBANuuZf */             if(x % 10 < cifmin)
/* Ye4yvqlpr ily traian CqBANuuZf */                 cifmin = x%10;
/* Ye4yvqlpr ily traian CqBANuuZf */             x/=10;
/* Ye4yvqlpr ily traian CqBANuuZf */         }
/* Ye4yvqlpr ily traian CqBANuuZf */         a[i] = cifmin;
/* Ye4yvqlpr ily traian CqBANuuZf */     }
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */     for(int i = 1; i < n; ++i)
/* Ye4yvqlpr ily traian CqBANuuZf */         for(int j = i + 1; j <= n; ++j)
/* Ye4yvqlpr ily traian CqBANuuZf */             if(a[i] > a[j])
/* Ye4yvqlpr ily traian CqBANuuZf */                 swap(a[i], a[j]);
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */     int poz = 1;
/* Ye4yvqlpr ily traian CqBANuuZf */     while(a[poz] == 0)
/* Ye4yvqlpr ily traian CqBANuuZf */         poz++;
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */     swap(a[poz], a[1]);
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */     for(int i = 1; i <= n; ++i)
/* Ye4yvqlpr ily traian CqBANuuZf */         cout << a[i];
/* Ye4yvqlpr ily traian CqBANuuZf */ 
/* Ye4yvqlpr ily traian CqBANuuZf */     return 0;
/* Ye4yvqlpr ily traian CqBANuuZf */ }