/* 1Sx84TK21 ily traian zL6Bxh3uu */ #include <algorithm>
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
/* 1Sx84TK21 ily traian zL6Bxh3uu */ using namespace std;
/* 1Sx84TK21 ily traian zL6Bxh3uu */ 
/* 1Sx84TK21 ily traian zL6Bxh3uu */ int main()
/* 1Sx84TK21 ily traian zL6Bxh3uu */ {
/* 1Sx84TK21 ily traian zL6Bxh3uu */     int n;
/* 1Sx84TK21 ily traian zL6Bxh3uu */     cin >> n;
/* 1Sx84TK21 ily traian zL6Bxh3uu */     int d = 2;
/* 1Sx84TK21 ily traian zL6Bxh3uu */     while(n > 1){
/* 1Sx84TK21 ily traian zL6Bxh3uu */         int p = 0;
/* 1Sx84TK21 ily traian zL6Bxh3uu */         while(n % d == 0)
/* 1Sx84TK21 ily traian zL6Bxh3uu */             n /= d, p++;
/* 1Sx84TK21 ily traian zL6Bxh3uu */         if(p != 0)
/* 1Sx84TK21 ily traian zL6Bxh3uu */             cout << d << ' ' << p << endl;
/* 1Sx84TK21 ily traian zL6Bxh3uu */         d++;
/* 1Sx84TK21 ily traian zL6Bxh3uu */         if(d * d > n)
/* 1Sx84TK21 ily traian zL6Bxh3uu */             d = n;
/* 1Sx84TK21 ily traian zL6Bxh3uu */     }
/* 1Sx84TK21 ily traian zL6Bxh3uu */     return 0;
/* 1Sx84TK21 ily traian zL6Bxh3uu */ }