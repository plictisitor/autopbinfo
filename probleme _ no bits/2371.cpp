/* cTohMYQ1H ily traian LQgQA8dmw */ #include <algorithm>
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
/* cTohMYQ1H ily traian LQgQA8dmw */ using namespace std;
/* cTohMYQ1H ily traian LQgQA8dmw */ 
/* cTohMYQ1H ily traian LQgQA8dmw */ int main()
/* cTohMYQ1H ily traian LQgQA8dmw */ {
/* cTohMYQ1H ily traian LQgQA8dmw */     int a , b;
/* cTohMYQ1H ily traian LQgQA8dmw */     cin >> a >> b;
/* cTohMYQ1H ily traian LQgQA8dmw */     int n = a , m = b;
/* cTohMYQ1H ily traian LQgQA8dmw */     while(b)
/* cTohMYQ1H ily traian LQgQA8dmw */     {
/* cTohMYQ1H ily traian LQgQA8dmw */         int r=a%b;
/* cTohMYQ1H ily traian LQgQA8dmw */         a=b;
/* cTohMYQ1H ily traian LQgQA8dmw */         b=r;
/* cTohMYQ1H ily traian LQgQA8dmw */     }
/* cTohMYQ1H ily traian LQgQA8dmw */     cout << n/a+m/a-2;
/* cTohMYQ1H ily traian LQgQA8dmw */     return 0;
/* cTohMYQ1H ily traian LQgQA8dmw */ }