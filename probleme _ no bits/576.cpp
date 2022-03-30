/* 4l03XvJSl ily traian IFyNHNniP */ #include <algorithm>
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
/* 4l03XvJSl ily traian IFyNHNniP */ using namespace std;
/* 4l03XvJSl ily traian IFyNHNniP */ int a[101][101];
/* 4l03XvJSl ily traian IFyNHNniP */ int main()
/* 4l03XvJSl ily traian IFyNHNniP */ {
/* 4l03XvJSl ily traian IFyNHNniP */     int n , m , x , y;
/* 4l03XvJSl ily traian IFyNHNniP */     cin >> n >> m;
/* 4l03XvJSl ily traian IFyNHNniP */     for(int i = 1 ; i <= m ; ++i)
/* 4l03XvJSl ily traian IFyNHNniP */     {
/* 4l03XvJSl ily traian IFyNHNniP */         cin >> x >> y;
/* 4l03XvJSl ily traian IFyNHNniP */         a[x][y]=1;
/* 4l03XvJSl ily traian IFyNHNniP */         a[y][x]=1;
/* 4l03XvJSl ily traian IFyNHNniP */     }
/* 4l03XvJSl ily traian IFyNHNniP */     for(int i = 1 ; i <= n ; ++i)
/* 4l03XvJSl ily traian IFyNHNniP */     {
/* 4l03XvJSl ily traian IFyNHNniP */         for(int j = 1 ; j <= n ; ++j)
/* 4l03XvJSl ily traian IFyNHNniP */         {
/* 4l03XvJSl ily traian IFyNHNniP */             for(int r = 1 ; r <= n ; ++r)
/* 4l03XvJSl ily traian IFyNHNniP */             {
/* 4l03XvJSl ily traian IFyNHNniP */                 if(a[i][j] == 1 && a[r][i] == 1 && a[j][r] == 1)
/* 4l03XvJSl ily traian IFyNHNniP */                     cout << i << " " << j << " " << r << endl;
/* 4l03XvJSl ily traian IFyNHNniP */             }
/* 4l03XvJSl ily traian IFyNHNniP */         }
/* 4l03XvJSl ily traian IFyNHNniP */     }
/* 4l03XvJSl ily traian IFyNHNniP */     return 0;
/* 4l03XvJSl ily traian IFyNHNniP */ }