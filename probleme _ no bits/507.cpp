/* BmFK3vWbE ily traian bjLq9ZN6m */ #include <algorithm>
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
/* BmFK3vWbE ily traian bjLq9ZN6m */ using namespace std;
/* BmFK3vWbE ily traian bjLq9ZN6m */ 
/* BmFK3vWbE ily traian bjLq9ZN6m */ int main()
/* BmFK3vWbE ily traian bjLq9ZN6m */ {
/* BmFK3vWbE ily traian bjLq9ZN6m */     int n;
/* BmFK3vWbE ily traian bjLq9ZN6m */     cin >> n;
/* BmFK3vWbE ily traian bjLq9ZN6m */     int a[1000];
/* BmFK3vWbE ily traian bjLq9ZN6m */     for(int i = 0 ; i < n ; ++i)
/* BmFK3vWbE ily traian bjLq9ZN6m */     cin >> a[i] ;
/* BmFK3vWbE ily traian bjLq9ZN6m */     int m;
/* BmFK3vWbE ily traian bjLq9ZN6m */     cin >> m;
/* BmFK3vWbE ily traian bjLq9ZN6m */     int b[1000];
/* BmFK3vWbE ily traian bjLq9ZN6m */     for(int i = 0 ; i < m ; ++i)
/* BmFK3vWbE ily traian bjLq9ZN6m */     cin >> b[i];
/* BmFK3vWbE ily traian bjLq9ZN6m */     for(int i = 0 ; i < m ; ++i)
/* BmFK3vWbE ily traian bjLq9ZN6m */     {
/* BmFK3vWbE ily traian bjLq9ZN6m */         int cnt=0;
/* BmFK3vWbE ily traian bjLq9ZN6m */         for(int j = 0 ; j < n ; ++j)
/* BmFK3vWbE ily traian bjLq9ZN6m */         if(b[i]==a[j])
/* BmFK3vWbE ily traian bjLq9ZN6m */         cnt++;
/* BmFK3vWbE ily traian bjLq9ZN6m */         if(cnt!=0)
/* BmFK3vWbE ily traian bjLq9ZN6m */         cout << 1 << ' ';
/* BmFK3vWbE ily traian bjLq9ZN6m */         else
/* BmFK3vWbE ily traian bjLq9ZN6m */         cout << 0 << ' ';
/* BmFK3vWbE ily traian bjLq9ZN6m */     }
/* BmFK3vWbE ily traian bjLq9ZN6m */     return 0;
/* BmFK3vWbE ily traian bjLq9ZN6m */ }