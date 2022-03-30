/* 7MxMpOgI0 ily traian 5xapSdFt6 */ #include <algorithm>
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
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ using namespace std;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ ifstream cin("nrfii.in");
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ ofstream cout("nrfii.out");
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ vector <int> G[101];
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ int n , x , k , T[101] , maxi;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ int main()
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ {
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     cin >> n;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     for(int i = 1 ; i <= n ; i++)
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     {
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         cin >> T[i];
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         if(T[i] != 0)
/* 7MxMpOgI0 ily traian 5xapSdFt6 */             G[T[i]].push_back(i);
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     }
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     for(int i = 1 ; i <= n ; i++)
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     {
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         int cnt = 0;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         for(auto j:G[i])
/* 7MxMpOgI0 ily traian 5xapSdFt6 */             cnt++;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         if(cnt > maxi) maxi = cnt;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     }
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ 
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     for(int i = 1 ; i <= n ; i++)
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     {
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         int cnt = 0;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         for(auto j:G[i])
/* 7MxMpOgI0 ily traian 5xapSdFt6 */             cnt++;
/* 7MxMpOgI0 ily traian 5xapSdFt6 */         if(cnt == maxi) cout << i << " ";
/* 7MxMpOgI0 ily traian 5xapSdFt6 */     }
/* 7MxMpOgI0 ily traian 5xapSdFt6 */ }