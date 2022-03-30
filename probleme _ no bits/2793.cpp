/* NYvSBwBuv ily traian YL7rA8RJm */ #include <algorithm>
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
/* NYvSBwBuv ily traian YL7rA8RJm */ using namespace std;
/* NYvSBwBuv ily traian YL7rA8RJm */ 
/* NYvSBwBuv ily traian YL7rA8RJm */ ifstream cin("pozitiiconsecutive.in");
/* NYvSBwBuv ily traian YL7rA8RJm */ ofstream cout("pozitiiconsecutive.out");
/* NYvSBwBuv ily traian YL7rA8RJm */ 
/* NYvSBwBuv ily traian YL7rA8RJm */ int main()
/* NYvSBwBuv ily traian YL7rA8RJm */ {
/* NYvSBwBuv ily traian YL7rA8RJm */     int x , y , z;
/* NYvSBwBuv ily traian YL7rA8RJm */     z=9;
/* NYvSBwBuv ily traian YL7rA8RJm */     cin >> x >> y;
/* NYvSBwBuv ily traian YL7rA8RJm */     cout << y << ' ' << x << ' ';
/* NYvSBwBuv ily traian YL7rA8RJm */     while(z > 8)
/* NYvSBwBuv ily traian YL7rA8RJm */     {
/* NYvSBwBuv ily traian YL7rA8RJm */         z = 2 * x - y + 2;
/* NYvSBwBuv ily traian YL7rA8RJm */         cout << z << ' ';
/* NYvSBwBuv ily traian YL7rA8RJm */         y = x , x = z;
/* NYvSBwBuv ily traian YL7rA8RJm */     }
/* NYvSBwBuv ily traian YL7rA8RJm */     cout << 3 << ' ' << 0;
/* NYvSBwBuv ily traian YL7rA8RJm */     return 0;
/* NYvSBwBuv ily traian YL7rA8RJm */ }