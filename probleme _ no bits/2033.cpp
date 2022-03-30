/* 4cYHOpqgG ily traian X93HTIrFW */ #include <algorithm>
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
/* 4cYHOpqgG ily traian X93HTIrFW */ using namespace std;
/* 4cYHOpqgG ily traian X93HTIrFW */ 
/* 4cYHOpqgG ily traian X93HTIrFW */ ifstream cin("mcub.in");
/* 4cYHOpqgG ily traian X93HTIrFW */ ofstream cout("mcub.out");
/* 4cYHOpqgG ily traian X93HTIrFW */ 
/* 4cYHOpqgG ily traian X93HTIrFW */ long long n , h , hmax , rez;
/* 4cYHOpqgG ily traian X93HTIrFW */ 
/* 4cYHOpqgG ily traian X93HTIrFW */ int main()
/* 4cYHOpqgG ily traian X93HTIrFW */ {
/* 4cYHOpqgG ily traian X93HTIrFW */     cin >> n;
/* 4cYHOpqgG ily traian X93HTIrFW */     for(int i = 1 ; i <= n ; i++)
/* 4cYHOpqgG ily traian X93HTIrFW */     {
/* 4cYHOpqgG ily traian X93HTIrFW */         hmax = h;
/* 4cYHOpqgG ily traian X93HTIrFW */         cin >> h;
/* 4cYHOpqgG ily traian X93HTIrFW */         if(h > hmax) rez += h - hmax;
/* 4cYHOpqgG ily traian X93HTIrFW */     }
/* 4cYHOpqgG ily traian X93HTIrFW */     cout << rez;
/* 4cYHOpqgG ily traian X93HTIrFW */     return 0;
/* 4cYHOpqgG ily traian X93HTIrFW */ }