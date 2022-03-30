/* kXyTmzds9 ily traian nz26mzYux */ #include <algorithm>
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
/* kXyTmzds9 ily traian nz26mzYux */ using namespace std;
/* kXyTmzds9 ily traian nz26mzYux */ int main()
/* kXyTmzds9 ily traian nz26mzYux */ {
/* kXyTmzds9 ily traian nz26mzYux */     int n , a[25][25];
/* kXyTmzds9 ily traian nz26mzYux */     cin >> n;
/* kXyTmzds9 ily traian nz26mzYux */     for(int i = 1 ; i <= n ; i++)
/* kXyTmzds9 ily traian nz26mzYux */         for(int j = 1 ; j <=n ; j++)
/* kXyTmzds9 ily traian nz26mzYux */             if(i == 1 || i == n || j == 1 || j == n) a[i][j] = i+j;
/* kXyTmzds9 ily traian nz26mzYux */     for(int j = n-1 ; j >= 2 ; j--)
/* kXyTmzds9 ily traian nz26mzYux */         for(int i = n-1 ; i >= 2 ; i--)
/* kXyTmzds9 ily traian nz26mzYux */             a[i][j] = a[i-1][j+1] + a[i][j+1] + a[i+1][j+1];
/* kXyTmzds9 ily traian nz26mzYux */     for(int i = 1 ; i <= n ; i++)
/* kXyTmzds9 ily traian nz26mzYux */     {
/* kXyTmzds9 ily traian nz26mzYux */         for(int j = 1 ; j <=n ; j++)
/* kXyTmzds9 ily traian nz26mzYux */             cout << a[i][j] << " ";
/* kXyTmzds9 ily traian nz26mzYux */         cout << endl;
/* kXyTmzds9 ily traian nz26mzYux */     }
/* kXyTmzds9 ily traian nz26mzYux */ 
/* kXyTmzds9 ily traian nz26mzYux */ }