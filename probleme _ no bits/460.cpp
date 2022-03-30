/* izWXr2JyN ily traian KO2wrs9nz */ #include <algorithm>
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
/* izWXr2JyN ily traian KO2wrs9nz */ using namespace std;
/* izWXr2JyN ily traian KO2wrs9nz */ int main() 
/* izWXr2JyN ily traian KO2wrs9nz */ {
/* izWXr2JyN ily traian KO2wrs9nz */   int h, m, x;
/* izWXr2JyN ily traian KO2wrs9nz */   cin >> h >> m >> x;
/* izWXr2JyN ily traian KO2wrs9nz */   h = h + ((x + m) / 60);
/* izWXr2JyN ily traian KO2wrs9nz */   m = (m + x) - (((x + m) / 60) * 60);
/* izWXr2JyN ily traian KO2wrs9nz */   if (h > 23)
/* izWXr2JyN ily traian KO2wrs9nz */   h = h - 24 * (h / 24);
/* izWXr2JyN ily traian KO2wrs9nz */   cout << h  << ' ' << m << endl;
/* izWXr2JyN ily traian KO2wrs9nz */   return 0;
/* izWXr2JyN ily traian KO2wrs9nz */ }