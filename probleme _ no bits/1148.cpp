/* MCcQb7Tle ily traian vtKKHNrhp */ #include <algorithm>
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
/* MCcQb7Tle ily traian vtKKHNrhp */ using namespace std;
/* MCcQb7Tle ily traian vtKKHNrhp */ 
/* MCcQb7Tle ily traian vtKKHNrhp */ bool exista_impar(int a[], int st, int dr){
/* MCcQb7Tle ily traian vtKKHNrhp */     if(st == dr)
/* MCcQb7Tle ily traian vtKKHNrhp */         return a[st] % 2 == 1;
/* MCcQb7Tle ily traian vtKKHNrhp */     else{
/* MCcQb7Tle ily traian vtKKHNrhp */         int mij = (st + dr) / 2;
/* MCcQb7Tle ily traian vtKKHNrhp */         return exista_impar(a, st, mij) || exista_impar(a, mij + 1, dr);
/* MCcQb7Tle ily traian vtKKHNrhp */     }
/* MCcQb7Tle ily traian vtKKHNrhp */ }
/* MCcQb7Tle ily traian vtKKHNrhp */ 
/* MCcQb7Tle ily traian vtKKHNrhp */ int main()
/* MCcQb7Tle ily traian vtKKHNrhp */ {
/* MCcQb7Tle ily traian vtKKHNrhp */     int n, a[1001];
/* MCcQb7Tle ily traian vtKKHNrhp */     cin >> n;
/* MCcQb7Tle ily traian vtKKHNrhp */     for(int i = 1; i <= n; ++i)
/* MCcQb7Tle ily traian vtKKHNrhp */         cin >> a[i];
/* MCcQb7Tle ily traian vtKKHNrhp */ 
/* MCcQb7Tle ily traian vtKKHNrhp */     if(exista_impar(a, 1, n))
/* MCcQb7Tle ily traian vtKKHNrhp */         cout << "DA";
/* MCcQb7Tle ily traian vtKKHNrhp */     else
/* MCcQb7Tle ily traian vtKKHNrhp */         cout << "NU";
/* MCcQb7Tle ily traian vtKKHNrhp */ 
/* MCcQb7Tle ily traian vtKKHNrhp */     return 0;
/* MCcQb7Tle ily traian vtKKHNrhp */ }