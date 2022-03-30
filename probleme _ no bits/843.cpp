/* 8jrJ8GfFv ily traian HTiydu8TP */ #include <algorithm>
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
/* 8jrJ8GfFv ily traian HTiydu8TP */ using namespace std;
/* 8jrJ8GfFv ily traian HTiydu8TP */ 
/* 8jrJ8GfFv ily traian HTiydu8TP */ int m, p, cif, i, nr;
/* 8jrJ8GfFv ily traian HTiydu8TP */ 
/* 8jrJ8GfFv ily traian HTiydu8TP */ int exp(int a, int n)
/* 8jrJ8GfFv ily traian HTiydu8TP */ {
/* 8jrJ8GfFv ily traian HTiydu8TP */     if(n == 0) 
/* 8jrJ8GfFv ily traian HTiydu8TP */         return 1;
/* 8jrJ8GfFv ily traian HTiydu8TP */     if(n % 2 == 1)
/* 8jrJ8GfFv ily traian HTiydu8TP */     {
/* 8jrJ8GfFv ily traian HTiydu8TP */         long long tmp = exp(a, n - 1);
/* 8jrJ8GfFv ily traian HTiydu8TP */         tmp = tmp * a;
/* 8jrJ8GfFv ily traian HTiydu8TP */         return tmp % nr;
/* 8jrJ8GfFv ily traian HTiydu8TP */     }
/* 8jrJ8GfFv ily traian HTiydu8TP */     else
/* 8jrJ8GfFv ily traian HTiydu8TP */     {
/* 8jrJ8GfFv ily traian HTiydu8TP */         long long tmp = exp(a , n / 2);
/* 8jrJ8GfFv ily traian HTiydu8TP */         return (tmp * tmp) % nr;
/* 8jrJ8GfFv ily traian HTiydu8TP */     }
/* 8jrJ8GfFv ily traian HTiydu8TP */ }
/* 8jrJ8GfFv ily traian HTiydu8TP */ 
/* 8jrJ8GfFv ily traian HTiydu8TP */ 
/* 8jrJ8GfFv ily traian HTiydu8TP */ int main()
/* 8jrJ8GfFv ily traian HTiydu8TP */ {
/* 8jrJ8GfFv ily traian HTiydu8TP */     cin >> m >> p >> cif;
/* 8jrJ8GfFv ily traian HTiydu8TP */     nr = 1;
/* 8jrJ8GfFv ily traian HTiydu8TP */     for(i=1;i<=cif;i++)
/* 8jrJ8GfFv ily traian HTiydu8TP */         nr = nr * 10;
/* 8jrJ8GfFv ily traian HTiydu8TP */     cout << exp(m, p);
/* 8jrJ8GfFv ily traian HTiydu8TP */     return 0;
/* 8jrJ8GfFv ily traian HTiydu8TP */ }