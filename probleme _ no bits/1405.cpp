/* Lx5JcukzL ily traian Jtk7aUn8U */ #include <algorithm>
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
/* Lx5JcukzL ily traian Jtk7aUn8U */ using namespace std;
/* Lx5JcukzL ily traian Jtk7aUn8U */ 
/* Lx5JcukzL ily traian Jtk7aUn8U */ 
/* Lx5JcukzL ily traian Jtk7aUn8U */ int main()
/* Lx5JcukzL ily traian Jtk7aUn8U */ {
/* Lx5JcukzL ily traian Jtk7aUn8U */     int n;
/* Lx5JcukzL ily traian Jtk7aUn8U */     cin >> n;
/* Lx5JcukzL ily traian Jtk7aUn8U */     
/* Lx5JcukzL ily traian Jtk7aUn8U */     for (int i = 1; i <= n; ++i)
/* Lx5JcukzL ily traian Jtk7aUn8U */     {
/* Lx5JcukzL ily traian Jtk7aUn8U */         // scriu n - i carcatere #
/* Lx5JcukzL ily traian Jtk7aUn8U */         for (int j = 1; j <= n - i; ++j)
/* Lx5JcukzL ily traian Jtk7aUn8U */             cout << '#';
/* Lx5JcukzL ily traian Jtk7aUn8U */         
/* Lx5JcukzL ily traian Jtk7aUn8U */         // scriu
/* Lx5JcukzL ily traian Jtk7aUn8U */         for (int j = 1; j < 2 * i; ++j)
/* Lx5JcukzL ily traian Jtk7aUn8U */             cout << '*';
/* Lx5JcukzL ily traian Jtk7aUn8U */             
/* Lx5JcukzL ily traian Jtk7aUn8U */         // scriu n - i carcatere #
/* Lx5JcukzL ily traian Jtk7aUn8U */         for (int j = 1; j <= n - i; ++j)
/* Lx5JcukzL ily traian Jtk7aUn8U */             cout << '#';
/* Lx5JcukzL ily traian Jtk7aUn8U */         
/* Lx5JcukzL ily traian Jtk7aUn8U */         cout << '\n'; // coboram pe linia urmatoare
/* Lx5JcukzL ily traian Jtk7aUn8U */     }
/* Lx5JcukzL ily traian Jtk7aUn8U */     
/* Lx5JcukzL ily traian Jtk7aUn8U */     for (int i = 1; i < n; ++i)     // mai sriem n - 1 linii
/* Lx5JcukzL ily traian Jtk7aUn8U */     {
/* Lx5JcukzL ily traian Jtk7aUn8U */         // scriu i caractere #
/* Lx5JcukzL ily traian Jtk7aUn8U */         for (int j = 1; j <= i; ++j)
/* Lx5JcukzL ily traian Jtk7aUn8U */             cout << '#';
/* Lx5JcukzL ily traian Jtk7aUn8U */         
/* Lx5JcukzL ily traian Jtk7aUn8U */         // scriu 2 * n - 1 - 2 * i  carcatere *
/* Lx5JcukzL ily traian Jtk7aUn8U */         for (int j = 1; j <= 2 * n - 1 - 2 * i; ++j)
/* Lx5JcukzL ily traian Jtk7aUn8U */             cout << '*';
/* Lx5JcukzL ily traian Jtk7aUn8U */         
/* Lx5JcukzL ily traian Jtk7aUn8U */         // scriu i carctere #
/* Lx5JcukzL ily traian Jtk7aUn8U */         for (int j = 1; j <= i; ++j)
/* Lx5JcukzL ily traian Jtk7aUn8U */             cout << '#';
/* Lx5JcukzL ily traian Jtk7aUn8U */         cout << '\n';
/* Lx5JcukzL ily traian Jtk7aUn8U */     }
/* Lx5JcukzL ily traian Jtk7aUn8U */     return 0;
/* Lx5JcukzL ily traian Jtk7aUn8U */ }