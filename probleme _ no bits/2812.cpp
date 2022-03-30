/* Hx5a8LmCf ily traian TPxcr8IyU */ #include <algorithm>
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
/* Hx5a8LmCf ily traian TPxcr8IyU */ using namespace std;
/* Hx5a8LmCf ily traian TPxcr8IyU */ 
/* Hx5a8LmCf ily traian TPxcr8IyU */ ifstream cin("progresie3.in");
/* Hx5a8LmCf ily traian TPxcr8IyU */ ofstream cout("progresie3.out");
/* Hx5a8LmCf ily traian TPxcr8IyU */ 
/* Hx5a8LmCf ily traian TPxcr8IyU */ int f[1001] , a[1001] , p = 1;
/* Hx5a8LmCf ily traian TPxcr8IyU */ 
/* Hx5a8LmCf ily traian TPxcr8IyU */ int main()
/* Hx5a8LmCf ily traian TPxcr8IyU */ {
/* Hx5a8LmCf ily traian TPxcr8IyU */     int x;
/* Hx5a8LmCf ily traian TPxcr8IyU */     while(cin >> x)
/* Hx5a8LmCf ily traian TPxcr8IyU */         f[x]=1;
/* Hx5a8LmCf ily traian TPxcr8IyU */     for(int i = 1 ; i <= 1000 ; ++i)
/* Hx5a8LmCf ily traian TPxcr8IyU */         if(f[i])
/* Hx5a8LmCf ily traian TPxcr8IyU */             a[p]=i , p++;
/* Hx5a8LmCf ily traian TPxcr8IyU */     p--;
/* Hx5a8LmCf ily traian TPxcr8IyU */     bool ok = true;
/* Hx5a8LmCf ily traian TPxcr8IyU */     int r = a[2]-a[1];
/* Hx5a8LmCf ily traian TPxcr8IyU */     for(int i = 3 ; i <= p ; ++i)
/* Hx5a8LmCf ily traian TPxcr8IyU */         if(a[i]-a[i-1] != r)
/* Hx5a8LmCf ily traian TPxcr8IyU */             ok=false;
/* Hx5a8LmCf ily traian TPxcr8IyU */     if(ok)
/* Hx5a8LmCf ily traian TPxcr8IyU */         cout << r;
/* Hx5a8LmCf ily traian TPxcr8IyU */     else
/* Hx5a8LmCf ily traian TPxcr8IyU */         cout << "NU";
/* Hx5a8LmCf ily traian TPxcr8IyU */     return 0;
/* Hx5a8LmCf ily traian TPxcr8IyU */ }