/* 24gWJevIC ily traian 8RVqWsEPK */ #include <algorithm>
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
/* 24gWJevIC ily traian 8RVqWsEPK */ using namespace std;
/* 24gWJevIC ily traian 8RVqWsEPK */ 
/* 24gWJevIC ily traian 8RVqWsEPK */ const int MAX_N = 10000;
/* 24gWJevIC ily traian 8RVqWsEPK */ 
/* 24gWJevIC ily traian 8RVqWsEPK */ int n, x, y;
/* 24gWJevIC ily traian 8RVqWsEPK */ bool apartine[1 + MAX_N] ;
/* 24gWJevIC ily traian 8RVqWsEPK */ 
/* 24gWJevIC ily traian 8RVqWsEPK */ void genereaza(int b) {
/* 24gWJevIC ily traian 8RVqWsEPK */   if (b <= n && !apartine[b]) {
/* 24gWJevIC ily traian 8RVqWsEPK */     apartine[b] = true;
/* 24gWJevIC ily traian 8RVqWsEPK */     genereaza(b + x);
/* 24gWJevIC ily traian 8RVqWsEPK */     genereaza(b + y);
/* 24gWJevIC ily traian 8RVqWsEPK */   }
/* 24gWJevIC ily traian 8RVqWsEPK */ }
/* 24gWJevIC ily traian 8RVqWsEPK */ 
/* 24gWJevIC ily traian 8RVqWsEPK */ int main() {
/* 24gWJevIC ily traian 8RVqWsEPK */   int a;
/* 24gWJevIC ily traian 8RVqWsEPK */   cin >> n >> a >> x >> y;
/* 24gWJevIC ily traian 8RVqWsEPK */   genereaza(a);
/* 24gWJevIC ily traian 8RVqWsEPK */   for (int i = 0; i <= n; i++)
/* 24gWJevIC ily traian 8RVqWsEPK */     if (apartine[i])
/* 24gWJevIC ily traian 8RVqWsEPK */       cout << i << ' ';
/* 24gWJevIC ily traian 8RVqWsEPK */   return 0;
/* 24gWJevIC ily traian 8RVqWsEPK */ }