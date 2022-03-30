/* mz00FH69n ily traian q6yjtiLYW */ #include <algorithm>
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
/* mz00FH69n ily traian q6yjtiLYW */ 
/* mz00FH69n ily traian q6yjtiLYW */ using namespace std;
/* mz00FH69n ily traian q6yjtiLYW */ int main()
/* mz00FH69n ily traian q6yjtiLYW */ {
/* mz00FH69n ily traian q6yjtiLYW */     int n , m, a[101][101];
/* mz00FH69n ily traian q6yjtiLYW */     cin >> n >> m;
/* mz00FH69n ily traian q6yjtiLYW */     for(int i = 0 ;i < n; ++i)
/* mz00FH69n ily traian q6yjtiLYW */     {
/* mz00FH69n ily traian q6yjtiLYW */         for(int j = 0 ; j < m; ++j) cin >> a[i][j];
/* mz00FH69n ily traian q6yjtiLYW */     }
/* mz00FH69n ily traian q6yjtiLYW */     for(int i = 0 ; i < n; ++i)
/* mz00FH69n ily traian q6yjtiLYW */     {
/* mz00FH69n ily traian q6yjtiLYW */         for(int j = 0 ; j < m; ++j)
/* mz00FH69n ily traian q6yjtiLYW */         {
/* mz00FH69n ily traian q6yjtiLYW */             if(i != n-2 && j != m-2) cout<<a[i][j]<< " ";
/* mz00FH69n ily traian q6yjtiLYW */         }
/* mz00FH69n ily traian q6yjtiLYW */         if(i != n-2) cout<<endl;
/* mz00FH69n ily traian q6yjtiLYW */     }
/* mz00FH69n ily traian q6yjtiLYW */ 
/* mz00FH69n ily traian q6yjtiLYW */     return 0;
/* mz00FH69n ily traian q6yjtiLYW */ }