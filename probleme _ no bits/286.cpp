/* R0SFZHs0C ily traian itbQhJG9t */ #include <algorithm>
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
/* R0SFZHs0C ily traian itbQhJG9t */ using namespace std;
/* R0SFZHs0C ily traian itbQhJG9t */ int n , a[51][51];
/* R0SFZHs0C ily traian itbQhJG9t */ int main()
/* R0SFZHs0C ily traian itbQhJG9t */ {
/* R0SFZHs0C ily traian itbQhJG9t */     cin >> n;
/* R0SFZHs0C ily traian itbQhJG9t */     for(int i = 1 ; i <= n / 2 ; ++i)
/* R0SFZHs0C ily traian itbQhJG9t */         for(int j = i; j <=n - i + 1 ; j++)
/* R0SFZHs0C ily traian itbQhJG9t */             a[i][j] = a[n - i + 1][j] = a[j][i] = a[j][n - i + 1] = i;
/* R0SFZHs0C ily traian itbQhJG9t */     if(n % 2 == 1) a[n / 2 + 1][n / 2 + 1] = n / 2 + 1;
/* R0SFZHs0C ily traian itbQhJG9t */     for(int i = 1 ; i <= n ; i++)
/* R0SFZHs0C ily traian itbQhJG9t */     {
/* R0SFZHs0C ily traian itbQhJG9t */         for(int j = 1 ; j <= n ; j++)
/* R0SFZHs0C ily traian itbQhJG9t */             cout << a[i][j] << " ";
/* R0SFZHs0C ily traian itbQhJG9t */         cout<<endl;
/* R0SFZHs0C ily traian itbQhJG9t */     }
/* R0SFZHs0C ily traian itbQhJG9t */     return 0;
/* R0SFZHs0C ily traian itbQhJG9t */ }