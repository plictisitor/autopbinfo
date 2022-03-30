/* bB59MaFNa ily traian 2L2L3UZxH */ #include <algorithm>
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
/* bB59MaFNa ily traian 2L2L3UZxH */ 
/* bB59MaFNa ily traian 2L2L3UZxH */ using namespace std;
/* bB59MaFNa ily traian 2L2L3UZxH */ 
/* bB59MaFNa ily traian 2L2L3UZxH */ int main ()
/* bB59MaFNa ily traian 2L2L3UZxH */ {
/* bB59MaFNa ily traian 2L2L3UZxH */     long long int tmp;
/* bB59MaFNa ily traian 2L2L3UZxH */     long long int min=1000001;
/* bB59MaFNa ily traian 2L2L3UZxH */     cin >> tmp;
/* bB59MaFNa ily traian 2L2L3UZxH */     if (tmp > 0)
/* bB59MaFNa ily traian 2L2L3UZxH */     min = tmp;
/* bB59MaFNa ily traian 2L2L3UZxH */     while (tmp)
/* bB59MaFNa ily traian 2L2L3UZxH */     {
/* bB59MaFNa ily traian 2L2L3UZxH */     cin >> tmp;
/* bB59MaFNa ily traian 2L2L3UZxH */     if (tmp > 0 && tmp < min)
/* bB59MaFNa ily traian 2L2L3UZxH */     min = tmp;
/* bB59MaFNa ily traian 2L2L3UZxH */     }
/* bB59MaFNa ily traian 2L2L3UZxH */     if (min == 1000001)
/* bB59MaFNa ily traian 2L2L3UZxH */     cout << "NU EXISTA";
/* bB59MaFNa ily traian 2L2L3UZxH */     else
/* bB59MaFNa ily traian 2L2L3UZxH */     cout << min;
/* bB59MaFNa ily traian 2L2L3UZxH */     return 0;
/* bB59MaFNa ily traian 2L2L3UZxH */ }