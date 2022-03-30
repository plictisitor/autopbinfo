/* 963XbgMKZ ily traian cb8ZS6Ymp */ #include <algorithm>
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
/* 963XbgMKZ ily traian cb8ZS6Ymp */ 
/* 963XbgMKZ ily traian cb8ZS6Ymp */ 
/* 963XbgMKZ ily traian cb8ZS6Ymp */ using namespace std;
/* 963XbgMKZ ily traian cb8ZS6Ymp */ map <string , int > r;
/* 963XbgMKZ ily traian cb8ZS6Ymp */ int n;
/* 963XbgMKZ ily traian cb8ZS6Ymp */ 
/* 963XbgMKZ ily traian cb8ZS6Ymp */ int main()
/* 963XbgMKZ ily traian cb8ZS6Ymp */ {
/* 963XbgMKZ ily traian cb8ZS6Ymp */     cin >> n;
/* 963XbgMKZ ily traian cb8ZS6Ymp */     for(int i = 1 ; i <= n ; i++)
/* 963XbgMKZ ily traian cb8ZS6Ymp */     {
/* 963XbgMKZ ily traian cb8ZS6Ymp */         string s;
/* 963XbgMKZ ily traian cb8ZS6Ymp */         cin >> s;
/* 963XbgMKZ ily traian cb8ZS6Ymp */         r[s]++;
/* 963XbgMKZ ily traian cb8ZS6Ymp */     }
/* 963XbgMKZ ily traian cb8ZS6Ymp */     string smax;
/* 963XbgMKZ ily traian cb8ZS6Ymp */     int fmax = 0;
/* 963XbgMKZ ily traian cb8ZS6Ymp */     for(auto x:r)
/* 963XbgMKZ ily traian cb8ZS6Ymp */     {
/* 963XbgMKZ ily traian cb8ZS6Ymp */         if(x.second > fmax)
/* 963XbgMKZ ily traian cb8ZS6Ymp */             fmax = x.second , smax = x.first;
/* 963XbgMKZ ily traian cb8ZS6Ymp */     }
/* 963XbgMKZ ily traian cb8ZS6Ymp */     cout << smax << " " << fmax;
/* 963XbgMKZ ily traian cb8ZS6Ymp */ }