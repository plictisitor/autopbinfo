/* kTsC5kHLI ily traian gQhlKicQb */ #include <algorithm>
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
/* kTsC5kHLI ily traian gQhlKicQb */ using namespace std;
/* kTsC5kHLI ily traian gQhlKicQb */ ifstream cin("magie.in");
/* kTsC5kHLI ily traian gQhlKicQb */ ofstream cout("magie.out");
/* kTsC5kHLI ily traian gQhlKicQb */ int sumcif(int n)
/* kTsC5kHLI ily traian gQhlKicQb */ {
/* kTsC5kHLI ily traian gQhlKicQb */     int s = 0;
/* kTsC5kHLI ily traian gQhlKicQb */     while(n != 0)
/* kTsC5kHLI ily traian gQhlKicQb */     {
/* kTsC5kHLI ily traian gQhlKicQb */         s += n % 10;
/* kTsC5kHLI ily traian gQhlKicQb */         n /= 10;
/* kTsC5kHLI ily traian gQhlKicQb */     }
/* kTsC5kHLI ily traian gQhlKicQb */     return s;
/* kTsC5kHLI ily traian gQhlKicQb */ }
/* kTsC5kHLI ily traian gQhlKicQb */ int main()
/* kTsC5kHLI ily traian gQhlKicQb */ {
/* kTsC5kHLI ily traian gQhlKicQb */     int n , x , cnt = 0 , maxi = 0;
/* kTsC5kHLI ily traian gQhlKicQb */     cin >> n;
/* kTsC5kHLI ily traian gQhlKicQb */     for(int i = 1 ; i <= n ; i++)
/* kTsC5kHLI ily traian gQhlKicQb */     {
/* kTsC5kHLI ily traian gQhlKicQb */         cin >> x;
/* kTsC5kHLI ily traian gQhlKicQb */         if(2017 - x == 12) cnt++;
/* kTsC5kHLI ily traian gQhlKicQb */         if(sumcif(x) > maxi) maxi = sumcif(x);
/* kTsC5kHLI ily traian gQhlKicQb */ 
/* kTsC5kHLI ily traian gQhlKicQb */     }
/* kTsC5kHLI ily traian gQhlKicQb */     cout << cnt << '\n' << maxi;
/* kTsC5kHLI ily traian gQhlKicQb */ }