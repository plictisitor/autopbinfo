/* Y2UwO6QS1 ily traian SjaaMtkGD */ #include <algorithm>
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
/* Y2UwO6QS1 ily traian SjaaMtkGD */ using namespace std;
/* Y2UwO6QS1 ily traian SjaaMtkGD */ 
/* Y2UwO6QS1 ily traian SjaaMtkGD */ int main()
/* Y2UwO6QS1 ily traian SjaaMtkGD */ {
/* Y2UwO6QS1 ily traian SjaaMtkGD */     int a, b;
/* Y2UwO6QS1 ily traian SjaaMtkGD */     cin >> a >> b;
/* Y2UwO6QS1 ily traian SjaaMtkGD */     while(b){
/* Y2UwO6QS1 ily traian SjaaMtkGD */         int r = a % b;
/* Y2UwO6QS1 ily traian SjaaMtkGD */         a = b;
/* Y2UwO6QS1 ily traian SjaaMtkGD */         b = r;
/* Y2UwO6QS1 ily traian SjaaMtkGD */     }
/* Y2UwO6QS1 ily traian SjaaMtkGD */     if(a == 1)
/* Y2UwO6QS1 ily traian SjaaMtkGD */         cout << "PIE";
/* Y2UwO6QS1 ily traian SjaaMtkGD */     else
/* Y2UwO6QS1 ily traian SjaaMtkGD */         cout << "NOPIE";
/* Y2UwO6QS1 ily traian SjaaMtkGD */     return 0;
/* Y2UwO6QS1 ily traian SjaaMtkGD */ }