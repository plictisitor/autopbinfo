/* cccUB1hrV ily traian uxS1oiPXg */ #include <algorithm>
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
/* cccUB1hrV ily traian uxS1oiPXg */ using namespace std;
/* cccUB1hrV ily traian uxS1oiPXg */ 
/* cccUB1hrV ily traian uxS1oiPXg */ int main()
/* cccUB1hrV ily traian uxS1oiPXg */ {
/* cccUB1hrV ily traian uxS1oiPXg */     int n , m;
/* cccUB1hrV ily traian uxS1oiPXg */     cin >> n >>m;
/* cccUB1hrV ily traian uxS1oiPXg */     int a = m * n;
/* cccUB1hrV ily traian uxS1oiPXg */     while(a != 0)
/* cccUB1hrV ily traian uxS1oiPXg */     {
/* cccUB1hrV ily traian uxS1oiPXg */         int cnt = m;
/* cccUB1hrV ily traian uxS1oiPXg */         for(int i = a; cnt != 0 ; --i)
/* cccUB1hrV ily traian uxS1oiPXg */         {
/* cccUB1hrV ily traian uxS1oiPXg */             cout << i <<" ";
/* cccUB1hrV ily traian uxS1oiPXg */             cnt--;
/* cccUB1hrV ily traian uxS1oiPXg */         }
/* cccUB1hrV ily traian uxS1oiPXg */         a-=m;
/* cccUB1hrV ily traian uxS1oiPXg */         cout << endl;
/* cccUB1hrV ily traian uxS1oiPXg */     }
/* cccUB1hrV ily traian uxS1oiPXg */     return 0;
/* cccUB1hrV ily traian uxS1oiPXg */ }