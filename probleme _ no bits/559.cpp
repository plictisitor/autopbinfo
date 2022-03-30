/* htoNcwDtu ily traian MVoU2NhmO */ #include <algorithm>
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
/* htoNcwDtu ily traian MVoU2NhmO */ using namespace std;
/* htoNcwDtu ily traian MVoU2NhmO */ 
/* htoNcwDtu ily traian MVoU2NhmO */ int main()
/* htoNcwDtu ily traian MVoU2NhmO */ {
/* htoNcwDtu ily traian MVoU2NhmO */     int a, b, c, d, e;
/* htoNcwDtu ily traian MVoU2NhmO */     cin >> a >> b >> c >> d >> e;
/* htoNcwDtu ily traian MVoU2NhmO */ 
/* htoNcwDtu ily traian MVoU2NhmO */     int maxi1 = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     if(a >= b && a >= c && a >= d && a >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi1 = a, a = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(b >= a && b >= c && b >= d && b >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi1 = b, b = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(c >= a && c >= b && c >= d && c >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi1 = c, c = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(d >= a && d >= b && d >= c && d >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi1 = d, d = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else
/* htoNcwDtu ily traian MVoU2NhmO */         maxi1 = e, e = 0;
/* htoNcwDtu ily traian MVoU2NhmO */ 
/* htoNcwDtu ily traian MVoU2NhmO */     int maxi2 = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     if(a >= b && a >= c && a >= d && a >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi2 = a, a = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(b >= a && b >= c && b >= d && b >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi2 = b, b = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(c >= a && c >= b && c >= d && c >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi2 = c, c = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(d >= a && d >= b && d >= c && d >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi2 = d, d = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else
/* htoNcwDtu ily traian MVoU2NhmO */         maxi2 = e, e = 0;
/* htoNcwDtu ily traian MVoU2NhmO */ 
/* htoNcwDtu ily traian MVoU2NhmO */     int maxi3 = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     if(a >= b && a >= c && a >= d && a >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi3 = a, a = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(b >= a && b >= c && b >= d && b >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi3 = b, b = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(c >= a && c >= b && c >= d && c >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi3 = c, c = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else if(d >= a && d >= b && d >= c && d >= e)
/* htoNcwDtu ily traian MVoU2NhmO */         maxi3 = d, d = 0;
/* htoNcwDtu ily traian MVoU2NhmO */     else
/* htoNcwDtu ily traian MVoU2NhmO */         maxi3 = e, e = 0;
/* htoNcwDtu ily traian MVoU2NhmO */ 
/* htoNcwDtu ily traian MVoU2NhmO */     cout << maxi1 + maxi2 + maxi3;
/* htoNcwDtu ily traian MVoU2NhmO */ 
/* htoNcwDtu ily traian MVoU2NhmO */     return 0;
/* htoNcwDtu ily traian MVoU2NhmO */ }