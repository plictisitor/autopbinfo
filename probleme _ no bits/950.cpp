/* BbSTeUA8H ily traian w81ieVk9o */ #include <algorithm>
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
/* BbSTeUA8H ily traian w81ieVk9o */ 
/* BbSTeUA8H ily traian w81ieVk9o */ using namespace std;
/* BbSTeUA8H ily traian w81ieVk9o */ 
/* BbSTeUA8H ily traian w81ieVk9o */ ifstream cin("cerc3.in");
/* BbSTeUA8H ily traian w81ieVk9o */ ofstream cout("cerc3.out");
/* BbSTeUA8H ily traian w81ieVk9o */ 
/* BbSTeUA8H ily traian w81ieVk9o */ struct elem
/* BbSTeUA8H ily traian w81ieVk9o */ {
/* BbSTeUA8H ily traian w81ieVk9o */     int i , j;
/* BbSTeUA8H ily traian w81ieVk9o */ }v[501];
/* BbSTeUA8H ily traian w81ieVk9o */ 
/* BbSTeUA8H ily traian w81ieVk9o */ int comp(elem a , elem b)
/* BbSTeUA8H ily traian w81ieVk9o */ {
/* BbSTeUA8H ily traian w81ieVk9o */     return a.j < b.j || a.j == b.j && a.i < b.i;
/* BbSTeUA8H ily traian w81ieVk9o */ }
/* BbSTeUA8H ily traian w81ieVk9o */ 
/* BbSTeUA8H ily traian w81ieVk9o */ int main()
/* BbSTeUA8H ily traian w81ieVk9o */ {
/* BbSTeUA8H ily traian w81ieVk9o */     int n , cnt = 0 , a , b , inceput = -200;
/* BbSTeUA8H ily traian w81ieVk9o */     cin >> n;
/* BbSTeUA8H ily traian w81ieVk9o */     for(int i = 1 ; i <= n ; i++)
/* BbSTeUA8H ily traian w81ieVk9o */     {
/* BbSTeUA8H ily traian w81ieVk9o */         cin >> a >> b;
/* BbSTeUA8H ily traian w81ieVk9o */         v[i].i = a - b;
/* BbSTeUA8H ily traian w81ieVk9o */         v[i].j = a + b;
/* BbSTeUA8H ily traian w81ieVk9o */     }
/* BbSTeUA8H ily traian w81ieVk9o */     sort(v + 1 , v + n + 1 , comp);
/* BbSTeUA8H ily traian w81ieVk9o */ 
/* BbSTeUA8H ily traian w81ieVk9o */     for(int i = 1 ; i <= n ; i++)
/* BbSTeUA8H ily traian w81ieVk9o */         if(v[i].i > inceput)
/* BbSTeUA8H ily traian w81ieVk9o */         {
/* BbSTeUA8H ily traian w81ieVk9o */             inceput = v[i].j;
/* BbSTeUA8H ily traian w81ieVk9o */             cnt++;
/* BbSTeUA8H ily traian w81ieVk9o */         }
/* BbSTeUA8H ily traian w81ieVk9o */     cout << cnt;
/* BbSTeUA8H ily traian w81ieVk9o */ }