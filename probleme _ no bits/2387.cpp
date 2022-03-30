/* 0B4zt0NjX ily traian OQ5IQUKHj */ #include <algorithm>
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
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ using namespace std;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ ifstream cin("mosia1.in");
/* 0B4zt0NjX ily traian OQ5IQUKHj */ ofstream cout("mosia1.out");
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ struct punct
/* 0B4zt0NjX ily traian OQ5IQUKHj */ {
/* 0B4zt0NjX ily traian OQ5IQUKHj */     int x, y, d;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ }v[1003];
/* 0B4zt0NjX ily traian OQ5IQUKHj */ double d1[1003] , d2[1003] , X , Y;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ int n;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ bool comp(punct a, punct b)
/* 0B4zt0NjX ily traian OQ5IQUKHj */ {
/* 0B4zt0NjX ily traian OQ5IQUKHj */     return atan2(a.y - Y , a.x - X) < atan2(b.y - Y , b.x - X);
/* 0B4zt0NjX ily traian OQ5IQUKHj */ }
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ double dist(punct a, punct b)
/* 0B4zt0NjX ily traian OQ5IQUKHj */ {
/* 0B4zt0NjX ily traian OQ5IQUKHj */     int dx = a.x - b.x , dy = a.y - b.y;
/* 0B4zt0NjX ily traian OQ5IQUKHj */     return sqrt(dx * dx + dy * dy);
/* 0B4zt0NjX ily traian OQ5IQUKHj */ }
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ int main()
/* 0B4zt0NjX ily traian OQ5IQUKHj */ {
/* 0B4zt0NjX ily traian OQ5IQUKHj */     cin >> n;
/* 0B4zt0NjX ily traian OQ5IQUKHj */     for (int i = 1; i <= n; ++i)
/* 0B4zt0NjX ily traian OQ5IQUKHj */     {
/* 0B4zt0NjX ily traian OQ5IQUKHj */         cin >> v[i].x >> v[i].y >> v[i].d;
/* 0B4zt0NjX ily traian OQ5IQUKHj */         X += v[i].x;
/* 0B4zt0NjX ily traian OQ5IQUKHj */         Y += v[i].y;
/* 0B4zt0NjX ily traian OQ5IQUKHj */     }
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     X /= n;
/* 0B4zt0NjX ily traian OQ5IQUKHj */     Y /= n;
/* 0B4zt0NjX ily traian OQ5IQUKHj */     sort(v + 1, v + n + 1, comp);
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     v[0] = v[n];
/* 0B4zt0NjX ily traian OQ5IQUKHj */     v[n + 1] = v[1];
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     for (int i = 1; i <= n; ++i)
/* 0B4zt0NjX ily traian OQ5IQUKHj */         d1[i] = d2[i] = v[i].d * dist(v[i - 1], v[i + 1]) / 2;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     d1[n] = d2[1] = 0;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     for(int i = 2 ; i <= n ; ++i)
/* 0B4zt0NjX ily traian OQ5IQUKHj */     {
/* 0B4zt0NjX ily traian OQ5IQUKHj */         d1[i] = max(d1[i - 1], d1[i] + d1[i - 2]);
/* 0B4zt0NjX ily traian OQ5IQUKHj */         d2[i] = max(d2[i - 1], d2[i] + d2[i - 2]);
/* 0B4zt0NjX ily traian OQ5IQUKHj */     }
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     cout << fixed << setprecision(4) << max(d1[n], d2[n]);
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */     return 0;
/* 0B4zt0NjX ily traian OQ5IQUKHj */ 
/* 0B4zt0NjX ily traian OQ5IQUKHj */ }