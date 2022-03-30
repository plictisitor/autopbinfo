/* 9aRVwcc4o ily traian Xahv3AVmP */ #include <algorithm>
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
/* 9aRVwcc4o ily traian Xahv3AVmP */ using namespace std;
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */ int a[1001][1001], n, m, k;
/* 9aRVwcc4o ily traian Xahv3AVmP */ long long sp[1001][1001];
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */ int main(){
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */     cin >> n >> m >> k;
/* 9aRVwcc4o ily traian Xahv3AVmP */     for(int i = 1; i <= n; ++i)
/* 9aRVwcc4o ily traian Xahv3AVmP */         for(int j = 1; j <= m; ++j)
/* 9aRVwcc4o ily traian Xahv3AVmP */             cin >> a[i][j], sp[i][j] = sp[i-1][j] + sp[i][j-1] + a[i][j] - sp[i-1][j-1];
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */     int i1,j1,i2,j2;
/* 9aRVwcc4o ily traian Xahv3AVmP */     long long max = 0;
/* 9aRVwcc4o ily traian Xahv3AVmP */     for(int l = 1; l <= k; ++l){
/* 9aRVwcc4o ily traian Xahv3AVmP */         cin >> i1 >> j1 >> i2 >> j2;
/* 9aRVwcc4o ily traian Xahv3AVmP */         long long sum = sp[i2][j2] - sp[i2][j1-1] - sp[i1-1][j2] + sp[i1-1][j1-1];
/* 9aRVwcc4o ily traian Xahv3AVmP */         if(sum > max)
/* 9aRVwcc4o ily traian Xahv3AVmP */             max = sum;
/* 9aRVwcc4o ily traian Xahv3AVmP */     }
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */     cout << max;
/* 9aRVwcc4o ily traian Xahv3AVmP */ 
/* 9aRVwcc4o ily traian Xahv3AVmP */     return 0;
/* 9aRVwcc4o ily traian Xahv3AVmP */ }