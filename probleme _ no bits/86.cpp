/* 3gOPQNmZM ily traian GxEswONsS */ #include <algorithm>
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
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */ using namespace std;
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */ ifstream cin("halfsort.in");
/* 3gOPQNmZM ily traian GxEswONsS */ ofstream cout("halfsort.out");
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */ int main()
/* 3gOPQNmZM ily traian GxEswONsS */ {
/* 3gOPQNmZM ily traian GxEswONsS */     int n;
/* 3gOPQNmZM ily traian GxEswONsS */     cin >> n;
/* 3gOPQNmZM ily traian GxEswONsS */     int a[1001];
/* 3gOPQNmZM ily traian GxEswONsS */     for(int i = 1; i <= n; ++i)
/* 3gOPQNmZM ily traian GxEswONsS */         cin >> a[i];
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */     for(int i = 1; i < n/2; ++i)
/* 3gOPQNmZM ily traian GxEswONsS */         for(int j = i + 1; j <= n/2; ++j)
/* 3gOPQNmZM ily traian GxEswONsS */             if(a[i] > a[j])
/* 3gOPQNmZM ily traian GxEswONsS */                 swap(a[i], a[j]);
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */     for(int i = n/2 + 1; i < n; ++i)
/* 3gOPQNmZM ily traian GxEswONsS */         for(int j = i + 1; j <= n; ++j)
/* 3gOPQNmZM ily traian GxEswONsS */             if(a[i] < a[j])
/* 3gOPQNmZM ily traian GxEswONsS */                 swap(a[i], a[j]);
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */     for(int i = 1; i <= n; ++i)
/* 3gOPQNmZM ily traian GxEswONsS */         cout << a[i] << " ";
/* 3gOPQNmZM ily traian GxEswONsS */ 
/* 3gOPQNmZM ily traian GxEswONsS */     return 0;
/* 3gOPQNmZM ily traian GxEswONsS */ }