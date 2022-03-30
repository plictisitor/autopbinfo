/* I5icC22Bf ily traian 0EN1mb6ao */ #include <algorithm>
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
/* I5icC22Bf ily traian 0EN1mb6ao */ using namespace std;
/* I5icC22Bf ily traian 0EN1mb6ao */ 
/* I5icC22Bf ily traian 0EN1mb6ao */ int main()
/* I5icC22Bf ily traian 0EN1mb6ao */ {
/* I5icC22Bf ily traian 0EN1mb6ao */     long long int n;
/* I5icC22Bf ily traian 0EN1mb6ao */     cin >> n;
/* I5icC22Bf ily traian 0EN1mb6ao */     long long int tmp;
/* I5icC22Bf ily traian 0EN1mb6ao */     long long int s=0;
/* I5icC22Bf ily traian 0EN1mb6ao */     for(int i = 0 ; i < n ; ++i)
/* I5icC22Bf ily traian 0EN1mb6ao */     {
/* I5icC22Bf ily traian 0EN1mb6ao */         cin >> tmp;
/* I5icC22Bf ily traian 0EN1mb6ao */         while(tmp)
/* I5icC22Bf ily traian 0EN1mb6ao */         {
/* I5icC22Bf ily traian 0EN1mb6ao */             s+=(tmp%10)*(tmp%10)*(tmp%10);
/* I5icC22Bf ily traian 0EN1mb6ao */             tmp/=10;
/* I5icC22Bf ily traian 0EN1mb6ao */         }
/* I5icC22Bf ily traian 0EN1mb6ao */     }
/* I5icC22Bf ily traian 0EN1mb6ao */     cout << s;
/* I5icC22Bf ily traian 0EN1mb6ao */ }