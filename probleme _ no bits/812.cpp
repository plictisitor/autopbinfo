/* MT4URl1uO ily traian 5fjVlr4rJ */ #include <algorithm>
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
/* MT4URl1uO ily traian 5fjVlr4rJ */ using namespace std;
/* MT4URl1uO ily traian 5fjVlr4rJ */ int main()
/* MT4URl1uO ily traian 5fjVlr4rJ */ {
/* MT4URl1uO ily traian 5fjVlr4rJ */     int n , a[18][18];
/* MT4URl1uO ily traian 5fjVlr4rJ */     cin >> n;
/* MT4URl1uO ily traian 5fjVlr4rJ */     for(int i = 1 ; i <= n ; ++i)
/* MT4URl1uO ily traian 5fjVlr4rJ */     {
/* MT4URl1uO ily traian 5fjVlr4rJ */         for(int j = 1 ; j <= n ; ++j)
/* MT4URl1uO ily traian 5fjVlr4rJ */         {
/* MT4URl1uO ily traian 5fjVlr4rJ */             if(i==1 || j==1)
/* MT4URl1uO ily traian 5fjVlr4rJ */             {
/* MT4URl1uO ily traian 5fjVlr4rJ */                 if(i == 1) a[i][j] = j;
/* MT4URl1uO ily traian 5fjVlr4rJ */                 if(j == 1) a[i][j] = 1;
/* MT4URl1uO ily traian 5fjVlr4rJ */             }
/* MT4URl1uO ily traian 5fjVlr4rJ */             else
/* MT4URl1uO ily traian 5fjVlr4rJ */             a[i][j] = a[i][j-1] + a[i-1][j];
/* MT4URl1uO ily traian 5fjVlr4rJ */         }
/* MT4URl1uO ily traian 5fjVlr4rJ */     }
/* MT4URl1uO ily traian 5fjVlr4rJ */     for(int i = n ; i > 0 ; --i)
/* MT4URl1uO ily traian 5fjVlr4rJ */     {
/* MT4URl1uO ily traian 5fjVlr4rJ */         for(int j = 1 ; j <= n ; ++j)
/* MT4URl1uO ily traian 5fjVlr4rJ */         {
/* MT4URl1uO ily traian 5fjVlr4rJ */             cout << a[i][j] <<" ";
/* MT4URl1uO ily traian 5fjVlr4rJ */         }
/* MT4URl1uO ily traian 5fjVlr4rJ */         cout << endl;
/* MT4URl1uO ily traian 5fjVlr4rJ */     }
/* MT4URl1uO ily traian 5fjVlr4rJ */ }