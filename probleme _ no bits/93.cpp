/* 191F93C3N ily traian qBqx3xiUT */ #include <algorithm>
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
/* 191F93C3N ily traian qBqx3xiUT */ using namespace std;
/* 191F93C3N ily traian qBqx3xiUT */ 
/* 191F93C3N ily traian qBqx3xiUT */ ifstream cin("cuvmax.in");
/* 191F93C3N ily traian qBqx3xiUT */ ofstream cout("cuvmax.out");
/* 191F93C3N ily traian qBqx3xiUT */ 
/* 191F93C3N ily traian qBqx3xiUT */ char a[101][300];
/* 191F93C3N ily traian qBqx3xiUT */ 
/* 191F93C3N ily traian qBqx3xiUT */ int main()
/* 191F93C3N ily traian qBqx3xiUT */ {
/* 191F93C3N ily traian qBqx3xiUT */     int n;
/* 191F93C3N ily traian qBqx3xiUT */     cin >> n;
/* 191F93C3N ily traian qBqx3xiUT */     int max=0 , indice=0;
/* 191F93C3N ily traian qBqx3xiUT */     for(int i = 0 ; i <= n ; ++i)
/* 191F93C3N ily traian qBqx3xiUT */     {
/* 191F93C3N ily traian qBqx3xiUT */         cin.getline(a[i] , 300);
/* 191F93C3N ily traian qBqx3xiUT */         int j = 0;
/* 191F93C3N ily traian qBqx3xiUT */         int cnt=0;
/* 191F93C3N ily traian qBqx3xiUT */         while(a[i][j]!='\0')
/* 191F93C3N ily traian qBqx3xiUT */         {
/* 191F93C3N ily traian qBqx3xiUT */             if(a[i][j]==' ' && a[i][j-1]!=' ' && a[i][j+1]!='\0')
/* 191F93C3N ily traian qBqx3xiUT */                 cnt++;
/* 191F93C3N ily traian qBqx3xiUT */             j++;
/* 191F93C3N ily traian qBqx3xiUT */         }
/* 191F93C3N ily traian qBqx3xiUT */         if(cnt > max)
/* 191F93C3N ily traian qBqx3xiUT */             max = cnt , indice=i;
/* 191F93C3N ily traian qBqx3xiUT */     }
/* 191F93C3N ily traian qBqx3xiUT */     cout << a[indice];
/* 191F93C3N ily traian qBqx3xiUT */     return 0;
/* 191F93C3N ily traian qBqx3xiUT */ }