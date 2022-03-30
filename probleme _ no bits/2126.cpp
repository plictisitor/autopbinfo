/* MVDFRzhk8 ily traian PltgWTU0N */ #include <algorithm>
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
/* MVDFRzhk8 ily traian PltgWTU0N */ 
/* MVDFRzhk8 ily traian PltgWTU0N */ using namespace std;
/* MVDFRzhk8 ily traian PltgWTU0N */ 
/* MVDFRzhk8 ily traian PltgWTU0N */ ifstream cin("nrmaxinterv.in");
/* MVDFRzhk8 ily traian PltgWTU0N */ ofstream cout("nrmaxinterv.out");
/* MVDFRzhk8 ily traian PltgWTU0N */ 
/* MVDFRzhk8 ily traian PltgWTU0N */ int a[100001] , b[100001];
/* MVDFRzhk8 ily traian PltgWTU0N */ 
/* MVDFRzhk8 ily traian PltgWTU0N */ int main()
/* MVDFRzhk8 ily traian PltgWTU0N */ {
/* MVDFRzhk8 ily traian PltgWTU0N */     int n;
/* MVDFRzhk8 ily traian PltgWTU0N */     cin >> n;
/* MVDFRzhk8 ily traian PltgWTU0N */     for(int i = 1 ; i <= n ; ++i)
/* MVDFRzhk8 ily traian PltgWTU0N */         cin >> a[i] >> b[i];
/* MVDFRzhk8 ily traian PltgWTU0N */     sort(a+1 , a+n+1);
/* MVDFRzhk8 ily traian PltgWTU0N */     sort(b+1 , b+n+1);
/* MVDFRzhk8 ily traian PltgWTU0N */     int i = 1 , j = 1;
/* MVDFRzhk8 ily traian PltgWTU0N */     int cntmax=0 , cnt=0;
/* MVDFRzhk8 ily traian PltgWTU0N */     while(i <= n && j <= n)
/* MVDFRzhk8 ily traian PltgWTU0N */     {
/* MVDFRzhk8 ily traian PltgWTU0N */         if(a[i]<=b[j])
/* MVDFRzhk8 ily traian PltgWTU0N */         {
/* MVDFRzhk8 ily traian PltgWTU0N */             i++ , cnt++;
/* MVDFRzhk8 ily traian PltgWTU0N */             if(cnt > cntmax)
/* MVDFRzhk8 ily traian PltgWTU0N */                 cntmax=cnt;
/* MVDFRzhk8 ily traian PltgWTU0N */         }
/* MVDFRzhk8 ily traian PltgWTU0N */         else
/* MVDFRzhk8 ily traian PltgWTU0N */             j++ , cnt--;
/* MVDFRzhk8 ily traian PltgWTU0N */     }
/* MVDFRzhk8 ily traian PltgWTU0N */     cout << cntmax;
/* MVDFRzhk8 ily traian PltgWTU0N */     return 0;
/* MVDFRzhk8 ily traian PltgWTU0N */ }