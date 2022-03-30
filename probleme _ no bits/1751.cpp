/* 3W0CNGPO7 ily traian QErBpImpp */ #include <algorithm>
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
/* 3W0CNGPO7 ily traian QErBpImpp */ using namespace std;
/* 3W0CNGPO7 ily traian QErBpImpp */ int a[1001][1001];
/* 3W0CNGPO7 ily traian QErBpImpp */ int di[]={-1, -1, 1, 1};
/* 3W0CNGPO7 ily traian QErBpImpp */ int dj[]={-1, 1, -1, 1};
/* 3W0CNGPO7 ily traian QErBpImpp */ int main()
/* 3W0CNGPO7 ily traian QErBpImpp */ {
/* 3W0CNGPO7 ily traian QErBpImpp */     int n , s , cnt=0 , i , j , nr;
/* 3W0CNGPO7 ily traian QErBpImpp */     cin >> n >> s;
/* 3W0CNGPO7 ily traian QErBpImpp */     for(int h = 1; h <= s; h++)
/* 3W0CNGPO7 ily traian QErBpImpp */     {
/* 3W0CNGPO7 ily traian QErBpImpp */         cin >> i >> j >> nr;
/* 3W0CNGPO7 ily traian QErBpImpp */         a[i][j] = 1;
/* 3W0CNGPO7 ily traian QErBpImpp */         for(int k = 1; k <= nr; k++)
/* 3W0CNGPO7 ily traian QErBpImpp */             for(int q = 0; q < 4; q++)
/* 3W0CNGPO7 ily traian QErBpImpp */             {
/* 3W0CNGPO7 ily traian QErBpImpp */                 int i1 = i + k * di[q];
/* 3W0CNGPO7 ily traian QErBpImpp */                 int j1 = j + k * dj[q];
/* 3W0CNGPO7 ily traian QErBpImpp */                 if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n)
/* 3W0CNGPO7 ily traian QErBpImpp */                     a[i1][j1] = 1;
/* 3W0CNGPO7 ily traian QErBpImpp */             }
/* 3W0CNGPO7 ily traian QErBpImpp */     }
/* 3W0CNGPO7 ily traian QErBpImpp */     for(int i = 1; i <= n; i++)
/* 3W0CNGPO7 ily traian QErBpImpp */        for(int j = 1; j <= n; j++)
/* 3W0CNGPO7 ily traian QErBpImpp */         if(a[i][j] == 1)
/* 3W0CNGPO7 ily traian QErBpImpp */             cnt++;
/* 3W0CNGPO7 ily traian QErBpImpp */     cout << n * n - cnt;
/* 3W0CNGPO7 ily traian QErBpImpp */     return 0;
/* 3W0CNGPO7 ily traian QErBpImpp */ }