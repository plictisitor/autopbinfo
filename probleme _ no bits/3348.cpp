/* LsaTsYmy7 ily traian AYwXn3m0L */ #include <algorithm>
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
/* LsaTsYmy7 ily traian AYwXn3m0L */ using namespace std;
/* LsaTsYmy7 ily traian AYwXn3m0L */ 
/* LsaTsYmy7 ily traian AYwXn3m0L */ int A[101], c;
/* LsaTsYmy7 ily traian AYwXn3m0L */ 
/* LsaTsYmy7 ily traian AYwXn3m0L */ int main(){
/* LsaTsYmy7 ily traian AYwXn3m0L */     int n;
/* LsaTsYmy7 ily traian AYwXn3m0L */     cin >> n;
/* LsaTsYmy7 ily traian AYwXn3m0L */     while(n){
/* LsaTsYmy7 ily traian AYwXn3m0L */         A[++c] = n % 2;
/* LsaTsYmy7 ily traian AYwXn3m0L */         n/=2;
/* LsaTsYmy7 ily traian AYwXn3m0L */     }
/* LsaTsYmy7 ily traian AYwXn3m0L */     int put = 1;
/* LsaTsYmy7 ily traian AYwXn3m0L */     for(int i = 1; i <= c; ++i){
/* LsaTsYmy7 ily traian AYwXn3m0L */         if(A[i] == 1)
/* LsaTsYmy7 ily traian AYwXn3m0L */             cout << put << ' ';
/* LsaTsYmy7 ily traian AYwXn3m0L */         put*=2;
/* LsaTsYmy7 ily traian AYwXn3m0L */     }
/* LsaTsYmy7 ily traian AYwXn3m0L */     return 0;
/* LsaTsYmy7 ily traian AYwXn3m0L */ }