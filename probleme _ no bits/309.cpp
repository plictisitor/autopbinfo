/* Uf37QeoRs ily traian hWh7uwLRV */ #include <algorithm>
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
/* Uf37QeoRs ily traian hWh7uwLRV */ 
/* Uf37QeoRs ily traian hWh7uwLRV */ using namespace std;
/* Uf37QeoRs ily traian hWh7uwLRV */ 
/* Uf37QeoRs ily traian hWh7uwLRV */ int main()
/* Uf37QeoRs ily traian hWh7uwLRV */ {
/* Uf37QeoRs ily traian hWh7uwLRV */     int n;
/* Uf37QeoRs ily traian hWh7uwLRV */     cin >> n;
/* Uf37QeoRs ily traian hWh7uwLRV */     int a[101];
/* Uf37QeoRs ily traian hWh7uwLRV */     for(int i = 1 ; i <= n ; ++i)
/* Uf37QeoRs ily traian hWh7uwLRV */     cin >> a[i];
/* Uf37QeoRs ily traian hWh7uwLRV */     sort(a+1, a+n+1);
/* Uf37QeoRs ily traian hWh7uwLRV */     bool dif=true;
/* Uf37QeoRs ily traian hWh7uwLRV */     for(int i = 1 ; i <= n ; ++i)
/* Uf37QeoRs ily traian hWh7uwLRV */     {
/* Uf37QeoRs ily traian hWh7uwLRV */         if(a[i]!=i)
/* Uf37QeoRs ily traian hWh7uwLRV */         dif=false;
/* Uf37QeoRs ily traian hWh7uwLRV */     }
/* Uf37QeoRs ily traian hWh7uwLRV */     if(dif)
/* Uf37QeoRs ily traian hWh7uwLRV */     cout << "DA";
/* Uf37QeoRs ily traian hWh7uwLRV */     else
/* Uf37QeoRs ily traian hWh7uwLRV */     cout << "NU";
/* Uf37QeoRs ily traian hWh7uwLRV */     return 0;    
/* Uf37QeoRs ily traian hWh7uwLRV */ }