/* xOAgrQaeo ily traian roo34vG4r */ #include <algorithm>
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
/* xOAgrQaeo ily traian roo34vG4r */ using namespace std;
/* xOAgrQaeo ily traian roo34vG4r */ 
/* xOAgrQaeo ily traian roo34vG4r */ int main()
/* xOAgrQaeo ily traian roo34vG4r */ {
/* xOAgrQaeo ily traian roo34vG4r */     int a , b;
/* xOAgrQaeo ily traian roo34vG4r */     cin >> a >> b;
/* xOAgrQaeo ily traian roo34vG4r */     if(a % 2 == b % 2)
/* xOAgrQaeo ily traian roo34vG4r */     {
/* xOAgrQaeo ily traian roo34vG4r */         int cnt = 0;
/* xOAgrQaeo ily traian roo34vG4r */         while(a)
/* xOAgrQaeo ily traian roo34vG4r */         {
/* xOAgrQaeo ily traian roo34vG4r */             if(a % 2 == 0)
/* xOAgrQaeo ily traian roo34vG4r */                 cnt++;
/* xOAgrQaeo ily traian roo34vG4r */             a/=10;
/* xOAgrQaeo ily traian roo34vG4r */         }
/* xOAgrQaeo ily traian roo34vG4r */         while(b)
/* xOAgrQaeo ily traian roo34vG4r */         {
/* xOAgrQaeo ily traian roo34vG4r */             if(b % 2 == 0)
/* xOAgrQaeo ily traian roo34vG4r */                 cnt++;
/* xOAgrQaeo ily traian roo34vG4r */             b/=10;
/* xOAgrQaeo ily traian roo34vG4r */         }
/* xOAgrQaeo ily traian roo34vG4r */         cout << cnt;
/* xOAgrQaeo ily traian roo34vG4r */     }
/* xOAgrQaeo ily traian roo34vG4r */     else
/* xOAgrQaeo ily traian roo34vG4r */     {
/* xOAgrQaeo ily traian roo34vG4r */         int cnt = 0;
/* xOAgrQaeo ily traian roo34vG4r */         while(a)
/* xOAgrQaeo ily traian roo34vG4r */         {
/* xOAgrQaeo ily traian roo34vG4r */             if(a % 2 == 1)
/* xOAgrQaeo ily traian roo34vG4r */                 cnt++;
/* xOAgrQaeo ily traian roo34vG4r */             a/=10;
/* xOAgrQaeo ily traian roo34vG4r */         }
/* xOAgrQaeo ily traian roo34vG4r */         while(b)
/* xOAgrQaeo ily traian roo34vG4r */         {
/* xOAgrQaeo ily traian roo34vG4r */             if(b % 2 == 1)
/* xOAgrQaeo ily traian roo34vG4r */                 cnt++;
/* xOAgrQaeo ily traian roo34vG4r */             b/=10;
/* xOAgrQaeo ily traian roo34vG4r */         }
/* xOAgrQaeo ily traian roo34vG4r */         cout << cnt;
/* xOAgrQaeo ily traian roo34vG4r */     }
/* xOAgrQaeo ily traian roo34vG4r */     return 0;
/* xOAgrQaeo ily traian roo34vG4r */ }