/* oM7KvVSf5 ily traian uMwTEixhz */ #include <algorithm>
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
/* oM7KvVSf5 ily traian uMwTEixhz */ using namespace std;
/* oM7KvVSf5 ily traian uMwTEixhz */ 
/* oM7KvVSf5 ily traian uMwTEixhz */ int main()
/* oM7KvVSf5 ily traian uMwTEixhz */ {
/* oM7KvVSf5 ily traian uMwTEixhz */     int n;
/* oM7KvVSf5 ily traian uMwTEixhz */     cin >> n;
/* oM7KvVSf5 ily traian uMwTEixhz */     int pb , p , a[501];
/* oM7KvVSf5 ily traian uMwTEixhz */     for(int i = 0 ; i < n ; ++i)
/* oM7KvVSf5 ily traian uMwTEixhz */     {
/* oM7KvVSf5 ily traian uMwTEixhz */         cin >> pb >> p;
/* oM7KvVSf5 ily traian uMwTEixhz */             int ok1=0 , ok2=0;
/* oM7KvVSf5 ily traian uMwTEixhz */             for(int i = 0 ; i < pb ; ++i)
/* oM7KvVSf5 ily traian uMwTEixhz */             {
/* oM7KvVSf5 ily traian uMwTEixhz */                 cin >> a[i];
/* oM7KvVSf5 ily traian uMwTEixhz */                 if(a[i]>=p/2 && p%2==0)
/* oM7KvVSf5 ily traian uMwTEixhz */                 ok1++;
/* oM7KvVSf5 ily traian uMwTEixhz */                 else if(a[i]>p/2 && p%2==1)
/* oM7KvVSf5 ily traian uMwTEixhz */                     ok1++;
/* oM7KvVSf5 ily traian uMwTEixhz */                 if(a[i]<=p/10)
/* oM7KvVSf5 ily traian uMwTEixhz */                 ok2++;
/* oM7KvVSf5 ily traian uMwTEixhz */             }
/* oM7KvVSf5 ily traian uMwTEixhz */             if(ok1==1 && ok2==2)
/* oM7KvVSf5 ily traian uMwTEixhz */                 cout << "da" << endl;
/* oM7KvVSf5 ily traian uMwTEixhz */                 else
/* oM7KvVSf5 ily traian uMwTEixhz */                 cout << "nu" << endl;
/* oM7KvVSf5 ily traian uMwTEixhz */     }
/* oM7KvVSf5 ily traian uMwTEixhz */ }