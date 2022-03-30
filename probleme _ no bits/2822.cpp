/* Q3wCKVS3o ily traian iRTZ1E0SN */ #include <algorithm>
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
/* Q3wCKVS3o ily traian iRTZ1E0SN */ using namespace std;
/* Q3wCKVS3o ily traian iRTZ1E0SN */ int n , a[30][30];
/* Q3wCKVS3o ily traian iRTZ1E0SN */ int main()
/* Q3wCKVS3o ily traian iRTZ1E0SN */ {
/* Q3wCKVS3o ily traian iRTZ1E0SN */     cin >> n;
/* Q3wCKVS3o ily traian iRTZ1E0SN */     for(int i = 1 ; i <= n ; i++)
/* Q3wCKVS3o ily traian iRTZ1E0SN */         a[1][i] = i;
/* Q3wCKVS3o ily traian iRTZ1E0SN */     for(int i = 1 ; i <= n ; i++)
/* Q3wCKVS3o ily traian iRTZ1E0SN */         a[i][n] = n;
/* Q3wCKVS3o ily traian iRTZ1E0SN */     for(int i = 2 ; i <= n ; i++)
/* Q3wCKVS3o ily traian iRTZ1E0SN */     {
/* Q3wCKVS3o ily traian iRTZ1E0SN */         for(int j = 1 ; j < n ; j++)
/* Q3wCKVS3o ily traian iRTZ1E0SN */             a[i][j] = a[i-1][j] + a[i-1][j+1];
/* Q3wCKVS3o ily traian iRTZ1E0SN */     }
/* Q3wCKVS3o ily traian iRTZ1E0SN */     for(int i = 1 ; i <= n ; i++)
/* Q3wCKVS3o ily traian iRTZ1E0SN */     {
/* Q3wCKVS3o ily traian iRTZ1E0SN */         for(int j = 1 ; j <= n ; j++)
/* Q3wCKVS3o ily traian iRTZ1E0SN */             cout << a[j][i] << " ";
/* Q3wCKVS3o ily traian iRTZ1E0SN */         cout << '\n';
/* Q3wCKVS3o ily traian iRTZ1E0SN */     }
/* Q3wCKVS3o ily traian iRTZ1E0SN */ }