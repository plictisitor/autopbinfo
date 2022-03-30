/* zFR6p0lz0 ily traian llRqPbcwt */ #include <algorithm>
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
/* zFR6p0lz0 ily traian llRqPbcwt */ 
/* zFR6p0lz0 ily traian llRqPbcwt */ using namespace std;
/* zFR6p0lz0 ily traian llRqPbcwt */ 
/* zFR6p0lz0 ily traian llRqPbcwt */ int main()
/* zFR6p0lz0 ily traian llRqPbcwt */ {
/* zFR6p0lz0 ily traian llRqPbcwt */     int n,k;
/* zFR6p0lz0 ily traian llRqPbcwt */     cin >> n >> k;
/* zFR6p0lz0 ily traian llRqPbcwt */     int a[100000];
/* zFR6p0lz0 ily traian llRqPbcwt */     int cnt=0;
/* zFR6p0lz0 ily traian llRqPbcwt */     for(int i = 0 ; i < n ; ++i)
/* zFR6p0lz0 ily traian llRqPbcwt */     {
/* zFR6p0lz0 ily traian llRqPbcwt */         cin >> a[i];
/* zFR6p0lz0 ily traian llRqPbcwt */         if(a[i]%2==1)
/* zFR6p0lz0 ily traian llRqPbcwt */         cnt++;
/* zFR6p0lz0 ily traian llRqPbcwt */     }
/* zFR6p0lz0 ily traian llRqPbcwt */     int d=cnt/k;
/* zFR6p0lz0 ily traian llRqPbcwt */     if(d*k==cnt)
/* zFR6p0lz0 ily traian llRqPbcwt */     cout << d;
/* zFR6p0lz0 ily traian llRqPbcwt */     else
/* zFR6p0lz0 ily traian llRqPbcwt */     cout << d+1;
/* zFR6p0lz0 ily traian llRqPbcwt */     return 0;
/* zFR6p0lz0 ily traian llRqPbcwt */ }