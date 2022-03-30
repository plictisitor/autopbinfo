/* HhRW3oohn ily traian xH1XArG3X */ #include <algorithm>
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
/* HhRW3oohn ily traian xH1XArG3X */ using namespace std;
/* HhRW3oohn ily traian xH1XArG3X */ ifstream cin("secventeneuniforme.in");
/* HhRW3oohn ily traian xH1XArG3X */ ofstream cout("secventeneuniforme.out");
/* HhRW3oohn ily traian xH1XArG3X */ 
/* HhRW3oohn ily traian xH1XArG3X */ int main()
/* HhRW3oohn ily traian xH1XArG3X */ {
/* HhRW3oohn ily traian xH1XArG3X */     int a , b ,c, lung = 0, lmax = 0;
/* HhRW3oohn ily traian xH1XArG3X */     cin >> a >> b;
/* HhRW3oohn ily traian xH1XArG3X */     while(cin >> c)
/* HhRW3oohn ily traian xH1XArG3X */     {
/* HhRW3oohn ily traian xH1XArG3X */         if(a != b && b != c && c != a) lung++;
/* HhRW3oohn ily traian xH1XArG3X */         else lung = 0;
/* HhRW3oohn ily traian xH1XArG3X */         if(lung > lmax)lmax = lung;
/* HhRW3oohn ily traian xH1XArG3X */         a = b;
/* HhRW3oohn ily traian xH1XArG3X */         b = c;
/* HhRW3oohn ily traian xH1XArG3X */     }
/* HhRW3oohn ily traian xH1XArG3X */     cout << lmax + 2;
/* HhRW3oohn ily traian xH1XArG3X */ }