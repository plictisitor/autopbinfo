/* 3hZyPsATP ily traian NC7bB4GVT */ #include <algorithm>
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
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ using namespace std;
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ ifstream cin("sirpie.in");
/* 3hZyPsATP ily traian NC7bB4GVT */ ofstream cout("sirpie.out");
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ int n , x[10] , p[10] , a[10];
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ int cmmdc(int a , int b)
/* 3hZyPsATP ily traian NC7bB4GVT */ {
/* 3hZyPsATP ily traian NC7bB4GVT */     int r;
/* 3hZyPsATP ily traian NC7bB4GVT */     while(b != 0)
/* 3hZyPsATP ily traian NC7bB4GVT */     {
/* 3hZyPsATP ily traian NC7bB4GVT */         r = a % b;
/* 3hZyPsATP ily traian NC7bB4GVT */         a = b;
/* 3hZyPsATP ily traian NC7bB4GVT */         b = r;
/* 3hZyPsATP ily traian NC7bB4GVT */     }
/* 3hZyPsATP ily traian NC7bB4GVT */     if(a == 1)return 1;
/* 3hZyPsATP ily traian NC7bB4GVT */     else return 0;
/* 3hZyPsATP ily traian NC7bB4GVT */ }
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ void afisare()
/* 3hZyPsATP ily traian NC7bB4GVT */ {
/* 3hZyPsATP ily traian NC7bB4GVT */     int ok = 0;
/* 3hZyPsATP ily traian NC7bB4GVT */     for(int i = 1 ; i < n ; ++i)
/* 3hZyPsATP ily traian NC7bB4GVT */         if(!cmmdc(a[x[i]] , a[x[i+1]])) ok = 1;
/* 3hZyPsATP ily traian NC7bB4GVT */     if(ok == 0)
/* 3hZyPsATP ily traian NC7bB4GVT */     {
/* 3hZyPsATP ily traian NC7bB4GVT */         for(int i = 1 ; i <= n ; ++i)
/* 3hZyPsATP ily traian NC7bB4GVT */             cout << a[x[i]] << ' ';
/* 3hZyPsATP ily traian NC7bB4GVT */         cout << endl;
/* 3hZyPsATP ily traian NC7bB4GVT */     }
/* 3hZyPsATP ily traian NC7bB4GVT */ }
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ void back(int k)
/* 3hZyPsATP ily traian NC7bB4GVT */ {
/* 3hZyPsATP ily traian NC7bB4GVT */     for(int i = 1 ; i <= n ; i++)
/* 3hZyPsATP ily traian NC7bB4GVT */         if(!p[i])
/* 3hZyPsATP ily traian NC7bB4GVT */         {
/* 3hZyPsATP ily traian NC7bB4GVT */             x[k] = i;
/* 3hZyPsATP ily traian NC7bB4GVT */             p[i] = 1;
/* 3hZyPsATP ily traian NC7bB4GVT */             if(k == n) afisare();
/* 3hZyPsATP ily traian NC7bB4GVT */             else back(k + 1);
/* 3hZyPsATP ily traian NC7bB4GVT */             p[i] = 0;
/* 3hZyPsATP ily traian NC7bB4GVT */         }
/* 3hZyPsATP ily traian NC7bB4GVT */ }
/* 3hZyPsATP ily traian NC7bB4GVT */ 
/* 3hZyPsATP ily traian NC7bB4GVT */ int main()
/* 3hZyPsATP ily traian NC7bB4GVT */ {
/* 3hZyPsATP ily traian NC7bB4GVT */     cin >> n;
/* 3hZyPsATP ily traian NC7bB4GVT */     for(int i = 1 ; i <= n ; i++)
/* 3hZyPsATP ily traian NC7bB4GVT */         cin >> a[i];
/* 3hZyPsATP ily traian NC7bB4GVT */     sort(a + 1 , a + n + 1);
/* 3hZyPsATP ily traian NC7bB4GVT */     back(1);
/* 3hZyPsATP ily traian NC7bB4GVT */     return 0;
/* 3hZyPsATP ily traian NC7bB4GVT */ }