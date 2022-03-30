/* ZKh82W7ek ily traian ezMQCmHpp */ #include <algorithm>
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
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */ using namespace std;
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */ ifstream cin("secvcresc.in");
/* ZKh82W7ek ily traian ezMQCmHpp */ ofstream cout("secvcresc.out");
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */ int main()
/* ZKh82W7ek ily traian ezMQCmHpp */ {
/* ZKh82W7ek ily traian ezMQCmHpp */     int n;
/* ZKh82W7ek ily traian ezMQCmHpp */     cin >> n;
/* ZKh82W7ek ily traian ezMQCmHpp */     int a[10001];
/* ZKh82W7ek ily traian ezMQCmHpp */     for(int i = 1; i <= n; ++i)
/* ZKh82W7ek ily traian ezMQCmHpp */         cin >> a[i];
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */     int lmax = 1, l = 1, st = 1, dr = 1;
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */     for(int i = 2; i <= n; ++i){
/* ZKh82W7ek ily traian ezMQCmHpp */         if(a[i] > a[i-1]){
/* ZKh82W7ek ily traian ezMQCmHpp */             l++;
/* ZKh82W7ek ily traian ezMQCmHpp */             if(l > lmax)
/* ZKh82W7ek ily traian ezMQCmHpp */                 lmax = l, st = i - l + 1, dr = i;
/* ZKh82W7ek ily traian ezMQCmHpp */         }
/* ZKh82W7ek ily traian ezMQCmHpp */         else
/* ZKh82W7ek ily traian ezMQCmHpp */             l = 1;
/* ZKh82W7ek ily traian ezMQCmHpp */     }
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */     cout << st << ' ' << dr;
/* ZKh82W7ek ily traian ezMQCmHpp */ 
/* ZKh82W7ek ily traian ezMQCmHpp */     return 0;
/* ZKh82W7ek ily traian ezMQCmHpp */ }