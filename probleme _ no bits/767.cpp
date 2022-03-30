/* E2PK0WCMe ily traian ddJcMHSkF */ #include <algorithm>
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
/* E2PK0WCMe ily traian ddJcMHSkF */ using namespace std;
/* E2PK0WCMe ily traian ddJcMHSkF */ int main()
/* E2PK0WCMe ily traian ddJcMHSkF */ {
/* E2PK0WCMe ily traian ddJcMHSkF */     int n , m , s = 0;
/* E2PK0WCMe ily traian ddJcMHSkF */     int a[101][101];
/* E2PK0WCMe ily traian ddJcMHSkF */     cin >> n >> m;
/* E2PK0WCMe ily traian ddJcMHSkF */     for(int i = 1 ; i <= n ; ++i)
/* E2PK0WCMe ily traian ddJcMHSkF */         for(int j = 1 ; j <= m ; ++j)
/* E2PK0WCMe ily traian ddJcMHSkF */             cin >> a[i][j];
/* E2PK0WCMe ily traian ddJcMHSkF */         
/* E2PK0WCMe ily traian ddJcMHSkF */     for(int i = 1 ; i <= n ; ++i)
/* E2PK0WCMe ily traian ddJcMHSkF */         for(int j = 1 ; j <= m ;++j)
/* E2PK0WCMe ily traian ddJcMHSkF */             if(a[i][j] % 2 == 0) 
/* E2PK0WCMe ily traian ddJcMHSkF */                 s = s + a[i][j];
/* E2PK0WCMe ily traian ddJcMHSkF */     cout << s;
/* E2PK0WCMe ily traian ddJcMHSkF */     return 0;
/* E2PK0WCMe ily traian ddJcMHSkF */ 
/* E2PK0WCMe ily traian ddJcMHSkF */ }