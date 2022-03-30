/* Gtru1VeLz ily traian 86CZqDVhg */ #include <algorithm>
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
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */ using namespace std;
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */ ifstream cin("pacman_xi.in");
/* Gtru1VeLz ily traian 86CZqDVhg */ ofstream cout("pacman_xi.out");
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */ long long n,m,a[55][55];
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */ int main()
/* Gtru1VeLz ily traian 86CZqDVhg */ {
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */     cin>>n>>m;
/* Gtru1VeLz ily traian 86CZqDVhg */     a[1][1]=1;
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */     for(int i=1;i<=n;i++)
/* Gtru1VeLz ily traian 86CZqDVhg */         for(int j=2;j<=m;j++)
/* Gtru1VeLz ily traian 86CZqDVhg */             a[i][j] = a[i-1][j-1]+a[i][j-1];
/* Gtru1VeLz ily traian 86CZqDVhg */ 
/* Gtru1VeLz ily traian 86CZqDVhg */     cout<<a[n][m]<<endl;
/* Gtru1VeLz ily traian 86CZqDVhg */     return 0;
/* Gtru1VeLz ily traian 86CZqDVhg */ }