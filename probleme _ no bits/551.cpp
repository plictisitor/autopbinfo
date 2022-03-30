/* 2fyQH9dhn ily traian Q2H1RCmZC */ #include <algorithm>
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
/* 2fyQH9dhn ily traian Q2H1RCmZC */ using namespace std;
/* 2fyQH9dhn ily traian Q2H1RCmZC */ int main()
/* 2fyQH9dhn ily traian Q2H1RCmZC */ {
/* 2fyQH9dhn ily traian Q2H1RCmZC */     int n , m , ok = 0 , cnt = 0 , a[1001][1001] , maxi = 0;
/* 2fyQH9dhn ily traian Q2H1RCmZC */     cin >> n >> m;
/* 2fyQH9dhn ily traian Q2H1RCmZC */     for(int i = 0 ; i < n ; ++i)
/* 2fyQH9dhn ily traian Q2H1RCmZC */     {
/* 2fyQH9dhn ily traian Q2H1RCmZC */         for(int j = 0 ; j < m ; ++j)
/* 2fyQH9dhn ily traian Q2H1RCmZC */         {
/* 2fyQH9dhn ily traian Q2H1RCmZC */             cin >> a[i][j];
/* 2fyQH9dhn ily traian Q2H1RCmZC */             if(a[i][j] > maxi) maxi = a[i][j];
/* 2fyQH9dhn ily traian Q2H1RCmZC */         }
/* 2fyQH9dhn ily traian Q2H1RCmZC */     }
/* 2fyQH9dhn ily traian Q2H1RCmZC */     for(int i = 0 ; i < n ; ++i)
/* 2fyQH9dhn ily traian Q2H1RCmZC */     {
/* 2fyQH9dhn ily traian Q2H1RCmZC */         ok = 0;
/* 2fyQH9dhn ily traian Q2H1RCmZC */         for(int j = 0 ; j < m ; ++j)
/* 2fyQH9dhn ily traian Q2H1RCmZC */         {
/* 2fyQH9dhn ily traian Q2H1RCmZC */             if(a[i][j] == maxi) ok = 1;
/* 2fyQH9dhn ily traian Q2H1RCmZC */         }
/* 2fyQH9dhn ily traian Q2H1RCmZC */         if(ok == 1) cnt++;
/* 2fyQH9dhn ily traian Q2H1RCmZC */     }
/* 2fyQH9dhn ily traian Q2H1RCmZC */     cout << maxi << " "<<cnt;
/* 2fyQH9dhn ily traian Q2H1RCmZC */     return 0;
/* 2fyQH9dhn ily traian Q2H1RCmZC */ }