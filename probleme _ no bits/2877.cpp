/* mT076x1Mw ily traian i7D43peDb */ #include <algorithm>
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
/* mT076x1Mw ily traian i7D43peDb */ 
/* mT076x1Mw ily traian i7D43peDb */ using namespace std;
/* mT076x1Mw ily traian i7D43peDb */ 
/* mT076x1Mw ily traian i7D43peDb */ int n , a[101][101] , cnt , ok , p[101];
/* mT076x1Mw ily traian i7D43peDb */ 
/* mT076x1Mw ily traian i7D43peDb */ int main()
/* mT076x1Mw ily traian i7D43peDb */ {
/* mT076x1Mw ily traian i7D43peDb */     cin >> n;
/* mT076x1Mw ily traian i7D43peDb */     for(int i = 1 ; i <= n ; i++)
/* mT076x1Mw ily traian i7D43peDb */     {
/* mT076x1Mw ily traian i7D43peDb */         for(int j = 1 ; j <= n ; j++)
/* mT076x1Mw ily traian i7D43peDb */             cin >> p[j];
/* mT076x1Mw ily traian i7D43peDb */         sort(p + 1 , p + n + 1);
/* mT076x1Mw ily traian i7D43peDb */         for(int j = 1 ; j <= n ; j++)
/* mT076x1Mw ily traian i7D43peDb */             a[i][j] = p[j];
/* mT076x1Mw ily traian i7D43peDb */     }
/* mT076x1Mw ily traian i7D43peDb */ 
/* mT076x1Mw ily traian i7D43peDb */     for(int j = 1 ; j <= n ; j++)
/* mT076x1Mw ily traian i7D43peDb */     {
/* mT076x1Mw ily traian i7D43peDb */         for(int i = 1 ; i <= n ; i++)
/* mT076x1Mw ily traian i7D43peDb */             p[i] = a[i][j];
/* mT076x1Mw ily traian i7D43peDb */         sort(p + 1 , p + n + 1);
/* mT076x1Mw ily traian i7D43peDb */         for(int i = 1 ; i <= n ; i++)
/* mT076x1Mw ily traian i7D43peDb */             a[i][j] = p[i];
/* mT076x1Mw ily traian i7D43peDb */     }
/* mT076x1Mw ily traian i7D43peDb */ 
/* mT076x1Mw ily traian i7D43peDb */     for(int i = 1 ; i <= n ; i++)
/* mT076x1Mw ily traian i7D43peDb */     {
/* mT076x1Mw ily traian i7D43peDb */         for(int j = 1 ; j <= n ; j++)
/* mT076x1Mw ily traian i7D43peDb */             cout << a[i][j] << " ";
/* mT076x1Mw ily traian i7D43peDb */             cout << '\n';
/* mT076x1Mw ily traian i7D43peDb */     }
/* mT076x1Mw ily traian i7D43peDb */ }