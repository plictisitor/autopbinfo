/* lnUoWEZrO ily traian Z3pRsKAxy */ #include <algorithm>
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
/* lnUoWEZrO ily traian Z3pRsKAxy */ 
/* lnUoWEZrO ily traian Z3pRsKAxy */ using namespace std;
/* lnUoWEZrO ily traian Z3pRsKAxy */ int main()
/* lnUoWEZrO ily traian Z3pRsKAxy */ {
/* lnUoWEZrO ily traian Z3pRsKAxy */     int n, m, ind = 0;
/* lnUoWEZrO ily traian Z3pRsKAxy */     cin >> n;
/* lnUoWEZrO ily traian Z3pRsKAxy */     int a[100][100];
/* lnUoWEZrO ily traian Z3pRsKAxy */     int v[100];
/* lnUoWEZrO ily traian Z3pRsKAxy */     int p=0;
/* lnUoWEZrO ily traian Z3pRsKAxy */     while(n)
/* lnUoWEZrO ily traian Z3pRsKAxy */     {
/* lnUoWEZrO ily traian Z3pRsKAxy */         a[6][++ind]=n%10;
/* lnUoWEZrO ily traian Z3pRsKAxy */         n/=10;
/* lnUoWEZrO ily traian Z3pRsKAxy */     }
/* lnUoWEZrO ily traian Z3pRsKAxy */     for(int i =ind ; i>=1 ; --i)
/* lnUoWEZrO ily traian Z3pRsKAxy */     {
/* lnUoWEZrO ily traian Z3pRsKAxy */         for(int j = 0 ; j < i ; ++j)
/* lnUoWEZrO ily traian Z3pRsKAxy */         {
/* lnUoWEZrO ily traian Z3pRsKAxy */             a[i][j]=a[i+1][j];
/* lnUoWEZrO ily traian Z3pRsKAxy */         }
/* lnUoWEZrO ily traian Z3pRsKAxy */         for(int j=i+1;j<=6;++j)
/* lnUoWEZrO ily traian Z3pRsKAxy */         {
/* lnUoWEZrO ily traian Z3pRsKAxy */             a[i][j]=a[i+1][i];
/* lnUoWEZrO ily traian Z3pRsKAxy */         }
/* lnUoWEZrO ily traian Z3pRsKAxy */     }
/* lnUoWEZrO ily traian Z3pRsKAxy */     for(int i=1;i<=6;i++)
/* lnUoWEZrO ily traian Z3pRsKAxy */     {
/* lnUoWEZrO ily traian Z3pRsKAxy */         for(int j=1;j<=6;j++)
/* lnUoWEZrO ily traian Z3pRsKAxy */             cout<<a[i][j]<<" ";
/* lnUoWEZrO ily traian Z3pRsKAxy */         cout<<endl;
/* lnUoWEZrO ily traian Z3pRsKAxy */     }
/* lnUoWEZrO ily traian Z3pRsKAxy */     return 0;
/* lnUoWEZrO ily traian Z3pRsKAxy */ }