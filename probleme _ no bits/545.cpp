/* 9MZ6ckiXy ily traian NIiaXqfbw */  #include <algorithm>
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
/* 9MZ6ckiXy ily traian NIiaXqfbw */  using namespace std;
/* 9MZ6ckiXy ily traian NIiaXqfbw */ 
/* 9MZ6ckiXy ily traian NIiaXqfbw */  ifstream cin("euler.in");
/* 9MZ6ckiXy ily traian NIiaXqfbw */  ofstream cout("euler.out");
/* 9MZ6ckiXy ily traian NIiaXqfbw */ 
/* 9MZ6ckiXy ily traian NIiaXqfbw */  int n , a[202][202] , x , y , L[40001] , cnt;
/* 9MZ6ckiXy ily traian NIiaXqfbw */ 
/* 9MZ6ckiXy ily traian NIiaXqfbw */ void Euler(int k)
/* 9MZ6ckiXy ily traian NIiaXqfbw */ {
/* 9MZ6ckiXy ily traian NIiaXqfbw */     for(int i = 1 ; i <= n ; i ++)
/* 9MZ6ckiXy ily traian NIiaXqfbw */         if(a[k][i] == 1)
/* 9MZ6ckiXy ily traian NIiaXqfbw */         {
/* 9MZ6ckiXy ily traian NIiaXqfbw */             a[k][i] = a[i][k] = 0;
/* 9MZ6ckiXy ily traian NIiaXqfbw */             Euler(i);
/* 9MZ6ckiXy ily traian NIiaXqfbw */         }
/* 9MZ6ckiXy ily traian NIiaXqfbw */     L[++cnt] = k;
/* 9MZ6ckiXy ily traian NIiaXqfbw */ }
/* 9MZ6ckiXy ily traian NIiaXqfbw */ 
/* 9MZ6ckiXy ily traian NIiaXqfbw */ int main()
/* 9MZ6ckiXy ily traian NIiaXqfbw */ {
/* 9MZ6ckiXy ily traian NIiaXqfbw */     cin >> n;
/* 9MZ6ckiXy ily traian NIiaXqfbw */     while(cin >> x >> y)
/* 9MZ6ckiXy ily traian NIiaXqfbw */         a[x][y] = a[y][x] = 1;
/* 9MZ6ckiXy ily traian NIiaXqfbw */ 
/* 9MZ6ckiXy ily traian NIiaXqfbw */     Euler(1);
/* 9MZ6ckiXy ily traian NIiaXqfbw */ 
/* 9MZ6ckiXy ily traian NIiaXqfbw */     cout << cnt << '\n';
/* 9MZ6ckiXy ily traian NIiaXqfbw */     for(int i = 1 ; i <= cnt ; i++)
/* 9MZ6ckiXy ily traian NIiaXqfbw */         cout << L[i] << " ";
/* 9MZ6ckiXy ily traian NIiaXqfbw */ }