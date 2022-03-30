/* n2FnQk2We ily traian qXH53f8qS */ #include <algorithm>
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
/* n2FnQk2We ily traian qXH53f8qS */ using namespace std;
/* n2FnQk2We ily traian qXH53f8qS */ int main()
/* n2FnQk2We ily traian qXH53f8qS */ {
/* n2FnQk2We ily traian qXH53f8qS */     unsigned long long n , a , b , c , s = 0;
/* n2FnQk2We ily traian qXH53f8qS */     cin >> n;
/* n2FnQk2We ily traian qXH53f8qS */     if(n == 1) cout << 1;
/* n2FnQk2We ily traian qXH53f8qS */     else if(n == 2) cout << 1;
/* n2FnQk2We ily traian qXH53f8qS */     else
/* n2FnQk2We ily traian qXH53f8qS */     {
/* n2FnQk2We ily traian qXH53f8qS */         if(n > 24) n %= 24;
/* n2FnQk2We ily traian qXH53f8qS */         a = 1 , b = 1;
/* n2FnQk2We ily traian qXH53f8qS */         for(int i = 3 ; i <= n ; i++)
/* n2FnQk2We ily traian qXH53f8qS */         {
/* n2FnQk2We ily traian qXH53f8qS */             c = a + b;
/* n2FnQk2We ily traian qXH53f8qS */             a = b;
/* n2FnQk2We ily traian qXH53f8qS */             b = c;
/* n2FnQk2We ily traian qXH53f8qS */         }
/* n2FnQk2We ily traian qXH53f8qS */         cout << c% 9;
/* n2FnQk2We ily traian qXH53f8qS */     }
/* n2FnQk2We ily traian qXH53f8qS */ }