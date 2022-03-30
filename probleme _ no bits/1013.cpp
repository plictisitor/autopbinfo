/* Kgs0HV9QZ ily traian DgIdcSsXZ */ #include <algorithm>
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
/* Kgs0HV9QZ ily traian DgIdcSsXZ */ using namespace std;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */ int main()
/* Kgs0HV9QZ ily traian DgIdcSsXZ */ {
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     int n , m ,an , luna , zi , maxi = 0 , mini = 10000000 , ind1 , ind2 ,x ;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     cin >> n;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     for(int i = 1 ; i <= n ; ++i)
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     {
/* Kgs0HV9QZ ily traian DgIdcSsXZ */         cin >> an >> luna >> zi;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */         x = 1000 * an + 100 * luna + zi;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */         if(x > maxi) {maxi = x; ind1 = i;}
/* Kgs0HV9QZ ily traian DgIdcSsXZ */         if(x < mini) {mini = x;ind2 = i;}
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     }
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     cout << ind1 << " " << ind2;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */     return 0;
/* Kgs0HV9QZ ily traian DgIdcSsXZ */ }