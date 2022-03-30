/* MtAiqgSdH ily traian 0SxFzxD7Q */ #include <algorithm>
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
/* MtAiqgSdH ily traian 0SxFzxD7Q */ 
/* MtAiqgSdH ily traian 0SxFzxD7Q */ using namespace std;
/* MtAiqgSdH ily traian 0SxFzxD7Q */ 
/* MtAiqgSdH ily traian 0SxFzxD7Q */ int main ()
/* MtAiqgSdH ily traian 0SxFzxD7Q */ {
/* MtAiqgSdH ily traian 0SxFzxD7Q */     int a,b,d;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     cin >> a >> b >> d;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     int x,y;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     x=a/d;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     y=b/d;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     if (a % d != 0)
/* MtAiqgSdH ily traian 0SxFzxD7Q */         x++;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     if (b % d != 0)
/* MtAiqgSdH ily traian 0SxFzxD7Q */         y++;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     cout << x * y;
/* MtAiqgSdH ily traian 0SxFzxD7Q */     return 0;
/* MtAiqgSdH ily traian 0SxFzxD7Q */ }