/* 9e7GbwlZH ily traian d1vHxxMlm */ #include <algorithm>
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
/* 9e7GbwlZH ily traian d1vHxxMlm */ using namespace std;
/* 9e7GbwlZH ily traian d1vHxxMlm */ 
/* 9e7GbwlZH ily traian d1vHxxMlm */ int n , m , a[101][101];
/* 9e7GbwlZH ily traian d1vHxxMlm */ 
/* 9e7GbwlZH ily traian d1vHxxMlm */ int main()
/* 9e7GbwlZH ily traian d1vHxxMlm */ {
/* 9e7GbwlZH ily traian d1vHxxMlm */     cin >> n >> m;
/* 9e7GbwlZH ily traian d1vHxxMlm */     for(int i = 0 ; i <= max(n , m) ; i++)
/* 9e7GbwlZH ily traian d1vHxxMlm */         a[0][i] = 1 , a[i][0] = 1;
/* 9e7GbwlZH ily traian d1vHxxMlm */ 
/* 9e7GbwlZH ily traian d1vHxxMlm */     for(int i = 1 ; i <= max(n , m) ; i++)
/* 9e7GbwlZH ily traian d1vHxxMlm */         for(int j = 1 ; j <= max(n , m) ; j++)
/* 9e7GbwlZH ily traian d1vHxxMlm */             a[i][j] = a[i - 1][j] + a[i][j - 1];
/* 9e7GbwlZH ily traian d1vHxxMlm */             
/* 9e7GbwlZH ily traian d1vHxxMlm */     cout << a[n][m];
/* 9e7GbwlZH ily traian d1vHxxMlm */     return 0;
/* 9e7GbwlZH ily traian d1vHxxMlm */ }