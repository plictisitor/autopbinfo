/* hUjJlqkVv ily traian VGVqn6hDc */ #include <algorithm>
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
/* hUjJlqkVv ily traian VGVqn6hDc */ 
/* hUjJlqkVv ily traian VGVqn6hDc */ using namespace std;
/* hUjJlqkVv ily traian VGVqn6hDc */ 
/* hUjJlqkVv ily traian VGVqn6hDc */ ifstream cin("lungimesubsircomunmaximal.in");
/* hUjJlqkVv ily traian VGVqn6hDc */ ofstream cout("lungimesubsircomunmaximal.out");
/* hUjJlqkVv ily traian VGVqn6hDc */ 
/* hUjJlqkVv ily traian VGVqn6hDc */ int n , m , cnt;
/* hUjJlqkVv ily traian VGVqn6hDc */ char a[1001] , b[1001] , rez[1001];
/* hUjJlqkVv ily traian VGVqn6hDc */ int d[1001][1001];
/* hUjJlqkVv ily traian VGVqn6hDc */ 
/* hUjJlqkVv ily traian VGVqn6hDc */ int main()
/* hUjJlqkVv ily traian VGVqn6hDc */ {
/* hUjJlqkVv ily traian VGVqn6hDc */     cin >> a >> b;
/* hUjJlqkVv ily traian VGVqn6hDc */     n = strlen(a);
/* hUjJlqkVv ily traian VGVqn6hDc */     m = strlen(b);
/* hUjJlqkVv ily traian VGVqn6hDc */ 
/* hUjJlqkVv ily traian VGVqn6hDc */     for(int i = 1 ; i <= n ; i++)
/* hUjJlqkVv ily traian VGVqn6hDc */         for(int j = 1 ; j <= m ; j++)
/* hUjJlqkVv ily traian VGVqn6hDc */             if(a[i - 1] == b[j - 1]) d[i][j] = d[i - 1][j - 1] + 1;
/* hUjJlqkVv ily traian VGVqn6hDc */             else d[i][j] = max(d[i - 1][j] , d[i][j - 1]);
/* hUjJlqkVv ily traian VGVqn6hDc */ 
/* hUjJlqkVv ily traian VGVqn6hDc */     cout << d[n][m];
/* hUjJlqkVv ily traian VGVqn6hDc */ }