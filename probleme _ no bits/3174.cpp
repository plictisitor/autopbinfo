/* lcp7PsHXO ily traian tE8EVkGoV */ #include <algorithm>
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
/* lcp7PsHXO ily traian tE8EVkGoV */ 
/* lcp7PsHXO ily traian tE8EVkGoV */ using namespace std;
/* lcp7PsHXO ily traian tE8EVkGoV */ 
/* lcp7PsHXO ily traian tE8EVkGoV */ ifstream cin("r10.in");
/* lcp7PsHXO ily traian tE8EVkGoV */ ofstream cout("r10.out");
/* lcp7PsHXO ily traian tE8EVkGoV */ 
/* lcp7PsHXO ily traian tE8EVkGoV */ double a[30001]; 
/* lcp7PsHXO ily traian tE8EVkGoV */ int n , k;
/* lcp7PsHXO ily traian tE8EVkGoV */ 
/* lcp7PsHXO ily traian tE8EVkGoV */ int main()
/* lcp7PsHXO ily traian tE8EVkGoV */ {
/* lcp7PsHXO ily traian tE8EVkGoV */     cin >> n >> k ;
/* lcp7PsHXO ily traian tE8EVkGoV */     for(int i = 1 ; i <= n / k ; i++)
/* lcp7PsHXO ily traian tE8EVkGoV */     {
/* lcp7PsHXO ily traian tE8EVkGoV */         for(int j = 1 ; j <= k ; j++)
/* lcp7PsHXO ily traian tE8EVkGoV */             cin >> a[j];
/* lcp7PsHXO ily traian tE8EVkGoV */         sort(a + 1, a + k + 1);
/* lcp7PsHXO ily traian tE8EVkGoV */         for(int j = 1 ; j <= k ; j++)
/* lcp7PsHXO ily traian tE8EVkGoV */             cout << a[j] << " ";
/* lcp7PsHXO ily traian tE8EVkGoV */     }
/* lcp7PsHXO ily traian tE8EVkGoV */ }