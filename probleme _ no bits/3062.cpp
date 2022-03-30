/* u1Zu5K463 ily traian 6uH2oqtTW */ #include <algorithm>
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
/* u1Zu5K463 ily traian 6uH2oqtTW */ using namespace std;
/* u1Zu5K463 ily traian 6uH2oqtTW */ 
/* u1Zu5K463 ily traian 6uH2oqtTW */ int main()
/* u1Zu5K463 ily traian 6uH2oqtTW */ {
/* u1Zu5K463 ily traian 6uH2oqtTW */     int x, t , y;
/* u1Zu5K463 ily traian 6uH2oqtTW */     cin >> x >> t >> y;
/* u1Zu5K463 ily traian 6uH2oqtTW */     long long int rez = 0;
/* u1Zu5K463 ily traian 6uH2oqtTW */     while(x > y)
/* u1Zu5K463 ily traian 6uH2oqtTW */     {
/* u1Zu5K463 ily traian 6uH2oqtTW */         x = x - (x/4);
/* u1Zu5K463 ily traian 6uH2oqtTW */         rez += t;
/* u1Zu5K463 ily traian 6uH2oqtTW */     }
/* u1Zu5K463 ily traian 6uH2oqtTW */     cout << rez;
/* u1Zu5K463 ily traian 6uH2oqtTW */     return 0;   
/* u1Zu5K463 ily traian 6uH2oqtTW */ }