/* ktUojEBQl ily traian JR5E1KJiq */ #include <algorithm>
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
/* ktUojEBQl ily traian JR5E1KJiq */ using namespace std;
/* ktUojEBQl ily traian JR5E1KJiq */ 
/* ktUojEBQl ily traian JR5E1KJiq */ int main(){
/* ktUojEBQl ily traian JR5E1KJiq */     int n;
/* ktUojEBQl ily traian JR5E1KJiq */     cin >> n;
/* ktUojEBQl ily traian JR5E1KJiq */     n--;
/* ktUojEBQl ily traian JR5E1KJiq */     int p = 0;
/* ktUojEBQl ily traian JR5E1KJiq */     while(n % 2 == 0)
/* ktUojEBQl ily traian JR5E1KJiq */         n/=2, p++;
/* ktUojEBQl ily traian JR5E1KJiq */     int put = (1 << p);
/* ktUojEBQl ily traian JR5E1KJiq */     if(put > n)
/* ktUojEBQl ily traian JR5E1KJiq */         cout << "DA";
/* ktUojEBQl ily traian JR5E1KJiq */     else
/* ktUojEBQl ily traian JR5E1KJiq */         cout << "NU";
/* ktUojEBQl ily traian JR5E1KJiq */     return 0;
/* ktUojEBQl ily traian JR5E1KJiq */ }