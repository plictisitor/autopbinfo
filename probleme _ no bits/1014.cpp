/* VBp8ViS0D ily traian LgBQLOsQF */ #include <algorithm>
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
/* VBp8ViS0D ily traian LgBQLOsQF */ using namespace std;
/* VBp8ViS0D ily traian LgBQLOsQF */ 
/* VBp8ViS0D ily traian LgBQLOsQF */ int n , k , a[25][25];
/* VBp8ViS0D ily traian LgBQLOsQF */ 
/* VBp8ViS0D ily traian LgBQLOsQF */ int main()
/* VBp8ViS0D ily traian LgBQLOsQF */ {
/* VBp8ViS0D ily traian LgBQLOsQF */     cin >> n >> k;
/* VBp8ViS0D ily traian LgBQLOsQF */     a[0][0] = 1;
/* VBp8ViS0D ily traian LgBQLOsQF */     for(int i = 1 ; i <= n ; i++)
/* VBp8ViS0D ily traian LgBQLOsQF */         for(int j = 0 ; j <= i ; j++)
/* VBp8ViS0D ily traian LgBQLOsQF */             if(j == 0) a[i][j] = 1;
/* VBp8ViS0D ily traian LgBQLOsQF */             else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
/* VBp8ViS0D ily traian LgBQLOsQF */ 
/* VBp8ViS0D ily traian LgBQLOsQF */     /*for(int i = 0 ; i <= n ; i++)
/* VBp8ViS0D ily traian LgBQLOsQF */     {
/* VBp8ViS0D ily traian LgBQLOsQF */         for(int j = 0 ; j <= n ; j++)
/* VBp8ViS0D ily traian LgBQLOsQF */             cout << a[i][j] << " ";
/* VBp8ViS0D ily traian LgBQLOsQF */         cout << '\n';
/* VBp8ViS0D ily traian LgBQLOsQF */     }*/
/* VBp8ViS0D ily traian LgBQLOsQF */     cout << a[n][k];
/* VBp8ViS0D ily traian LgBQLOsQF */     return 0;
/* VBp8ViS0D ily traian LgBQLOsQF */ }