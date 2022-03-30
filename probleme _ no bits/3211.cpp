/* 5kEHiV1HW ily traian 8ay76Wxrd */ #include <algorithm>
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
/* 5kEHiV1HW ily traian 8ay76Wxrd */ using namespace std;
/* 5kEHiV1HW ily traian 8ay76Wxrd */ 
/* 5kEHiV1HW ily traian 8ay76Wxrd */ int n, a, b;
/* 5kEHiV1HW ily traian 8ay76Wxrd */ 
/* 5kEHiV1HW ily traian 8ay76Wxrd */ int main(){
/* 5kEHiV1HW ily traian 8ay76Wxrd */     cin >> n >> a >> b;
/* 5kEHiV1HW ily traian 8ay76Wxrd */     if(n % a == 0 && n % b != 0)
/* 5kEHiV1HW ily traian 8ay76Wxrd */         cout << "C";
/* 5kEHiV1HW ily traian 8ay76Wxrd */     else if(n % a != 0 && n % b == 0)
/* 5kEHiV1HW ily traian 8ay76Wxrd */         cout << "N";
/* 5kEHiV1HW ily traian 8ay76Wxrd */     else if(n % a == 0 && n % b == 0)
/* 5kEHiV1HW ily traian 8ay76Wxrd */         cout << "CN";
/* 5kEHiV1HW ily traian 8ay76Wxrd */     else
/* 5kEHiV1HW ily traian 8ay76Wxrd */         cout << "nimic";
/* 5kEHiV1HW ily traian 8ay76Wxrd */     return 0;
/* 5kEHiV1HW ily traian 8ay76Wxrd */ }
/* 5kEHiV1HW ily traian 8ay76Wxrd */     