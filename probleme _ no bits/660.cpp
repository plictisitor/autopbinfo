/* featXq3Fc ily traian jO46uJDsJ */ #include <algorithm>
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
/* featXq3Fc ily traian jO46uJDsJ */ using namespace std;
/* featXq3Fc ily traian jO46uJDsJ */ int main()
/* featXq3Fc ily traian jO46uJDsJ */ {
/* featXq3Fc ily traian jO46uJDsJ */     int n,a[1001],c=0;
/* featXq3Fc ily traian jO46uJDsJ */     cin>>n;
/* featXq3Fc ily traian jO46uJDsJ */     for(int i=1;i<=n;i++) cin>>a[i];
/* featXq3Fc ily traian jO46uJDsJ */     for(int i=1;i<=n;i++)
/* featXq3Fc ily traian jO46uJDsJ */     {
/* featXq3Fc ily traian jO46uJDsJ */         for(int j=i+1;j<=n;j++)
/* featXq3Fc ily traian jO46uJDsJ */         {
/* featXq3Fc ily traian jO46uJDsJ */ 
/* featXq3Fc ily traian jO46uJDsJ */             for(int k=j+1;k<=n;k++)
/* featXq3Fc ily traian jO46uJDsJ */             {
/* featXq3Fc ily traian jO46uJDsJ */                 if(a[i]+a[k]>a[j] && a[i]+a[j]>a[k] && a[j]+a[k]>a[i]) c++;
/* featXq3Fc ily traian jO46uJDsJ */             }
/* featXq3Fc ily traian jO46uJDsJ */         }
/* featXq3Fc ily traian jO46uJDsJ */     }
/* featXq3Fc ily traian jO46uJDsJ */     cout<<c;
/* featXq3Fc ily traian jO46uJDsJ */     return 0;
/* featXq3Fc ily traian jO46uJDsJ */ 
/* featXq3Fc ily traian jO46uJDsJ */ }