/* tS8f7NtAr ily traian ETvZ7qDhC */ #include <algorithm>
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
/* tS8f7NtAr ily traian ETvZ7qDhC */ 
/* tS8f7NtAr ily traian ETvZ7qDhC */ using namespace std;
/* tS8f7NtAr ily traian ETvZ7qDhC */ 
/* tS8f7NtAr ily traian ETvZ7qDhC */ int n,a[1005];
/* tS8f7NtAr ily traian ETvZ7qDhC */ 
/* tS8f7NtAr ily traian ETvZ7qDhC */ 
/* tS8f7NtAr ily traian ETvZ7qDhC */ int main(){
/* tS8f7NtAr ily traian ETvZ7qDhC */     cin >> n;
/* tS8f7NtAr ily traian ETvZ7qDhC */     for(int i=1; i<=n; ++i)
/* tS8f7NtAr ily traian ETvZ7qDhC */         cin >> a[i];
/* tS8f7NtAr ily traian ETvZ7qDhC */     for(int p = n ; p >= 1 ; p--)
/* tS8f7NtAr ily traian ETvZ7qDhC */         if( a[p] % 2 == 0 ){
/* tS8f7NtAr ily traian ETvZ7qDhC */             for(int i = p ; i<n ; ++i)
/* tS8f7NtAr ily traian ETvZ7qDhC */                 a[i] = a[i+1];
/* tS8f7NtAr ily traian ETvZ7qDhC */             n--;
/* tS8f7NtAr ily traian ETvZ7qDhC */         }
/* tS8f7NtAr ily traian ETvZ7qDhC */     for(int i=1;i<=n;++i)
/* tS8f7NtAr ily traian ETvZ7qDhC */         cout << a[i] << " ";
/* tS8f7NtAr ily traian ETvZ7qDhC */     return 0;
/* tS8f7NtAr ily traian ETvZ7qDhC */ }