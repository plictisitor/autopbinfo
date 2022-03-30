/* RFl2huDIn ily traian ShJeQKI3Y */ #include <algorithm>
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
/* RFl2huDIn ily traian ShJeQKI3Y */ using namespace std;
/* RFl2huDIn ily traian ShJeQKI3Y */ int n, x, y;
/* RFl2huDIn ily traian ShJeQKI3Y */ bool apartine[1 + 10000] ;
/* RFl2huDIn ily traian ShJeQKI3Y */ void genereaza(int b)
/* RFl2huDIn ily traian ShJeQKI3Y */  {
/* RFl2huDIn ily traian ShJeQKI3Y */   if (b <= n && !apartine[b])
/* RFl2huDIn ily traian ShJeQKI3Y */     {
/* RFl2huDIn ily traian ShJeQKI3Y */         apartine[b] = true;
/* RFl2huDIn ily traian ShJeQKI3Y */         genereaza(b + x);
/* RFl2huDIn ily traian ShJeQKI3Y */         genereaza(b + y);
/* RFl2huDIn ily traian ShJeQKI3Y */     }
/* RFl2huDIn ily traian ShJeQKI3Y */ }
/* RFl2huDIn ily traian ShJeQKI3Y */ 
/* RFl2huDIn ily traian ShJeQKI3Y */ int main()
/* RFl2huDIn ily traian ShJeQKI3Y */ {
/* RFl2huDIn ily traian ShJeQKI3Y */   int a;
/* RFl2huDIn ily traian ShJeQKI3Y */   cin >> n >> a >> x >> y;
/* RFl2huDIn ily traian ShJeQKI3Y */   genereaza(a);
/* RFl2huDIn ily traian ShJeQKI3Y */   for (int i = 0; i <= n; i++)
/* RFl2huDIn ily traian ShJeQKI3Y */     if (apartine[i])
/* RFl2huDIn ily traian ShJeQKI3Y */       cout << i <<" ";
/* RFl2huDIn ily traian ShJeQKI3Y */   return 0;
/* RFl2huDIn ily traian ShJeQKI3Y */ }