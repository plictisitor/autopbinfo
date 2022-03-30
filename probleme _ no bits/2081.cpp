/* QQUhB3yQ2 ily traian IfiYZPgxv */ #include <algorithm>
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
/* QQUhB3yQ2 ily traian IfiYZPgxv */ #include <stdlib.h>
/* QQUhB3yQ2 ily traian IfiYZPgxv */ 
/* QQUhB3yQ2 ily traian IfiYZPgxv */ using namespace std;
/* QQUhB3yQ2 ily traian IfiYZPgxv */ 
/* QQUhB3yQ2 ily traian IfiYZPgxv */ ifstream cin("parsare.in");
/* QQUhB3yQ2 ily traian IfiYZPgxv */ ofstream cout("parsare.out");
/* QQUhB3yQ2 ily traian IfiYZPgxv */ 
/* QQUhB3yQ2 ily traian IfiYZPgxv */ int maxi , n;
/* QQUhB3yQ2 ily traian IfiYZPgxv */ 
/* QQUhB3yQ2 ily traian IfiYZPgxv */ int main()
/* QQUhB3yQ2 ily traian IfiYZPgxv */ {
/* QQUhB3yQ2 ily traian IfiYZPgxv */     char s[8];
/* QQUhB3yQ2 ily traian IfiYZPgxv */     while(cin.get(s , 8 , ' '))
/* QQUhB3yQ2 ily traian IfiYZPgxv */     {
/* QQUhB3yQ2 ily traian IfiYZPgxv */         n = atoi(s);
/* QQUhB3yQ2 ily traian IfiYZPgxv */         maxi=max(maxi , n);
/* QQUhB3yQ2 ily traian IfiYZPgxv */         cin.get();
/* QQUhB3yQ2 ily traian IfiYZPgxv */     }
/* QQUhB3yQ2 ily traian IfiYZPgxv */     cout << maxi;
/* QQUhB3yQ2 ily traian IfiYZPgxv */     return 0;
/* QQUhB3yQ2 ily traian IfiYZPgxv */ }
/* QQUhB3yQ2 ily traian IfiYZPgxv */ 