/* RLdaY8Baz ily traian EQJLtsT2D */ #include <algorithm>
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
/* RLdaY8Baz ily traian EQJLtsT2D */ 
/* RLdaY8Baz ily traian EQJLtsT2D */ using namespace std;
/* RLdaY8Baz ily traian EQJLtsT2D */ 
/* RLdaY8Baz ily traian EQJLtsT2D */ ifstream cin ("hex.in");
/* RLdaY8Baz ily traian EQJLtsT2D */ ofstream cout ("hex.out");
/* RLdaY8Baz ily traian EQJLtsT2D */ 
/* RLdaY8Baz ily traian EQJLtsT2D */ char hx[ ] = "0123456789ABCDEF", a[10000001];
/* RLdaY8Baz ily traian EQJLtsT2D */ int sum[10000001], ind=0;
/* RLdaY8Baz ily traian EQJLtsT2D */ int n;
/* RLdaY8Baz ily traian EQJLtsT2D */ 
/* RLdaY8Baz ily traian EQJLtsT2D */ int main()
/* RLdaY8Baz ily traian EQJLtsT2D */ {
/* RLdaY8Baz ily traian EQJLtsT2D */     cin >> a;
/* RLdaY8Baz ily traian EQJLtsT2D */     n = strlen(a);
/* RLdaY8Baz ily traian EQJLtsT2D */     for (int i = n-1; i >= n%4; i-=4)
/* RLdaY8Baz ily traian EQJLtsT2D */        sum[++ind] = (a[i-3]- '0')*8 + (a[i-2]- '0')*4  + (a[i-1]- '0')*2 + a[i]- '0';
/* RLdaY8Baz ily traian EQJLtsT2D */ 
/* RLdaY8Baz ily traian EQJLtsT2D */     switch(n%4)
/* RLdaY8Baz ily traian EQJLtsT2D */     {
/* RLdaY8Baz ily traian EQJLtsT2D */         case 1: sum[++ind] = a[0] -'0';break;
/* RLdaY8Baz ily traian EQJLtsT2D */         case 2: sum[++ind] = (a[0] - '0')*2 + (a[1] - '0');break;
/* RLdaY8Baz ily traian EQJLtsT2D */         case 3: sum[++ind] = (a[0] - '0')*4 + (a[1] - '0')*2 + a[2] - '0';break;
/* RLdaY8Baz ily traian EQJLtsT2D */     }
/* RLdaY8Baz ily traian EQJLtsT2D */     for (int i = ind; i >= 1; --i)cout << hx[sum[i]];
/* RLdaY8Baz ily traian EQJLtsT2D */     return 0;
/* RLdaY8Baz ily traian EQJLtsT2D */ }