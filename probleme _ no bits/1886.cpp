/* 1vcaf7hzn ily traian 4FojxozwJ */ #include <algorithm>
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
/* 1vcaf7hzn ily traian 4FojxozwJ */ using namespace std;
/* 1vcaf7hzn ily traian 4FojxozwJ */ 
/* 1vcaf7hzn ily traian 4FojxozwJ */ struct poz
/* 1vcaf7hzn ily traian 4FojxozwJ */ {
/* 1vcaf7hzn ily traian 4FojxozwJ */     int g , c;
/* 1vcaf7hzn ily traian 4FojxozwJ */ }a[1001];
/* 1vcaf7hzn ily traian 4FojxozwJ */ 
/* 1vcaf7hzn ily traian 4FojxozwJ */ int n , G , C[1001][10001];
/* 1vcaf7hzn ily traian 4FojxozwJ */ 
/* 1vcaf7hzn ily traian 4FojxozwJ */ void dinamica()
/* 1vcaf7hzn ily traian 4FojxozwJ */ {
/* 1vcaf7hzn ily traian 4FojxozwJ */     for(int i = 1 ; i <= n ; i++)
/* 1vcaf7hzn ily traian 4FojxozwJ */         for(int j = 1 ; j <= G ; j++)
/* 1vcaf7hzn ily traian 4FojxozwJ */             if(a[i].g <= j && a[i].c + C[i - 1][j - a[i].g] > C[i - 1][j])
/* 1vcaf7hzn ily traian 4FojxozwJ */                 C[i][j] = a[i].c + C[i - 1][j - a[i].g];
/* 1vcaf7hzn ily traian 4FojxozwJ */             else
/* 1vcaf7hzn ily traian 4FojxozwJ */                 C[i][j] = C[i - 1][j];
/* 1vcaf7hzn ily traian 4FojxozwJ */ }
/* 1vcaf7hzn ily traian 4FojxozwJ */ 
/* 1vcaf7hzn ily traian 4FojxozwJ */ int main()
/* 1vcaf7hzn ily traian 4FojxozwJ */ {
/* 1vcaf7hzn ily traian 4FojxozwJ */     cin >> n >> G;
/* 1vcaf7hzn ily traian 4FojxozwJ */     for(int i = 1 ; i <= n ; i++)
/* 1vcaf7hzn ily traian 4FojxozwJ */         cin >> a[i].g >> a[i].c;
/* 1vcaf7hzn ily traian 4FojxozwJ */ 
/* 1vcaf7hzn ily traian 4FojxozwJ */     dinamica();
/* 1vcaf7hzn ily traian 4FojxozwJ */     cout << C[n][G];
/* 1vcaf7hzn ily traian 4FojxozwJ */ }