/* cBB0rYxU5 ily traian dpzoZvnTR */ #include <algorithm>
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
/* cBB0rYxU5 ily traian dpzoZvnTR */ 
/* cBB0rYxU5 ily traian dpzoZvnTR */ using namespace std;
/* cBB0rYxU5 ily traian dpzoZvnTR */ 
/* cBB0rYxU5 ily traian dpzoZvnTR */ int a[101], n;
/* cBB0rYxU5 ily traian dpzoZvnTR */ 
/* cBB0rYxU5 ily traian dpzoZvnTR */ int main(){
/* cBB0rYxU5 ily traian dpzoZvnTR */     cin >> n;
/* cBB0rYxU5 ily traian dpzoZvnTR */     for(int i = 1; i <= n; ++i)
/* cBB0rYxU5 ily traian dpzoZvnTR */         cin >> a[i];
/* cBB0rYxU5 ily traian dpzoZvnTR */     sort(a + 1, a + n + 1);
/* cBB0rYxU5 ily traian dpzoZvnTR */     int val = 2020, cnt = 0;
/* cBB0rYxU5 ily traian dpzoZvnTR */     for(int j = n; j > 1; --j){
/* cBB0rYxU5 ily traian dpzoZvnTR */         int cval = 2020;
/* cBB0rYxU5 ily traian dpzoZvnTR */     for(int i = j; i >= 1; --i)
/* cBB0rYxU5 ily traian dpzoZvnTR */         if(cval % a[i] == 0 && a[i] != 0)
/* cBB0rYxU5 ily traian dpzoZvnTR */             cval /= a[i], cnt++;
/* cBB0rYxU5 ily traian dpzoZvnTR */         val = min(cval, val);
/* cBB0rYxU5 ily traian dpzoZvnTR */     }
/* cBB0rYxU5 ily traian dpzoZvnTR */     if(val == 1)
/* cBB0rYxU5 ily traian dpzoZvnTR */         cout << "DA";
/* cBB0rYxU5 ily traian dpzoZvnTR */     else
/* cBB0rYxU5 ily traian dpzoZvnTR */         cout << "NU";
/* cBB0rYxU5 ily traian dpzoZvnTR */     return 0;   
/* cBB0rYxU5 ily traian dpzoZvnTR */ }