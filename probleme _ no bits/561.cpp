/* 8ltkVGfco ily traian BvJ1SFFQK */ #include <algorithm>
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
/* 8ltkVGfco ily traian BvJ1SFFQK */ 
/* 8ltkVGfco ily traian BvJ1SFFQK */ using namespace std;
/* 8ltkVGfco ily traian BvJ1SFFQK */ 
/* 8ltkVGfco ily traian BvJ1SFFQK */ int main ()
/* 8ltkVGfco ily traian BvJ1SFFQK */ {
/* 8ltkVGfco ily traian BvJ1SFFQK */     int b,n,tmp,cnt=0,ordmag,max=0,cut;
/* 8ltkVGfco ily traian BvJ1SFFQK */     cin >> b >> n;
/* 8ltkVGfco ily traian BvJ1SFFQK */     for (int i = 1 ; i <= n ; ++i)
/* 8ltkVGfco ily traian BvJ1SFFQK */     {
/* 8ltkVGfco ily traian BvJ1SFFQK */         cin >> tmp;
/* 8ltkVGfco ily traian BvJ1SFFQK */         cnt++;
/* 8ltkVGfco ily traian BvJ1SFFQK */         if (b / tmp > max)
/* 8ltkVGfco ily traian BvJ1SFFQK */             max=b/tmp, ordmag=cnt , cut=b/tmp;
/* 8ltkVGfco ily traian BvJ1SFFQK */     }
/* 8ltkVGfco ily traian BvJ1SFFQK */     cout << cut << ' ' << ordmag;
/* 8ltkVGfco ily traian BvJ1SFFQK */     return 0;
/* 8ltkVGfco ily traian BvJ1SFFQK */ }