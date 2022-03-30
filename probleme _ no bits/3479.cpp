/* 3MUdAYSij ily traian Kt0tfQKEF */ #include <algorithm>
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
/* 3MUdAYSij ily traian Kt0tfQKEF */ 
/* 3MUdAYSij ily traian Kt0tfQKEF */ using namespace std;
/* 3MUdAYSij ily traian Kt0tfQKEF */ 
/* 3MUdAYSij ily traian Kt0tfQKEF */ ifstream cin("2lan.in");
/* 3MUdAYSij ily traian Kt0tfQKEF */ ofstream cout("2lan.out");
/* 3MUdAYSij ily traian Kt0tfQKEF */ 
/* 3MUdAYSij ily traian Kt0tfQKEF */ int main()
/* 3MUdAYSij ily traian Kt0tfQKEF */ {
/* 3MUdAYSij ily traian Kt0tfQKEF */     int n;
/* 3MUdAYSij ily traian Kt0tfQKEF */     cin >> n;
/* 3MUdAYSij ily traian Kt0tfQKEF */     if(n == 0){
/* 3MUdAYSij ily traian Kt0tfQKEF */         cout << 1;
/* 3MUdAYSij ily traian Kt0tfQKEF */         return 0;
/* 3MUdAYSij ily traian Kt0tfQKEF */     }
/* 3MUdAYSij ily traian Kt0tfQKEF */     if(n % 4 == 0)
/* 3MUdAYSij ily traian Kt0tfQKEF */         cout << 6;
/* 3MUdAYSij ily traian Kt0tfQKEF */     else if(n % 4 == 3)
/* 3MUdAYSij ily traian Kt0tfQKEF */         cout << 8;
/* 3MUdAYSij ily traian Kt0tfQKEF */     else if(n % 4 == 2)
/* 3MUdAYSij ily traian Kt0tfQKEF */         cout << 4;
/* 3MUdAYSij ily traian Kt0tfQKEF */     else
/* 3MUdAYSij ily traian Kt0tfQKEF */         cout << 2;
/* 3MUdAYSij ily traian Kt0tfQKEF */     return 0;
/* 3MUdAYSij ily traian Kt0tfQKEF */ }