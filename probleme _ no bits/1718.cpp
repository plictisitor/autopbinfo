/* rfycyF3Ft ily traian IfndaWJvt */ #include <algorithm>
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
/* rfycyF3Ft ily traian IfndaWJvt */ using namespace std;
/* rfycyF3Ft ily traian IfndaWJvt */ ifstream cin("genpascal.in");
/* rfycyF3Ft ily traian IfndaWJvt */ ofstream cout("genpascal.out");
/* rfycyF3Ft ily traian IfndaWJvt */ int main()
/* rfycyF3Ft ily traian IfndaWJvt */ {
/* rfycyF3Ft ily traian IfndaWJvt */     int n, a[10001]={0}, c=1 , x , y;
/* rfycyF3Ft ily traian IfndaWJvt */     cin >> x >> y >> n;
/* rfycyF3Ft ily traian IfndaWJvt */     a[1]=x+y;
/* rfycyF3Ft ily traian IfndaWJvt */     for(int i = 1; i < n-1; i++)
/* rfycyF3Ft ily traian IfndaWJvt */     {
/* rfycyF3Ft ily traian IfndaWJvt */         int t = 0;
/* rfycyF3Ft ily traian IfndaWJvt */         for(int j = 1; j <= c; j++)
/* rfycyF3Ft ily traian IfndaWJvt */         {
/* rfycyF3Ft ily traian IfndaWJvt */             int cif = a[j] * 2 + t;
/* rfycyF3Ft ily traian IfndaWJvt */             a[j] = cif % 10;
/* rfycyF3Ft ily traian IfndaWJvt */             t = cif / 10;
/* rfycyF3Ft ily traian IfndaWJvt */         }
/* rfycyF3Ft ily traian IfndaWJvt */         while(t)
/* rfycyF3Ft ily traian IfndaWJvt */         {
/* rfycyF3Ft ily traian IfndaWJvt */             a[++c] = t % 10;
/* rfycyF3Ft ily traian IfndaWJvt */             t /=10;
/* rfycyF3Ft ily traian IfndaWJvt */         }
/* rfycyF3Ft ily traian IfndaWJvt */     }
/* rfycyF3Ft ily traian IfndaWJvt */     for(int i = c ; i >= 1; i--)
/* rfycyF3Ft ily traian IfndaWJvt */         cout << a[i];
/* rfycyF3Ft ily traian IfndaWJvt */     return 0;
/* rfycyF3Ft ily traian IfndaWJvt */ }