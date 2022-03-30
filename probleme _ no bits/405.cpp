/* 5IRDH5CPf ily traian QjMwrFiTd */ #include <algorithm>
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
/* 5IRDH5CPf ily traian QjMwrFiTd */ using namespace std;
/* 5IRDH5CPf ily traian QjMwrFiTd */ 
/* 5IRDH5CPf ily traian QjMwrFiTd */ int prim(int n)
/* 5IRDH5CPf ily traian QjMwrFiTd */ {
/* 5IRDH5CPf ily traian QjMwrFiTd */     int cnt=0;
/* 5IRDH5CPf ily traian QjMwrFiTd */     for (int i = 1 ; i * i <= n ; ++i)
/* 5IRDH5CPf ily traian QjMwrFiTd */     {
/* 5IRDH5CPf ily traian QjMwrFiTd */         if (n%i==0)
/* 5IRDH5CPf ily traian QjMwrFiTd */         cnt+=2;
/* 5IRDH5CPf ily traian QjMwrFiTd */         if (i*i==n)
/* 5IRDH5CPf ily traian QjMwrFiTd */         cnt--;
/* 5IRDH5CPf ily traian QjMwrFiTd */     }
/* 5IRDH5CPf ily traian QjMwrFiTd */     if (cnt==2)
/* 5IRDH5CPf ily traian QjMwrFiTd */     return 1;
/* 5IRDH5CPf ily traian QjMwrFiTd */     else
/* 5IRDH5CPf ily traian QjMwrFiTd */     return 0;
/* 5IRDH5CPf ily traian QjMwrFiTd */ }
/* 5IRDH5CPf ily traian QjMwrFiTd */ int sum(int n)
/* 5IRDH5CPf ily traian QjMwrFiTd */ {
/* 5IRDH5CPf ily traian QjMwrFiTd */     int s=0;
/* 5IRDH5CPf ily traian QjMwrFiTd */     while (n)
/* 5IRDH5CPf ily traian QjMwrFiTd */     {
/* 5IRDH5CPf ily traian QjMwrFiTd */         s+=n%10;
/* 5IRDH5CPf ily traian QjMwrFiTd */         n/=10;
/* 5IRDH5CPf ily traian QjMwrFiTd */     }
/* 5IRDH5CPf ily traian QjMwrFiTd */     return s;
/* 5IRDH5CPf ily traian QjMwrFiTd */ }
/* 5IRDH5CPf ily traian QjMwrFiTd */ 
/* 5IRDH5CPf ily traian QjMwrFiTd */ int main()
/* 5IRDH5CPf ily traian QjMwrFiTd */ {
/* 5IRDH5CPf ily traian QjMwrFiTd */     int n;
/* 5IRDH5CPf ily traian QjMwrFiTd */     cin >> n; 
/* 5IRDH5CPf ily traian QjMwrFiTd */     int a[1001];
/* 5IRDH5CPf ily traian QjMwrFiTd */     int s=0;
/* 5IRDH5CPf ily traian QjMwrFiTd */     for (int i = 0 ; i < n ; ++i)
/* 5IRDH5CPf ily traian QjMwrFiTd */     {
/* 5IRDH5CPf ily traian QjMwrFiTd */     cin >> a[i];
/* 5IRDH5CPf ily traian QjMwrFiTd */     if (prim(a[i]))
/* 5IRDH5CPf ily traian QjMwrFiTd */         s+=sum(a[i]);
/* 5IRDH5CPf ily traian QjMwrFiTd */     }
/* 5IRDH5CPf ily traian QjMwrFiTd */     cout << s;
/* 5IRDH5CPf ily traian QjMwrFiTd */ }