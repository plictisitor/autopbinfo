/* 8hgNFf9R8 ily traian 258yJGl7u */ #include <algorithm>
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
/* 8hgNFf9R8 ily traian 258yJGl7u */ using namespace std;
/* 8hgNFf9R8 ily traian 258yJGl7u */ #define MOD 555557
/* 8hgNFf9R8 ily traian 258yJGl7u */ 
/* 8hgNFf9R8 ily traian 258yJGl7u */ ifstream cin("necuatie.in");
/* 8hgNFf9R8 ily traian 258yJGl7u */ ofstream cout("necuatie.out");
/* 8hgNFf9R8 ily traian 258yJGl7u */ 
/* 8hgNFf9R8 ily traian 258yJGl7u */ int n , S = 1;
/* 8hgNFf9R8 ily traian 258yJGl7u */ 
/* 8hgNFf9R8 ily traian 258yJGl7u */ int Invers(int a)
/* 8hgNFf9R8 ily traian 258yJGl7u */ {
/* 8hgNFf9R8 ily traian 258yJGl7u */     int r = 1 , n = MOD - 2;
/* 8hgNFf9R8 ily traian 258yJGl7u */     while(n > 0)
/* 8hgNFf9R8 ily traian 258yJGl7u */     {
/* 8hgNFf9R8 ily traian 258yJGl7u */         if(n % 2 == 1) r = 1LL * r * a % MOD;
/* 8hgNFf9R8 ily traian 258yJGl7u */         a = 1LL * a * a % MOD;
/* 8hgNFf9R8 ily traian 258yJGl7u */         n /= 2;
/* 8hgNFf9R8 ily traian 258yJGl7u */     }
/* 8hgNFf9R8 ily traian 258yJGl7u */     return r;
/* 8hgNFf9R8 ily traian 258yJGl7u */ }
/* 8hgNFf9R8 ily traian 258yJGl7u */ 
/* 8hgNFf9R8 ily traian 258yJGl7u */ int combinari(int n , int k)
/* 8hgNFf9R8 ily traian 258yJGl7u */ {
/* 8hgNFf9R8 ily traian 258yJGl7u */     int P = 1 , Q = 1;
/* 8hgNFf9R8 ily traian 258yJGl7u */     for(int i = 1 ; i <= k ; i++)
/* 8hgNFf9R8 ily traian 258yJGl7u */     {
/* 8hgNFf9R8 ily traian 258yJGl7u */         P = 1LL * P * (n - i + 1) % MOD;
/* 8hgNFf9R8 ily traian 258yJGl7u */         Q = 1LL * Q * i % MOD;
/* 8hgNFf9R8 ily traian 258yJGl7u */     }
/* 8hgNFf9R8 ily traian 258yJGl7u */     return 1LL * P * Invers(Q) % MOD;
/* 8hgNFf9R8 ily traian 258yJGl7u */ }
/* 8hgNFf9R8 ily traian 258yJGl7u */ 
/* 8hgNFf9R8 ily traian 258yJGl7u */ 
/* 8hgNFf9R8 ily traian 258yJGl7u */ int main()
/* 8hgNFf9R8 ily traian 258yJGl7u */ {
/* 8hgNFf9R8 ily traian 258yJGl7u */     cin >> n;
/* 8hgNFf9R8 ily traian 258yJGl7u */     for(int i = 1 ; i <= n / 2; i++)
/* 8hgNFf9R8 ily traian 258yJGl7u */         S = (S + 1LL * combinari(n , i) * combinari(n - i , i) % MOD) % MOD;
/* 8hgNFf9R8 ily traian 258yJGl7u */     cout << S;
/* 8hgNFf9R8 ily traian 258yJGl7u */ }