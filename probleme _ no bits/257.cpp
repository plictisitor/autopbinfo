/* 7VxIak5DL ily traian 6Ycty9Ywq */ #include <algorithm>
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
/* 7VxIak5DL ily traian 6Ycty9Ywq */ using namespace std;
/* 7VxIak5DL ily traian 6Ycty9Ywq */ 
/* 7VxIak5DL ily traian 6Ycty9Ywq */ int fib(int n)
/* 7VxIak5DL ily traian 6Ycty9Ywq */ {
/* 7VxIak5DL ily traian 6Ycty9Ywq */     int f1 = 1, f2 = 1, f3 ;
/* 7VxIak5DL ily traian 6Ycty9Ywq */     while(f1 + f2 <= n)
/* 7VxIak5DL ily traian 6Ycty9Ywq */     {
/* 7VxIak5DL ily traian 6Ycty9Ywq */         f3 = f1 + f2;
/* 7VxIak5DL ily traian 6Ycty9Ywq */         f1 = f2;
/* 7VxIak5DL ily traian 6Ycty9Ywq */         f2 = f3;
/* 7VxIak5DL ily traian 6Ycty9Ywq */     }
/* 7VxIak5DL ily traian 6Ycty9Ywq */     return f2;
/* 7VxIak5DL ily traian 6Ycty9Ywq */ }
/* 7VxIak5DL ily traian 6Ycty9Ywq */ int main()
/* 7VxIak5DL ily traian 6Ycty9Ywq */ {
/* 7VxIak5DL ily traian 6Ycty9Ywq */     int n;
/* 7VxIak5DL ily traian 6Ycty9Ywq */     cin>>n;
/* 7VxIak5DL ily traian 6Ycty9Ywq */     while(n!=0)
/* 7VxIak5DL ily traian 6Ycty9Ywq */     {
/* 7VxIak5DL ily traian 6Ycty9Ywq */         cout<<fib(n)<<" ";
/* 7VxIak5DL ily traian 6Ycty9Ywq */         n=n-fib(n);
/* 7VxIak5DL ily traian 6Ycty9Ywq */     }
/* 7VxIak5DL ily traian 6Ycty9Ywq */     return 0;
/* 7VxIak5DL ily traian 6Ycty9Ywq */ }