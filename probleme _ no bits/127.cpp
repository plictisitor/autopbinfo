/* U7qcBmIsG ily traian sltGodnZc */ #include <algorithm>
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
/* U7qcBmIsG ily traian sltGodnZc */ using namespace std;
/* U7qcBmIsG ily traian sltGodnZc */ 
/* U7qcBmIsG ily traian sltGodnZc */ int prim(int n)
/* U7qcBmIsG ily traian sltGodnZc */ {
/* U7qcBmIsG ily traian sltGodnZc */     int c;
/* U7qcBmIsG ily traian sltGodnZc */     while(n)
/* U7qcBmIsG ily traian sltGodnZc */     {
/* U7qcBmIsG ily traian sltGodnZc */         c=n%10;
/* U7qcBmIsG ily traian sltGodnZc */         n/=10;
/* U7qcBmIsG ily traian sltGodnZc */     }
/* U7qcBmIsG ily traian sltGodnZc */     return c;
/* U7qcBmIsG ily traian sltGodnZc */ }
/* U7qcBmIsG ily traian sltGodnZc */ 
/* U7qcBmIsG ily traian sltGodnZc */ int main()
/* U7qcBmIsG ily traian sltGodnZc */ {
/* U7qcBmIsG ily traian sltGodnZc */     int n;
/* U7qcBmIsG ily traian sltGodnZc */     cin >> n;
/* U7qcBmIsG ily traian sltGodnZc */     int a[1001];
/* U7qcBmIsG ily traian sltGodnZc */     int s=0;
/* U7qcBmIsG ily traian sltGodnZc */     for (int i = 0 ; i < n ; ++i)
/* U7qcBmIsG ily traian sltGodnZc */     {
/* U7qcBmIsG ily traian sltGodnZc */         cin >> a[i];
/* U7qcBmIsG ily traian sltGodnZc */         s+=prim(a[i]);
/* U7qcBmIsG ily traian sltGodnZc */     }
/* U7qcBmIsG ily traian sltGodnZc */     cout << s;
/* U7qcBmIsG ily traian sltGodnZc */ }