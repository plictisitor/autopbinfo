/* 2mbm1ivqV ily traian 0cAuX8kdi */ #include <algorithm>
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
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */ using namespace std;
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */ int main()
/* 2mbm1ivqV ily traian 0cAuX8kdi */ {
/* 2mbm1ivqV ily traian 0cAuX8kdi */     int n;
/* 2mbm1ivqV ily traian 0cAuX8kdi */     cin >> n;
/* 2mbm1ivqV ily traian 0cAuX8kdi */     int a[1001];
/* 2mbm1ivqV ily traian 0cAuX8kdi */     for(int i = 1; i <= n; ++i)
/* 2mbm1ivqV ily traian 0cAuX8kdi */         cin >> a[i];
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */     for(int i = 1; i <= n; ++i)
/* 2mbm1ivqV ily traian 0cAuX8kdi */         cout << a[i];
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */     cout << endl;
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */     bool pal = true;
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */     for(int i = 1, j = n; i < j; ++i, --j)
/* 2mbm1ivqV ily traian 0cAuX8kdi */         if(a[i] != a[j])
/* 2mbm1ivqV ily traian 0cAuX8kdi */             pal = false;
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */     if(pal)
/* 2mbm1ivqV ily traian 0cAuX8kdi */         cout << "DA";
/* 2mbm1ivqV ily traian 0cAuX8kdi */     else
/* 2mbm1ivqV ily traian 0cAuX8kdi */         cout << "NU";
/* 2mbm1ivqV ily traian 0cAuX8kdi */ 
/* 2mbm1ivqV ily traian 0cAuX8kdi */     return 0;
/* 2mbm1ivqV ily traian 0cAuX8kdi */ }