/* VNrEnLub0 ily traian JISeGcKNs */ #include <algorithm>
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
/* VNrEnLub0 ily traian JISeGcKNs */ 
/* VNrEnLub0 ily traian JISeGcKNs */ using namespace std;
/* VNrEnLub0 ily traian JISeGcKNs */ 
/* VNrEnLub0 ily traian JISeGcKNs */ long long int log(long long int n)
/* VNrEnLub0 ily traian JISeGcKNs */ {
/* VNrEnLub0 ily traian JISeGcKNs */     int cnt =0;
/* VNrEnLub0 ily traian JISeGcKNs */     while(n>1)
/* VNrEnLub0 ily traian JISeGcKNs */         n/=2 , cnt++;
/* VNrEnLub0 ily traian JISeGcKNs */     return cnt;
/* VNrEnLub0 ily traian JISeGcKNs */ }
/* VNrEnLub0 ily traian JISeGcKNs */ 
/* VNrEnLub0 ily traian JISeGcKNs */ long long int put(int i)
/* VNrEnLub0 ily traian JISeGcKNs */ {
/* VNrEnLub0 ily traian JISeGcKNs */     long long int put=1;
/* VNrEnLub0 ily traian JISeGcKNs */     while(i)
/* VNrEnLub0 ily traian JISeGcKNs */         put*=2 , i--;
/* VNrEnLub0 ily traian JISeGcKNs */     return put;
/* VNrEnLub0 ily traian JISeGcKNs */ }
/* VNrEnLub0 ily traian JISeGcKNs */ 
/* VNrEnLub0 ily traian JISeGcKNs */ int main()
/* VNrEnLub0 ily traian JISeGcKNs */ {
/* VNrEnLub0 ily traian JISeGcKNs */     long long int n , a , b;
/* VNrEnLub0 ily traian JISeGcKNs */     cin >> n >> a >> b;
/* VNrEnLub0 ily traian JISeGcKNs */     int put1=log(a);
/* VNrEnLub0 ily traian JISeGcKNs */     if(pow(2 , put1)!=a)
/* VNrEnLub0 ily traian JISeGcKNs */         put1++;
/* VNrEnLub0 ily traian JISeGcKNs */     int put2=log(b);
/* VNrEnLub0 ily traian JISeGcKNs */     for(int i = put1 ; i <= put2 && n ; ++i , n--)
/* VNrEnLub0 ily traian JISeGcKNs */         cout << put(i)  << ' ';
/* VNrEnLub0 ily traian JISeGcKNs */     return 0;
/* VNrEnLub0 ily traian JISeGcKNs */ }