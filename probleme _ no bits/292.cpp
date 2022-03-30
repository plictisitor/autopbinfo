/* 6EaFceoVS ily traian sqH5q7vfy */ #include <algorithm>
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
/* 6EaFceoVS ily traian sqH5q7vfy */ 
/* 6EaFceoVS ily traian sqH5q7vfy */ using namespace std;
/* 6EaFceoVS ily traian sqH5q7vfy */ 
/* 6EaFceoVS ily traian sqH5q7vfy */ int main()
/* 6EaFceoVS ily traian sqH5q7vfy */ {
/* 6EaFceoVS ily traian sqH5q7vfy */     int n;
/* 6EaFceoVS ily traian sqH5q7vfy */     cin >> n;
/* 6EaFceoVS ily traian sqH5q7vfy */     int a[101];
/* 6EaFceoVS ily traian sqH5q7vfy */     for(int i = 1; i <= n; ++i)
/* 6EaFceoVS ily traian sqH5q7vfy */         cin >> a[i];
/* 6EaFceoVS ily traian sqH5q7vfy */ 
/* 6EaFceoVS ily traian sqH5q7vfy */     bool ok = true;
/* 6EaFceoVS ily traian sqH5q7vfy */ 
/* 6EaFceoVS ily traian sqH5q7vfy */     for(int i = 1; i < n; ++i)
/* 6EaFceoVS ily traian sqH5q7vfy */         if(a[i] % a[n] != 0)
/* 6EaFceoVS ily traian sqH5q7vfy */             ok = false;
/* 6EaFceoVS ily traian sqH5q7vfy */ 
/* 6EaFceoVS ily traian sqH5q7vfy */     if(ok)
/* 6EaFceoVS ily traian sqH5q7vfy */         cout << "DA";
/* 6EaFceoVS ily traian sqH5q7vfy */     else
/* 6EaFceoVS ily traian sqH5q7vfy */         cout << "NU";
/* 6EaFceoVS ily traian sqH5q7vfy */ 
/* 6EaFceoVS ily traian sqH5q7vfy */     return 0;
/* 6EaFceoVS ily traian sqH5q7vfy */ }