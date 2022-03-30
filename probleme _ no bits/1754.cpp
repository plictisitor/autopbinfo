/* gjTZngvgc ily traian dhosRZR3g */ #include <algorithm>
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
/* gjTZngvgc ily traian dhosRZR3g */ using namespace std;
/* gjTZngvgc ily traian dhosRZR3g */ 
/* gjTZngvgc ily traian dhosRZR3g */ ifstream cin("munti.in");
/* gjTZngvgc ily traian dhosRZR3g */ ofstream cout("munti.out");
/* gjTZngvgc ily traian dhosRZR3g */ 
/* gjTZngvgc ily traian dhosRZR3g */ int main()
/* gjTZngvgc ily traian dhosRZR3g */ {
/* gjTZngvgc ily traian dhosRZR3g */     int n;
/* gjTZngvgc ily traian dhosRZR3g */     cin >> n;
/* gjTZngvgc ily traian dhosRZR3g */     int x;
/* gjTZngvgc ily traian dhosRZR3g */     long long int s=0;
/* gjTZngvgc ily traian dhosRZR3g */     for(int i = 0 ; i < n ; ++i)
/* gjTZngvgc ily traian dhosRZR3g */     {
/* gjTZngvgc ily traian dhosRZR3g */         cin >> x;
/* gjTZngvgc ily traian dhosRZR3g */         s+=x;
/* gjTZngvgc ily traian dhosRZR3g */     }
/* gjTZngvgc ily traian dhosRZR3g */     if(s%n==0)
/* gjTZngvgc ily traian dhosRZR3g */     cout << n;
/* gjTZngvgc ily traian dhosRZR3g */     else
/* gjTZngvgc ily traian dhosRZR3g */     cout << n-1;
/* gjTZngvgc ily traian dhosRZR3g */ }