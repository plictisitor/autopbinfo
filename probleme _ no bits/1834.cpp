/* 0M7a55PD8 ily traian Vl2scQpUe */ #include <algorithm>
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
/* 0M7a55PD8 ily traian Vl2scQpUe */ 
/* 0M7a55PD8 ily traian Vl2scQpUe */ using namespace std;
/* 0M7a55PD8 ily traian Vl2scQpUe */ 
/* 0M7a55PD8 ily traian Vl2scQpUe */ int n , cnt , x;
/* 0M7a55PD8 ily traian Vl2scQpUe */ #define MOD 666013
/* 0M7a55PD8 ily traian Vl2scQpUe */ ifstream cin("memory005.in");
/* 0M7a55PD8 ily traian Vl2scQpUe */ ofstream cout("memory005.out");
/* 0M7a55PD8 ily traian Vl2scQpUe */ int put(int n)
/* 0M7a55PD8 ily traian Vl2scQpUe */ {
/* 0M7a55PD8 ily traian Vl2scQpUe */     int p = 1;
/* 0M7a55PD8 ily traian Vl2scQpUe */     for(int i = 1 ; i <= n ; i++)
/* 0M7a55PD8 ily traian Vl2scQpUe */         p *= 2 , p %= MOD;
/* 0M7a55PD8 ily traian Vl2scQpUe */     return p;
/* 0M7a55PD8 ily traian Vl2scQpUe */ }
/* 0M7a55PD8 ily traian Vl2scQpUe */ int main()
/* 0M7a55PD8 ily traian Vl2scQpUe */ {
/* 0M7a55PD8 ily traian Vl2scQpUe */     cin >> n;
/* 0M7a55PD8 ily traian Vl2scQpUe */     for(int i = 1 ; i <= n ; i++)
/* 0M7a55PD8 ily traian Vl2scQpUe */     {
/* 0M7a55PD8 ily traian Vl2scQpUe */         cin >> x;
/* 0M7a55PD8 ily traian Vl2scQpUe */         if(x % 2 == 1) cnt++;
/* 0M7a55PD8 ily traian Vl2scQpUe */     }
/* 0M7a55PD8 ily traian Vl2scQpUe */     if(cnt == 0) cout << (put(n) - 1) % MOD;
/* 0M7a55PD8 ily traian Vl2scQpUe */     else cout << (put(n - 1) - 1) % MOD;
/* 0M7a55PD8 ily traian Vl2scQpUe */     return 0;
/* 0M7a55PD8 ily traian Vl2scQpUe */ }