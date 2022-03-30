/* DW8troPP2 ily traian F4QId0nYv */ #include <algorithm>
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
/* DW8troPP2 ily traian F4QId0nYv */ using namespace std;
/* DW8troPP2 ily traian F4QId0nYv */ int main()
/* DW8troPP2 ily traian F4QId0nYv */ {
/* DW8troPP2 ily traian F4QId0nYv */     int n;
/* DW8troPP2 ily traian F4QId0nYv */     cin >> n;
/* DW8troPP2 ily traian F4QId0nYv */     for(int i = 1 ; i <= n ; ++i)
/* DW8troPP2 ily traian F4QId0nYv */     {
/* DW8troPP2 ily traian F4QId0nYv */         for(int j = 1 ; j <= n ; ++j)
/* DW8troPP2 ily traian F4QId0nYv */         {
/* DW8troPP2 ily traian F4QId0nYv */             if(i%2==0) cout << j <<" ";
/* DW8troPP2 ily traian F4QId0nYv */             else if(i%2==1) cout << i <<" ";
/* DW8troPP2 ily traian F4QId0nYv */         }
/* DW8troPP2 ily traian F4QId0nYv */         cout << endl;
/* DW8troPP2 ily traian F4QId0nYv */     }
/* DW8troPP2 ily traian F4QId0nYv */     return 0;
/* DW8troPP2 ily traian F4QId0nYv */ }