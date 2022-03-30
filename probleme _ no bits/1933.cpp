/* cfzUJqMvb ily traian xLj5Bfs9Q */ #include <algorithm>
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
/* cfzUJqMvb ily traian xLj5Bfs9Q */ using namespace std;
/* cfzUJqMvb ily traian xLj5Bfs9Q */ ifstream cin("sume2.in");
/* cfzUJqMvb ily traian xLj5Bfs9Q */ ofstream cout("sume2.out");
/* cfzUJqMvb ily traian xLj5Bfs9Q */ int main()
/* cfzUJqMvb ily traian xLj5Bfs9Q */ {
/* cfzUJqMvb ily traian xLj5Bfs9Q */     long long n , m , x , y , a[100001] , s[100001]={0};
/* cfzUJqMvb ily traian xLj5Bfs9Q */     cin >> n;
/* cfzUJqMvb ily traian xLj5Bfs9Q */     for(int i = 1 ; i <= n ; ++i)
/* cfzUJqMvb ily traian xLj5Bfs9Q */     {
/* cfzUJqMvb ily traian xLj5Bfs9Q */         cin >> a[i];
/* cfzUJqMvb ily traian xLj5Bfs9Q */         s[i]=s[i-1]+a[i];
/* cfzUJqMvb ily traian xLj5Bfs9Q */     }
/* cfzUJqMvb ily traian xLj5Bfs9Q */     cin >> m;
/* cfzUJqMvb ily traian xLj5Bfs9Q */     for(int i = 0 ; i < m ; ++i)
/* cfzUJqMvb ily traian xLj5Bfs9Q */     {
/* cfzUJqMvb ily traian xLj5Bfs9Q */         cin >> x >> y;
/* cfzUJqMvb ily traian xLj5Bfs9Q */         cout << s[y]-s[x - 1] << endl;
/* cfzUJqMvb ily traian xLj5Bfs9Q */     }
/* cfzUJqMvb ily traian xLj5Bfs9Q */ }