/* mJiA1grIT ily traian Unff9xd8L */ #include <algorithm>
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
/* mJiA1grIT ily traian Unff9xd8L */ using namespace std;
/* mJiA1grIT ily traian Unff9xd8L */ 
/* mJiA1grIT ily traian Unff9xd8L */ int main()
/* mJiA1grIT ily traian Unff9xd8L */ {
/* mJiA1grIT ily traian Unff9xd8L */     int n;
/* mJiA1grIT ily traian Unff9xd8L */     cin >> n;
/* mJiA1grIT ily traian Unff9xd8L */     char a, b;
/* mJiA1grIT ily traian Unff9xd8L */     cin >> a >> b;
/* mJiA1grIT ily traian Unff9xd8L */     /*
/* mJiA1grIT ily traian Unff9xd8L */         n = 4
/* mJiA1grIT ily traian Unff9xd8L */         /   1   2   3   4
/* mJiA1grIT ily traian Unff9xd8L */         1   *   *   *   *
/* mJiA1grIT ily traian Unff9xd8L */         2   *   #   #   *
/* mJiA1grIT ily traian Unff9xd8L */         3   *   #   #   *
/* mJiA1grIT ily traian Unff9xd8L */         4   *   *   *   *
/* mJiA1grIT ily traian Unff9xd8L */         
/* mJiA1grIT ily traian Unff9xd8L */     */
/* mJiA1grIT ily traian Unff9xd8L */     for(int lin = 1; lin <= n; ++lin){
/* mJiA1grIT ily traian Unff9xd8L */         for(int col = 1; col <= n; ++col){
/* mJiA1grIT ily traian Unff9xd8L */             if(lin == 1 || lin == n || col == 1 || col == n)
/* mJiA1grIT ily traian Unff9xd8L */                 cout << a;
/* mJiA1grIT ily traian Unff9xd8L */             else
/* mJiA1grIT ily traian Unff9xd8L */                 cout << b;
/* mJiA1grIT ily traian Unff9xd8L */         }
/* mJiA1grIT ily traian Unff9xd8L */         cout << endl;
/* mJiA1grIT ily traian Unff9xd8L */     }
/* mJiA1grIT ily traian Unff9xd8L */ 
/* mJiA1grIT ily traian Unff9xd8L */     /*
/* mJiA1grIT ily traian Unff9xd8L */         aaaa
/* mJiA1grIT ily traian Unff9xd8L */         abba
/* mJiA1grIT ily traian Unff9xd8L */         abba
/* mJiA1grIT ily traian Unff9xd8L */         aaaa
/* mJiA1grIT ily traian Unff9xd8L */     
/* mJiA1grIT ily traian Unff9xd8L */     */
/* mJiA1grIT ily traian Unff9xd8L */ 
/* mJiA1grIT ily traian Unff9xd8L */     return 0;
/* mJiA1grIT ily traian Unff9xd8L */ }