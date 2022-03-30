/* Xb2jOxJDD ily traian FXUo5AORf */ #include <algorithm>
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
/* Xb2jOxJDD ily traian FXUo5AORf */ using namespace std;
/* Xb2jOxJDD ily traian FXUo5AORf */ 
/* Xb2jOxJDD ily traian FXUo5AORf */ int main()
/* Xb2jOxJDD ily traian FXUo5AORf */ {
/* Xb2jOxJDD ily traian FXUo5AORf */     long long int a , b;
/* Xb2jOxJDD ily traian FXUo5AORf */     cin >> a >> b;
/* Xb2jOxJDD ily traian FXUo5AORf */     long long int n = a , m = b;
/* Xb2jOxJDD ily traian FXUo5AORf */     while(b)
/* Xb2jOxJDD ily traian FXUo5AORf */     {
/* Xb2jOxJDD ily traian FXUo5AORf */         long long int r=a%b;
/* Xb2jOxJDD ily traian FXUo5AORf */         a=b;
/* Xb2jOxJDD ily traian FXUo5AORf */         b=r;
/* Xb2jOxJDD ily traian FXUo5AORf */     }
/* Xb2jOxJDD ily traian FXUo5AORf */     cout << n/a + m/a - 2;
/* Xb2jOxJDD ily traian FXUo5AORf */     return 0;
/* Xb2jOxJDD ily traian FXUo5AORf */ }