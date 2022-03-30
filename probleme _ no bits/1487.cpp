/* 2BlPbLtMf ily traian ariQqAY41 */ #include <algorithm>
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
/* 2BlPbLtMf ily traian ariQqAY41 */ using namespace std;
/* 2BlPbLtMf ily traian ariQqAY41 */ ifstream cin("decodificare.in");
/* 2BlPbLtMf ily traian ariQqAY41 */ ofstream cout("decodificare.out");
/* 2BlPbLtMf ily traian ariQqAY41 */ int a[1501][1501];
/* 2BlPbLtMf ily traian ariQqAY41 */ int main()
/* 2BlPbLtMf ily traian ariQqAY41 */ {
/* 2BlPbLtMf ily traian ariQqAY41 */     int n;
/* 2BlPbLtMf ily traian ariQqAY41 */     char c;
/* 2BlPbLtMf ily traian ariQqAY41 */     cin >> n;
/* 2BlPbLtMf ily traian ariQqAY41 */     for(int i = 1 ; i <= n/2 ; ++i)
/* 2BlPbLtMf ily traian ariQqAY41 */         for(int j = 1 ; j <= n/2 ; ++j)
/* 2BlPbLtMf ily traian ariQqAY41 */             cin >> c , a[i][j]=c;
/* 2BlPbLtMf ily traian ariQqAY41 */     for(int i = 1 ; i <= n/2 ; ++i)
/* 2BlPbLtMf ily traian ariQqAY41 */         for(int j = 1 ; j <= n/2 ; ++j)
/* 2BlPbLtMf ily traian ariQqAY41 */             if(i+j-1==n/2) cout << (char)a[i][j];
/* 2BlPbLtMf ily traian ariQqAY41 */     for(int i = 1 ; i <= n/2 ; ++i)
/* 2BlPbLtMf ily traian ariQqAY41 */         for(int j = 1 ; j <= n/2 ; ++j)
/* 2BlPbLtMf ily traian ariQqAY41 */             if(i == j) cout << (char)a[i][j];
/* 2BlPbLtMf ily traian ariQqAY41 */     return 0;
/* 2BlPbLtMf ily traian ariQqAY41 */ }