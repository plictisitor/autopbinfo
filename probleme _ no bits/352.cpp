/* cXCasfr6O ily traian SjDpD8HpY */ #include <algorithm>
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
/* cXCasfr6O ily traian SjDpD8HpY */ using namespace std;
/* cXCasfr6O ily traian SjDpD8HpY */ 
/* cXCasfr6O ily traian SjDpD8HpY */ int main()
/* cXCasfr6O ily traian SjDpD8HpY */ {
/* cXCasfr6O ily traian SjDpD8HpY */     long long int n,a;
/* cXCasfr6O ily traian SjDpD8HpY */     cin >> n;
/* cXCasfr6O ily traian SjDpD8HpY */     for(long long int i = 1 ; i <= n/2 ; i++)
/* cXCasfr6O ily traian SjDpD8HpY */     {
/* cXCasfr6O ily traian SjDpD8HpY */         a=(2*n-i-i*i)/(2*i+2);
/* cXCasfr6O ily traian SjDpD8HpY */         if(a>=1 && n==(i+1)*(2*a+i)/2)
/* cXCasfr6O ily traian SjDpD8HpY */         {
/* cXCasfr6O ily traian SjDpD8HpY */             for(long long int k=0 ; k <= i ; k++)
/* cXCasfr6O ily traian SjDpD8HpY */             {
/* cXCasfr6O ily traian SjDpD8HpY */                 cout<<k+a<<" ";
/* cXCasfr6O ily traian SjDpD8HpY */             }
/* cXCasfr6O ily traian SjDpD8HpY */             cout<<endl;
/* cXCasfr6O ily traian SjDpD8HpY */         }
/* cXCasfr6O ily traian SjDpD8HpY */     }
/* cXCasfr6O ily traian SjDpD8HpY */     return 0;
/* cXCasfr6O ily traian SjDpD8HpY */ }