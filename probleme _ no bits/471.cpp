/* Nrbf1hIq6 ily traian 7dvg4jT3o */ #include <algorithm>
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
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ using namespace std;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ ifstream fin ("bipartit.in");
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ ofstream fout ("bipartit.out");
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ int a[101][101], n, m , x, y, k , v[2500];
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ int main()
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     int ok = 0;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     fin >> n >> m;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     for(int i = 1 ; i <= m ; ++i)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         fin >> x >> y;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         if (a[x][y] == 0)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */             a[x][0]++;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */             a[y][0]++;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         }
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         a[x][y] = 1;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         a[y][x] = 1;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     }
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     fin >> k;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     for(int i = 1 ; i <= k ; ++i)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         fin >> v[i];
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     for(int i = 1 ; i <= n ; ++i)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         for(int j = 1 ; j <= n ; ++j)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */             for(int p = 1 ; p <= k ; ++p)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */             {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */                 if(v[p] == i || v[p] == j)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */                     a[i][j] = 0;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */             }
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         }
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     }
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     for (int i = 1; i <= n; i++)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     {
/* Nrbf1hIq6 ily traian 7dvg4jT3o */         for (int j = 1; j <= n; j++)
/* Nrbf1hIq6 ily traian 7dvg4jT3o */             if(a[i][j] == 1) ok = 1;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     }
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     if(ok == 1) fout << "NU";
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     else fout << "DA";
/* Nrbf1hIq6 ily traian 7dvg4jT3o */     return 0;
/* Nrbf1hIq6 ily traian 7dvg4jT3o */ }