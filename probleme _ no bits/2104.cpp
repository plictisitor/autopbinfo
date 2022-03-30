/* SLJNUfUvG ily traian K5fNBV9jc */ #include <algorithm>
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
/* SLJNUfUvG ily traian K5fNBV9jc */ using namespace std;
/* SLJNUfUvG ily traian K5fNBV9jc */ ifstream cin("factorial3.in");
/* SLJNUfUvG ily traian K5fNBV9jc */ ofstream cout("factorial3.out");
/* SLJNUfUvG ily traian K5fNBV9jc */ int main()
/* SLJNUfUvG ily traian K5fNBV9jc */ {
/* SLJNUfUvG ily traian K5fNBV9jc */     int n , s = 0 , f[100005]={0};
/* SLJNUfUvG ily traian K5fNBV9jc */     cin >> n;
/* SLJNUfUvG ily traian K5fNBV9jc */     for(int i = 1 ; i <= n ; ++i)
/* SLJNUfUvG ily traian K5fNBV9jc */     {
/* SLJNUfUvG ily traian K5fNBV9jc */         int d = 2 , x=i;
/* SLJNUfUvG ily traian K5fNBV9jc */         while(x > 1)
/* SLJNUfUvG ily traian K5fNBV9jc */         {
/* SLJNUfUvG ily traian K5fNBV9jc */             int p = 0;
/* SLJNUfUvG ily traian K5fNBV9jc */             while(x%d==0) p++, x/=d;
/* SLJNUfUvG ily traian K5fNBV9jc */             if(p) f[d]+=p;
/* SLJNUfUvG ily traian K5fNBV9jc */             d++;
/* SLJNUfUvG ily traian K5fNBV9jc */             if(d*d>x) d=x;
/* SLJNUfUvG ily traian K5fNBV9jc */         }
/* SLJNUfUvG ily traian K5fNBV9jc */     }
/* SLJNUfUvG ily traian K5fNBV9jc */     for(int i = 1 ; i <=n ; ++i)
/* SLJNUfUvG ily traian K5fNBV9jc */         s+=f[i];
/* SLJNUfUvG ily traian K5fNBV9jc */     cout << s;
/* SLJNUfUvG ily traian K5fNBV9jc */ }