/* 9vREu2qG1 ily traian doCpUQqWu */ #include <algorithm>
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
/* 9vREu2qG1 ily traian doCpUQqWu */ 
/* 9vREu2qG1 ily traian doCpUQqWu */ using namespace std;
/* 9vREu2qG1 ily traian doCpUQqWu */ 
/* 9vREu2qG1 ily traian doCpUQqWu */ int main()
/* 9vREu2qG1 ily traian doCpUQqWu */ {
/* 9vREu2qG1 ily traian doCpUQqWu */     int n;
/* 9vREu2qG1 ily traian doCpUQqWu */     cin >> n;
/* 9vREu2qG1 ily traian doCpUQqWu */     int a[1000], b[1000];
/* 9vREu2qG1 ily traian doCpUQqWu */     for(int i = 0 ; i < n ; ++i)
/* 9vREu2qG1 ily traian doCpUQqWu */     {
/* 9vREu2qG1 ily traian doCpUQqWu */         cin >> a[i];
/* 9vREu2qG1 ily traian doCpUQqWu */         b[i]=a[i];
/* 9vREu2qG1 ily traian doCpUQqWu */     }
/* 9vREu2qG1 ily traian doCpUQqWu */     sort(b , b+n);
/* 9vREu2qG1 ily traian doCpUQqWu */     for(int i = 0 ; i < n ; ++i)
/* 9vREu2qG1 ily traian doCpUQqWu */     {
/* 9vREu2qG1 ily traian doCpUQqWu */         for(int j = 0 ; j < n ; ++j)
/* 9vREu2qG1 ily traian doCpUQqWu */         {
/* 9vREu2qG1 ily traian doCpUQqWu */             if(b[i]==a[j])
/* 9vREu2qG1 ily traian doCpUQqWu */             {
/* 9vREu2qG1 ily traian doCpUQqWu */                 cout << b[i] << ' ' << j+1 << ' ';
/* 9vREu2qG1 ily traian doCpUQqWu */                 a[j]=-1;
/* 9vREu2qG1 ily traian doCpUQqWu */             }
/* 9vREu2qG1 ily traian doCpUQqWu */         }
/* 9vREu2qG1 ily traian doCpUQqWu */     }
/* 9vREu2qG1 ily traian doCpUQqWu */     return 0;
/* 9vREu2qG1 ily traian doCpUQqWu */ }