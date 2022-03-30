/* YjuVkpesu ily traian hcMSEJS7w */ #include <algorithm>
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
/* YjuVkpesu ily traian hcMSEJS7w */ using namespace std;
/* YjuVkpesu ily traian hcMSEJS7w */ int main()
/* YjuVkpesu ily traian hcMSEJS7w */ {
/* YjuVkpesu ily traian hcMSEJS7w */     int n , a[501][501] , sc1 = 0 , sc2 = 0 , f[250001] = {0};
/* YjuVkpesu ily traian hcMSEJS7w */     cin >> n;
/* YjuVkpesu ily traian hcMSEJS7w */     for(int i = 1 ; i <= n ; i++)
/* YjuVkpesu ily traian hcMSEJS7w */     {
/* YjuVkpesu ily traian hcMSEJS7w */         for(int j = 1 ; j <= n ; j++)
/* YjuVkpesu ily traian hcMSEJS7w */         {
/* YjuVkpesu ily traian hcMSEJS7w */             cin >> a[i][j];
/* YjuVkpesu ily traian hcMSEJS7w */             f[a[i][j]]++;
/* YjuVkpesu ily traian hcMSEJS7w */             if(a[i][j] > n * n) {cout << "false";return 0;}
/* YjuVkpesu ily traian hcMSEJS7w */             if(f[a[i][j]] > 1) {cout << "false";return 0;}
/* YjuVkpesu ily traian hcMSEJS7w */             if(i == j) sc1 += a[i][j];
/* YjuVkpesu ily traian hcMSEJS7w */             if(i + j == n + 1) sc2 += a[i][j];
/* YjuVkpesu ily traian hcMSEJS7w */         }
/* YjuVkpesu ily traian hcMSEJS7w */     }
/* YjuVkpesu ily traian hcMSEJS7w */     for(int i = 1 ; i <= n * n ; i++)
/* YjuVkpesu ily traian hcMSEJS7w */         if(f[i] == 0) {cout << "false";return 0;}
/* YjuVkpesu ily traian hcMSEJS7w */     if(sc1 != sc2) cout << "false";
/* YjuVkpesu ily traian hcMSEJS7w */     else
/* YjuVkpesu ily traian hcMSEJS7w */     {
/* YjuVkpesu ily traian hcMSEJS7w */         for(int i = 1 ; i <= n ; i++)
/* YjuVkpesu ily traian hcMSEJS7w */         {
/* YjuVkpesu ily traian hcMSEJS7w */             int s = 0;
/* YjuVkpesu ily traian hcMSEJS7w */             for(int j = 1 ; j <= n ; j++)
/* YjuVkpesu ily traian hcMSEJS7w */                 s += a[i][j];
/* YjuVkpesu ily traian hcMSEJS7w */             if(s != sc1)
/* YjuVkpesu ily traian hcMSEJS7w */             {
/* YjuVkpesu ily traian hcMSEJS7w */                 cout << "false";
/* YjuVkpesu ily traian hcMSEJS7w */                 return 0;
/* YjuVkpesu ily traian hcMSEJS7w */             }
/* YjuVkpesu ily traian hcMSEJS7w */         }
/* YjuVkpesu ily traian hcMSEJS7w */         for(int i = 1 ; i <= n ; i++)
/* YjuVkpesu ily traian hcMSEJS7w */         {
/* YjuVkpesu ily traian hcMSEJS7w */             int s = 0;
/* YjuVkpesu ily traian hcMSEJS7w */             for(int j = 1 ; j <= n ; j++)
/* YjuVkpesu ily traian hcMSEJS7w */                 s += a[j][i];
/* YjuVkpesu ily traian hcMSEJS7w */             if(s != sc1)
/* YjuVkpesu ily traian hcMSEJS7w */             {
/* YjuVkpesu ily traian hcMSEJS7w */                 cout << "false";
/* YjuVkpesu ily traian hcMSEJS7w */                 return 0;
/* YjuVkpesu ily traian hcMSEJS7w */             }
/* YjuVkpesu ily traian hcMSEJS7w */         }
/* YjuVkpesu ily traian hcMSEJS7w */         cout << "true";
/* YjuVkpesu ily traian hcMSEJS7w */     }
/* YjuVkpesu ily traian hcMSEJS7w */     return 0;
/* YjuVkpesu ily traian hcMSEJS7w */ }