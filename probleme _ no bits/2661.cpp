/* Eexg8mxNR ily traian GicmZ7P5G */ #include <algorithm>
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
/* Eexg8mxNR ily traian GicmZ7P5G */ using namespace std;
/* Eexg8mxNR ily traian GicmZ7P5G */ int a[100] , cnt;
/* Eexg8mxNR ily traian GicmZ7P5G */ int main()
/* Eexg8mxNR ily traian GicmZ7P5G */ {
/* Eexg8mxNR ily traian GicmZ7P5G */     long long n;
/* Eexg8mxNR ily traian GicmZ7P5G */     cin >> n;
/* Eexg8mxNR ily traian GicmZ7P5G */     while(n != 0)
/* Eexg8mxNR ily traian GicmZ7P5G */     {
/* Eexg8mxNR ily traian GicmZ7P5G */         a[cnt] = n % 10;
/* Eexg8mxNR ily traian GicmZ7P5G */         n /= 10;
/* Eexg8mxNR ily traian GicmZ7P5G */         cnt++;
/* Eexg8mxNR ily traian GicmZ7P5G */     }
/* Eexg8mxNR ily traian GicmZ7P5G */     for(int i = cnt - 1 ; i >= 0 ; i--)
/* Eexg8mxNR ily traian GicmZ7P5G */         if(i != cnt / 2) cout << a[i];
/* Eexg8mxNR ily traian GicmZ7P5G */ }