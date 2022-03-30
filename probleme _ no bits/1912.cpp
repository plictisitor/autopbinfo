/* D61TLmoOH ily traian RZzgzACBU */ #include <algorithm>
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
/* D61TLmoOH ily traian RZzgzACBU */ using namespace std;
/* D61TLmoOH ily traian RZzgzACBU */ ifstream cin("becuri.in");
/* D61TLmoOH ily traian RZzgzACBU */ ofstream cout("becuri.out");
/* D61TLmoOH ily traian RZzgzACBU */ int main()
/* D61TLmoOH ily traian RZzgzACBU */ {
/* D61TLmoOH ily traian RZzgzACBU */     int n , nrd , cnt = 0 , d = 1 , i = 1;
/* D61TLmoOH ily traian RZzgzACBU */     cin >> n;
/* D61TLmoOH ily traian RZzgzACBU */     while(i * d <= n)
/* D61TLmoOH ily traian RZzgzACBU */     {
/* D61TLmoOH ily traian RZzgzACBU */         cnt++;
/* D61TLmoOH ily traian RZzgzACBU */         i++;
/* D61TLmoOH ily traian RZzgzACBU */         d++;
/* D61TLmoOH ily traian RZzgzACBU */     }
/* D61TLmoOH ily traian RZzgzACBU */     cout << cnt;
/* D61TLmoOH ily traian RZzgzACBU */     return 0;
/* D61TLmoOH ily traian RZzgzACBU */ }