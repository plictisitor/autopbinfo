/* odepj6p1Z ily traian rT2Worj8n */ #include <algorithm>
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
/* odepj6p1Z ily traian rT2Worj8n */ using namespace std;
/* odepj6p1Z ily traian rT2Worj8n */ 
/* odepj6p1Z ily traian rT2Worj8n */ ifstream cin("nrdivprod.in");
/* odepj6p1Z ily traian rT2Worj8n */ ofstream cout("nrdivprod.out");
/* odepj6p1Z ily traian rT2Worj8n */ 
/* odepj6p1Z ily traian rT2Worj8n */ int f[1000001];
/* odepj6p1Z ily traian rT2Worj8n */ 
/* odepj6p1Z ily traian rT2Worj8n */ void desc(int n)
/* odepj6p1Z ily traian rT2Worj8n */ {
/* odepj6p1Z ily traian rT2Worj8n */     int d = 2;
/* odepj6p1Z ily traian rT2Worj8n */     while(n > 1)
/* odepj6p1Z ily traian rT2Worj8n */     {
/* odepj6p1Z ily traian rT2Worj8n */         int p = 0;
/* odepj6p1Z ily traian rT2Worj8n */         while(n % d == 0)
/* odepj6p1Z ily traian rT2Worj8n */             p++ , n/=d;
/* odepj6p1Z ily traian rT2Worj8n */         if(p > 0)
/* odepj6p1Z ily traian rT2Worj8n */             f[d]+=p;
/* odepj6p1Z ily traian rT2Worj8n */         d++;
/* odepj6p1Z ily traian rT2Worj8n */         if(d * d > n)
/* odepj6p1Z ily traian rT2Worj8n */             d=n;
/* odepj6p1Z ily traian rT2Worj8n */     }
/* odepj6p1Z ily traian rT2Worj8n */ }
/* odepj6p1Z ily traian rT2Worj8n */ 
/* odepj6p1Z ily traian rT2Worj8n */ int main()
/* odepj6p1Z ily traian rT2Worj8n */ {
/* odepj6p1Z ily traian rT2Worj8n */     int n;
/* odepj6p1Z ily traian rT2Worj8n */     cin >> n;
/* odepj6p1Z ily traian rT2Worj8n */     int x;
/* odepj6p1Z ily traian rT2Worj8n */     for(int i = 1 ; i <= n ; ++i)
/* odepj6p1Z ily traian rT2Worj8n */     {
/* odepj6p1Z ily traian rT2Worj8n */         cin >> x;
/* odepj6p1Z ily traian rT2Worj8n */         desc(x);
/* odepj6p1Z ily traian rT2Worj8n */     }
/* odepj6p1Z ily traian rT2Worj8n */     long long int nrdiv=1;
/* odepj6p1Z ily traian rT2Worj8n */     for(int i = 1 ; i <= 1000000 ; ++i)
/* odepj6p1Z ily traian rT2Worj8n */         nrdiv=(nrdiv*(f[i]+1))%1000000007;
/* odepj6p1Z ily traian rT2Worj8n */     cout << nrdiv;
/* odepj6p1Z ily traian rT2Worj8n */     return 0;
/* odepj6p1Z ily traian rT2Worj8n */ }