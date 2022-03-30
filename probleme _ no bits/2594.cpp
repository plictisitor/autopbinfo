/* wAweCy9iJ ily traian 6d49F61zx */ #include <algorithm>
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
/* wAweCy9iJ ily traian 6d49F61zx */ 
/* wAweCy9iJ ily traian 6d49F61zx */ using namespace std;
/* wAweCy9iJ ily traian 6d49F61zx */ 
/* wAweCy9iJ ily traian 6d49F61zx */ int a[1001] , b[1001] , p1 , p2;
/* wAweCy9iJ ily traian 6d49F61zx */ 
/* wAweCy9iJ ily traian 6d49F61zx */ int main()
/* wAweCy9iJ ily traian 6d49F61zx */ {
/* wAweCy9iJ ily traian 6d49F61zx */     int n;
/* wAweCy9iJ ily traian 6d49F61zx */     cin >> n;
/* wAweCy9iJ ily traian 6d49F61zx */     int x;
/* wAweCy9iJ ily traian 6d49F61zx */     for(int i = 1 ; i <= n ; ++i)
/* wAweCy9iJ ily traian 6d49F61zx */     {
/* wAweCy9iJ ily traian 6d49F61zx */         cin >> x;
/* wAweCy9iJ ily traian 6d49F61zx */         if(x%2==0)
/* wAweCy9iJ ily traian 6d49F61zx */             a[p1]=x , p1++;
/* wAweCy9iJ ily traian 6d49F61zx */         else
/* wAweCy9iJ ily traian 6d49F61zx */             b[p2]=x , p2++;
/* wAweCy9iJ ily traian 6d49F61zx */     }
/* wAweCy9iJ ily traian 6d49F61zx */     sort(a , a + p1);
/* wAweCy9iJ ily traian 6d49F61zx */     sort(b , b + p2);
/* wAweCy9iJ ily traian 6d49F61zx */     for(int i = 0 ; i < p1 ; ++i)
/* wAweCy9iJ ily traian 6d49F61zx */         cout << a[i] << ' ';
/* wAweCy9iJ ily traian 6d49F61zx */     for(int i = 0 ; i < p2 ; ++i)
/* wAweCy9iJ ily traian 6d49F61zx */         cout << b[i] << ' ';
/* wAweCy9iJ ily traian 6d49F61zx */     return 0;
/* wAweCy9iJ ily traian 6d49F61zx */ }