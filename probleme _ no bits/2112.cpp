/* jxRbSJrr8 ily traian jAb6j2VIt */ #include <algorithm>
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
/* jxRbSJrr8 ily traian jAb6j2VIt */ 
/* jxRbSJrr8 ily traian jAb6j2VIt */ using namespace std;
/* jxRbSJrr8 ily traian jAb6j2VIt */ 
/* jxRbSJrr8 ily traian jAb6j2VIt */ ifstream istr ("tablita.in");
/* jxRbSJrr8 ily traian jAb6j2VIt */ ofstream ostr ("tablita.out");
/* jxRbSJrr8 ily traian jAb6j2VIt */ 
/* jxRbSJrr8 ily traian jAb6j2VIt */ int main ()
/* jxRbSJrr8 ily traian jAb6j2VIt */ {
/* jxRbSJrr8 ily traian jAb6j2VIt */     int n,x=1,cnt=1;
/* jxRbSJrr8 ily traian jAb6j2VIt */     istr >> n;
/* jxRbSJrr8 ily traian jAb6j2VIt */     while (x < n)
/* jxRbSJrr8 ily traian jAb6j2VIt */     {
/* jxRbSJrr8 ily traian jAb6j2VIt */     cnt++;
/* jxRbSJrr8 ily traian jAb6j2VIt */     x+=cnt;
/* jxRbSJrr8 ily traian jAb6j2VIt */     }
/* jxRbSJrr8 ily traian jAb6j2VIt */     ostr << cnt;
/* jxRbSJrr8 ily traian jAb6j2VIt */ 
/* jxRbSJrr8 ily traian jAb6j2VIt */     istr.close();
/* jxRbSJrr8 ily traian jAb6j2VIt */     ostr.close();
/* jxRbSJrr8 ily traian jAb6j2VIt */     return 0;
/* jxRbSJrr8 ily traian jAb6j2VIt */ }