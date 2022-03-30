/* vYdQ8tMEr ily traian 1BJ4ScSyo */ #include <algorithm>
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
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ using namespace std;
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ 
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ ifstream cin("palin.in");
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ ofstream cout("palin.out");
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ 
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ int n , d[4001][4001];
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ char s[4001] , in[4001];
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ 
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ int main()
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ {
/* vYdQ8tMEr ily traian 1BJ4ScSyo */     cin >> n;
/* vYdQ8tMEr ily traian 1BJ4ScSyo */     for(int i = 0 ; i < n ; i++)
/* vYdQ8tMEr ily traian 1BJ4ScSyo */         cin >> s[i];
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ 
/* vYdQ8tMEr ily traian 1BJ4ScSyo */     for(int i = n - 1 ; i >= 0 ; i--)
/* vYdQ8tMEr ily traian 1BJ4ScSyo */         in[i] = s[n - i - 1];
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ 
/* vYdQ8tMEr ily traian 1BJ4ScSyo */     for(int i = 1 ; i <= n ; i++)
/* vYdQ8tMEr ily traian 1BJ4ScSyo */         for(int j = 1 ; j <= n ; j++)
/* vYdQ8tMEr ily traian 1BJ4ScSyo */             if(s[i - 1] == in[j - 1]) d[i][j] = d[i - 1][j - 1] + 1;
/* vYdQ8tMEr ily traian 1BJ4ScSyo */             else d[i][j] = max(d[i - 1][j] , d[i][j - 1]);
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ 
/* vYdQ8tMEr ily traian 1BJ4ScSyo */     cout << n - d[n][n];
/* vYdQ8tMEr ily traian 1BJ4ScSyo */ }