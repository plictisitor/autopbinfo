/* yBTkphK7z ily traian EDBMrNzbc */ #include <algorithm>
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
/* yBTkphK7z ily traian EDBMrNzbc */ 
/* yBTkphK7z ily traian EDBMrNzbc */ using namespace std;
/* yBTkphK7z ily traian EDBMrNzbc */ 
/* yBTkphK7z ily traian EDBMrNzbc */ int main()
/* yBTkphK7z ily traian EDBMrNzbc */ {
/* yBTkphK7z ily traian EDBMrNzbc */     int n;
/* yBTkphK7z ily traian EDBMrNzbc */     cin >> n;
/* yBTkphK7z ily traian EDBMrNzbc */     int a[1001];
/* yBTkphK7z ily traian EDBMrNzbc */     for(int i = 1; i <= n; ++i)
/* yBTkphK7z ily traian EDBMrNzbc */         cin >> a[i];
/* yBTkphK7z ily traian EDBMrNzbc */ 
/* yBTkphK7z ily traian EDBMrNzbc */     for(int i = 1; i < n - 1; ++i)
/* yBTkphK7z ily traian EDBMrNzbc */         for(int j = i + 1; j <= n-1; ++j)
/* yBTkphK7z ily traian EDBMrNzbc */             if(a[i] < a[j])
/* yBTkphK7z ily traian EDBMrNzbc */                 swap(a[i], a[j]);
/* yBTkphK7z ily traian EDBMrNzbc */ 
/* yBTkphK7z ily traian EDBMrNzbc */     for(int i = 1; i < n; ++i){
/* yBTkphK7z ily traian EDBMrNzbc */         int x = a[i];
/* yBTkphK7z ily traian EDBMrNzbc */         int y = a[n];
/* yBTkphK7z ily traian EDBMrNzbc */         while(y){
/* yBTkphK7z ily traian EDBMrNzbc */             int r = x % y;
/* yBTkphK7z ily traian EDBMrNzbc */             x = y;
/* yBTkphK7z ily traian EDBMrNzbc */             y = r;
/* yBTkphK7z ily traian EDBMrNzbc */         }
/* yBTkphK7z ily traian EDBMrNzbc */         if(x == 1)
/* yBTkphK7z ily traian EDBMrNzbc */             cout << a[i] << ' ';
/* yBTkphK7z ily traian EDBMrNzbc */     }
/* yBTkphK7z ily traian EDBMrNzbc */ 
/* yBTkphK7z ily traian EDBMrNzbc */     return 0;
/* yBTkphK7z ily traian EDBMrNzbc */ }