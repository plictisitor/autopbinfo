/* Rp0lXxJMv ily traian r57mImouh */ #include <algorithm>
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
/* Rp0lXxJMv ily traian r57mImouh */ using namespace std;
/* Rp0lXxJMv ily traian r57mImouh */ int main()
/* Rp0lXxJMv ily traian r57mImouh */ {
/* Rp0lXxJMv ily traian r57mImouh */     int n , a[25000] , p = 0;
/* Rp0lXxJMv ily traian r57mImouh */     cin >> n;
/* Rp0lXxJMv ily traian r57mImouh */     while(n != 4)
/* Rp0lXxJMv ily traian r57mImouh */     {
/* Rp0lXxJMv ily traian r57mImouh */         if(n % 10 == 4) {a[p] = 1;p++;n /= 10;}
/* Rp0lXxJMv ily traian r57mImouh */         else if(n % 10 == 0) {a[p] = 2; p++; n /= 10;}
/* Rp0lXxJMv ily traian r57mImouh */         else {a[p] = 3; p++ ; n *= 2;}
/* Rp0lXxJMv ily traian r57mImouh */     }
/* Rp0lXxJMv ily traian r57mImouh */     for(int i = p - 1 ; i >= 0 ; --i) cout << a[i] << " ";
/* Rp0lXxJMv ily traian r57mImouh */ }