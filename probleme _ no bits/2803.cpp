/* j9XDDBiFO ily traian ZPoN6ITNh */ #include <algorithm>
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
/* j9XDDBiFO ily traian ZPoN6ITNh */ 
/* j9XDDBiFO ily traian ZPoN6ITNh */ using namespace std;
/* j9XDDBiFO ily traian ZPoN6ITNh */ 
/* j9XDDBiFO ily traian ZPoN6ITNh */ int main()
/* j9XDDBiFO ily traian ZPoN6ITNh */ {
/* j9XDDBiFO ily traian ZPoN6ITNh */     int l;
/* j9XDDBiFO ily traian ZPoN6ITNh */     cin >> l;
/* j9XDDBiFO ily traian ZPoN6ITNh */     char s[300];
/* j9XDDBiFO ily traian ZPoN6ITNh */     cin >> s;
/* j9XDDBiFO ily traian ZPoN6ITNh */     int n = strlen(s);
/* j9XDDBiFO ily traian ZPoN6ITNh */     for(int i = 0 ; i <= n-l ; ++i)
/* j9XDDBiFO ily traian ZPoN6ITNh */     {
/* j9XDDBiFO ily traian ZPoN6ITNh */         for(int j = 0 ; j < n ; ++j)
/* j9XDDBiFO ily traian ZPoN6ITNh */             if(j < i || j >= i + l)
/* j9XDDBiFO ily traian ZPoN6ITNh */                 cout << s[j];
/* j9XDDBiFO ily traian ZPoN6ITNh */         cout << endl;
/* j9XDDBiFO ily traian ZPoN6ITNh */     }
/* j9XDDBiFO ily traian ZPoN6ITNh */ }