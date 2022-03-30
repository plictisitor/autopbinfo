/* Yd20VH7f7 ily traian ICSKFOIYM */ #include <algorithm>
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
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */ using namespace std;
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */ #define Max 1001
/* Yd20VH7f7 ily traian ICSKFOIYM */ #define DecodMax 100001
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */ char a[Max], r[DecodMax];
/* Yd20VH7f7 ily traian ICSKFOIYM */ deque< pair<int, int> > Q;
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */ int main()
/* Yd20VH7f7 ily traian ICSKFOIYM */ {
/* Yd20VH7f7 ily traian ICSKFOIYM */     cin >> a;
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */     int n = strlen(a), nr = 0, ind = 0, rep, indinit;
/* Yd20VH7f7 ily traian ICSKFOIYM */     for (int i = 0; i < n; ++ i)
/* Yd20VH7f7 ily traian ICSKFOIYM */     {
/* Yd20VH7f7 ily traian ICSKFOIYM */         if (a[i] <= '9' && a[i] >= '0')
/* Yd20VH7f7 ily traian ICSKFOIYM */             nr = nr * 10 + a[i] - '0';
/* Yd20VH7f7 ily traian ICSKFOIYM */         else if (a[i] == '[')
/* Yd20VH7f7 ily traian ICSKFOIYM */             Q.push_back(make_pair(ind, nr)), nr = 0;
/* Yd20VH7f7 ily traian ICSKFOIYM */         else if (a[i] == ']')
/* Yd20VH7f7 ily traian ICSKFOIYM */         {
/* Yd20VH7f7 ily traian ICSKFOIYM */             rep = Q.back().second;
/* Yd20VH7f7 ily traian ICSKFOIYM */             indinit = ind;
/* Yd20VH7f7 ily traian ICSKFOIYM */             while (-- rep)
/* Yd20VH7f7 ily traian ICSKFOIYM */                 for (int j = Q.back().first; j < indinit; j ++)
/* Yd20VH7f7 ily traian ICSKFOIYM */                     r[ind ++] = r[j];
/* Yd20VH7f7 ily traian ICSKFOIYM */ 
/* Yd20VH7f7 ily traian ICSKFOIYM */             Q.pop_back();
/* Yd20VH7f7 ily traian ICSKFOIYM */         }
/* Yd20VH7f7 ily traian ICSKFOIYM */         else
/* Yd20VH7f7 ily traian ICSKFOIYM */             r[ind ++] = a[i];
/* Yd20VH7f7 ily traian ICSKFOIYM */     }
/* Yd20VH7f7 ily traian ICSKFOIYM */     cout << r;
/* Yd20VH7f7 ily traian ICSKFOIYM */ }