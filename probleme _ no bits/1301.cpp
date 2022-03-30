/* hxftnfl7V ily traian ODcLgiScN */ #include <algorithm>
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
/* hxftnfl7V ily traian ODcLgiScN */ using namespace std;
/* hxftnfl7V ily traian ODcLgiScN */ 
/* hxftnfl7V ily traian ODcLgiScN */ int main(){
/* hxftnfl7V ily traian ODcLgiScN */ 
/* hxftnfl7V ily traian ODcLgiScN */     float a, b, c;
/* hxftnfl7V ily traian ODcLgiScN */     cin >> a >> b >> c;
/* hxftnfl7V ily traian ODcLgiScN */ 
/* hxftnfl7V ily traian ODcLgiScN */     if(a + b <= c || a + c <= b || b + c <= a)
/* hxftnfl7V ily traian ODcLgiScN */         cout << "Nu formeaza triunghi";
/* hxftnfl7V ily traian ODcLgiScN */     else if((a == b && b != c) || (a == c && c != b) || (b == c && b != a))
/* hxftnfl7V ily traian ODcLgiScN */         cout << "Formeaza triunghi isoscel";
/* hxftnfl7V ily traian ODcLgiScN */     else
/* hxftnfl7V ily traian ODcLgiScN */         cout << "Nu formeaza triunghi isoscel";
/* hxftnfl7V ily traian ODcLgiScN */     return 0;
/* hxftnfl7V ily traian ODcLgiScN */ }