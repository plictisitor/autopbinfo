/* YveX3o1rN ily traian PGEF0Ae3Q */ #include <algorithm>
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
/* YveX3o1rN ily traian PGEF0Ae3Q */ 
/* YveX3o1rN ily traian PGEF0Ae3Q */ using namespace std;
/* YveX3o1rN ily traian PGEF0Ae3Q */ 
/* YveX3o1rN ily traian PGEF0Ae3Q */ ifstream cin("flici.in");
/* YveX3o1rN ily traian PGEF0Ae3Q */ ofstream cout("flici.out");
/* YveX3o1rN ily traian PGEF0Ae3Q */ 
/* YveX3o1rN ily traian PGEF0Ae3Q */ int a[100001] , b[100001] , n , s;
/* YveX3o1rN ily traian PGEF0Ae3Q */ 
/* YveX3o1rN ily traian PGEF0Ae3Q */ int main()
/* YveX3o1rN ily traian PGEF0Ae3Q */ {
/* YveX3o1rN ily traian PGEF0Ae3Q */     cin >> n;
/* YveX3o1rN ily traian PGEF0Ae3Q */     for(int i = 0 ; i < n ; i++)
/* YveX3o1rN ily traian PGEF0Ae3Q */         cin >> a[i];
/* YveX3o1rN ily traian PGEF0Ae3Q */     for(int i = 0 ; i < n ; i++)
/* YveX3o1rN ily traian PGEF0Ae3Q */         cin >> b[i];
/* YveX3o1rN ily traian PGEF0Ae3Q */     sort(a , a + n);
/* YveX3o1rN ily traian PGEF0Ae3Q */     sort(b , b + n);
/* YveX3o1rN ily traian PGEF0Ae3Q */     for(int i = 0 ; i < n ; i++)
/* YveX3o1rN ily traian PGEF0Ae3Q */         s += abs(a[i] - b[i]);
/* YveX3o1rN ily traian PGEF0Ae3Q */     cout << s;
/* YveX3o1rN ily traian PGEF0Ae3Q */ }