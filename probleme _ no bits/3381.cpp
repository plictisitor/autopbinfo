/* GdZvjO0lR ily traian P1bjNrFIs */ #include <algorithm>
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
/* GdZvjO0lR ily traian P1bjNrFIs */ using namespace std;
/* GdZvjO0lR ily traian P1bjNrFIs */ 
/* GdZvjO0lR ily traian P1bjNrFIs */ ifstream cin("ksir.in");
/* GdZvjO0lR ily traian P1bjNrFIs */ ofstream cout("ksir.out");
/* GdZvjO0lR ily traian P1bjNrFIs */ 
/* GdZvjO0lR ily traian P1bjNrFIs */ int main(){
/* GdZvjO0lR ily traian P1bjNrFIs */     long long k = 0;
/* GdZvjO0lR ily traian P1bjNrFIs */     cin >> k;
/* GdZvjO0lR ily traian P1bjNrFIs */     long long n = 1, cnt = 1;
/* GdZvjO0lR ily traian P1bjNrFIs */     while(1LL*(n + 1)*(n + 1) / 4 < k)
/* GdZvjO0lR ily traian P1bjNrFIs */         n+=2, cnt++;
/* GdZvjO0lR ily traian P1bjNrFIs */     n -= 2;
/* GdZvjO0lR ily traian P1bjNrFIs */     k -= 1LL*(n + 1)*(n + 1) / 4;
/* GdZvjO0lR ily traian P1bjNrFIs */     int nr = 0;
/* GdZvjO0lR ily traian P1bjNrFIs */     while(k){
/* GdZvjO0lR ily traian P1bjNrFIs */         if(nr != cnt)
/* GdZvjO0lR ily traian P1bjNrFIs */             nr++;
/* GdZvjO0lR ily traian P1bjNrFIs */         k--;
/* GdZvjO0lR ily traian P1bjNrFIs */     }
/* GdZvjO0lR ily traian P1bjNrFIs */     cout << nr;
/* GdZvjO0lR ily traian P1bjNrFIs */ }