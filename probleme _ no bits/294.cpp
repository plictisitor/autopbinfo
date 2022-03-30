/* tpP8Fqpap ily traian cGv82ECIZ */ #include <algorithm>
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
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */ using namespace std;
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */ int main()
/* tpP8Fqpap ily traian cGv82ECIZ */ {
/* tpP8Fqpap ily traian cGv82ECIZ */     int n;
/* tpP8Fqpap ily traian cGv82ECIZ */     cin >> n;
/* tpP8Fqpap ily traian cGv82ECIZ */     int a[101];
/* tpP8Fqpap ily traian cGv82ECIZ */     for(int i = 1; i <= n; ++i)
/* tpP8Fqpap ily traian cGv82ECIZ */         cin >> a[i];
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */     int ca = a[1];
/* tpP8Fqpap ily traian cGv82ECIZ */     int ogl = 0;
/* tpP8Fqpap ily traian cGv82ECIZ */     while(ca){
/* tpP8Fqpap ily traian cGv82ECIZ */         ogl = ogl * 10 + ca % 10;
/* tpP8Fqpap ily traian cGv82ECIZ */         ca /= 10;
/* tpP8Fqpap ily traian cGv82ECIZ */     }
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */     bool ok = false;
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */     for(int i = 2; i <= n; ++i)
/* tpP8Fqpap ily traian cGv82ECIZ */         if(ogl == a[i])
/* tpP8Fqpap ily traian cGv82ECIZ */             ok = true;
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */     if(ok)
/* tpP8Fqpap ily traian cGv82ECIZ */         cout << "DA";
/* tpP8Fqpap ily traian cGv82ECIZ */     else
/* tpP8Fqpap ily traian cGv82ECIZ */         cout << "NU";
/* tpP8Fqpap ily traian cGv82ECIZ */ 
/* tpP8Fqpap ily traian cGv82ECIZ */     return 0;
/* tpP8Fqpap ily traian cGv82ECIZ */ }