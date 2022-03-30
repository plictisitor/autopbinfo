/* FhmyvaruH ily traian ghVcjgDVd */ #include <algorithm>
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
/* FhmyvaruH ily traian ghVcjgDVd */ using namespace std;
/* FhmyvaruH ily traian ghVcjgDVd */ int main()
/* FhmyvaruH ily traian ghVcjgDVd */ {
/* FhmyvaruH ily traian ghVcjgDVd */     long long n , x , min1 = 1000001 , min2 = 1000001 , max1 = -1000001 , max2 = -1000001;
/* FhmyvaruH ily traian ghVcjgDVd */     cin >> n;
/* FhmyvaruH ily traian ghVcjgDVd */     for(int i = 1 ; i <= n ; ++i)
/* FhmyvaruH ily traian ghVcjgDVd */     {
/* FhmyvaruH ily traian ghVcjgDVd */         cin >> x;
/* FhmyvaruH ily traian ghVcjgDVd */         if(x > max1)
/* FhmyvaruH ily traian ghVcjgDVd */         {
/* FhmyvaruH ily traian ghVcjgDVd */             max2 = max1;
/* FhmyvaruH ily traian ghVcjgDVd */             max1 = x;
/* FhmyvaruH ily traian ghVcjgDVd */         }
/* FhmyvaruH ily traian ghVcjgDVd */         else if(x > max2) max2 = x;
/* FhmyvaruH ily traian ghVcjgDVd */         if(x < min1)
/* FhmyvaruH ily traian ghVcjgDVd */         {
/* FhmyvaruH ily traian ghVcjgDVd */             min2 = min1;
/* FhmyvaruH ily traian ghVcjgDVd */             min1 = x;
/* FhmyvaruH ily traian ghVcjgDVd */         }
/* FhmyvaruH ily traian ghVcjgDVd */         else if(x < min2) min2 = x;
/* FhmyvaruH ily traian ghVcjgDVd */     }
/* FhmyvaruH ily traian ghVcjgDVd */     if(max2 * max1 > min1 * min2) cout << max1 * max2;
/* FhmyvaruH ily traian ghVcjgDVd */     else cout << min1 * min2;
/* FhmyvaruH ily traian ghVcjgDVd */     return 0;
/* FhmyvaruH ily traian ghVcjgDVd */ }