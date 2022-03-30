/* vdwegm7tP ily traian 5u24Br71f */ #include <algorithm>
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
/* vdwegm7tP ily traian 5u24Br71f */ using namespace std;
/* vdwegm7tP ily traian 5u24Br71f */ ifstream cin("produsxl.in");
/* vdwegm7tP ily traian 5u24Br71f */ ofstream cout("produsxl.out");
/* vdwegm7tP ily traian 5u24Br71f */ int main()
/* vdwegm7tP ily traian 5u24Br71f */ {
/* vdwegm7tP ily traian 5u24Br71f */     int n ,m , a[500]={0} , t = 0;
/* vdwegm7tP ily traian 5u24Br71f */     cin >> n;
/* vdwegm7tP ily traian 5u24Br71f */     for(int i = n ; i >= 1 ; --i)
/* vdwegm7tP ily traian 5u24Br71f */         cin >> a[i];
/* vdwegm7tP ily traian 5u24Br71f */     cin >> m;
/* vdwegm7tP ily traian 5u24Br71f */     for(int i = 1; i <= n ; i++)
/* vdwegm7tP ily traian 5u24Br71f */     {
/* vdwegm7tP ily traian 5u24Br71f */         long long c = 1LL * a[i] * m + t;
/* vdwegm7tP ily traian 5u24Br71f */         a[i] = c % 10;
/* vdwegm7tP ily traian 5u24Br71f */         t = c / 10;
/* vdwegm7tP ily traian 5u24Br71f */     }
/* vdwegm7tP ily traian 5u24Br71f */     while(t)
/* vdwegm7tP ily traian 5u24Br71f */     {
/* vdwegm7tP ily traian 5u24Br71f */         a[++n]=t%10;
/* vdwegm7tP ily traian 5u24Br71f */         t/=10;
/* vdwegm7tP ily traian 5u24Br71f */     }
/* vdwegm7tP ily traian 5u24Br71f */     if(m==0) cout << 0;
/* vdwegm7tP ily traian 5u24Br71f */     else
/* vdwegm7tP ily traian 5u24Br71f */     for(int i = n; i >= 1; i--)
/* vdwegm7tP ily traian 5u24Br71f */         cout << a[i];
/* vdwegm7tP ily traian 5u24Br71f */     return 0;
/* vdwegm7tP ily traian 5u24Br71f */ }