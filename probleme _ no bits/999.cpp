/* yXdfF2Zj7 ily traian cSPd6OwAY */ #include <algorithm>
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
/* yXdfF2Zj7 ily traian cSPd6OwAY */ 
/* yXdfF2Zj7 ily traian cSPd6OwAY */ using namespace std;
/* yXdfF2Zj7 ily traian cSPd6OwAY */ 
/* yXdfF2Zj7 ily traian cSPd6OwAY */ ifstream cin("numere7.in");
/* yXdfF2Zj7 ily traian cSPd6OwAY */ ofstream cout("numere7.out");
/* yXdfF2Zj7 ily traian cSPd6OwAY */ 
/* yXdfF2Zj7 ily traian cSPd6OwAY */ int main()
/* yXdfF2Zj7 ily traian cSPd6OwAY */ {
/* yXdfF2Zj7 ily traian cSPd6OwAY */     int n , m;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     cin >> n >> m;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     int v[30];
/* yXdfF2Zj7 ily traian cSPd6OwAY */     int cnt=0;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     int p = 0;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     if(n==0)
/* yXdfF2Zj7 ily traian cSPd6OwAY */         cnt++;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     if(m==0)
/* yXdfF2Zj7 ily traian cSPd6OwAY */         cnt++;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     while(n)
/* yXdfF2Zj7 ily traian cSPd6OwAY */     {
/* yXdfF2Zj7 ily traian cSPd6OwAY */         if(n%10==0)
/* yXdfF2Zj7 ily traian cSPd6OwAY */             cnt++;
/* yXdfF2Zj7 ily traian cSPd6OwAY */         else
/* yXdfF2Zj7 ily traian cSPd6OwAY */             v[p]=n%10 , p++;
/* yXdfF2Zj7 ily traian cSPd6OwAY */         n/=10;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     }
/* yXdfF2Zj7 ily traian cSPd6OwAY */     while(m)
/* yXdfF2Zj7 ily traian cSPd6OwAY */     {
/* yXdfF2Zj7 ily traian cSPd6OwAY */         if(m%10==0)
/* yXdfF2Zj7 ily traian cSPd6OwAY */             cnt++;
/* yXdfF2Zj7 ily traian cSPd6OwAY */         else
/* yXdfF2Zj7 ily traian cSPd6OwAY */             v[p]=m%10 , p++;
/* yXdfF2Zj7 ily traian cSPd6OwAY */         m/=10;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     }
/* yXdfF2Zj7 ily traian cSPd6OwAY */     if(p==0)
/* yXdfF2Zj7 ily traian cSPd6OwAY */         cout << 0;
/* yXdfF2Zj7 ily traian cSPd6OwAY */     sort(v , v+p);
/* yXdfF2Zj7 ily traian cSPd6OwAY */     for(int i = 0 ; i < p ; ++i)
/* yXdfF2Zj7 ily traian cSPd6OwAY */     {
/* yXdfF2Zj7 ily traian cSPd6OwAY */         cout << v[i];
/* yXdfF2Zj7 ily traian cSPd6OwAY */         if(i==0)
/* yXdfF2Zj7 ily traian cSPd6OwAY */         {
/* yXdfF2Zj7 ily traian cSPd6OwAY */             for(int j = 0 ; j < cnt ; ++j)
/* yXdfF2Zj7 ily traian cSPd6OwAY */                 cout << 0;
/* yXdfF2Zj7 ily traian cSPd6OwAY */         }
/* yXdfF2Zj7 ily traian cSPd6OwAY */     }
/* yXdfF2Zj7 ily traian cSPd6OwAY */     return 0;    
/* yXdfF2Zj7 ily traian cSPd6OwAY */ }