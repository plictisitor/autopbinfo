/* qci1exmq9 ily traian 9QyM3fUOQ */ #include <algorithm>
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
/* qci1exmq9 ily traian 9QyM3fUOQ */ 
/* qci1exmq9 ily traian 9QyM3fUOQ */ 
/* qci1exmq9 ily traian 9QyM3fUOQ */ using namespace std;
/* qci1exmq9 ily traian 9QyM3fUOQ */ 
/* qci1exmq9 ily traian 9QyM3fUOQ */ int main()
/* qci1exmq9 ily traian 9QyM3fUOQ */ {
/* qci1exmq9 ily traian 9QyM3fUOQ */     map <string,int> M;
/* qci1exmq9 ily traian 9QyM3fUOQ */     string s;
/* qci1exmq9 ily traian 9QyM3fUOQ */     while(cin >> s)
/* qci1exmq9 ily traian 9QyM3fUOQ */         M[s]++;
/* qci1exmq9 ily traian 9QyM3fUOQ */     for(auto x:M)
/* qci1exmq9 ily traian 9QyM3fUOQ */         cout << x.first << ' ' << x.second << '\n';
/* qci1exmq9 ily traian 9QyM3fUOQ */     return 0;
/* qci1exmq9 ily traian 9QyM3fUOQ */ }