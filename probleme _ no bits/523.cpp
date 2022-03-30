/* 4uRFw0mLw ily traian kbjTBeECd */ #include <algorithm>
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
/* 4uRFw0mLw ily traian kbjTBeECd */ 
/* 4uRFw0mLw ily traian kbjTBeECd */ using namespace std;
/* 4uRFw0mLw ily traian kbjTBeECd */ 
/* 4uRFw0mLw ily traian kbjTBeECd */ int main()
/* 4uRFw0mLw ily traian kbjTBeECd */ {
/* 4uRFw0mLw ily traian kbjTBeECd */     int n;
/* 4uRFw0mLw ily traian kbjTBeECd */     cin >> n;
/* 4uRFw0mLw ily traian kbjTBeECd */     int a[1001];
/* 4uRFw0mLw ily traian kbjTBeECd */     for(int i = 1; i <= n; ++i)
/* 4uRFw0mLw ily traian kbjTBeECd */         cin >> a[i];
/* 4uRFw0mLw ily traian kbjTBeECd */ 
/* 4uRFw0mLw ily traian kbjTBeECd */     int lmax = 0, st = 0, dr = 0;
/* 4uRFw0mLw ily traian kbjTBeECd */ 
/* 4uRFw0mLw ily traian kbjTBeECd */     for(int i = 1; i <= n; ++i){
/* 4uRFw0mLw ily traian kbjTBeECd */         int ca = a[i];
/* 4uRFw0mLw ily traian kbjTBeECd */         int l = 0;
/* 4uRFw0mLw ily traian kbjTBeECd */         for(int j = i; j <= n && a[j] == ca; ++j)
/* 4uRFw0mLw ily traian kbjTBeECd */             l++;
/* 4uRFw0mLw ily traian kbjTBeECd */         if(l >= lmax){
/* 4uRFw0mLw ily traian kbjTBeECd */             lmax = l;
/* 4uRFw0mLw ily traian kbjTBeECd */             st = i;
/* 4uRFw0mLw ily traian kbjTBeECd */             dr = i + l - 1;
/* 4uRFw0mLw ily traian kbjTBeECd */         }
/* 4uRFw0mLw ily traian kbjTBeECd */     }
/* 4uRFw0mLw ily traian kbjTBeECd */ 
/* 4uRFw0mLw ily traian kbjTBeECd */     cout << st << ' ' << dr;
/* 4uRFw0mLw ily traian kbjTBeECd */ 
/* 4uRFw0mLw ily traian kbjTBeECd */     return 0;
/* 4uRFw0mLw ily traian kbjTBeECd */ }