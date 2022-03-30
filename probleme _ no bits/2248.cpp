/* yib4dcIQj ily traian Bim5cdd0E */ #include <algorithm>
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
/* yib4dcIQj ily traian Bim5cdd0E */ using namespace std;
/* yib4dcIQj ily traian Bim5cdd0E */ 
/* yib4dcIQj ily traian Bim5cdd0E */ int main ()
/* yib4dcIQj ily traian Bim5cdd0E */ {
/* yib4dcIQj ily traian Bim5cdd0E */     int n,x,y,v;
/* yib4dcIQj ily traian Bim5cdd0E */     cin >> n;
/* yib4dcIQj ily traian Bim5cdd0E */     cin >> x;
/* yib4dcIQj ily traian Bim5cdd0E */     cin >> y;
/* yib4dcIQj ily traian Bim5cdd0E */     cin >> v;
/* yib4dcIQj ily traian Bim5cdd0E */     cout << (x-1)*n+y << ' ';
/* yib4dcIQj ily traian Bim5cdd0E */     if (v%n==0) cout << v/n << ' ' << n;
/* yib4dcIQj ily traian Bim5cdd0E */     else cout << v/n+1 << ' ' << v%n;
/* yib4dcIQj ily traian Bim5cdd0E */     return 0;
/* yib4dcIQj ily traian Bim5cdd0E */ }