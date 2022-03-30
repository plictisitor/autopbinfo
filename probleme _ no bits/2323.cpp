/* GxQnVduMf ily traian mljpq2pnv */ #include <algorithm>
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
/* GxQnVduMf ily traian mljpq2pnv */ using namespace std;
/* GxQnVduMf ily traian mljpq2pnv */ 
/* GxQnVduMf ily traian mljpq2pnv */ int main()
/* GxQnVduMf ily traian mljpq2pnv */ {
/* GxQnVduMf ily traian mljpq2pnv */     long long int n;
/* GxQnVduMf ily traian mljpq2pnv */     cin >> n;
/* GxQnVduMf ily traian mljpq2pnv */     long long int cnt=1 , d=2;
/* GxQnVduMf ily traian mljpq2pnv */     long long int cn=n;
/* GxQnVduMf ily traian mljpq2pnv */     while(n>1)
/* GxQnVduMf ily traian mljpq2pnv */     {
/* GxQnVduMf ily traian mljpq2pnv */         int p = 0;
/* GxQnVduMf ily traian mljpq2pnv */         while(n%d==0)
/* GxQnVduMf ily traian mljpq2pnv */         {
/* GxQnVduMf ily traian mljpq2pnv */             n/=d;
/* GxQnVduMf ily traian mljpq2pnv */             p++;
/* GxQnVduMf ily traian mljpq2pnv */         }
/* GxQnVduMf ily traian mljpq2pnv */         cnt*=(p*cn+1);
/* GxQnVduMf ily traian mljpq2pnv */         d++;
/* GxQnVduMf ily traian mljpq2pnv */         if(d*d>n)
/* GxQnVduMf ily traian mljpq2pnv */             d=n;
/* GxQnVduMf ily traian mljpq2pnv */         while(cnt>=59999)
/* GxQnVduMf ily traian mljpq2pnv */             cnt%=59999;
/* GxQnVduMf ily traian mljpq2pnv */     }
/* GxQnVduMf ily traian mljpq2pnv */     cout << cnt%59999;
/* GxQnVduMf ily traian mljpq2pnv */     return 0;
/* GxQnVduMf ily traian mljpq2pnv */ }