/* 2njeNevMZ ily traian piMMCwJkr */ #include <algorithm>
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
/* 2njeNevMZ ily traian piMMCwJkr */ using namespace std;
/* 2njeNevMZ ily traian piMMCwJkr */ 
/* 2njeNevMZ ily traian piMMCwJkr */ void rec(int n, int put){
/* 2njeNevMZ ily traian piMMCwJkr */     if(n == 0)
/* 2njeNevMZ ily traian piMMCwJkr */         return ;
/* 2njeNevMZ ily traian piMMCwJkr */     if(n % 2 == 0)
/* 2njeNevMZ ily traian piMMCwJkr */         rec(n / 2, put * 2);
/* 2njeNevMZ ily traian piMMCwJkr */     else
/* 2njeNevMZ ily traian piMMCwJkr */         cout << put << ' ', rec(n / 2, put * 2);
/* 2njeNevMZ ily traian piMMCwJkr */ }
/* 2njeNevMZ ily traian piMMCwJkr */ 
/* 2njeNevMZ ily traian piMMCwJkr */ int main(){
/* 2njeNevMZ ily traian piMMCwJkr */ 
/* 2njeNevMZ ily traian piMMCwJkr */     int n;
/* 2njeNevMZ ily traian piMMCwJkr */     cin >> n;
/* 2njeNevMZ ily traian piMMCwJkr */     rec(n, 1);
/* 2njeNevMZ ily traian piMMCwJkr */ 
/* 2njeNevMZ ily traian piMMCwJkr */     return 0;
/* 2njeNevMZ ily traian piMMCwJkr */ }