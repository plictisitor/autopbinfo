/* 6v4canBbT ily traian vE4xlXN8g */ #include <algorithm>
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
/* 6v4canBbT ily traian vE4xlXN8g */ using namespace std;
/* 6v4canBbT ily traian vE4xlXN8g */ 
/* 6v4canBbT ily traian vE4xlXN8g */ int main()
/* 6v4canBbT ily traian vE4xlXN8g */ {
/* 6v4canBbT ily traian vE4xlXN8g */     int n , m , a[101][101] , maxi = 0 , cnt = 0;
/* 6v4canBbT ily traian vE4xlXN8g */     cin >> n >> m;
/* 6v4canBbT ily traian vE4xlXN8g */     for(int i = 1 ; i <= n ; ++i)
/* 6v4canBbT ily traian vE4xlXN8g */     {
/* 6v4canBbT ily traian vE4xlXN8g */         cnt=0;
/* 6v4canBbT ily traian vE4xlXN8g */         for(int j = 1 ; j <= m ; ++j)
/* 6v4canBbT ily traian vE4xlXN8g */         {
/* 6v4canBbT ily traian vE4xlXN8g */             cin >> a[i][j];
/* 6v4canBbT ily traian vE4xlXN8g */             if(a[i][j]%2==0)
/* 6v4canBbT ily traian vE4xlXN8g */             cnt++;
/* 6v4canBbT ily traian vE4xlXN8g */         }
/* 6v4canBbT ily traian vE4xlXN8g */         if(cnt>maxi)
/* 6v4canBbT ily traian vE4xlXN8g */         maxi=cnt;
/* 6v4canBbT ily traian vE4xlXN8g */     }
/* 6v4canBbT ily traian vE4xlXN8g */     for(int i = 1 ; i <= n ; ++i)
/* 6v4canBbT ily traian vE4xlXN8g */     {
/* 6v4canBbT ily traian vE4xlXN8g */         int cnt=0;
/* 6v4canBbT ily traian vE4xlXN8g */         for(int j = 1 ; j <= m ; ++j)
/* 6v4canBbT ily traian vE4xlXN8g */         {
/* 6v4canBbT ily traian vE4xlXN8g */             if(a[i][j]%2==0)
/* 6v4canBbT ily traian vE4xlXN8g */             cnt++;
/* 6v4canBbT ily traian vE4xlXN8g */         }
/* 6v4canBbT ily traian vE4xlXN8g */         if(cnt==maxi)
/* 6v4canBbT ily traian vE4xlXN8g */         cout << i <<" ";
/* 6v4canBbT ily traian vE4xlXN8g */     }
/* 6v4canBbT ily traian vE4xlXN8g */     return 0;
/* 6v4canBbT ily traian vE4xlXN8g */ }