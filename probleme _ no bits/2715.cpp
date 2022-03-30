/* jjyALO4Z9 ily traian FqhAmXHwG */ #include <algorithm>
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
/* jjyALO4Z9 ily traian FqhAmXHwG */ using namespace std;
/* jjyALO4Z9 ily traian FqhAmXHwG */ 
/* jjyALO4Z9 ily traian FqhAmXHwG */ int main()
/* jjyALO4Z9 ily traian FqhAmXHwG */ {
/* jjyALO4Z9 ily traian FqhAmXHwG */     char c;
/* jjyALO4Z9 ily traian FqhAmXHwG */     while(cin.get(c))
/* jjyALO4Z9 ily traian FqhAmXHwG */     {
/* jjyALO4Z9 ily traian FqhAmXHwG */         if(c!=' ' && c!='\0')
/* jjyALO4Z9 ily traian FqhAmXHwG */         {
/* jjyALO4Z9 ily traian FqhAmXHwG */             if(c >= 'a')
/* jjyALO4Z9 ily traian FqhAmXHwG */                 c = (c - 'a' + 13) % 26 + 'a';
/* jjyALO4Z9 ily traian FqhAmXHwG */             else
/* jjyALO4Z9 ily traian FqhAmXHwG */                 c = (c - 'A' + 13) % 26 + 'A';
/* jjyALO4Z9 ily traian FqhAmXHwG */         }
/* jjyALO4Z9 ily traian FqhAmXHwG */         cout << c;
/* jjyALO4Z9 ily traian FqhAmXHwG */     }
/* jjyALO4Z9 ily traian FqhAmXHwG */     return 0;
/* jjyALO4Z9 ily traian FqhAmXHwG */ }