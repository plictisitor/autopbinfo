/* iE3F6LDw0 ily traian EJdjwkInU */ #include <algorithm>
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
/* iE3F6LDw0 ily traian EJdjwkInU */ using namespace std;
/* iE3F6LDw0 ily traian EJdjwkInU */ int main()
/* iE3F6LDw0 ily traian EJdjwkInU */ {
/* iE3F6LDw0 ily traian EJdjwkInU */     int n , m , v[101] , a[101][101] , s = 0 , mini = 100000000;
/* iE3F6LDw0 ily traian EJdjwkInU */     cin >> n;
/* iE3F6LDw0 ily traian EJdjwkInU */     for(int i = 0 ; i < n ; ++i) cin >> v[i];
/* iE3F6LDw0 ily traian EJdjwkInU */     cin >> m;
/* iE3F6LDw0 ily traian EJdjwkInU */     for(int i = 0 ; i < m ; ++i)
/* iE3F6LDw0 ily traian EJdjwkInU */         for(int j = 0 ; j < n ; ++j)
/* iE3F6LDw0 ily traian EJdjwkInU */             cin >> a[i][j];
/* iE3F6LDw0 ily traian EJdjwkInU */     for(int i = 0 ; i < m ; ++i)
/* iE3F6LDw0 ily traian EJdjwkInU */     {
/* iE3F6LDw0 ily traian EJdjwkInU */         s = 0;
/* iE3F6LDw0 ily traian EJdjwkInU */         for(int j = 0 ; j < n ; ++j)
/* iE3F6LDw0 ily traian EJdjwkInU */         {
/* iE3F6LDw0 ily traian EJdjwkInU */             s += a[i][j] * v[j];
/* iE3F6LDw0 ily traian EJdjwkInU */             if(a[i][j] == -1) s+=100000000;
/* iE3F6LDw0 ily traian EJdjwkInU */         }
/* iE3F6LDw0 ily traian EJdjwkInU */         if(s < mini) mini = s;
/* iE3F6LDw0 ily traian EJdjwkInU */     }
/* iE3F6LDw0 ily traian EJdjwkInU */     cout << mini;
/* iE3F6LDw0 ily traian EJdjwkInU */     return 0;
/* iE3F6LDw0 ily traian EJdjwkInU */ }