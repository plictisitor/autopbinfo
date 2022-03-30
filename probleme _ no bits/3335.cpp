/* 7xAJMycd7 ily traian lYbQ9fnaT */ #include <algorithm>
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
/* 7xAJMycd7 ily traian lYbQ9fnaT */ using namespace std;
/* 7xAJMycd7 ily traian lYbQ9fnaT */ 
/* 7xAJMycd7 ily traian lYbQ9fnaT */ int main(){
/* 7xAJMycd7 ily traian lYbQ9fnaT */     long long int c,p,x,r;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     cin >> c >> p;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     x = p * (p+1) / 2;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     r = c - x;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     r = r - r / p * p;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     if(r < 0)
/* 7xAJMycd7 ily traian lYbQ9fnaT */         cout << c;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     else
/* 7xAJMycd7 ily traian lYbQ9fnaT */         cout << r;
/* 7xAJMycd7 ily traian lYbQ9fnaT */     return 0;
/* 7xAJMycd7 ily traian lYbQ9fnaT */ }