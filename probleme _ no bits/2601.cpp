/* edy7urxNx ily traian G25TK3qLc */ #include <algorithm>
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
/* edy7urxNx ily traian G25TK3qLc */ 
/* edy7urxNx ily traian G25TK3qLc */ using namespace std;
/* edy7urxNx ily traian G25TK3qLc */ 
/* edy7urxNx ily traian G25TK3qLc */ int main()
/* edy7urxNx ily traian G25TK3qLc */ {
/* edy7urxNx ily traian G25TK3qLc */     int n;
/* edy7urxNx ily traian G25TK3qLc */     cin >> n;
/* edy7urxNx ily traian G25TK3qLc */     int s=0;
/* edy7urxNx ily traian G25TK3qLc */     while(n)
/* edy7urxNx ily traian G25TK3qLc */         s = s + (n%10) * (n%10) , n/=10;
/* edy7urxNx ily traian G25TK3qLc */     cout << s;
/* edy7urxNx ily traian G25TK3qLc */     return 0;
/* edy7urxNx ily traian G25TK3qLc */ }