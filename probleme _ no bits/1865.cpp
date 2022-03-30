/* KqzSHaDKX ily traian COUb1GwXW */ #include <algorithm>
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
/* KqzSHaDKX ily traian COUb1GwXW */ using namespace std;
/* KqzSHaDKX ily traian COUb1GwXW */ 
/* KqzSHaDKX ily traian COUb1GwXW */ ifstream cin("summit.in");
/* KqzSHaDKX ily traian COUb1GwXW */ ofstream cout("summit.out");
/* KqzSHaDKX ily traian COUb1GwXW */ 
/* KqzSHaDKX ily traian COUb1GwXW */ long long int s[1000001];
/* KqzSHaDKX ily traian COUb1GwXW */ 
/* KqzSHaDKX ily traian COUb1GwXW */ int cb(int n , int i)
/* KqzSHaDKX ily traian COUb1GwXW */ {
/* KqzSHaDKX ily traian COUb1GwXW */     int st = 1 , dr = i;
/* KqzSHaDKX ily traian COUb1GwXW */     while(st <= dr)
/* KqzSHaDKX ily traian COUb1GwXW */     {
/* KqzSHaDKX ily traian COUb1GwXW */         int mij = (st + dr) / 2;
/* KqzSHaDKX ily traian COUb1GwXW */         if(s[mij]==n)
/* KqzSHaDKX ily traian COUb1GwXW */             return mij;
/* KqzSHaDKX ily traian COUb1GwXW */         if(s[mij]<n)
/* KqzSHaDKX ily traian COUb1GwXW */             st = mij + 1;
/* KqzSHaDKX ily traian COUb1GwXW */         else
/* KqzSHaDKX ily traian COUb1GwXW */             dr = mij - 1;
/* KqzSHaDKX ily traian COUb1GwXW */     }
/* KqzSHaDKX ily traian COUb1GwXW */     return 0;
/* KqzSHaDKX ily traian COUb1GwXW */ }
/* KqzSHaDKX ily traian COUb1GwXW */ 
/* KqzSHaDKX ily traian COUb1GwXW */ int main()
/* KqzSHaDKX ily traian COUb1GwXW */ {
/* KqzSHaDKX ily traian COUb1GwXW */     int n;
/* KqzSHaDKX ily traian COUb1GwXW */     cin >> n;
/* KqzSHaDKX ily traian COUb1GwXW */     int x;
/* KqzSHaDKX ily traian COUb1GwXW */     for(int i = 1 ; i <= n ; ++i)
/* KqzSHaDKX ily traian COUb1GwXW */     {
/* KqzSHaDKX ily traian COUb1GwXW */         cin >> x;
/* KqzSHaDKX ily traian COUb1GwXW */         s[i]=s[i-1]+x;
/* KqzSHaDKX ily traian COUb1GwXW */         int val = cb(x , i);
/* KqzSHaDKX ily traian COUb1GwXW */         if(s[val]==x)
/* KqzSHaDKX ily traian COUb1GwXW */             cout << val << '\n';
/* KqzSHaDKX ily traian COUb1GwXW */         else
/* KqzSHaDKX ily traian COUb1GwXW */             cout << 0 << '\n';
/* KqzSHaDKX ily traian COUb1GwXW */     }
/* KqzSHaDKX ily traian COUb1GwXW */     return 0;
/* KqzSHaDKX ily traian COUb1GwXW */ }