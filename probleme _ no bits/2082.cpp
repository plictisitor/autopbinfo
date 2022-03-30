/* eBhibYmJF ily traian a2kA7MAMl */ #include <algorithm>
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
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ using namespace std;
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ ifstream fin("sierpinski.in");
/* eBhibYmJF ily traian a2kA7MAMl */ ofstream fout("sierpinski.out");
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ int n;
/* eBhibYmJF ily traian a2kA7MAMl */ char a[729][92]; 
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ bool get(int x, int y)
/* eBhibYmJF ily traian a2kA7MAMl */ {
/* eBhibYmJF ily traian a2kA7MAMl */     char mask = (1 << (8 - y % 8 - 1));
/* eBhibYmJF ily traian a2kA7MAMl */     return a[x][y / 8] & mask;
/* eBhibYmJF ily traian a2kA7MAMl */ }
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ void set(int x, int y, bool val)
/* eBhibYmJF ily traian a2kA7MAMl */ {
/* eBhibYmJF ily traian a2kA7MAMl */     if(get(x, y) != val)
/* eBhibYmJF ily traian a2kA7MAMl */     {
/* eBhibYmJF ily traian a2kA7MAMl */         char mask = (1 << (8 - y % 8 - 1));
/* eBhibYmJF ily traian a2kA7MAMl */         a[x][y / 8] ^= mask;
/* eBhibYmJF ily traian a2kA7MAMl */     }
/* eBhibYmJF ily traian a2kA7MAMl */ }
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ void sierpinski(int x, int y, int l)
/* eBhibYmJF ily traian a2kA7MAMl */ {
/* eBhibYmJF ily traian a2kA7MAMl */     
/* eBhibYmJF ily traian a2kA7MAMl */     for(int i = 0; i < l / 3; i++)
/* eBhibYmJF ily traian a2kA7MAMl */         for(int j = 0; j < l / 3; j++)
/* eBhibYmJF ily traian a2kA7MAMl */             set(x + l / 3 + i, y + l / 3 + j, 1);
/* eBhibYmJF ily traian a2kA7MAMl */     if(l > 1)
/* eBhibYmJF ily traian a2kA7MAMl */     {
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x, y, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x, y + l / 3, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x, y + 2 * l / 3, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x + l / 3, y, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x + l / 3, y + 2 * l / 3, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x + 2 * l / 3, y, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x + 2 * l / 3, y + l / 3, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */         sierpinski(x + 2 * l / 3, y + 2 * l / 3, l / 3);
/* eBhibYmJF ily traian a2kA7MAMl */     }
/* eBhibYmJF ily traian a2kA7MAMl */ }
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ void afisare(int l)
/* eBhibYmJF ily traian a2kA7MAMl */ {
/* eBhibYmJF ily traian a2kA7MAMl */     for(int i = 0; i < l; i++)
/* eBhibYmJF ily traian a2kA7MAMl */     {
/* eBhibYmJF ily traian a2kA7MAMl */         for(int j = 0; j < l; j++)
/* eBhibYmJF ily traian a2kA7MAMl */             fout<<get(i, j)<<' ';
/* eBhibYmJF ily traian a2kA7MAMl */         fout<<'\n';
/* eBhibYmJF ily traian a2kA7MAMl */     }
/* eBhibYmJF ily traian a2kA7MAMl */ }
/* eBhibYmJF ily traian a2kA7MAMl */ 
/* eBhibYmJF ily traian a2kA7MAMl */ int main ()
/* eBhibYmJF ily traian a2kA7MAMl */ {
/* eBhibYmJF ily traian a2kA7MAMl */     fin>>n;
/* eBhibYmJF ily traian a2kA7MAMl */     sierpinski(0, 0, pow(3, n));
/* eBhibYmJF ily traian a2kA7MAMl */     afisare(pow(3, n));
/* eBhibYmJF ily traian a2kA7MAMl */ }