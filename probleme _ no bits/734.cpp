/* nFzgbyzx5 ily traian IIf3diAJr */ #include <algorithm>
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
/* nFzgbyzx5 ily traian IIf3diAJr */ 
/* nFzgbyzx5 ily traian IIf3diAJr */ 
/* nFzgbyzx5 ily traian IIf3diAJr */ using namespace std;
/* nFzgbyzx5 ily traian IIf3diAJr */ 
/* nFzgbyzx5 ily traian IIf3diAJr */ ifstream cin("miere.in");
/* nFzgbyzx5 ily traian IIf3diAJr */ ofstream cout("miere.out");
/* nFzgbyzx5 ily traian IIf3diAJr */ 
/* nFzgbyzx5 ily traian IIf3diAJr */ long long s[50002] , x;
/* nFzgbyzx5 ily traian IIf3diAJr */ int n , m;
/* nFzgbyzx5 ily traian IIf3diAJr */ 
/* nFzgbyzx5 ily traian IIf3diAJr */ int cauta_bin(long long s[] , int n , long long x , int z)
/* nFzgbyzx5 ily traian IIf3diAJr */ {
/* nFzgbyzx5 ily traian IIf3diAJr */     int st = 1 , dr = n;
/* nFzgbyzx5 ily traian IIf3diAJr */     while(st <= dr)
/* nFzgbyzx5 ily traian IIf3diAJr */     {
/* nFzgbyzx5 ily traian IIf3diAJr */         int mij = (st + dr) / 2;
/* nFzgbyzx5 ily traian IIf3diAJr */         if(s[mij] + 1ll * mij * (z - 1) > x) dr = mij - 1;
/* nFzgbyzx5 ily traian IIf3diAJr */         else st = mij + 1;
/* nFzgbyzx5 ily traian IIf3diAJr */     }
/* nFzgbyzx5 ily traian IIf3diAJr */     return dr;
/* nFzgbyzx5 ily traian IIf3diAJr */ }
/* nFzgbyzx5 ily traian IIf3diAJr */ 
/* nFzgbyzx5 ily traian IIf3diAJr */ int main()
/* nFzgbyzx5 ily traian IIf3diAJr */ {
/* nFzgbyzx5 ily traian IIf3diAJr */     cin >> n;
/* nFzgbyzx5 ily traian IIf3diAJr */     for(int i = 1 ; i <= n ; i++)
/* nFzgbyzx5 ily traian IIf3diAJr */     {
/* nFzgbyzx5 ily traian IIf3diAJr */         cin >> s[i];
/* nFzgbyzx5 ily traian IIf3diAJr */         s[i] += s[i - 1];
/* nFzgbyzx5 ily traian IIf3diAJr */     }
/* nFzgbyzx5 ily traian IIf3diAJr */     cin >> m;
/* nFzgbyzx5 ily traian IIf3diAJr */     for(int i = 1 ; i <= m ; i++)
/* nFzgbyzx5 ily traian IIf3diAJr */     {
/* nFzgbyzx5 ily traian IIf3diAJr */         cin >> x;
/* nFzgbyzx5 ily traian IIf3diAJr */         cout << cauta_bin(s , n , x , i) << '\n';
/* nFzgbyzx5 ily traian IIf3diAJr */     }
/* nFzgbyzx5 ily traian IIf3diAJr */ }