/* oJPBXX9W8 ily traian 7eqGlW3Aq */ #include <algorithm>
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
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ using namespace std;
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ 
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ int n;
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ 
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ int main ()
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ {
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     cin >> n;
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     for (int i = 1; i <= n; i++)
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     {
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int j = 1; j <= i; j++) cout << '*';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int k = 1; k <= n*3-i*2; k++) cout << ' ';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int f = 1; f <= i; f++) cout << '*';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         cout << endl;
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     }
/* oJPBXX9W8 ily traian 7eqGlW3Aq */      for (int i = 1; i <= n; i++)
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     {
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int j = 1; j <= n; j++) cout << ' ';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int k = 1; k <= n; k++) cout << '*';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         cout << endl;
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     }
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     for (int i = n; i >= 1; i--)
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     {
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int j = 1; j <= i; j++) cout << '*';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int k = 1; k <= n*3-i*2; k++) cout << ' ';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         for (int f = 1; f <= i; f++) cout << '*';
/* oJPBXX9W8 ily traian 7eqGlW3Aq */         cout << endl;
/* oJPBXX9W8 ily traian 7eqGlW3Aq */     }
/* oJPBXX9W8 ily traian 7eqGlW3Aq */ }