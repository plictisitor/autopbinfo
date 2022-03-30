/* TMtuPj4kP ily traian HkcI2nZnP */ #include <algorithm>
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
/* TMtuPj4kP ily traian HkcI2nZnP */ 
/* TMtuPj4kP ily traian HkcI2nZnP */ using namespace std;
/* TMtuPj4kP ily traian HkcI2nZnP */ 
/* TMtuPj4kP ily traian HkcI2nZnP */ int prim(int n);
/* TMtuPj4kP ily traian HkcI2nZnP */ 
/* TMtuPj4kP ily traian HkcI2nZnP */ int main ()
/* TMtuPj4kP ily traian HkcI2nZnP */ {
/* TMtuPj4kP ily traian HkcI2nZnP */     int n;
/* TMtuPj4kP ily traian HkcI2nZnP */     cin >> n;
/* TMtuPj4kP ily traian HkcI2nZnP */     int i = sqrt(n);
/* TMtuPj4kP ily traian HkcI2nZnP */     if (prim(n)==1)
/* TMtuPj4kP ily traian HkcI2nZnP */         cout << "prim";
/* TMtuPj4kP ily traian HkcI2nZnP */     else if (prim(n)==2)
/* TMtuPj4kP ily traian HkcI2nZnP */         cout << "aproape prim";
/* TMtuPj4kP ily traian HkcI2nZnP */     else if (i*i==n && prim(i)==1)
/* TMtuPj4kP ily traian HkcI2nZnP */     {
/* TMtuPj4kP ily traian HkcI2nZnP */             cout << "patrat prim";
/* TMtuPj4kP ily traian HkcI2nZnP */     }
/* TMtuPj4kP ily traian HkcI2nZnP */     else
/* TMtuPj4kP ily traian HkcI2nZnP */         cout << "compus";
/* TMtuPj4kP ily traian HkcI2nZnP */     return 0;
/* TMtuPj4kP ily traian HkcI2nZnP */ }
/* TMtuPj4kP ily traian HkcI2nZnP */ int prim(int n)
/* TMtuPj4kP ily traian HkcI2nZnP */ {
/* TMtuPj4kP ily traian HkcI2nZnP */     int cnt=0;
/* TMtuPj4kP ily traian HkcI2nZnP */     for (int i = 1 ; i * i <= n; ++i)
/* TMtuPj4kP ily traian HkcI2nZnP */     {
/* TMtuPj4kP ily traian HkcI2nZnP */         if (n%i==0)
/* TMtuPj4kP ily traian HkcI2nZnP */             cnt+=2;
/* TMtuPj4kP ily traian HkcI2nZnP */         if (i*i==n)
/* TMtuPj4kP ily traian HkcI2nZnP */             cnt--;
/* TMtuPj4kP ily traian HkcI2nZnP */     }
/* TMtuPj4kP ily traian HkcI2nZnP */     if (cnt==2)
/* TMtuPj4kP ily traian HkcI2nZnP */         return 1;
/* TMtuPj4kP ily traian HkcI2nZnP */     else if (cnt==4)
/* TMtuPj4kP ily traian HkcI2nZnP */         return 2;
/* TMtuPj4kP ily traian HkcI2nZnP */     else
/* TMtuPj4kP ily traian HkcI2nZnP */         return 0;
/* TMtuPj4kP ily traian HkcI2nZnP */ }