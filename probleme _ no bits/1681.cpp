/* DqsAGLXVL ily traian jnxC0E1yf */ #include <algorithm>
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
/* DqsAGLXVL ily traian jnxC0E1yf */ 
/* DqsAGLXVL ily traian jnxC0E1yf */ 
/* DqsAGLXVL ily traian jnxC0E1yf */ unsigned long long int Pow(int a, int b){
/* DqsAGLXVL ily traian jnxC0E1yf */     unsigned long long int tmp = 1;
/* DqsAGLXVL ily traian jnxC0E1yf */     for(int i = 0; i < b;i++){
/* DqsAGLXVL ily traian jnxC0E1yf */      tmp *= a;
/* DqsAGLXVL ily traian jnxC0E1yf */     }
/* DqsAGLXVL ily traian jnxC0E1yf */     return tmp;
/* DqsAGLXVL ily traian jnxC0E1yf */ }
/* DqsAGLXVL ily traian jnxC0E1yf */ 
/* DqsAGLXVL ily traian jnxC0E1yf */ int main() {
/* DqsAGLXVL ily traian jnxC0E1yf */     unsigned long long int n, m;
/* DqsAGLXVL ily traian jnxC0E1yf */     std::cin >> n >> m;
/* DqsAGLXVL ily traian jnxC0E1yf */     std::cout << Pow(n, m);
/* DqsAGLXVL ily traian jnxC0E1yf */ 
/* DqsAGLXVL ily traian jnxC0E1yf */     return 0;
/* DqsAGLXVL ily traian jnxC0E1yf */ }