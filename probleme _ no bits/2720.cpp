/* mEWTd1iE5 ily traian aG4j0NLHx */ #include <algorithm>
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
/* mEWTd1iE5 ily traian aG4j0NLHx */ 
/* mEWTd1iE5 ily traian aG4j0NLHx */ using namespace std;
/* mEWTd1iE5 ily traian aG4j0NLHx */ 
/* mEWTd1iE5 ily traian aG4j0NLHx */ ifstream cin("bucketsort.in");
/* mEWTd1iE5 ily traian aG4j0NLHx */ ofstream cout("bucketsort.out");
/* mEWTd1iE5 ily traian aG4j0NLHx */ 
/* mEWTd1iE5 ily traian aG4j0NLHx */ int a[10001];
/* mEWTd1iE5 ily traian aG4j0NLHx */ 
/* mEWTd1iE5 ily traian aG4j0NLHx */ int main()
/* mEWTd1iE5 ily traian aG4j0NLHx */ {
/* mEWTd1iE5 ily traian aG4j0NLHx */     int n;
/* mEWTd1iE5 ily traian aG4j0NLHx */     cin >> n;
/* mEWTd1iE5 ily traian aG4j0NLHx */     for(int i = 0 ; i < n ; ++i)
/* mEWTd1iE5 ily traian aG4j0NLHx */         cin >> a[i];
/* mEWTd1iE5 ily traian aG4j0NLHx */     int d;
/* mEWTd1iE5 ily traian aG4j0NLHx */     cin >> d;
/* mEWTd1iE5 ily traian aG4j0NLHx */     sort(a , a + n);
/* mEWTd1iE5 ily traian aG4j0NLHx */     if(d==1)
/* mEWTd1iE5 ily traian aG4j0NLHx */         for(int i = n-1 ; i >= 0 ; --i)
/* mEWTd1iE5 ily traian aG4j0NLHx */             cout << a[i] << ' ';
/* mEWTd1iE5 ily traian aG4j0NLHx */     else
/* mEWTd1iE5 ily traian aG4j0NLHx */         for(int i = 0 ; i < n ; ++i)
/* mEWTd1iE5 ily traian aG4j0NLHx */             cout << a[i] << ' ';
/* mEWTd1iE5 ily traian aG4j0NLHx */     return 0;
/* mEWTd1iE5 ily traian aG4j0NLHx */ }