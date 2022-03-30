/* qnKzHx1dq ily traian QGgamyaXa */ #include <algorithm>
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
/* qnKzHx1dq ily traian QGgamyaXa */ 
/* qnKzHx1dq ily traian QGgamyaXa */ using namespace std;
/* qnKzHx1dq ily traian QGgamyaXa */ 
/* qnKzHx1dq ily traian QGgamyaXa */ int main()
/* qnKzHx1dq ily traian QGgamyaXa */ {
/* qnKzHx1dq ily traian QGgamyaXa */     int m;
/* qnKzHx1dq ily traian QGgamyaXa */     cin>> m;
/* qnKzHx1dq ily traian QGgamyaXa */     long long int x;
/* qnKzHx1dq ily traian QGgamyaXa */     for(int i = 0 ; i < m ; ++i)
/* qnKzHx1dq ily traian QGgamyaXa */     {
/* qnKzHx1dq ily traian QGgamyaXa */          cin >> x;
/* qnKzHx1dq ily traian QGgamyaXa */         int n = sqrt(x);
/* qnKzHx1dq ily traian QGgamyaXa */         if(n*n==x)
/* qnKzHx1dq ily traian QGgamyaXa */             cout << "DA" << endl;
/* qnKzHx1dq ily traian QGgamyaXa */         else
/* qnKzHx1dq ily traian QGgamyaXa */             cout << "NU" << endl;
/* qnKzHx1dq ily traian QGgamyaXa */     }
/* qnKzHx1dq ily traian QGgamyaXa */ }