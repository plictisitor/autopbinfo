/* hsrlwV90S ily traian 8e1qBhZ0I */ #include <algorithm>
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
/* hsrlwV90S ily traian 8e1qBhZ0I */ using namespace std;
/* hsrlwV90S ily traian 8e1qBhZ0I */ ifstream cin("fulger.in");
/* hsrlwV90S ily traian 8e1qBhZ0I */ ofstream cout("fulger.out");
/* hsrlwV90S ily traian 8e1qBhZ0I */ int put9(int n)
/* hsrlwV90S ily traian 8e1qBhZ0I */ {
/* hsrlwV90S ily traian 8e1qBhZ0I */     int p = 0;
/* hsrlwV90S ily traian 8e1qBhZ0I */     while(n != 0)
/* hsrlwV90S ily traian 8e1qBhZ0I */     {
/* hsrlwV90S ily traian 8e1qBhZ0I */         p = p * 10 + 9;
/* hsrlwV90S ily traian 8e1qBhZ0I */         n /= 10;
/* hsrlwV90S ily traian 8e1qBhZ0I */     }
/* hsrlwV90S ily traian 8e1qBhZ0I */     return p;
/* hsrlwV90S ily traian 8e1qBhZ0I */ }
/* hsrlwV90S ily traian 8e1qBhZ0I */ int main()
/* hsrlwV90S ily traian 8e1qBhZ0I */ {
/* hsrlwV90S ily traian 8e1qBhZ0I */     int n , x , cnt = 0;
/* hsrlwV90S ily traian 8e1qBhZ0I */     cin >> n;
/* hsrlwV90S ily traian 8e1qBhZ0I */     for(int i = 1 ; i <= n ; i++)
/* hsrlwV90S ily traian 8e1qBhZ0I */     {
/* hsrlwV90S ily traian 8e1qBhZ0I */         cin >> x;
/* hsrlwV90S ily traian 8e1qBhZ0I */         cout << put9(x) - x << " ";
/* hsrlwV90S ily traian 8e1qBhZ0I */         if((put9(x) - x) % 100 == 10) cnt++;
/* hsrlwV90S ily traian 8e1qBhZ0I */     }
/* hsrlwV90S ily traian 8e1qBhZ0I */     cout << '\n' << cnt;
/* hsrlwV90S ily traian 8e1qBhZ0I */ }