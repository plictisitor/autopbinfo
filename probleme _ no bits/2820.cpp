/* 2rjEAnIOw ily traian 5n9MZdgRF */ #include <algorithm>
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
/* 2rjEAnIOw ily traian 5n9MZdgRF */ using namespace std;
/* 2rjEAnIOw ily traian 5n9MZdgRF */ 
/* 2rjEAnIOw ily traian 5n9MZdgRF */ ifstream cin("sir11.in");
/* 2rjEAnIOw ily traian 5n9MZdgRF */ ofstream cout("sir11.out");
/* 2rjEAnIOw ily traian 5n9MZdgRF */ 
/* 2rjEAnIOw ily traian 5n9MZdgRF */ int main()
/* 2rjEAnIOw ily traian 5n9MZdgRF */ {
/* 2rjEAnIOw ily traian 5n9MZdgRF */     int n;
/* 2rjEAnIOw ily traian 5n9MZdgRF */     cin >> n;
/* 2rjEAnIOw ily traian 5n9MZdgRF */     int f1 = 1, f2 = -1, f3;
/* 2rjEAnIOw ily traian 5n9MZdgRF */     for(int i = 3; i <= n; ++i)
/* 2rjEAnIOw ily traian 5n9MZdgRF */     {
/* 2rjEAnIOw ily traian 5n9MZdgRF */         f3 = 1 - 2 * f2 - f1;
/* 2rjEAnIOw ily traian 5n9MZdgRF */         if(i != n)
/* 2rjEAnIOw ily traian 5n9MZdgRF */         {f1=f2;
/* 2rjEAnIOw ily traian 5n9MZdgRF */         f2=f3;}
/* 2rjEAnIOw ily traian 5n9MZdgRF */     }
/* 2rjEAnIOw ily traian 5n9MZdgRF */     for(int i = n; i >= 3; --i)
/* 2rjEAnIOw ily traian 5n9MZdgRF */     {
/* 2rjEAnIOw ily traian 5n9MZdgRF */         cout << f3<< ' ';
/* 2rjEAnIOw ily traian 5n9MZdgRF */         f1 = 1 - 2 * f2 - f3;
/* 2rjEAnIOw ily traian 5n9MZdgRF */         f3 = f2;
/* 2rjEAnIOw ily traian 5n9MZdgRF */         f2 = f1;
/* 2rjEAnIOw ily traian 5n9MZdgRF */     }
/* 2rjEAnIOw ily traian 5n9MZdgRF */     cout << -1 << ' ' << 1;
/* 2rjEAnIOw ily traian 5n9MZdgRF */ }