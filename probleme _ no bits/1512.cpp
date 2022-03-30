/* Uid8loUoj ily traian iQ3Shq1qm */ #include <algorithm>
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
/* Uid8loUoj ily traian iQ3Shq1qm */ using namespace std;
/* Uid8loUoj ily traian iQ3Shq1qm */ 
/* Uid8loUoj ily traian iQ3Shq1qm */ int a[200001];
/* Uid8loUoj ily traian iQ3Shq1qm */ 
/* Uid8loUoj ily traian iQ3Shq1qm */ int main()
/* Uid8loUoj ily traian iQ3Shq1qm */ {
/* Uid8loUoj ily traian iQ3Shq1qm */     int n , m;
/* Uid8loUoj ily traian iQ3Shq1qm */     cin >> n >> m;
/* Uid8loUoj ily traian iQ3Shq1qm */     int st , dr , x;
/* Uid8loUoj ily traian iQ3Shq1qm */     for(int i = 1 ; i <= m ; ++i)
/* Uid8loUoj ily traian iQ3Shq1qm */     {
/* Uid8loUoj ily traian iQ3Shq1qm */         cin >> st >> dr >> x;
/* Uid8loUoj ily traian iQ3Shq1qm */         a[st]+=x , a[dr+1]-=x;
/* Uid8loUoj ily traian iQ3Shq1qm */     }
/* Uid8loUoj ily traian iQ3Shq1qm */     for(int i = 2 ; i <= n ; ++i)
/* Uid8loUoj ily traian iQ3Shq1qm */         a[i]+=a[i-1];
/* Uid8loUoj ily traian iQ3Shq1qm */     for(int i = 1 ; i <= n ; ++i)
/* Uid8loUoj ily traian iQ3Shq1qm */         cout << a[i] << ' ';
/* Uid8loUoj ily traian iQ3Shq1qm */     return 0;
/* Uid8loUoj ily traian iQ3Shq1qm */ }