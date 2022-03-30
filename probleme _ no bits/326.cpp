/* XhqwlABvQ ily traian K1hPfiNaZ */ #include <algorithm>
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
/* XhqwlABvQ ily traian K1hPfiNaZ */ 
/* XhqwlABvQ ily traian K1hPfiNaZ */ using namespace std;
/* XhqwlABvQ ily traian K1hPfiNaZ */ 
/* XhqwlABvQ ily traian K1hPfiNaZ */ int main ()
/* XhqwlABvQ ily traian K1hPfiNaZ */ {
/* XhqwlABvQ ily traian K1hPfiNaZ */     int n;
/* XhqwlABvQ ily traian K1hPfiNaZ */     int a=-1;
/* XhqwlABvQ ily traian K1hPfiNaZ */     int tmp;
/* XhqwlABvQ ily traian K1hPfiNaZ */     cin >> n;
/* XhqwlABvQ ily traian K1hPfiNaZ */     for (int i=0 ; i<n ; i ++){
/* XhqwlABvQ ily traian K1hPfiNaZ */     cin >> tmp;
/* XhqwlABvQ ily traian K1hPfiNaZ */     if (tmp % 2 == 0)
/* XhqwlABvQ ily traian K1hPfiNaZ */     a = tmp;
/* XhqwlABvQ ily traian K1hPfiNaZ */     }
/* XhqwlABvQ ily traian K1hPfiNaZ */     if (a==-1)
/* XhqwlABvQ ily traian K1hPfiNaZ */     cout << "IMPOSIBIL";
/* XhqwlABvQ ily traian K1hPfiNaZ */     else
/* XhqwlABvQ ily traian K1hPfiNaZ */     cout << a;
/* XhqwlABvQ ily traian K1hPfiNaZ */     return 0;
/* XhqwlABvQ ily traian K1hPfiNaZ */ }