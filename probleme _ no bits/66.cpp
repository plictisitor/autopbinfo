/* 6ve5HsBVO ily traian Zg0lsLBnP */ #include <algorithm>
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
/* 6ve5HsBVO ily traian Zg0lsLBnP */ using namespace std;
/* 6ve5HsBVO ily traian Zg0lsLBnP */ 
/* 6ve5HsBVO ily traian Zg0lsLBnP */ int main()
/* 6ve5HsBVO ily traian Zg0lsLBnP */ {
/* 6ve5HsBVO ily traian Zg0lsLBnP */     int n;
/* 6ve5HsBVO ily traian Zg0lsLBnP */     cin >> n;
/* 6ve5HsBVO ily traian Zg0lsLBnP */     int b = 0;
/* 6ve5HsBVO ily traian Zg0lsLBnP */     if(n == 0)
/* 6ve5HsBVO ily traian Zg0lsLBnP */         b = 1;
/* 6ve5HsBVO ily traian Zg0lsLBnP */     while(n > 0){
/* 6ve5HsBVO ily traian Zg0lsLBnP */         b++; 
/* 6ve5HsBVO ily traian Zg0lsLBnP */         n /= 10;
/* 6ve5HsBVO ily traian Zg0lsLBnP */     }
/* 6ve5HsBVO ily traian Zg0lsLBnP */     cout << b;
/* 6ve5HsBVO ily traian Zg0lsLBnP */ 
/* 6ve5HsBVO ily traian Zg0lsLBnP */     return 0;
/* 6ve5HsBVO ily traian Zg0lsLBnP */ }