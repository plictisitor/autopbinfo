/* yZelcrsm3 ily traian nYFWqREZz */ #include <algorithm>
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
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */ using namespace std;
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */ ifstream cin("secvente.in");
/* yZelcrsm3 ily traian nYFWqREZz */ ofstream cout("secvente.out");
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */ int main()
/* yZelcrsm3 ily traian nYFWqREZz */ {
/* yZelcrsm3 ily traian nYFWqREZz */     int n;
/* yZelcrsm3 ily traian nYFWqREZz */     cin >> n;
/* yZelcrsm3 ily traian nYFWqREZz */     int a[1001];
/* yZelcrsm3 ily traian nYFWqREZz */     for(int i = 1; i <= n; ++i)
/* yZelcrsm3 ily traian nYFWqREZz */         cin >> a[i];
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */     int cnt = 0;
/* yZelcrsm3 ily traian nYFWqREZz */     for(int i = 2; i <= n; ++i)
/* yZelcrsm3 ily traian nYFWqREZz */         if(a[i] < a[i-1])
/* yZelcrsm3 ily traian nYFWqREZz */             cnt++;
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */     if(a[n] > a[n-1])
/* yZelcrsm3 ily traian nYFWqREZz */         cnt++;
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */     cout << cnt;
/* yZelcrsm3 ily traian nYFWqREZz */ 
/* yZelcrsm3 ily traian nYFWqREZz */     return 0;
/* yZelcrsm3 ily traian nYFWqREZz */ }