/* Udf40R9ku ily traian x3OYDjcsI */ #include <algorithm>
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
/* Udf40R9ku ily traian x3OYDjcsI */ using namespace std;
/* Udf40R9ku ily traian x3OYDjcsI */ ifstream fin("easy_sum.in");
/* Udf40R9ku ily traian x3OYDjcsI */ ofstream fout("easy_sum.out");
/* Udf40R9ku ily traian x3OYDjcsI */ int main()
/* Udf40R9ku ily traian x3OYDjcsI */ {
/* Udf40R9ku ily traian x3OYDjcsI */     int n;
/* Udf40R9ku ily traian x3OYDjcsI */     long long x , s = 0;
/* Udf40R9ku ily traian x3OYDjcsI */     fin>>n;
/* Udf40R9ku ily traian x3OYDjcsI */     for(int i = 0; i < n; i++)
/* Udf40R9ku ily traian x3OYDjcsI */     {
/* Udf40R9ku ily traian x3OYDjcsI */         fin >> x;
/* Udf40R9ku ily traian x3OYDjcsI */         s = (s + x * (i + 1) % 1000000007 * (n - i) % 1000000007) % 1000000007;
/* Udf40R9ku ily traian x3OYDjcsI */     }
/* Udf40R9ku ily traian x3OYDjcsI */ 
/* Udf40R9ku ily traian x3OYDjcsI */     fout << s;
/* Udf40R9ku ily traian x3OYDjcsI */     return 0;
/* Udf40R9ku ily traian x3OYDjcsI */ }