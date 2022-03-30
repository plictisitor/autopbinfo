/* ZWlWOUSnX ily traian DVahAfnvY */ #include <algorithm>
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
/* ZWlWOUSnX ily traian DVahAfnvY */ using namespace std;
/* ZWlWOUSnX ily traian DVahAfnvY */ 
/* ZWlWOUSnX ily traian DVahAfnvY */ bool c[1000001];
/* ZWlWOUSnX ily traian DVahAfnvY */ int x = 1000001;
/* ZWlWOUSnX ily traian DVahAfnvY */ 
/* ZWlWOUSnX ily traian DVahAfnvY */ void ciur()
/* ZWlWOUSnX ily traian DVahAfnvY */ {
/* ZWlWOUSnX ily traian DVahAfnvY */     c[1]=c[0]=1;
/* ZWlWOUSnX ily traian DVahAfnvY */     for(int i = 2 ; i * i <= x ; ++i)
/* ZWlWOUSnX ily traian DVahAfnvY */         for(int j = 2 ; i * j <= x ; ++j)
/* ZWlWOUSnX ily traian DVahAfnvY */             c[i*j]=1;
/* ZWlWOUSnX ily traian DVahAfnvY */ }
/* ZWlWOUSnX ily traian DVahAfnvY */ 
/* ZWlWOUSnX ily traian DVahAfnvY */ int main()
/* ZWlWOUSnX ily traian DVahAfnvY */ {
/* ZWlWOUSnX ily traian DVahAfnvY */     int n;
/* ZWlWOUSnX ily traian DVahAfnvY */     cin >> n;
/* ZWlWOUSnX ily traian DVahAfnvY */     ciur();
/* ZWlWOUSnX ily traian DVahAfnvY */     for(int i = 1 ; i <= n ; ++i)
/* ZWlWOUSnX ily traian DVahAfnvY */         if(c[i]==0)
/* ZWlWOUSnX ily traian DVahAfnvY */             cout << i << ' ';
/* ZWlWOUSnX ily traian DVahAfnvY */     return 0;
/* ZWlWOUSnX ily traian DVahAfnvY */ }