/* JlJJM35sx ily traian ztE46maee */ #include <algorithm>
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
/* JlJJM35sx ily traian ztE46maee */ using namespace std;
/* JlJJM35sx ily traian ztE46maee */ int n , b ,  x[10] , a[10];
/* JlJJM35sx ily traian ztE46maee */ 
/* JlJJM35sx ily traian ztE46maee */ void afisare()
/* JlJJM35sx ily traian ztE46maee */ {
/* JlJJM35sx ily traian ztE46maee */     for(int i = 1 ; i <= n ; ++i)
/* JlJJM35sx ily traian ztE46maee */         cout << x[i];
/* JlJJM35sx ily traian ztE46maee */     cout << '\n';
/* JlJJM35sx ily traian ztE46maee */ }
/* JlJJM35sx ily traian ztE46maee */ 
/* JlJJM35sx ily traian ztE46maee */ void back(int k)
/* JlJJM35sx ily traian ztE46maee */ {
/* JlJJM35sx ily traian ztE46maee */     for(int i = 1 ; i <= 4 ; ++i)
/* JlJJM35sx ily traian ztE46maee */     {
/* JlJJM35sx ily traian ztE46maee */         x[k] = a[i];
/* JlJJM35sx ily traian ztE46maee */         if(k == n)afisare();
/* JlJJM35sx ily traian ztE46maee */         else back(k + 1);
/* JlJJM35sx ily traian ztE46maee */     }
/* JlJJM35sx ily traian ztE46maee */ }
/* JlJJM35sx ily traian ztE46maee */ 
/* JlJJM35sx ily traian ztE46maee */ int main()
/* JlJJM35sx ily traian ztE46maee */ {
/* JlJJM35sx ily traian ztE46maee */     cin >> n;
/* JlJJM35sx ily traian ztE46maee */     a[1] = 2 , a[2] = 3 , a[3] = 5 , a[4] = 7;
/* JlJJM35sx ily traian ztE46maee */     back(1);
/* JlJJM35sx ily traian ztE46maee */     return 0;
/* JlJJM35sx ily traian ztE46maee */ }