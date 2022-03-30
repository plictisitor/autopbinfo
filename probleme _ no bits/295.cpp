/* u1A2JlD1H ily traian BRnZTESBM */ #include <algorithm>
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
/* u1A2JlD1H ily traian BRnZTESBM */ 
/* u1A2JlD1H ily traian BRnZTESBM */ using namespace std;
/* u1A2JlD1H ily traian BRnZTESBM */ 
/* u1A2JlD1H ily traian BRnZTESBM */ int main()
/* u1A2JlD1H ily traian BRnZTESBM */ {
/* u1A2JlD1H ily traian BRnZTESBM */     int n;
/* u1A2JlD1H ily traian BRnZTESBM */     cin >> n;
/* u1A2JlD1H ily traian BRnZTESBM */     int a[1001];
/* u1A2JlD1H ily traian BRnZTESBM */     int cnt=0;
/* u1A2JlD1H ily traian BRnZTESBM */     for (int i = 0 ; i < n; ++i)
/* u1A2JlD1H ily traian BRnZTESBM */     cin >> a[i];
/* u1A2JlD1H ily traian BRnZTESBM */     for (int i = 1 ; i < n-1; ++i)
/* u1A2JlD1H ily traian BRnZTESBM */     {
/* u1A2JlD1H ily traian BRnZTESBM */         if (a[i-1]%2 == a[i]%2 && a[i]%2 == a[i+1]%2) 
/* u1A2JlD1H ily traian BRnZTESBM */         cnt++;
/* u1A2JlD1H ily traian BRnZTESBM */     }
/* u1A2JlD1H ily traian BRnZTESBM */     if (cnt!=0)
/* u1A2JlD1H ily traian BRnZTESBM */     cout << "DA";
/* u1A2JlD1H ily traian BRnZTESBM */     else
/* u1A2JlD1H ily traian BRnZTESBM */     cout << "NU";
/* u1A2JlD1H ily traian BRnZTESBM */ }