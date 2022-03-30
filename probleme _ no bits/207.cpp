/* SIXDM5pSI ily traian QpRoazLmw */ #include <algorithm>
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
/* SIXDM5pSI ily traian QpRoazLmw */ 
/* SIXDM5pSI ily traian QpRoazLmw */ using namespace std;
/* SIXDM5pSI ily traian QpRoazLmw */ int main()
/* SIXDM5pSI ily traian QpRoazLmw */ {
/* SIXDM5pSI ily traian QpRoazLmw */     int n,m,a[101][101];
/* SIXDM5pSI ily traian QpRoazLmw */     cin >> n ;
/* SIXDM5pSI ily traian QpRoazLmw */     for(int i = 1; i <= n; ++i)
/* SIXDM5pSI ily traian QpRoazLmw */         for(int j=1;j<=n;++j)
/* SIXDM5pSI ily traian QpRoazLmw */             a[i][j] = n - j + 1;
/* SIXDM5pSI ily traian QpRoazLmw */ 
/* SIXDM5pSI ily traian QpRoazLmw */     for(int i = 1; i <= n; ++i) a[i][i]=0;
/* SIXDM5pSI ily traian QpRoazLmw */ 
/* SIXDM5pSI ily traian QpRoazLmw */     for(int i = 1; i <= n; ++i)
/* SIXDM5pSI ily traian QpRoazLmw */     {
/* SIXDM5pSI ily traian QpRoazLmw */         for(int j=1;j<=n;++j)
/* SIXDM5pSI ily traian QpRoazLmw */             cout<<a[i][j]<<" ";
/* SIXDM5pSI ily traian QpRoazLmw */         cout<<endl;
/* SIXDM5pSI ily traian QpRoazLmw */     }
/* SIXDM5pSI ily traian QpRoazLmw */     return 0;
/* SIXDM5pSI ily traian QpRoazLmw */ }