/* gztFnitq4 ily traian XDKxDOvZr */ #include <algorithm>
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
/* gztFnitq4 ily traian XDKxDOvZr */ using namespace std;
/* gztFnitq4 ily traian XDKxDOvZr */ 
/* gztFnitq4 ily traian XDKxDOvZr */ int n , x , l , A[100001] , p;
/* gztFnitq4 ily traian XDKxDOvZr */ 
/* gztFnitq4 ily traian XDKxDOvZr */ int cautare_binara(int x , int n)
/* gztFnitq4 ily traian XDKxDOvZr */ {
/* gztFnitq4 ily traian XDKxDOvZr */     int st = 1 , dr = n;
/* gztFnitq4 ily traian XDKxDOvZr */     while(st <= dr)
/* gztFnitq4 ily traian XDKxDOvZr */     {
/* gztFnitq4 ily traian XDKxDOvZr */         int mij = (st + dr) / 2;
/* gztFnitq4 ily traian XDKxDOvZr */         if(A[mij] > x) dr = mij - 1;
/* gztFnitq4 ily traian XDKxDOvZr */         else st = mij + 1;
/* gztFnitq4 ily traian XDKxDOvZr */     }
/* gztFnitq4 ily traian XDKxDOvZr */     return st;
/* gztFnitq4 ily traian XDKxDOvZr */ }
/* gztFnitq4 ily traian XDKxDOvZr */ int main()
/* gztFnitq4 ily traian XDKxDOvZr */ {
/* gztFnitq4 ily traian XDKxDOvZr */     cin >> n;
/* gztFnitq4 ily traian XDKxDOvZr */     for(int i = 1 ; i <= n ; i++)
/* gztFnitq4 ily traian XDKxDOvZr */     {
/* gztFnitq4 ily traian XDKxDOvZr */         cin >> x;
/* gztFnitq4 ily traian XDKxDOvZr */         p = cautare_binara(x , l);
/* gztFnitq4 ily traian XDKxDOvZr */         if(A[p] <= x) l++ , p = l;
/* gztFnitq4 ily traian XDKxDOvZr */         A[p] = x;
/* gztFnitq4 ily traian XDKxDOvZr */     }
/* gztFnitq4 ily traian XDKxDOvZr */     cout << n - l;
/* gztFnitq4 ily traian XDKxDOvZr */ }