/* WIXICUx4W ily traian e5FWxql6e */ #include <algorithm>
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
/* WIXICUx4W ily traian e5FWxql6e */ using namespace std;
/* WIXICUx4W ily traian e5FWxql6e */ int main()
/* WIXICUx4W ily traian e5FWxql6e */ {
/* WIXICUx4W ily traian e5FWxql6e */     int n,cate=0,a[1001],maxim=-1,minim=10000000;
/* WIXICUx4W ily traian e5FWxql6e */     cin>>n;
/* WIXICUx4W ily traian e5FWxql6e */     for(int i=1;i<=n;i++)
/* WIXICUx4W ily traian e5FWxql6e */     {
/* WIXICUx4W ily traian e5FWxql6e */         cin>>a[i];
/* WIXICUx4W ily traian e5FWxql6e */         if(a[i]>maxim) maxim=a[i];
/* WIXICUx4W ily traian e5FWxql6e */         if(a[i]<minim) minim=a[i];
/* WIXICUx4W ily traian e5FWxql6e */     }
/* WIXICUx4W ily traian e5FWxql6e */     int nr=maxim-minim;
/* WIXICUx4W ily traian e5FWxql6e */ 
/* WIXICUx4W ily traian e5FWxql6e */     for(int i=1;i<=n;i++)
/* WIXICUx4W ily traian e5FWxql6e */     {
/* WIXICUx4W ily traian e5FWxql6e */         if(a[i]==nr) cate++;
/* WIXICUx4W ily traian e5FWxql6e */     }
/* WIXICUx4W ily traian e5FWxql6e */     cout<<cate;
/* WIXICUx4W ily traian e5FWxql6e */     return 0;
/* WIXICUx4W ily traian e5FWxql6e */ }