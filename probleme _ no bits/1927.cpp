/* 2BNOLMx6A ily traian z9ZPYroPW */ #include <algorithm>
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
/* 2BNOLMx6A ily traian z9ZPYroPW */ 
/* 2BNOLMx6A ily traian z9ZPYroPW */ using namespace std;
/* 2BNOLMx6A ily traian z9ZPYroPW */ 
/* 2BNOLMx6A ily traian z9ZPYroPW */ bitset<300001>f;
/* 2BNOLMx6A ily traian z9ZPYroPW */ 
/* 2BNOLMx6A ily traian z9ZPYroPW */ int main()
/* 2BNOLMx6A ily traian z9ZPYroPW */ {
/* 2BNOLMx6A ily traian z9ZPYroPW */     int n;
/* 2BNOLMx6A ily traian z9ZPYroPW */     cin >> n;
/* 2BNOLMx6A ily traian z9ZPYroPW */     int x;
/* 2BNOLMx6A ily traian z9ZPYroPW */     for(int i = 0 ; i < n ; ++i)
/* 2BNOLMx6A ily traian z9ZPYroPW */         cin >> x , f[x]=1;
/* 2BNOLMx6A ily traian z9ZPYroPW */     for(int i = 1 ; i < 300001 ; ++i)
/* 2BNOLMx6A ily traian z9ZPYroPW */         if(f[i]!=0)
/* 2BNOLMx6A ily traian z9ZPYroPW */             cout << i << ' ';
/* 2BNOLMx6A ily traian z9ZPYroPW */     return 0;    
/* 2BNOLMx6A ily traian z9ZPYroPW */ }