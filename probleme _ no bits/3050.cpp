/* m8klKkqWH ily traian 2kHzzR57W */ #include <algorithm>
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
/* m8klKkqWH ily traian 2kHzzR57W */ 
/* m8klKkqWH ily traian 2kHzzR57W */ using namespace std;
/* m8klKkqWH ily traian 2kHzzR57W */ 
/* m8klKkqWH ily traian 2kHzzR57W */ ifstream cin("ncif.in");
/* m8klKkqWH ily traian 2kHzzR57W */ ofstream cout("ncif.out");
/* m8klKkqWH ily traian 2kHzzR57W */ 
/* m8klKkqWH ily traian 2kHzzR57W */ int main()
/* m8klKkqWH ily traian 2kHzzR57W */ {
/* m8klKkqWH ily traian 2kHzzR57W */     double n , a , b , r;
/* m8klKkqWH ily traian 2kHzzR57W */     cin >> n;
/* m8klKkqWH ily traian 2kHzzR57W */     for(int i = 1 ; i <= n ; i++)
/* m8klKkqWH ily traian 2kHzzR57W */     {
/* m8klKkqWH ily traian 2kHzzR57W */         cin >> a >> b;
/* m8klKkqWH ily traian 2kHzzR57W */         cout << (int)(log10(a) *b + 1) << '\n';
/* m8klKkqWH ily traian 2kHzzR57W */ 
/* m8klKkqWH ily traian 2kHzzR57W */     }
/* m8klKkqWH ily traian 2kHzzR57W */ }