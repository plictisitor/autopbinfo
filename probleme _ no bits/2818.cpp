/* yElKhJ9LL ily traian Vce8IXFtn */ #include <algorithm>
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
/* yElKhJ9LL ily traian Vce8IXFtn */ using namespace std;
/* yElKhJ9LL ily traian Vce8IXFtn */ ifstream cin("inserare2.in");
/* yElKhJ9LL ily traian Vce8IXFtn */ ofstream cout("inserare2.out");
/* yElKhJ9LL ily traian Vce8IXFtn */ int main()
/* yElKhJ9LL ily traian Vce8IXFtn */ {
/* yElKhJ9LL ily traian Vce8IXFtn */     int n , m , x , mini , maxi , y , ok = 0 , ind = -1;
/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> n >> m;
/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> mini;
/* yElKhJ9LL ily traian Vce8IXFtn */     for(int i = 2 ; i < n ; ++i)
/* yElKhJ9LL ily traian Vce8IXFtn */         cin >> x;
/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> maxi;
/* yElKhJ9LL ily traian Vce8IXFtn */     cin >> x;
/* yElKhJ9LL ily traian Vce8IXFtn */     for(int i = 2 ; i <= m ; ++i)
/* yElKhJ9LL ily traian Vce8IXFtn */     {
/* yElKhJ9LL ily traian Vce8IXFtn */         cin >> x;
/* yElKhJ9LL ily traian Vce8IXFtn */         if(y <= mini && x >= maxi) ok = 1 , ind = i;
/* yElKhJ9LL ily traian Vce8IXFtn */         y = x;
/* yElKhJ9LL ily traian Vce8IXFtn */     }
/* yElKhJ9LL ily traian Vce8IXFtn */     if(ok == 1) cout << ind;
/* yElKhJ9LL ily traian Vce8IXFtn */     else cout << "imposibil";
/* yElKhJ9LL ily traian Vce8IXFtn */     return 0;
/* yElKhJ9LL ily traian Vce8IXFtn */ }