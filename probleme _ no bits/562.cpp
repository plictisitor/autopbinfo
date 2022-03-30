/* 9LE74I9Dz ily traian vV7TKSwgF */ #include <algorithm>
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
/* 9LE74I9Dz ily traian vV7TKSwgF */ using namespace std;
/* 9LE74I9Dz ily traian vV7TKSwgF */ int a[10001];
/* 9LE74I9Dz ily traian vV7TKSwgF */ int main()
/* 9LE74I9Dz ily traian vV7TKSwgF */ {
/* 9LE74I9Dz ily traian vV7TKSwgF */     int n , t1 , t2 , x , y , cnt = -1;
/* 9LE74I9Dz ily traian vV7TKSwgF */     cin >> n >> t1 >> t2;
/* 9LE74I9Dz ily traian vV7TKSwgF */     for(int i = 1; i <= n ; i++)
/* 9LE74I9Dz ily traian vV7TKSwgF */       {
/* 9LE74I9Dz ily traian vV7TKSwgF */          cin >> x >> y;
/* 9LE74I9Dz ily traian vV7TKSwgF */          a[x]++;
/* 9LE74I9Dz ily traian vV7TKSwgF */          a[y]--;
/* 9LE74I9Dz ily traian vV7TKSwgF */       }
/* 9LE74I9Dz ily traian vV7TKSwgF */     for(int i = t1 ; i <= t2 ; ++i)
/* 9LE74I9Dz ily traian vV7TKSwgF */             a[i]+=a[i-1];
/* 9LE74I9Dz ily traian vV7TKSwgF */     for(int i = t1 ; i <= t2 ; ++i)
/* 9LE74I9Dz ily traian vV7TKSwgF */         if(a[i]==0) cnt++;
/* 9LE74I9Dz ily traian vV7TKSwgF */     cout << cnt;
/* 9LE74I9Dz ily traian vV7TKSwgF */     return 0;
/* 9LE74I9Dz ily traian vV7TKSwgF */ }