/* Us3gJAC0f ily traian ukdpxXJ8e */ #include <algorithm>
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
/* Us3gJAC0f ily traian ukdpxXJ8e */ 
/* Us3gJAC0f ily traian ukdpxXJ8e */ using namespace std;
/* Us3gJAC0f ily traian ukdpxXJ8e */ 
/* Us3gJAC0f ily traian ukdpxXJ8e */ int p[3][100001];
/* Us3gJAC0f ily traian ukdpxXJ8e */ int v[100001];
/* Us3gJAC0f ily traian ukdpxXJ8e */ 
/* Us3gJAC0f ily traian ukdpxXJ8e */ int main()
/* Us3gJAC0f ily traian ukdpxXJ8e */ {
/* Us3gJAC0f ily traian ukdpxXJ8e */     int n;
/* Us3gJAC0f ily traian ukdpxXJ8e */     cin >> n;
/* Us3gJAC0f ily traian ukdpxXJ8e */     int j = 0;
/* Us3gJAC0f ily traian ukdpxXJ8e */     for(int i = 1 ; i <= n ; ++i)
/* Us3gJAC0f ily traian ukdpxXJ8e */     {
/* Us3gJAC0f ily traian ukdpxXJ8e */         cin >> v[i];
/* Us3gJAC0f ily traian ukdpxXJ8e */         while(v[i] > p[1][j] && i > 1 && j >= 1)
/* Us3gJAC0f ily traian ukdpxXJ8e */         {
/* Us3gJAC0f ily traian ukdpxXJ8e */             v[p[2][j]]=v[i];
/* Us3gJAC0f ily traian ukdpxXJ8e */             j--;
/* Us3gJAC0f ily traian ukdpxXJ8e */         }
/* Us3gJAC0f ily traian ukdpxXJ8e */         j++;
/* Us3gJAC0f ily traian ukdpxXJ8e */         p[1][j] = v[i];
/* Us3gJAC0f ily traian ukdpxXJ8e */         p[2][j] = i;
/* Us3gJAC0f ily traian ukdpxXJ8e */     }
/* Us3gJAC0f ily traian ukdpxXJ8e */     for(int i = 1 ; i <= j ; ++i)
/* Us3gJAC0f ily traian ukdpxXJ8e */         v[p[2][i]]=-1;
/* Us3gJAC0f ily traian ukdpxXJ8e */     for(int i = 1 ; i <= n ; ++i)
/* Us3gJAC0f ily traian ukdpxXJ8e */         cout << v[i] << ' ';
/* Us3gJAC0f ily traian ukdpxXJ8e */     return 0;
/* Us3gJAC0f ily traian ukdpxXJ8e */ }