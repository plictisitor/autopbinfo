/* jz7lR4EHu ily traian D6ZB78Cwn */ #include <algorithm>
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
/* jz7lR4EHu ily traian D6ZB78Cwn */ using namespace std;
/* jz7lR4EHu ily traian D6ZB78Cwn */ int n;
/* jz7lR4EHu ily traian D6ZB78Cwn */ 
/* jz7lR4EHu ily traian D6ZB78Cwn */ int pow(int x , int n , int mod)
/* jz7lR4EHu ily traian D6ZB78Cwn */ {
/* jz7lR4EHu ily traian D6ZB78Cwn */     if(n == 0)return 1;
/* jz7lR4EHu ily traian D6ZB78Cwn */     else
/* jz7lR4EHu ily traian D6ZB78Cwn */     {
/* jz7lR4EHu ily traian D6ZB78Cwn */         int p = pow(x , n / 2 , mod);
/* jz7lR4EHu ily traian D6ZB78Cwn */         if(n % 2 == 0) return 1ull * p * p % mod;
/* jz7lR4EHu ily traian D6ZB78Cwn */         else return 1ull * p * p * x % mod;
/* jz7lR4EHu ily traian D6ZB78Cwn */     }
/* jz7lR4EHu ily traian D6ZB78Cwn */ }
/* jz7lR4EHu ily traian D6ZB78Cwn */ 
/* jz7lR4EHu ily traian D6ZB78Cwn */ int main()
/* jz7lR4EHu ily traian D6ZB78Cwn */ {
/* jz7lR4EHu ily traian D6ZB78Cwn */     cin >> n;
/* jz7lR4EHu ily traian D6ZB78Cwn */     cout << pow(2 , n - 1 , 9001);
/* jz7lR4EHu ily traian D6ZB78Cwn */ }