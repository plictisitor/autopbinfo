/* QO6sEIDce ily traian b8YTSX3zd */ #include <algorithm>
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
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */ using namespace std;
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */ ifstream cin ("varf.in");
/* QO6sEIDce ily traian b8YTSX3zd */ ofstream cout ("varf.out");
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */ int a[12], n, rez[12], cnt;
/* QO6sEIDce ily traian b8YTSX3zd */ vector< vector<int> > nextmin, nextmax;
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */ void afis(int n)
/* QO6sEIDce ily traian b8YTSX3zd */ {
/* QO6sEIDce ily traian b8YTSX3zd */     cnt ++;
/* QO6sEIDce ily traian b8YTSX3zd */     for (int i = 1; i <= n; ++ i)
/* QO6sEIDce ily traian b8YTSX3zd */         cout << rez[i] << ' ';
/* QO6sEIDce ily traian b8YTSX3zd */     cout << '\n';
/* QO6sEIDce ily traian b8YTSX3zd */ }
/* QO6sEIDce ily traian b8YTSX3zd */ void backt(int i, int ind, int varf)
/* QO6sEIDce ily traian b8YTSX3zd */ {
/* QO6sEIDce ily traian b8YTSX3zd */     if (ind == 0)
/* QO6sEIDce ily traian b8YTSX3zd */     {
/* QO6sEIDce ily traian b8YTSX3zd */         for (int i = 1; i <= n; i ++)
/* QO6sEIDce ily traian b8YTSX3zd */         {
/* QO6sEIDce ily traian b8YTSX3zd */             rez[ind + 1] = a[i];
/* QO6sEIDce ily traian b8YTSX3zd */             backt(i, ind + 1, varf);
/* QO6sEIDce ily traian b8YTSX3zd */         }
/* QO6sEIDce ily traian b8YTSX3zd */     }
/* QO6sEIDce ily traian b8YTSX3zd */     else if (varf == 0)
/* QO6sEIDce ily traian b8YTSX3zd */     {
/* QO6sEIDce ily traian b8YTSX3zd */         if (ind != 1)
/* QO6sEIDce ily traian b8YTSX3zd */         {
/* QO6sEIDce ily traian b8YTSX3zd */             for (int j = i + 1; j <= n; j ++)
/* QO6sEIDce ily traian b8YTSX3zd */             {
/* QO6sEIDce ily traian b8YTSX3zd */                 rez[ind + 1] = a[j];
/* QO6sEIDce ily traian b8YTSX3zd */                 if (a[i] < a[j])backt(j, ind + 1, 0);
/* QO6sEIDce ily traian b8YTSX3zd */                 else backt(j, ind + 1, 1);
/* QO6sEIDce ily traian b8YTSX3zd */             }
/* QO6sEIDce ily traian b8YTSX3zd */         }
/* QO6sEIDce ily traian b8YTSX3zd */         else
/* QO6sEIDce ily traian b8YTSX3zd */         {
/* QO6sEIDce ily traian b8YTSX3zd */             for (int j = 0; j < nextmax[i].size(); j ++)
/* QO6sEIDce ily traian b8YTSX3zd */             {
/* QO6sEIDce ily traian b8YTSX3zd */                 rez[ind + 1] = a[nextmax[i][j]];
/* QO6sEIDce ily traian b8YTSX3zd */                 backt(nextmax[i][j], ind + 1, varf);
/* QO6sEIDce ily traian b8YTSX3zd */             }
/* QO6sEIDce ily traian b8YTSX3zd */         }
/* QO6sEIDce ily traian b8YTSX3zd */     }
/* QO6sEIDce ily traian b8YTSX3zd */     else
/* QO6sEIDce ily traian b8YTSX3zd */     {
/* QO6sEIDce ily traian b8YTSX3zd */         afis(ind);
/* QO6sEIDce ily traian b8YTSX3zd */         for (int j = 0; j < nextmin[i].size(); j ++)
/* QO6sEIDce ily traian b8YTSX3zd */         {
/* QO6sEIDce ily traian b8YTSX3zd */             rez[ind + 1] = a[nextmin[i][j]];
/* QO6sEIDce ily traian b8YTSX3zd */             backt(nextmin[i][j], ind + 1, varf);
/* QO6sEIDce ily traian b8YTSX3zd */         }
/* QO6sEIDce ily traian b8YTSX3zd */     }
/* QO6sEIDce ily traian b8YTSX3zd */ }
/* QO6sEIDce ily traian b8YTSX3zd */ int main()
/* QO6sEIDce ily traian b8YTSX3zd */ {
/* QO6sEIDce ily traian b8YTSX3zd */     cin >> n;
/* QO6sEIDce ily traian b8YTSX3zd */     for (int i = 1; i <= n; i ++)
/* QO6sEIDce ily traian b8YTSX3zd */         cin >> a[i];
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */     nextmin = nextmax = vector< vector<int> >(n + 1);
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */     for (int i = 1; i <= n; i ++)
/* QO6sEIDce ily traian b8YTSX3zd */         for (int j = i + 1; j <= n; j ++)
/* QO6sEIDce ily traian b8YTSX3zd */             if (a[i] < a[j])nextmax[i].push_back(j);
/* QO6sEIDce ily traian b8YTSX3zd */             else if (a[i] > a[j])nextmin[i].push_back(j);
/* QO6sEIDce ily traian b8YTSX3zd */ 
/* QO6sEIDce ily traian b8YTSX3zd */     backt(1, 0, 0);
/* QO6sEIDce ily traian b8YTSX3zd */     if (cnt == 0)cout << '0';
/* QO6sEIDce ily traian b8YTSX3zd */     return 0;
/* QO6sEIDce ily traian b8YTSX3zd */ }