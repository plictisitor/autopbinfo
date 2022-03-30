/* jWaJaqLZw ily traian WZwc2Yvhm */ #include <algorithm>
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
/* jWaJaqLZw ily traian WZwc2Yvhm */ using namespace std;
/* jWaJaqLZw ily traian WZwc2Yvhm */ ifstream cin("produsmaxim.in");
/* jWaJaqLZw ily traian WZwc2Yvhm */ ofstream cout("produsmaxim.out");
/* jWaJaqLZw ily traian WZwc2Yvhm */ int n;
/* jWaJaqLZw ily traian WZwc2Yvhm */ int main()
/* jWaJaqLZw ily traian WZwc2Yvhm */ {
/* jWaJaqLZw ily traian WZwc2Yvhm */     while(cin >> n)
/* jWaJaqLZw ily traian WZwc2Yvhm */     {
/* jWaJaqLZw ily traian WZwc2Yvhm */         if (n % 3 == 0) cout << n << ' ' << n / 3 << ' ' << n / 3 << ' ' << n / 3 << '\n';
/* jWaJaqLZw ily traian WZwc2Yvhm */         else if (n % 3 == 1) cout << n << ' ' << n / 3 << ' ' << n / 3 << ' ' << n / 3 + 1 << '\n';
/* jWaJaqLZw ily traian WZwc2Yvhm */         else cout << n << ' ' << n / 3 << ' ' << n / 3 + 1 << ' ' << n / 3 + 1 << '\n';
/* jWaJaqLZw ily traian WZwc2Yvhm */     }
/* jWaJaqLZw ily traian WZwc2Yvhm */     return 0;
/* jWaJaqLZw ily traian WZwc2Yvhm */ }