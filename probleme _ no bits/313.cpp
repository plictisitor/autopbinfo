/* l5NEWhzLm ily traian RUNKoPDoD */ #include <algorithm>
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
/* l5NEWhzLm ily traian RUNKoPDoD */ 
/* l5NEWhzLm ily traian RUNKoPDoD */ using namespace std;
/* l5NEWhzLm ily traian RUNKoPDoD */ int main()
/* l5NEWhzLm ily traian RUNKoPDoD */ {
/* l5NEWhzLm ily traian RUNKoPDoD */     int n,m,a[22][22],s1=0,s2=0;
/* l5NEWhzLm ily traian RUNKoPDoD */     cin>>n;
/* l5NEWhzLm ily traian RUNKoPDoD */     for(int i=1;i<=n;i++)
/* l5NEWhzLm ily traian RUNKoPDoD */         for(int j=1;j<=n;j++) cin>>a[i][j];
/* l5NEWhzLm ily traian RUNKoPDoD */     for(int i=1;i<=n;i++)
/* l5NEWhzLm ily traian RUNKoPDoD */         for(int j=1;j<=n;j++)
/* l5NEWhzLm ily traian RUNKoPDoD */         {
/* l5NEWhzLm ily traian RUNKoPDoD */             if(i==j) s1=s1+a[i][j];
/* l5NEWhzLm ily traian RUNKoPDoD */         }
/* l5NEWhzLm ily traian RUNKoPDoD */     for(int i=1;i<=n;i++)
/* l5NEWhzLm ily traian RUNKoPDoD */         for(int j=1;j<=n;j++)
/* l5NEWhzLm ily traian RUNKoPDoD */         {
/* l5NEWhzLm ily traian RUNKoPDoD */             if(i+j==n+1) s2=s2+a[i][j];
/* l5NEWhzLm ily traian RUNKoPDoD */ 
/* l5NEWhzLm ily traian RUNKoPDoD */         }
/* l5NEWhzLm ily traian RUNKoPDoD */     if(s1>s2) cout<<s1-s2;
/* l5NEWhzLm ily traian RUNKoPDoD */     else cout<<s2-s1;
/* l5NEWhzLm ily traian RUNKoPDoD */     return 0;
/* l5NEWhzLm ily traian RUNKoPDoD */ }