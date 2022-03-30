/* rGLrt8sZ3 ily traian OEvbL2BrJ */ #include <algorithm>
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
/* rGLrt8sZ3 ily traian OEvbL2BrJ */ 
/* rGLrt8sZ3 ily traian OEvbL2BrJ */ using namespace std;
/* rGLrt8sZ3 ily traian OEvbL2BrJ */ int main()
/* rGLrt8sZ3 ily traian OEvbL2BrJ */ {
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     int n,a[1001],maxi=-1,s=0;
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     cin>>n;
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     for(int i=1;i<=n;i++)
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     {
/* rGLrt8sZ3 ily traian OEvbL2BrJ */         cin>>a[i];
/* rGLrt8sZ3 ily traian OEvbL2BrJ */         if(a[i]>maxi) maxi=a[i];
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     }
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     for(int i=1;i<=n;i++)
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     {
/* rGLrt8sZ3 ily traian OEvbL2BrJ */         s=s+maxi-a[i];
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     }
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     cout<<s;
/* rGLrt8sZ3 ily traian OEvbL2BrJ */     return 0;
/* rGLrt8sZ3 ily traian OEvbL2BrJ */ }