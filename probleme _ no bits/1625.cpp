/* 1a49DVgoc ily traian JDbbdlL7o */ #include <algorithm>
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
/* 1a49DVgoc ily traian JDbbdlL7o */ 
/* 1a49DVgoc ily traian JDbbdlL7o */ 
/* 1a49DVgoc ily traian JDbbdlL7o */ 
/* 1a49DVgoc ily traian JDbbdlL7o */ using namespace std;
/* 1a49DVgoc ily traian JDbbdlL7o */ 
/* 1a49DVgoc ily traian JDbbdlL7o */ int main()
/* 1a49DVgoc ily traian JDbbdlL7o */ {
/* 1a49DVgoc ily traian JDbbdlL7o */     float a,b,c,d;
/* 1a49DVgoc ily traian JDbbdlL7o */     cin >> a >> b >> c;
/* 1a49DVgoc ily traian JDbbdlL7o */     d=b*b-4*a*c;
/* 1a49DVgoc ily traian JDbbdlL7o */     if(d<0)
/* 1a49DVgoc ily traian JDbbdlL7o */         cout<<"Nu are solutii reale";
/* 1a49DVgoc ily traian JDbbdlL7o */     else if(d==0)
/* 1a49DVgoc ily traian JDbbdlL7o */         cout << "Radacina dubla " << fixed << setprecision(2) << -(b/2*a);
/* 1a49DVgoc ily traian JDbbdlL7o */         else
/* 1a49DVgoc ily traian JDbbdlL7o */             cout << fixed << setprecision(2) << (-b+sqrt(d))/(2*a) << ' ' << (-b-sqrt(d))/(2*a);
/* 1a49DVgoc ily traian JDbbdlL7o */     return 0;
/* 1a49DVgoc ily traian JDbbdlL7o */ }