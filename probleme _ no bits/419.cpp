/* M2agmBDC4 ily traian YZPXMQWMd */ #include <algorithm>
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
/* M2agmBDC4 ily traian YZPXMQWMd */ using namespace std;
/* M2agmBDC4 ily traian YZPXMQWMd */ ifstream fin ("subgraf1.in");
/* M2agmBDC4 ily traian YZPXMQWMd */ ofstream fout ("subgraf1.out");
/* M2agmBDC4 ily traian YZPXMQWMd */ int a[101][101] , n , p , r , m , mn = 1000000000;
/* M2agmBDC4 ily traian YZPXMQWMd */ int main()
/* M2agmBDC4 ily traian YZPXMQWMd */ {
/* M2agmBDC4 ily traian YZPXMQWMd */     fin >> n;
/* M2agmBDC4 ily traian YZPXMQWMd */     while(fin >> p >> r)
/* M2agmBDC4 ily traian YZPXMQWMd */     {
/* M2agmBDC4 ily traian YZPXMQWMd */         if (a[p][r] == 0)
/* M2agmBDC4 ily traian YZPXMQWMd */         {
/* M2agmBDC4 ily traian YZPXMQWMd */             a[p][0]++;
/* M2agmBDC4 ily traian YZPXMQWMd */             a[r][0]++;
/* M2agmBDC4 ily traian YZPXMQWMd */             m++;
/* M2agmBDC4 ily traian YZPXMQWMd */         }
/* M2agmBDC4 ily traian YZPXMQWMd */         a[p][r] = 1;
/* M2agmBDC4 ily traian YZPXMQWMd */         a[r][p] = 1;
/* M2agmBDC4 ily traian YZPXMQWMd */     }
/* M2agmBDC4 ily traian YZPXMQWMd */     for (int i = 1; i <= n; i++) mn = min(a[i][0], mn);
/* M2agmBDC4 ily traian YZPXMQWMd */     for (int i = 1; i <= n; i++)
/* M2agmBDC4 ily traian YZPXMQWMd */     {
/* M2agmBDC4 ily traian YZPXMQWMd */         if (a[i][0] == mn)
/* M2agmBDC4 ily traian YZPXMQWMd */         for (int j = 1; j <= n; j++)
/* M2agmBDC4 ily traian YZPXMQWMd */         {
/* M2agmBDC4 ily traian YZPXMQWMd */             if (a[i][j] == 1)
/* M2agmBDC4 ily traian YZPXMQWMd */             {
/* M2agmBDC4 ily traian YZPXMQWMd */                 a[i][j] = 0;
/* M2agmBDC4 ily traian YZPXMQWMd */                 m--;
/* M2agmBDC4 ily traian YZPXMQWMd */             }
/* M2agmBDC4 ily traian YZPXMQWMd */             a[j][i] = 0;
/* M2agmBDC4 ily traian YZPXMQWMd */         }
/* M2agmBDC4 ily traian YZPXMQWMd */     }
/* M2agmBDC4 ily traian YZPXMQWMd */     fout << m;
/* M2agmBDC4 ily traian YZPXMQWMd */     return 0;
/* M2agmBDC4 ily traian YZPXMQWMd */ }