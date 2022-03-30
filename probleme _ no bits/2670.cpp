/* 2OaG0DtTv ily traian rG2x4dmJx */ #include <algorithm>
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
/* 2OaG0DtTv ily traian rG2x4dmJx */ using namespace std;
/* 2OaG0DtTv ily traian rG2x4dmJx */ 
/* 2OaG0DtTv ily traian rG2x4dmJx */ int main()
/* 2OaG0DtTv ily traian rG2x4dmJx */ {
/* 2OaG0DtTv ily traian rG2x4dmJx */     int a , b;
/* 2OaG0DtTv ily traian rG2x4dmJx */     cin >> a >> b;
/* 2OaG0DtTv ily traian rG2x4dmJx */     for(int x = 1 ; x <= 5000 ; ++x)
/* 2OaG0DtTv ily traian rG2x4dmJx */     {
/* 2OaG0DtTv ily traian rG2x4dmJx */         for(int y = x ; y <= 20000 ; ++y)
/* 2OaG0DtTv ily traian rG2x4dmJx */         {
/* 2OaG0DtTv ily traian rG2x4dmJx */             if(x * y * a == (x + y) * b)
/* 2OaG0DtTv ily traian rG2x4dmJx */                 cout << x << ' ' << y << endl;
/* 2OaG0DtTv ily traian rG2x4dmJx */         }
/* 2OaG0DtTv ily traian rG2x4dmJx */     }
/* 2OaG0DtTv ily traian rG2x4dmJx */     return 0;
/* 2OaG0DtTv ily traian rG2x4dmJx */ }