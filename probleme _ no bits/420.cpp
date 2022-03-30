/* OKKDegeBG ily traian uM6Eqnvli */ #include <algorithm>
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
/* OKKDegeBG ily traian uM6Eqnvli */ using namespace std;
/* OKKDegeBG ily traian uM6Eqnvli */ ifstream fin("graf_partial.in");
/* OKKDegeBG ily traian uM6Eqnvli */ ofstream fout("graf_partial.out");
/* OKKDegeBG ily traian uM6Eqnvli */ int a[105][105];
/* OKKDegeBG ily traian uM6Eqnvli */ int main()
/* OKKDegeBG ily traian uM6Eqnvli */ {
/* OKKDegeBG ily traian uM6Eqnvli */     int n , x , y , nrm = 0;
/* OKKDegeBG ily traian uM6Eqnvli */     fin >> n;
/* OKKDegeBG ily traian uM6Eqnvli */     while(fin >> x >> y)
/* OKKDegeBG ily traian uM6Eqnvli */     {
/* OKKDegeBG ily traian uM6Eqnvli */         if (!a[x][y])nrm++;
/* OKKDegeBG ily traian uM6Eqnvli */         a[x][y]=1;
/* OKKDegeBG ily traian uM6Eqnvli */         a[y][x]=1;
/* OKKDegeBG ily traian uM6Eqnvli */     }
/* OKKDegeBG ily traian uM6Eqnvli */     for (int i = 1; i <= n; i++)
/* OKKDegeBG ily traian uM6Eqnvli */     {
/* OKKDegeBG ily traian uM6Eqnvli */         for(int j = 1 ; j <= n ; ++j)
/* OKKDegeBG ily traian uM6Eqnvli */         {
/* OKKDegeBG ily traian uM6Eqnvli */             if(i % 2 == j % 2 && a[i][j] == 1)
/* OKKDegeBG ily traian uM6Eqnvli */             {
/* OKKDegeBG ily traian uM6Eqnvli */                 a[i][j] = 0;
/* OKKDegeBG ily traian uM6Eqnvli */                 a[j][i] = 0;
/* OKKDegeBG ily traian uM6Eqnvli */                 nrm--;
/* OKKDegeBG ily traian uM6Eqnvli */             }
/* OKKDegeBG ily traian uM6Eqnvli */         }
/* OKKDegeBG ily traian uM6Eqnvli */     }
/* OKKDegeBG ily traian uM6Eqnvli */     fout << nrm;
/* OKKDegeBG ily traian uM6Eqnvli */     return 0;
/* OKKDegeBG ily traian uM6Eqnvli */ }