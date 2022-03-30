/* jbMH7SyaL ily traian hcMidVDzW */ #include <algorithm>
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
/* jbMH7SyaL ily traian hcMidVDzW */ using namespace std;
/* jbMH7SyaL ily traian hcMidVDzW */ int main()
/* jbMH7SyaL ily traian hcMidVDzW */ {
/* jbMH7SyaL ily traian hcMidVDzW */     int n , cnt = 0 , a[100][100] , b[100] , c[100];
/* jbMH7SyaL ily traian hcMidVDzW */     cin >> n;
/* jbMH7SyaL ily traian hcMidVDzW */     for(int i = 0 ; i < n ; ++i)
/* jbMH7SyaL ily traian hcMidVDzW */         for(int j = 0 ; j < n ; ++j)
/* jbMH7SyaL ily traian hcMidVDzW */         {
/* jbMH7SyaL ily traian hcMidVDzW */             cin >> a[i][j];
/* jbMH7SyaL ily traian hcMidVDzW */             b[i]+=a[i][j];
/* jbMH7SyaL ily traian hcMidVDzW */         }
/* jbMH7SyaL ily traian hcMidVDzW */     for(int i = 0 ; i < n ; ++i)
/* jbMH7SyaL ily traian hcMidVDzW */         for(int j = 0 ; j < n ; ++j)
/* jbMH7SyaL ily traian hcMidVDzW */         {
/* jbMH7SyaL ily traian hcMidVDzW */             c[i]+=a[j][i];
/* jbMH7SyaL ily traian hcMidVDzW */         }
/* jbMH7SyaL ily traian hcMidVDzW */     for(int i = 0 ; i < n ; ++i)
/* jbMH7SyaL ily traian hcMidVDzW */         for(int j = 0 ; j < n ; ++j)
/* jbMH7SyaL ily traian hcMidVDzW */         {
/* jbMH7SyaL ily traian hcMidVDzW */             if(b[i]==c[j])cnt++;
/* jbMH7SyaL ily traian hcMidVDzW */         }
/* jbMH7SyaL ily traian hcMidVDzW */     cout << cnt;
/* jbMH7SyaL ily traian hcMidVDzW */     return 0;
/* jbMH7SyaL ily traian hcMidVDzW */ }