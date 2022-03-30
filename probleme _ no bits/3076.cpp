/* DHbkmiBmG ily traian ipr51K79g */ #include <algorithm>
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
/* DHbkmiBmG ily traian ipr51K79g */ using namespace std;
/* DHbkmiBmG ily traian ipr51K79g */ 
/* DHbkmiBmG ily traian ipr51K79g */ int main()
/* DHbkmiBmG ily traian ipr51K79g */ {
/* DHbkmiBmG ily traian ipr51K79g */     int n;
/* DHbkmiBmG ily traian ipr51K79g */     cin >> n;
/* DHbkmiBmG ily traian ipr51K79g */     int s = 0;
/* DHbkmiBmG ily traian ipr51K79g */     int cnt = 0;
/* DHbkmiBmG ily traian ipr51K79g */     while(n)
/* DHbkmiBmG ily traian ipr51K79g */     {
/* DHbkmiBmG ily traian ipr51K79g */         s+=n%10;
/* DHbkmiBmG ily traian ipr51K79g */         n/=10;
/* DHbkmiBmG ily traian ipr51K79g */         cnt++;
/* DHbkmiBmG ily traian ipr51K79g */     }
/* DHbkmiBmG ily traian ipr51K79g */     long long int nr = 0;
/* DHbkmiBmG ily traian ipr51K79g */     int tr = 0;
/* DHbkmiBmG ily traian ipr51K79g */     int a[20];
/* DHbkmiBmG ily traian ipr51K79g */     for(int i = cnt; i > 0; --i)
/* DHbkmiBmG ily traian ipr51K79g */         a[i] = (s + tr) % 10, tr = (s+tr) / 10;
/* DHbkmiBmG ily traian ipr51K79g */     if(tr != 0)
/* DHbkmiBmG ily traian ipr51K79g */         cout << tr;
/* DHbkmiBmG ily traian ipr51K79g */     for(int i = 1; i <= cnt; ++i)
/* DHbkmiBmG ily traian ipr51K79g */         cout << a[i];
/* DHbkmiBmG ily traian ipr51K79g */     return 0;
/* DHbkmiBmG ily traian ipr51K79g */ }