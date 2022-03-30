/* uXf5MPYPG ily traian lfdXiw2Qv */ #include <algorithm>
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
/* uXf5MPYPG ily traian lfdXiw2Qv */ using namespace std;
/* uXf5MPYPG ily traian lfdXiw2Qv */ 
/* uXf5MPYPG ily traian lfdXiw2Qv */ int main ()
/* uXf5MPYPG ily traian lfdXiw2Qv */ {
/* uXf5MPYPG ily traian lfdXiw2Qv */     int n, s=0;
/* uXf5MPYPG ily traian lfdXiw2Qv */     cin>>n;
/* uXf5MPYPG ily traian lfdXiw2Qv */     for(int i=1;i<=n;i++){
/* uXf5MPYPG ily traian lfdXiw2Qv */         for(int j=1;j<=s;j++) cout<<' ';
/* uXf5MPYPG ily traian lfdXiw2Qv */         for(int k=1;k<=n;k++) cout<<'*';
/* uXf5MPYPG ily traian lfdXiw2Qv */         s++;
/* uXf5MPYPG ily traian lfdXiw2Qv */         cout<<endl;
/* uXf5MPYPG ily traian lfdXiw2Qv */     }
/* uXf5MPYPG ily traian lfdXiw2Qv */     s-=2;
/* uXf5MPYPG ily traian lfdXiw2Qv */     for(int i=1;i<=n-1;i++){
/* uXf5MPYPG ily traian lfdXiw2Qv */         for(int a=1;a<=s;a++) cout<<' ';
/* uXf5MPYPG ily traian lfdXiw2Qv */         for(int b=1;b<=n;b++) cout<<'*';
/* uXf5MPYPG ily traian lfdXiw2Qv */         s--;
/* uXf5MPYPG ily traian lfdXiw2Qv */         cout<<endl;
/* uXf5MPYPG ily traian lfdXiw2Qv */     }
/* uXf5MPYPG ily traian lfdXiw2Qv */     return 0;    
/* uXf5MPYPG ily traian lfdXiw2Qv */ }