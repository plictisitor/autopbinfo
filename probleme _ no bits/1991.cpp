/* 4ejN7nyeG ily traian 82XvwTTYp */ #include <algorithm>
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
/* 4ejN7nyeG ily traian 82XvwTTYp */ using namespace std;
/* 4ejN7nyeG ily traian 82XvwTTYp */ 
/* 4ejN7nyeG ily traian 82XvwTTYp */ short a[1000001];
/* 4ejN7nyeG ily traian 82XvwTTYp */ 
/* 4ejN7nyeG ily traian 82XvwTTYp */ int main()
/* 4ejN7nyeG ily traian 82XvwTTYp */ {
/* 4ejN7nyeG ily traian 82XvwTTYp */     int n , k;
/* 4ejN7nyeG ily traian 82XvwTTYp */     cin >> n >> k;
/* 4ejN7nyeG ily traian 82XvwTTYp */     a[1] = a[2] = 1;
/* 4ejN7nyeG ily traian 82XvwTTYp */     for(int i = 3 ; i <= k ; i++)
/* 4ejN7nyeG ily traian 82XvwTTYp */         a[i] = (2 * a[i - 1]) % 9001;
/* 4ejN7nyeG ily traian 82XvwTTYp */ 
/* 4ejN7nyeG ily traian 82XvwTTYp */     for(int i = k + 1 ; i <= n ; i++)
/* 4ejN7nyeG ily traian 82XvwTTYp */         a[i] = (2 * a[i - 1] - a[i - k - 1] + 9001) % 9001;
/* 4ejN7nyeG ily traian 82XvwTTYp */ 
/* 4ejN7nyeG ily traian 82XvwTTYp */     cout << a[n];
/* 4ejN7nyeG ily traian 82XvwTTYp */ }