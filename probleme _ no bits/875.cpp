/* eOpaCe23v ily traian gfHX4iWkd */ #include <algorithm>
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
/* eOpaCe23v ily traian gfHX4iWkd */ 
/* eOpaCe23v ily traian gfHX4iWkd */ using namespace std;
/* eOpaCe23v ily traian gfHX4iWkd */ 
/* eOpaCe23v ily traian gfHX4iWkd */ int main()
/* eOpaCe23v ily traian gfHX4iWkd */ {
/* eOpaCe23v ily traian gfHX4iWkd */     stack<int>s;
/* eOpaCe23v ily traian gfHX4iWkd */     int c , x;
/* eOpaCe23v ily traian gfHX4iWkd */     string op;
/* eOpaCe23v ily traian gfHX4iWkd */     cin >> c;
/* eOpaCe23v ily traian gfHX4iWkd */     for(int i = 1 ; i <= c ; i++)
/* eOpaCe23v ily traian gfHX4iWkd */     {
/* eOpaCe23v ily traian gfHX4iWkd */         cin >> op;
/* eOpaCe23v ily traian gfHX4iWkd */         if(op == "push")
/* eOpaCe23v ily traian gfHX4iWkd */         {
/* eOpaCe23v ily traian gfHX4iWkd */             cin >> x;
/* eOpaCe23v ily traian gfHX4iWkd */             s.push(x);
/* eOpaCe23v ily traian gfHX4iWkd */         }
/* eOpaCe23v ily traian gfHX4iWkd */         else if(op == "top")
/* eOpaCe23v ily traian gfHX4iWkd */             cout << s.top() << '\n';
/* eOpaCe23v ily traian gfHX4iWkd */         else s.pop();
/* eOpaCe23v ily traian gfHX4iWkd */     }
/* eOpaCe23v ily traian gfHX4iWkd */ }