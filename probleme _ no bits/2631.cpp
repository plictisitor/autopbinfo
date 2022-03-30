/* srWpG5MBD ily traian sn7PYgzGR */ #include <algorithm>
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
/* srWpG5MBD ily traian sn7PYgzGR */ 
/* srWpG5MBD ily traian sn7PYgzGR */ 
/* srWpG5MBD ily traian sn7PYgzGR */ using namespace std;
/* srWpG5MBD ily traian sn7PYgzGR */ map <string , int> r;
/* srWpG5MBD ily traian sn7PYgzGR */ int n , maxi;
/* srWpG5MBD ily traian sn7PYgzGR */ int main()
/* srWpG5MBD ily traian sn7PYgzGR */ {
/* srWpG5MBD ily traian sn7PYgzGR */     string s;
/* srWpG5MBD ily traian sn7PYgzGR */     while(cin >> s)
/* srWpG5MBD ily traian sn7PYgzGR */     {
/* srWpG5MBD ily traian sn7PYgzGR */         sort(s.begin() , s.end());
/* srWpG5MBD ily traian sn7PYgzGR */         r[s]++;
/* srWpG5MBD ily traian sn7PYgzGR */         if(r[s] > maxi) maxi = r[s];
/* srWpG5MBD ily traian sn7PYgzGR */     }
/* srWpG5MBD ily traian sn7PYgzGR */     cout << maxi;
/* srWpG5MBD ily traian sn7PYgzGR */     return 0;
/* srWpG5MBD ily traian sn7PYgzGR */ }