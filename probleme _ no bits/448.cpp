/* VcaUNe6oc ily traian gtzdDSEfA */ #include <algorithm>
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
/* VcaUNe6oc ily traian gtzdDSEfA */ 
/* VcaUNe6oc ily traian gtzdDSEfA */ 
/* VcaUNe6oc ily traian gtzdDSEfA */ using namespace std;
/* VcaUNe6oc ily traian gtzdDSEfA */ 
/* VcaUNe6oc ily traian gtzdDSEfA */ int main()
/* VcaUNe6oc ily traian gtzdDSEfA */ {
/* VcaUNe6oc ily traian gtzdDSEfA */     int a;
/* VcaUNe6oc ily traian gtzdDSEfA */     cin >> a;
/* VcaUNe6oc ily traian gtzdDSEfA */     int arrayInfo[3];
/* VcaUNe6oc ily traian gtzdDSEfA */     arrayInfo[0] = a % 10;
/* VcaUNe6oc ily traian gtzdDSEfA */     a/=10;
/* VcaUNe6oc ily traian gtzdDSEfA */     arrayInfo[1] = a % 10;
/* VcaUNe6oc ily traian gtzdDSEfA */     a/=10;
/* VcaUNe6oc ily traian gtzdDSEfA */     arrayInfo[2] = a % 10;
/* VcaUNe6oc ily traian gtzdDSEfA */     a/=10;
/* VcaUNe6oc ily traian gtzdDSEfA */     sort (arrayInfo , arrayInfo + 3);
/* VcaUNe6oc ily traian gtzdDSEfA */     cout << arrayInfo[0] <<' '<< arrayInfo[1] <<' '<< arrayInfo[2];
/* VcaUNe6oc ily traian gtzdDSEfA */     return 0;
/* VcaUNe6oc ily traian gtzdDSEfA */ }