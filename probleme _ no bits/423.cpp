/* AnQOhJch9 ily traian yizvMQj7z */ #include <algorithm>
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
/* AnQOhJch9 ily traian yizvMQj7z */ using namespace std;
/* AnQOhJch9 ily traian yizvMQj7z */ 
/* AnQOhJch9 ily traian yizvMQj7z */ int main()
/* AnQOhJch9 ily traian yizvMQj7z */ {
/* AnQOhJch9 ily traian yizvMQj7z */     int n;
/* AnQOhJch9 ily traian yizvMQj7z */     cin >> n;
/* AnQOhJch9 ily traian yizvMQj7z */     int a, b, c;
/* AnQOhJch9 ily traian yizvMQj7z */     a = 1;
/* AnQOhJch9 ily traian yizvMQj7z */     b = 1;
/* AnQOhJch9 ily traian yizvMQj7z */     if(n == 1)
/* AnQOhJch9 ily traian yizvMQj7z */         cout << 1 << ' ' << 1;
/* AnQOhJch9 ily traian yizvMQj7z */     else{
/* AnQOhJch9 ily traian yizvMQj7z */         cout << 1 << ' ' << 1 << ' ';
/* AnQOhJch9 ily traian yizvMQj7z */         while(n >= b){
/* AnQOhJch9 ily traian yizvMQj7z */             c = a + b;
/* AnQOhJch9 ily traian yizvMQj7z */             a = b;
/* AnQOhJch9 ily traian yizvMQj7z */             b = c;
/* AnQOhJch9 ily traian yizvMQj7z */             if(b <= n)
/* AnQOhJch9 ily traian yizvMQj7z */                 cout << b << ' ';
/* AnQOhJch9 ily traian yizvMQj7z */         }
/* AnQOhJch9 ily traian yizvMQj7z */     }
/* AnQOhJch9 ily traian yizvMQj7z */     return 0;
/* AnQOhJch9 ily traian yizvMQj7z */ }