/* fBT0vGudV ily traian xOS1tdJYZ */ #include <algorithm>
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
/* fBT0vGudV ily traian xOS1tdJYZ */ using namespace std;
/* fBT0vGudV ily traian xOS1tdJYZ */ ifstream cin("zoom.in");
/* fBT0vGudV ily traian xOS1tdJYZ */ ofstream cout("zoom.out");
/* fBT0vGudV ily traian xOS1tdJYZ */ int a[1002][1002] , v[20][20];
/* fBT0vGudV ily traian xOS1tdJYZ */ int main()
/* fBT0vGudV ily traian xOS1tdJYZ */ {
/* fBT0vGudV ily traian xOS1tdJYZ */     int x , y , z , cnt = 0;
/* fBT0vGudV ily traian xOS1tdJYZ */     cin >> x >> y >> z;
/* fBT0vGudV ily traian xOS1tdJYZ */     for(int i = 0 ; i < x ; ++i)
/* fBT0vGudV ily traian xOS1tdJYZ */         for(int j = 0 ; j < x ; ++j)
/* fBT0vGudV ily traian xOS1tdJYZ */             cin >> v[i][j];
/* fBT0vGudV ily traian xOS1tdJYZ */     for(int i = 0 ; i < y ; ++i)
/* fBT0vGudV ily traian xOS1tdJYZ */         for(int j = 0 ; j < z ; ++j)
/* fBT0vGudV ily traian xOS1tdJYZ */             cin >> a[i][j];
/* fBT0vGudV ily traian xOS1tdJYZ */     for(int i = 0 ; i <= y-x ; ++i)
/* fBT0vGudV ily traian xOS1tdJYZ */         for(int j = 0 ; j <= z-x ; ++j)
/* fBT0vGudV ily traian xOS1tdJYZ */         {
/* fBT0vGudV ily traian xOS1tdJYZ */             int ok = 0;
/* fBT0vGudV ily traian xOS1tdJYZ */             for(int h = i , hi = 0 ; h < i+x ; ++h , ++hi)
/* fBT0vGudV ily traian xOS1tdJYZ */                 for(int g = j , gj = 0 ; g < j+x ; ++g , ++gj)
/* fBT0vGudV ily traian xOS1tdJYZ */                     if(a[h][g] != v[hi][gj])ok = 1;
/* fBT0vGudV ily traian xOS1tdJYZ */             if(ok == 0) cnt++;
/* fBT0vGudV ily traian xOS1tdJYZ */         }
/* fBT0vGudV ily traian xOS1tdJYZ */     cout << cnt;
/* fBT0vGudV ily traian xOS1tdJYZ */     return 0;
/* fBT0vGudV ily traian xOS1tdJYZ */ }