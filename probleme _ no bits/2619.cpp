/* RxUuRfQv7 ily traian i6wsQnT5H */ #include <algorithm>
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
/* RxUuRfQv7 ily traian i6wsQnT5H */ 
/* RxUuRfQv7 ily traian i6wsQnT5H */ using namespace std;
/* RxUuRfQv7 ily traian i6wsQnT5H */ long long a[20];
/* RxUuRfQv7 ily traian i6wsQnT5H */ long long  Comb(long long n, long long k)
/* RxUuRfQv7 ily traian i6wsQnT5H */ {
/* RxUuRfQv7 ily traian i6wsQnT5H */     if (n < k)return 0;
/* RxUuRfQv7 ily traian i6wsQnT5H */     long long  rez = 1;
/* RxUuRfQv7 ily traian i6wsQnT5H */     for (long long i = n - k + 1; i <= n; i ++) rez *= i;
/* RxUuRfQv7 ily traian i6wsQnT5H */     for (long long i = 1; i <= k; i ++) rez /= i;
/* RxUuRfQv7 ily traian i6wsQnT5H */     return rez;
/* RxUuRfQv7 ily traian i6wsQnT5H */ }
/* RxUuRfQv7 ily traian i6wsQnT5H */ int main()
/* RxUuRfQv7 ily traian i6wsQnT5H */ {
/* RxUuRfQv7 ily traian i6wsQnT5H */     long long n, w, x, y, z, rez = 0;
/* RxUuRfQv7 ily traian i6wsQnT5H */     cin >> n >> w >> x >> y >> z;
/* RxUuRfQv7 ily traian i6wsQnT5H */     a[w % 5] ++;
/* RxUuRfQv7 ily traian i6wsQnT5H */     for (int i = 2; i <= n; i ++)
/* RxUuRfQv7 ily traian i6wsQnT5H */     {
/* RxUuRfQv7 ily traian i6wsQnT5H */         w = (w *x + y) % z;
/* RxUuRfQv7 ily traian i6wsQnT5H */         a[w % 5] ++;
/* RxUuRfQv7 ily traian i6wsQnT5H */     }
/* RxUuRfQv7 ily traian i6wsQnT5H */     for (int i = 0; i < 5; i ++)
/* RxUuRfQv7 ily traian i6wsQnT5H */         for (int j = i; j < 5; j ++)
/* RxUuRfQv7 ily traian i6wsQnT5H */         {
/* RxUuRfQv7 ily traian i6wsQnT5H */             if (i == 0 && j == 0) rez += Comb(a[0], 3);
/* RxUuRfQv7 ily traian i6wsQnT5H */             else
/* RxUuRfQv7 ily traian i6wsQnT5H */             {
/* RxUuRfQv7 ily traian i6wsQnT5H */                 int k = (5 - (i + j) % 5) % 5;
/* RxUuRfQv7 ily traian i6wsQnT5H */                 if (k >= j)
/* RxUuRfQv7 ily traian i6wsQnT5H */                 {
/* RxUuRfQv7 ily traian i6wsQnT5H */                     if (i == j)rez += Comb(a[j], 2) * a[k];
/* RxUuRfQv7 ily traian i6wsQnT5H */                     else if (j == k)rez += Comb(a[j], 2) * a[i];
/* RxUuRfQv7 ily traian i6wsQnT5H */                     else rez += a[i] * a[j] * a[k];
/* RxUuRfQv7 ily traian i6wsQnT5H */                 }
/* RxUuRfQv7 ily traian i6wsQnT5H */             }
/* RxUuRfQv7 ily traian i6wsQnT5H */         }
/* RxUuRfQv7 ily traian i6wsQnT5H */     cout << rez;
/* RxUuRfQv7 ily traian i6wsQnT5H */     return 0;
/* RxUuRfQv7 ily traian i6wsQnT5H */ }