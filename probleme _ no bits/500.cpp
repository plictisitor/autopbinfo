/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ #include <algorithm>
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
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ 
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ using namespace std;
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ 
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ int main()
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ {
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     int n;
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     cin >> n;
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     int a[501];
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     for(int i = 1; i <= n; ++i)
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */         cin >> a[i];
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ 
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     bool crescator = true;
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ 
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     for(int i = 2; i <= n; ++i)
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */         if(a[i] < a[i-1])
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */             crescator = false;
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ 
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     if(crescator)
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */         cout << "DA";
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     else
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */         cout << "NU";
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ 
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */     return 0;
/* 8Ij6pBgXJ ily traian SQ5XTtMd5 */ }