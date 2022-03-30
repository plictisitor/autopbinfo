/* 5kD6sF0TY ily traian XfbzUYw5A */ #include <algorithm>
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
/* 5kD6sF0TY ily traian XfbzUYw5A */ using namespace std;
/* 5kD6sF0TY ily traian XfbzUYw5A */ ifstream cin("submat1.in");
/* 5kD6sF0TY ily traian XfbzUYw5A */ ofstream cout("submat1.out");
/* 5kD6sF0TY ily traian XfbzUYw5A */ int main()
/* 5kD6sF0TY ily traian XfbzUYw5A */ {
/* 5kD6sF0TY ily traian XfbzUYw5A */     int n , m , x , cntmax = 0 , f[1001]={0};
/* 5kD6sF0TY ily traian XfbzUYw5A */     cin >> n >> m;
/* 5kD6sF0TY ily traian XfbzUYw5A */     for(int i = 0 ; i < n; ++i)
/* 5kD6sF0TY ily traian XfbzUYw5A */         for(int j = 0 ; j < m ; ++j)
/* 5kD6sF0TY ily traian XfbzUYw5A */         {
/* 5kD6sF0TY ily traian XfbzUYw5A */             cin >> x;
/* 5kD6sF0TY ily traian XfbzUYw5A */             if(x==0) f[i]++;
/* 5kD6sF0TY ily traian XfbzUYw5A */         }
/* 5kD6sF0TY ily traian XfbzUYw5A */     for(int i = 1 ; i <= m ; ++i)
/* 5kD6sF0TY ily traian XfbzUYw5A */     {
/* 5kD6sF0TY ily traian XfbzUYw5A */         int cnt = 0;
/* 5kD6sF0TY ily traian XfbzUYw5A */         for(int j = 0  ; j < n ; ++j)
/* 5kD6sF0TY ily traian XfbzUYw5A */             if(f[j]>=i) cnt+=i;
/* 5kD6sF0TY ily traian XfbzUYw5A */         if(cnt > cntmax) cntmax = cnt;
/* 5kD6sF0TY ily traian XfbzUYw5A */     }
/* 5kD6sF0TY ily traian XfbzUYw5A */     cout << cntmax;
/* 5kD6sF0TY ily traian XfbzUYw5A */     return 0;
/* 5kD6sF0TY ily traian XfbzUYw5A */ }