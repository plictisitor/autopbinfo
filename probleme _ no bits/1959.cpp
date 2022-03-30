/* 1ioMZfoyy ily traian Z0VkXpJ4h */ #include <algorithm>
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
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ using namespace std;
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ #define inf 1005
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ int g[1001];
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ int n , nrc[10002] , G;
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ 
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ 
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ int main()
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ {
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     cin >> n >> G;
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     for(int i = 1 ; i <= n ; i++)
/* 1ioMZfoyy ily traian Z0VkXpJ4h */         cin >> g[i];
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     for(int i = 1 ; i <= G ; i++)
/* 1ioMZfoyy ily traian Z0VkXpJ4h */         nrc[i] = inf;
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     for(int i = 1 ; i <= n ; i++)
/* 1ioMZfoyy ily traian Z0VkXpJ4h */         for(int j = G ; j >= g[i] ; j--)
/* 1ioMZfoyy ily traian Z0VkXpJ4h */             if(nrc[j] > nrc[j - g[i]] + 1) nrc[j] = nrc[j - g[i]] + 1;
/* 1ioMZfoyy ily traian Z0VkXpJ4h */         
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     if(nrc[G] == inf) cout << "NU";
/* 1ioMZfoyy ily traian Z0VkXpJ4h */     else cout << nrc[G];
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ 
/* 1ioMZfoyy ily traian Z0VkXpJ4h */ }