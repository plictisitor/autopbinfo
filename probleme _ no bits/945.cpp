/* CMUCe3Ksc ily traian wmPMDL4sx */ #include <algorithm>
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
/* CMUCe3Ksc ily traian wmPMDL4sx */ using namespace std;
/* CMUCe3Ksc ily traian wmPMDL4sx */ 
/* CMUCe3Ksc ily traian wmPMDL4sx */ int main()
/* CMUCe3Ksc ily traian wmPMDL4sx */ {
/* CMUCe3Ksc ily traian wmPMDL4sx */     long long int n , b , c;
/* CMUCe3Ksc ily traian wmPMDL4sx */     cin >> n >> b >> c;
/* CMUCe3Ksc ily traian wmPMDL4sx */     long long int nr=1;
/* CMUCe3Ksc ily traian wmPMDL4sx */     int a[10];
/* CMUCe3Ksc ily traian wmPMDL4sx */     int p = 0;
/* CMUCe3Ksc ily traian wmPMDL4sx */     while(n)
/* CMUCe3Ksc ily traian wmPMDL4sx */     {
/* CMUCe3Ksc ily traian wmPMDL4sx */         a[p]=n%10;
/* CMUCe3Ksc ily traian wmPMDL4sx */         n/=10;
/* CMUCe3Ksc ily traian wmPMDL4sx */         p++;
/* CMUCe3Ksc ily traian wmPMDL4sx */     }
/* CMUCe3Ksc ily traian wmPMDL4sx */     nr=a[p-1];
/* CMUCe3Ksc ily traian wmPMDL4sx */     for(int i = p-2 ; i >= 0 ; --i)
/* CMUCe3Ksc ily traian wmPMDL4sx */     {
/* CMUCe3Ksc ily traian wmPMDL4sx */         nr=nr*b+a[i];    
/* CMUCe3Ksc ily traian wmPMDL4sx */     }
/* CMUCe3Ksc ily traian wmPMDL4sx */     p=0;
/* CMUCe3Ksc ily traian wmPMDL4sx */     int v[100];
/* CMUCe3Ksc ily traian wmPMDL4sx */     while(nr)
/* CMUCe3Ksc ily traian wmPMDL4sx */     {
/* CMUCe3Ksc ily traian wmPMDL4sx */         v[p]=nr%c;
/* CMUCe3Ksc ily traian wmPMDL4sx */         nr/=c;
/* CMUCe3Ksc ily traian wmPMDL4sx */         p++;
/* CMUCe3Ksc ily traian wmPMDL4sx */     }
/* CMUCe3Ksc ily traian wmPMDL4sx */     for(int i = p-1 ; i >= 0 ; --i)
/* CMUCe3Ksc ily traian wmPMDL4sx */     cout << v[i];
/* CMUCe3Ksc ily traian wmPMDL4sx */     return 0;
/* CMUCe3Ksc ily traian wmPMDL4sx */ }