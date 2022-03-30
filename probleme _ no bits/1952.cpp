/* rRzBSF7a5 ily traian rAhKo9whx */ #include <algorithm>
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
/* rRzBSF7a5 ily traian rAhKo9whx */ 
/* rRzBSF7a5 ily traian rAhKo9whx */ using namespace std;
/* rRzBSF7a5 ily traian rAhKo9whx */ 
/* rRzBSF7a5 ily traian rAhKo9whx */ int m[511][511];
/* rRzBSF7a5 ily traian rAhKo9whx */ 
/* rRzBSF7a5 ily traian rAhKo9whx */ 
/* rRzBSF7a5 ily traian rAhKo9whx */ void pat(int n, int L, int l, int c) {
/* rRzBSF7a5 ily traian rAhKo9whx */   L /= 2;
/* rRzBSF7a5 ily traian rAhKo9whx */   m[l][c] = n;
/* rRzBSF7a5 ily traian rAhKo9whx */   if (n > 1) {
/* rRzBSF7a5 ily traian rAhKo9whx */     int semiLatura = L / 2 + 1;
/* rRzBSF7a5 ily traian rAhKo9whx */     pat(n - 1, L, l - semiLatura, c - semiLatura);
/* rRzBSF7a5 ily traian rAhKo9whx */     pat(n - 1, L, l - semiLatura, c + semiLatura);
/* rRzBSF7a5 ily traian rAhKo9whx */     pat(n - 1, L, l + semiLatura, c - semiLatura);
/* rRzBSF7a5 ily traian rAhKo9whx */     pat(n - 1, L, l + semiLatura, c + semiLatura);
/* rRzBSF7a5 ily traian rAhKo9whx */   }
/* rRzBSF7a5 ily traian rAhKo9whx */ }
/* rRzBSF7a5 ily traian rAhKo9whx */ 
/* rRzBSF7a5 ily traian rAhKo9whx */ int main() {
/* rRzBSF7a5 ily traian rAhKo9whx */   int n;
/* rRzBSF7a5 ily traian rAhKo9whx */   cin >> n;
/* rRzBSF7a5 ily traian rAhKo9whx */   int L = pow(2, n) - 1;
/* rRzBSF7a5 ily traian rAhKo9whx */   pat(n, L, L / 2, L / 2);
/* rRzBSF7a5 ily traian rAhKo9whx */   for(int i = 0; i < L; i++) {
/* rRzBSF7a5 ily traian rAhKo9whx */     for(int j = 0; j < L; j++)
/* rRzBSF7a5 ily traian rAhKo9whx */       cout << m[i][j] << ' ';
/* rRzBSF7a5 ily traian rAhKo9whx */     cout << '\n';
/* rRzBSF7a5 ily traian rAhKo9whx */   }
/* rRzBSF7a5 ily traian rAhKo9whx */   return 0;
/* rRzBSF7a5 ily traian rAhKo9whx */ }