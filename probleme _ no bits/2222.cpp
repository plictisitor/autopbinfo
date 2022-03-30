/* l66a2Kud3 ily traian 5OIhjDwBu */ #include <algorithm>
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
/* l66a2Kud3 ily traian 5OIhjDwBu */ 
/* l66a2Kud3 ily traian 5OIhjDwBu */ using namespace std;
/* l66a2Kud3 ily traian 5OIhjDwBu */ 
/* l66a2Kud3 ily traian 5OIhjDwBu */ int main ()
/* l66a2Kud3 ily traian 5OIhjDwBu */ {
/* l66a2Kud3 ily traian 5OIhjDwBu */     int n;
/* l66a2Kud3 ily traian 5OIhjDwBu */     cin >> n;
/* l66a2Kud3 ily traian 5OIhjDwBu */     int k;
/* l66a2Kud3 ily traian 5OIhjDwBu */     cin >> k;
/* l66a2Kud3 ily traian 5OIhjDwBu */     int cnt=0;
/* l66a2Kud3 ily traian 5OIhjDwBu */     cout << 1;
/* l66a2Kud3 ily traian 5OIhjDwBu */     while (n)
/* l66a2Kud3 ily traian 5OIhjDwBu */     {
/* l66a2Kud3 ily traian 5OIhjDwBu */         n/=10;
/* l66a2Kud3 ily traian 5OIhjDwBu */         cnt++;
/* l66a2Kud3 ily traian 5OIhjDwBu */     }
/* l66a2Kud3 ily traian 5OIhjDwBu */     for (int i = 1; i <= (cnt-1) * k ; i++)
/* l66a2Kud3 ily traian 5OIhjDwBu */     cout << 0;
/* l66a2Kud3 ily traian 5OIhjDwBu */     return 0;   
/* l66a2Kud3 ily traian 5OIhjDwBu */ }