/* fdLHqoxnO ily traian tn2hcjkix */ #include <algorithm>
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
/* fdLHqoxnO ily traian tn2hcjkix */ using namespace std;
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */ int n , a[101][101] , b[101][101] , cnt = 1;
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */ int main()
/* fdLHqoxnO ily traian tn2hcjkix */ {
/* fdLHqoxnO ily traian tn2hcjkix */     cin >> n;
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = 1 ; i <= n ; i++)
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = 1 ; j <= n ; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             a[i][j] = cnt , cnt++;
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = 1 ; i <= n / 4 ; i++)
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = 1 ; j <= n / 4 ; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             b[i][j] = a[i][j];
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = n - n / 4 + 1; i <= n ; i++)
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = 1 ; j <= n / 4 ; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             b[i][j] = a[i][j];
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = 1 ; i <= n / 4 ; i++)
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = n - n / 4 + 1; j <= n ; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             b[i][j] = a[i][j];
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = n - n / 4 + 1 ; i <= n ; i++)
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = n - n / 4 + 1 ; j <= n ; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             b[i][j] = a[i][j];
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = n / 4 + 1 ; i <= n - n / 4; i++)
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = n / 4 + 1 ; j <= n - n / 4; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             b[i][j] = a[i][j];
/* fdLHqoxnO ily traian tn2hcjkix */ 
/* fdLHqoxnO ily traian tn2hcjkix */     for(int i = 1 ; i <= n ; i++)
/* fdLHqoxnO ily traian tn2hcjkix */     {
/* fdLHqoxnO ily traian tn2hcjkix */         for(int j = 1 ; j <= n ; j++)
/* fdLHqoxnO ily traian tn2hcjkix */             if(b[i][j] != 0) cout << b[i][j] << " ";
/* fdLHqoxnO ily traian tn2hcjkix */             else cout << a[n - i + 1][n - j + 1] << " ";
/* fdLHqoxnO ily traian tn2hcjkix */         cout << '\n';
/* fdLHqoxnO ily traian tn2hcjkix */     }
/* fdLHqoxnO ily traian tn2hcjkix */ }