/* zuFkLYr53 ily traian 4vz3YSXUW */ #include <algorithm>
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
/* zuFkLYr53 ily traian 4vz3YSXUW */ using namespace std;
/* zuFkLYr53 ily traian 4vz3YSXUW */ int main()
/* zuFkLYr53 ily traian 4vz3YSXUW */ {
/* zuFkLYr53 ily traian 4vz3YSXUW */     int n,m,a[102][102],s1=0,s2=0;
/* zuFkLYr53 ily traian 4vz3YSXUW */     cin>>n;
/* zuFkLYr53 ily traian 4vz3YSXUW */     for(int i=1;i<=n;i++)
/* zuFkLYr53 ily traian 4vz3YSXUW */         for(int j=n;j>=1;j--) cin>>a[i][j];
/* zuFkLYr53 ily traian 4vz3YSXUW */     for(int j=1;j<=n;j++)
/* zuFkLYr53 ily traian 4vz3YSXUW */         {for(int i=n;i>=1;i--) cout<<a[i][j]<<" ";
/* zuFkLYr53 ily traian 4vz3YSXUW */         cout<<endl;}
/* zuFkLYr53 ily traian 4vz3YSXUW */     return 0;
/* zuFkLYr53 ily traian 4vz3YSXUW */ }