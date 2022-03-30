/* eZNywenYN ily traian csr21EJf3 */ #include <algorithm>
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
/* eZNywenYN ily traian csr21EJf3 */ using namespace std;
/* eZNywenYN ily traian csr21EJf3 */ 
/* eZNywenYN ily traian csr21EJf3 */ int main()
/* eZNywenYN ily traian csr21EJf3 */ {
/* eZNywenYN ily traian csr21EJf3 */     int n, t , k;
/* eZNywenYN ily traian csr21EJf3 */     cin >> n >> t >> k;
/* eZNywenYN ily traian csr21EJf3 */     int cnt=0 , a[100000];
/* eZNywenYN ily traian csr21EJf3 */     for(int i = 0 ; i < n ; ++i)
/* eZNywenYN ily traian csr21EJf3 */         cin >> a[i];
/* eZNywenYN ily traian csr21EJf3 */     for(int i = 0 ; i <= n-k ; ++i)
/* eZNywenYN ily traian csr21EJf3 */     {
/* eZNywenYN ily traian csr21EJf3 */         int c=0;
/* eZNywenYN ily traian csr21EJf3 */         for(int j = i ; j < i+k ; ++j)
/* eZNywenYN ily traian csr21EJf3 */         {
/* eZNywenYN ily traian csr21EJf3 */             if(a[j]<=t)
/* eZNywenYN ily traian csr21EJf3 */             c++;
/* eZNywenYN ily traian csr21EJf3 */             if(c==k)
/* eZNywenYN ily traian csr21EJf3 */             cnt++;
/* eZNywenYN ily traian csr21EJf3 */         }
/* eZNywenYN ily traian csr21EJf3 */     }
/* eZNywenYN ily traian csr21EJf3 */     cout << cnt;
/* eZNywenYN ily traian csr21EJf3 */     return 0;
/* eZNywenYN ily traian csr21EJf3 */ }