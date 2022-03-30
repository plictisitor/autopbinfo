/* po1yh6Jro ily traian Zybg79PuA */ #include <algorithm>
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
/* po1yh6Jro ily traian Zybg79PuA */ using namespace std;
/* po1yh6Jro ily traian Zybg79PuA */ 
/* po1yh6Jro ily traian Zybg79PuA */ int main()
/* po1yh6Jro ily traian Zybg79PuA */ {
/* po1yh6Jro ily traian Zybg79PuA */     int n,cnt=0,cn=0;
/* po1yh6Jro ily traian Zybg79PuA */     int a[101];
/* po1yh6Jro ily traian Zybg79PuA */     cin >> n;
/* po1yh6Jro ily traian Zybg79PuA */     for (int i = 0; i < n; ++i)
/* po1yh6Jro ily traian Zybg79PuA */     {
/* po1yh6Jro ily traian Zybg79PuA */         cin >> a[i];
/* po1yh6Jro ily traian Zybg79PuA */         while (a[i])
/* po1yh6Jro ily traian Zybg79PuA */         a[i]/=10,cnt++;
/* po1yh6Jro ily traian Zybg79PuA */         if (cnt%2==0)
/* po1yh6Jro ily traian Zybg79PuA */         cn++;
/* po1yh6Jro ily traian Zybg79PuA */         cnt=0;
/* po1yh6Jro ily traian Zybg79PuA */     }
/* po1yh6Jro ily traian Zybg79PuA */     if (cn==n)
/* po1yh6Jro ily traian Zybg79PuA */     cout << "DA";
/* po1yh6Jro ily traian Zybg79PuA */     else
/* po1yh6Jro ily traian Zybg79PuA */     cout << "NU";
/* po1yh6Jro ily traian Zybg79PuA */ }