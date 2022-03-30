/* hrUwesyJq ily traian otGehQVXd */ #include <algorithm>
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
/* hrUwesyJq ily traian otGehQVXd */ using namespace std;
/* hrUwesyJq ily traian otGehQVXd */ 
/* hrUwesyJq ily traian otGehQVXd */ int main()
/* hrUwesyJq ily traian otGehQVXd */ {
/* hrUwesyJq ily traian otGehQVXd */     int n, x, r=0;
/* hrUwesyJq ily traian otGehQVXd */     long long p=1;
/* hrUwesyJq ily traian otGehQVXd */     cin>>n;
/* hrUwesyJq ily traian otGehQVXd */     while(p<=n)
/* hrUwesyJq ily traian otGehQVXd */     {
/* hrUwesyJq ily traian otGehQVXd */         x=n/(p*10)*p+n%p;
/* hrUwesyJq ily traian otGehQVXd */         if(x!=0)
/* hrUwesyJq ily traian otGehQVXd */         {
/* hrUwesyJq ily traian otGehQVXd */             if(n%x>r) r=n%x;
/* hrUwesyJq ily traian otGehQVXd */         }
/* hrUwesyJq ily traian otGehQVXd */         p=p*10;
/* hrUwesyJq ily traian otGehQVXd */     }
/* hrUwesyJq ily traian otGehQVXd */     cout<<r;
/* hrUwesyJq ily traian otGehQVXd */      return 0;
/* hrUwesyJq ily traian otGehQVXd */ }