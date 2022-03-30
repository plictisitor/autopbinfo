/* 14UnNRGe2 ily traian 78xgsQu60 */ #include <algorithm>
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
/* 14UnNRGe2 ily traian 78xgsQu60 */ 
/* 14UnNRGe2 ily traian 78xgsQu60 */ using namespace std;
/* 14UnNRGe2 ily traian 78xgsQu60 */ 
/* 14UnNRGe2 ily traian 78xgsQu60 */ int n , a[100001] , rez , x , y;
/* 14UnNRGe2 ily traian 78xgsQu60 */ priority_queue < int , vector<int> , greater <int> >Q;
/* 14UnNRGe2 ily traian 78xgsQu60 */ 
/* 14UnNRGe2 ily traian 78xgsQu60 */ int main()
/* 14UnNRGe2 ily traian 78xgsQu60 */ {
/* 14UnNRGe2 ily traian 78xgsQu60 */     cin >> n;
/* 14UnNRGe2 ily traian 78xgsQu60 */     for(int i = 1 ; i <= n ; i++)
/* 14UnNRGe2 ily traian 78xgsQu60 */     {
/* 14UnNRGe2 ily traian 78xgsQu60 */         cin >> a[i];
/* 14UnNRGe2 ily traian 78xgsQu60 */         Q.push(a[i]);
/* 14UnNRGe2 ily traian 78xgsQu60 */     }
/* 14UnNRGe2 ily traian 78xgsQu60 */ 
/* 14UnNRGe2 ily traian 78xgsQu60 */     while(!Q.empty())
/* 14UnNRGe2 ily traian 78xgsQu60 */     {
/* 14UnNRGe2 ily traian 78xgsQu60 */         x = Q.top();
/* 14UnNRGe2 ily traian 78xgsQu60 */         Q.pop();
/* 14UnNRGe2 ily traian 78xgsQu60 */         if(Q.empty())break;
/* 14UnNRGe2 ily traian 78xgsQu60 */         y = Q.top();
/* 14UnNRGe2 ily traian 78xgsQu60 */         Q.pop();
/* 14UnNRGe2 ily traian 78xgsQu60 */         rez += (x + y);
/* 14UnNRGe2 ily traian 78xgsQu60 */         Q.push(x + y);
/* 14UnNRGe2 ily traian 78xgsQu60 */     }
/* 14UnNRGe2 ily traian 78xgsQu60 */ 
/* 14UnNRGe2 ily traian 78xgsQu60 */     cout << rez;
/* 14UnNRGe2 ily traian 78xgsQu60 */ }