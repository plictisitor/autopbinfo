/* uMgSlf0pW ily traian bBLYHgHrA */ #include <algorithm>
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
/* uMgSlf0pW ily traian bBLYHgHrA */ using namespace std;
/* uMgSlf0pW ily traian bBLYHgHrA */ int a[10001];
/* uMgSlf0pW ily traian bBLYHgHrA */ int main()
/* uMgSlf0pW ily traian bBLYHgHrA */ {
/* uMgSlf0pW ily traian bBLYHgHrA */     int n , t1 , t2 , x , y , cnt = 0;
/* uMgSlf0pW ily traian bBLYHgHrA */     cin >> n;
/* uMgSlf0pW ily traian bBLYHgHrA */     for(int i = 1; i <= n ; i++)
/* uMgSlf0pW ily traian bBLYHgHrA */       {
/* uMgSlf0pW ily traian bBLYHgHrA */          cin >> x >> y;
/* uMgSlf0pW ily traian bBLYHgHrA */          a[x]++;
/* uMgSlf0pW ily traian bBLYHgHrA */          a[y+1]--;
/* uMgSlf0pW ily traian bBLYHgHrA */       }
/* uMgSlf0pW ily traian bBLYHgHrA */     for(int i = 1 ; i <= 10000 ; ++i)
/* uMgSlf0pW ily traian bBLYHgHrA */             a[i]+=a[i-1];
/* uMgSlf0pW ily traian bBLYHgHrA */     for(int i = 1 ; i <= 10000 ; ++i)
/* uMgSlf0pW ily traian bBLYHgHrA */         if(a[i]>cnt) cnt=a[i];
/* uMgSlf0pW ily traian bBLYHgHrA */     cout << cnt;
/* uMgSlf0pW ily traian bBLYHgHrA */     return 0;
/* uMgSlf0pW ily traian bBLYHgHrA */ }