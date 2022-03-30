/* eT1t3jK8c ily traian hMBWk4FJp */ #include <algorithm>
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
/* eT1t3jK8c ily traian hMBWk4FJp */ using namespace std;
/* eT1t3jK8c ily traian hMBWk4FJp */ int main()
/* eT1t3jK8c ily traian hMBWk4FJp */ {
/* eT1t3jK8c ily traian hMBWk4FJp */     int m,n, a[22][22];
/* eT1t3jK8c ily traian hMBWk4FJp */     cin>>n>>m;
/* eT1t3jK8c ily traian hMBWk4FJp */     for (int i=1; i<=n; i++)
/* eT1t3jK8c ily traian hMBWk4FJp */         for (int j=1; j<=m; j++)
/* eT1t3jK8c ily traian hMBWk4FJp */             a[i][j]=min(i,j);
/* eT1t3jK8c ily traian hMBWk4FJp */     for (int i=1; i<=n; i++) 
/* eT1t3jK8c ily traian hMBWk4FJp */     {
/* eT1t3jK8c ily traian hMBWk4FJp */         for (int j=1; j<=m; j++) cout<<a[i][j]<<" ";
/* eT1t3jK8c ily traian hMBWk4FJp */         cout<<endl;
/* eT1t3jK8c ily traian hMBWk4FJp */     }
/* eT1t3jK8c ily traian hMBWk4FJp */     return 0;
/* eT1t3jK8c ily traian hMBWk4FJp */ }