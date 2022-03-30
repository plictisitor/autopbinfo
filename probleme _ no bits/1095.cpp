/* N7PMtyMfb ily traian hicRq8BKf */ #include <algorithm>
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
/* N7PMtyMfb ily traian hicRq8BKf */ using namespace std;
/* N7PMtyMfb ily traian hicRq8BKf */ 
/* N7PMtyMfb ily traian hicRq8BKf */ ifstream fin("joc4.in");
/* N7PMtyMfb ily traian hicRq8BKf */ ofstream fout("joc4.out");
/* N7PMtyMfb ily traian hicRq8BKf */ 
/* N7PMtyMfb ily traian hicRq8BKf */ const int  Dim = 5001, Inf = 1 << 30;
/* N7PMtyMfb ily traian hicRq8BKf */ int N, K, s, smax, a[2][Dim], b[2][Dim];
/* N7PMtyMfb ily traian hicRq8BKf */ 
/* N7PMtyMfb ily traian hicRq8BKf */ int main()
/* N7PMtyMfb ily traian hicRq8BKf */ {
/* N7PMtyMfb ily traian hicRq8BKf */     fin >> N >> K;
/* N7PMtyMfb ily traian hicRq8BKf */     for(int i = 0; i < 2; i++)
/* N7PMtyMfb ily traian hicRq8BKf */         for(int j = 0; j < N; j++)
/* N7PMtyMfb ily traian hicRq8BKf */             fin >> a[i][j];
/* N7PMtyMfb ily traian hicRq8BKf */     b[0][0] = a[0][0];
/* N7PMtyMfb ily traian hicRq8BKf */     for (int j = 1; j < N; j++)
/* N7PMtyMfb ily traian hicRq8BKf */         for (int i = 0; i < 2; i++)
/* N7PMtyMfb ily traian hicRq8BKf */         {
/* N7PMtyMfb ily traian hicRq8BKf */             smax = -Inf; s = a[i][j];
/* N7PMtyMfb ily traian hicRq8BKf */             for (int k = 1; k < K && k <= j; k++)
/* N7PMtyMfb ily traian hicRq8BKf */             {
/* N7PMtyMfb ily traian hicRq8BKf */                 s += a[i][j - k];
/* N7PMtyMfb ily traian hicRq8BKf */                 smax = max(smax, s + b[1 - i][j - k]);
/* N7PMtyMfb ily traian hicRq8BKf */             }
/* N7PMtyMfb ily traian hicRq8BKf */             b[i][j] = smax;
/* N7PMtyMfb ily traian hicRq8BKf */         }
/* N7PMtyMfb ily traian hicRq8BKf */     b[1][N - 1] = max(b[1][N - 1], b[0][N - 1] + a[1][N - 1]);
/* N7PMtyMfb ily traian hicRq8BKf */     fout << b[1][N - 1];
/* N7PMtyMfb ily traian hicRq8BKf */     return 0;
/* N7PMtyMfb ily traian hicRq8BKf */ }