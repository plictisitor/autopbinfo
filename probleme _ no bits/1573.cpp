/* 7mLqjYEay ily traian zGRmzUusy */ #include <algorithm>
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
/* 7mLqjYEay ily traian zGRmzUusy */ 
/* 7mLqjYEay ily traian zGRmzUusy */ using namespace std;
/* 7mLqjYEay ily traian zGRmzUusy */ int cmmdc(int a , int b)
/* 7mLqjYEay ily traian zGRmzUusy */ {
/* 7mLqjYEay ily traian zGRmzUusy */     int r;
/* 7mLqjYEay ily traian zGRmzUusy */     while(b!=0)
/* 7mLqjYEay ily traian zGRmzUusy */     {
/* 7mLqjYEay ily traian zGRmzUusy */         r=a%b;
/* 7mLqjYEay ily traian zGRmzUusy */         a=b;
/* 7mLqjYEay ily traian zGRmzUusy */         b=r;
/* 7mLqjYEay ily traian zGRmzUusy */     }
/* 7mLqjYEay ily traian zGRmzUusy */     return a;
/* 7mLqjYEay ily traian zGRmzUusy */ }
/* 7mLqjYEay ily traian zGRmzUusy */ int main()
/* 7mLqjYEay ily traian zGRmzUusy */ {
/* 7mLqjYEay ily traian zGRmzUusy */     int n , a[3001];
/* 7mLqjYEay ily traian zGRmzUusy */     cin >> n;
/* 7mLqjYEay ily traian zGRmzUusy */     for(int i = 1 ; i <= n ; ++i) cin >> a[i];
/* 7mLqjYEay ily traian zGRmzUusy */     sort(a+1 , a+n+1);
/* 7mLqjYEay ily traian zGRmzUusy */     int max = a[2]-a[1];
/* 7mLqjYEay ily traian zGRmzUusy */     for(int i = 2 ; i < n ; ++i)
/* 7mLqjYEay ily traian zGRmzUusy */         max=cmmdc(max,a[i+1]-a[i]);
/* 7mLqjYEay ily traian zGRmzUusy */     if(max>1) cout << "DA";
/* 7mLqjYEay ily traian zGRmzUusy */     else cout << "NU";
/* 7mLqjYEay ily traian zGRmzUusy */ }