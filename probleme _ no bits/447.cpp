/* 094xxh56l ily traian gGA8mYF8Q */ #include <algorithm>
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
/* 094xxh56l ily traian gGA8mYF8Q */ 
/* 094xxh56l ily traian gGA8mYF8Q */ using namespace std;
/* 094xxh56l ily traian gGA8mYF8Q */ 
/* 094xxh56l ily traian gGA8mYF8Q */ int main()
/* 094xxh56l ily traian gGA8mYF8Q */ {
/* 094xxh56l ily traian gGA8mYF8Q */     int x,a,b,c;
/* 094xxh56l ily traian gGA8mYF8Q */     cin >> x;
/* 094xxh56l ily traian gGA8mYF8Q */     a=x/100;
/* 094xxh56l ily traian gGA8mYF8Q */     b=(x%100)/10;
/* 094xxh56l ily traian gGA8mYF8Q */     c=(x%100)%10;
/* 094xxh56l ily traian gGA8mYF8Q */     if ((a<b && b<c) || (c<b && b<a))
/* 094xxh56l ily traian gGA8mYF8Q */         cout << b;
/* 094xxh56l ily traian gGA8mYF8Q */     else if ((b<a && a<c) || (c<a && a<b))
/* 094xxh56l ily traian gGA8mYF8Q */         cout << a;
/* 094xxh56l ily traian gGA8mYF8Q */         else 
/* 094xxh56l ily traian gGA8mYF8Q */             cout << c;
/* 094xxh56l ily traian gGA8mYF8Q */     return 0;
/* 094xxh56l ily traian gGA8mYF8Q */ }