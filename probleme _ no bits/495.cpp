/* qNPvt3y9K ily traian eJM3TGBuv */ #include <algorithm>
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
/* qNPvt3y9K ily traian eJM3TGBuv */ using namespace std;
/* qNPvt3y9K ily traian eJM3TGBuv */ int main()
/* qNPvt3y9K ily traian eJM3TGBuv */ {
/* qNPvt3y9K ily traian eJM3TGBuv */     int n,a[201],x,sum=0;
/* qNPvt3y9K ily traian eJM3TGBuv */     cin>>n;
/* qNPvt3y9K ily traian eJM3TGBuv */     for(int i=1;i<=n;i++) {cin>>a[i];sum=sum+a[i];}
/* qNPvt3y9K ily traian eJM3TGBuv */     for(int i=1;i<=n;i++)
/* qNPvt3y9K ily traian eJM3TGBuv */     {
/* qNPvt3y9K ily traian eJM3TGBuv */         cout<<sum-a[i]<<" ";
/* qNPvt3y9K ily traian eJM3TGBuv */     }
/* qNPvt3y9K ily traian eJM3TGBuv */      return 0;
/* qNPvt3y9K ily traian eJM3TGBuv */ }