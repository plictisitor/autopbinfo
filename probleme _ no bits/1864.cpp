/* 9toBviP7E ily traian GvFiyb80y */ #include <algorithm>
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
/* 9toBviP7E ily traian GvFiyb80y */ using namespace std;
/* 9toBviP7E ily traian GvFiyb80y */ 
/* 9toBviP7E ily traian GvFiyb80y */ ifstream cin("moscraciun.in");
/* 9toBviP7E ily traian GvFiyb80y */ ofstream cout("moscraciun.out");
/* 9toBviP7E ily traian GvFiyb80y */ 
/* 9toBviP7E ily traian GvFiyb80y */ int a[102][102];
/* 9toBviP7E ily traian GvFiyb80y */ 
/* 9toBviP7E ily traian GvFiyb80y */ int fill(int i, int j) 
/* 9toBviP7E ily traian GvFiyb80y */ {
/* 9toBviP7E ily traian GvFiyb80y */     int c = 0;
/* 9toBviP7E ily traian GvFiyb80y */     if(a[i][j] == 3)
/* 9toBviP7E ily traian GvFiyb80y */         c++;
/* 9toBviP7E ily traian GvFiyb80y */     a[i][j] = 0;
/* 9toBviP7E ily traian GvFiyb80y */     if(a[i-1][j]!=0) c += fill(i-1,j); 
/* 9toBviP7E ily traian GvFiyb80y */     if(a[i][j+1]!=0) c += fill(i,j+1); 
/* 9toBviP7E ily traian GvFiyb80y */     if(a[i+1][j]!=0) c += fill(i+1,j); 
/* 9toBviP7E ily traian GvFiyb80y */     if(a[i][j-1]!=0) c += fill(i,j-1); 
/* 9toBviP7E ily traian GvFiyb80y */     return c;
/* 9toBviP7E ily traian GvFiyb80y */ }
/* 9toBviP7E ily traian GvFiyb80y */ 
/* 9toBviP7E ily traian GvFiyb80y */ int main()
/* 9toBviP7E ily traian GvFiyb80y */ {
/* 9toBviP7E ily traian GvFiyb80y */     int n, m;
/* 9toBviP7E ily traian GvFiyb80y */     cin >> n >> m;
/* 9toBviP7E ily traian GvFiyb80y */     for(int i=0; i <= n + 1; i++)
/* 9toBviP7E ily traian GvFiyb80y */       a[i][0] = a[i][m + 1] = 0;
/* 9toBviP7E ily traian GvFiyb80y */     for(int j = 0; j <=m + 1; j++)
/* 9toBviP7E ily traian GvFiyb80y */       a[0][j] = a[n + 1][j] = 0;
/* 9toBviP7E ily traian GvFiyb80y */     
/* 9toBviP7E ily traian GvFiyb80y */     for(int i=1; i <=n ;i++)
/* 9toBviP7E ily traian GvFiyb80y */         for(int j=1; j<=m; j++)
/* 9toBviP7E ily traian GvFiyb80y */             cin >> a[i][j];
/* 9toBviP7E ily traian GvFiyb80y */     for(int i = 1; i <= n; i++)
/* 9toBviP7E ily traian GvFiyb80y */         for(int j = 1;j <= m; j++)
/* 9toBviP7E ily traian GvFiyb80y */             if(a[i][j] == 2)
/* 9toBviP7E ily traian GvFiyb80y */                 cout << fill(i, j);
/* 9toBviP7E ily traian GvFiyb80y */     return 0;
/* 9toBviP7E ily traian GvFiyb80y */ }