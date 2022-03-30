/* R7og5ySH3 ily traian s2U1rRsjV */ #include <algorithm>
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
/* R7og5ySH3 ily traian s2U1rRsjV */ using namespace std;
/* R7og5ySH3 ily traian s2U1rRsjV */ ifstream fin("chenar.in");
/* R7og5ySH3 ily traian s2U1rRsjV */ ofstream fout("chenar.out");
/* R7og5ySH3 ily traian s2U1rRsjV */ int main()
/* R7og5ySH3 ily traian s2U1rRsjV */ {
/* R7og5ySH3 ily traian s2U1rRsjV */     int n , m , a[50][50];
/* R7og5ySH3 ily traian s2U1rRsjV */     fin >> n;
/* R7og5ySH3 ily traian s2U1rRsjV */     for(int i = 1 ; i <= n ; i++)
/* R7og5ySH3 ily traian s2U1rRsjV */         for(int j = 1 ; j <= n ; j++) fin >> a[i][j];
/* R7og5ySH3 ily traian s2U1rRsjV */     for(int j = 1 ; j <= n ; j++)
/* R7og5ySH3 ily traian s2U1rRsjV */     {
/* R7og5ySH3 ily traian s2U1rRsjV */         fout << a[1][j] << " ";
/* R7og5ySH3 ily traian s2U1rRsjV */     }
/* R7og5ySH3 ily traian s2U1rRsjV */     for(int i = 2 ; i <= n ; ++i)
/* R7og5ySH3 ily traian s2U1rRsjV */     {
/* R7og5ySH3 ily traian s2U1rRsjV */         fout << a[i][n] << " ";
/* R7og5ySH3 ily traian s2U1rRsjV */     }
/* R7og5ySH3 ily traian s2U1rRsjV */     for(int j = n-1 ; j >= 1 ;--j)
/* R7og5ySH3 ily traian s2U1rRsjV */     {
/* R7og5ySH3 ily traian s2U1rRsjV */         fout << a[n][j] << " ";
/* R7og5ySH3 ily traian s2U1rRsjV */     }
/* R7og5ySH3 ily traian s2U1rRsjV */     for(int i = n-1 ; i >= 2 ; --i)
/* R7og5ySH3 ily traian s2U1rRsjV */     {
/* R7og5ySH3 ily traian s2U1rRsjV */         fout << a[i][1] << " ";
/* R7og5ySH3 ily traian s2U1rRsjV */     }
/* R7og5ySH3 ily traian s2U1rRsjV */ }