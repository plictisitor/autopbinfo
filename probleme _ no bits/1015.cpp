/* yS1T69EF7 ily traian UyR2xk2ga */ #include <algorithm>
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
/* yS1T69EF7 ily traian UyR2xk2ga */ using namespace std;
/* yS1T69EF7 ily traian UyR2xk2ga */ 
/* yS1T69EF7 ily traian UyR2xk2ga */ int sum(int a[], int st, int dr){
/* yS1T69EF7 ily traian UyR2xk2ga */     if(st == dr)
/* yS1T69EF7 ily traian UyR2xk2ga */         return a[st];
/* yS1T69EF7 ily traian UyR2xk2ga */     else{
/* yS1T69EF7 ily traian UyR2xk2ga */         int mij = (st + dr) / 2;
/* yS1T69EF7 ily traian UyR2xk2ga */         return sum(a, st, mij) + sum(a, mij + 1, dr);
/* yS1T69EF7 ily traian UyR2xk2ga */     }
/* yS1T69EF7 ily traian UyR2xk2ga */ }
/* yS1T69EF7 ily traian UyR2xk2ga */ 
/* yS1T69EF7 ily traian UyR2xk2ga */ int main()
/* yS1T69EF7 ily traian UyR2xk2ga */ {
/* yS1T69EF7 ily traian UyR2xk2ga */     int n, a[1001];
/* yS1T69EF7 ily traian UyR2xk2ga */     cin >> n;
/* yS1T69EF7 ily traian UyR2xk2ga */     for(int i = 1; i <= n; ++i)
/* yS1T69EF7 ily traian UyR2xk2ga */         cin >> a[i];
/* yS1T69EF7 ily traian UyR2xk2ga */ 
/* yS1T69EF7 ily traian UyR2xk2ga */     cout << sum(a, 1, n);
/* yS1T69EF7 ily traian UyR2xk2ga */ 
/* yS1T69EF7 ily traian UyR2xk2ga */     return 0;
/* yS1T69EF7 ily traian UyR2xk2ga */ }