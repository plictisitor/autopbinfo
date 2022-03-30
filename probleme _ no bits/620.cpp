/* 14pkKG0Ta ily traian e2zK6xXkA */ #include <algorithm>
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
/* 14pkKG0Ta ily traian e2zK6xXkA */ using namespace std;
/* 14pkKG0Ta ily traian e2zK6xXkA */ int n , a[101][101] , m;
/* 14pkKG0Ta ily traian e2zK6xXkA */ int sort(int col)
/* 14pkKG0Ta ily traian e2zK6xXkA */ {
/* 14pkKG0Ta ily traian e2zK6xXkA */     for(int i = 0 ; i < n ; ++i)
/* 14pkKG0Ta ily traian e2zK6xXkA */         for(int j= i+1; j < n; ++j)
/* 14pkKG0Ta ily traian e2zK6xXkA */         {
/* 14pkKG0Ta ily traian e2zK6xXkA */             if(a[i][col] > a[j][col])
/* 14pkKG0Ta ily traian e2zK6xXkA */             {
/* 14pkKG0Ta ily traian e2zK6xXkA */                 int aux = a[i][col];
/* 14pkKG0Ta ily traian e2zK6xXkA */                 a[i][col] = a[j][col];
/* 14pkKG0Ta ily traian e2zK6xXkA */                 a[j][col] = aux;
/* 14pkKG0Ta ily traian e2zK6xXkA */             }
/* 14pkKG0Ta ily traian e2zK6xXkA */         }
/* 14pkKG0Ta ily traian e2zK6xXkA */ }
/* 14pkKG0Ta ily traian e2zK6xXkA */ int main()
/* 14pkKG0Ta ily traian e2zK6xXkA */ {
/* 14pkKG0Ta ily traian e2zK6xXkA */    cin >> n >> m;
/* 14pkKG0Ta ily traian e2zK6xXkA */    for(int i = 0 ; i < n ; ++i)
/* 14pkKG0Ta ily traian e2zK6xXkA */     for(int j = 0 ; j < m ; ++j) cin >>a[i][j];
/* 14pkKG0Ta ily traian e2zK6xXkA */    for(int j = 0 ; j < m ; ++j)
/* 14pkKG0Ta ily traian e2zK6xXkA */    {
/* 14pkKG0Ta ily traian e2zK6xXkA */        sort(j);
/* 14pkKG0Ta ily traian e2zK6xXkA */    }
/* 14pkKG0Ta ily traian e2zK6xXkA */   for(int i = n - 1 ; i >= 0 ; --i)
/* 14pkKG0Ta ily traian e2zK6xXkA */    {
/* 14pkKG0Ta ily traian e2zK6xXkA */     for(int j = 0 ; j < m ; ++j)
/* 14pkKG0Ta ily traian e2zK6xXkA */         cout <<a[i][j]<<" ";
/* 14pkKG0Ta ily traian e2zK6xXkA */     cout<<endl;
/* 14pkKG0Ta ily traian e2zK6xXkA */    }
/* 14pkKG0Ta ily traian e2zK6xXkA */     return 0;
/* 14pkKG0Ta ily traian e2zK6xXkA */ }