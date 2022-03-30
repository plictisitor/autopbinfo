/* mXKa5lt9E ily traian SzNWCa6ZZ */ #include <algorithm>
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
/* mXKa5lt9E ily traian SzNWCa6ZZ */ 
/* mXKa5lt9E ily traian SzNWCa6ZZ */ using namespace std;
/* mXKa5lt9E ily traian SzNWCa6ZZ */ 
/* mXKa5lt9E ily traian SzNWCa6ZZ */ int main()
/* mXKa5lt9E ily traian SzNWCa6ZZ */ {
/* mXKa5lt9E ily traian SzNWCa6ZZ */     int n;
/* mXKa5lt9E ily traian SzNWCa6ZZ */     cin >> n;
/* mXKa5lt9E ily traian SzNWCa6ZZ */     int k;
/* mXKa5lt9E ily traian SzNWCa6ZZ */     cin >> k;
/* mXKa5lt9E ily traian SzNWCa6ZZ */     int a[200000];
/* mXKa5lt9E ily traian SzNWCa6ZZ */     for(int i = 0 ; i < n ; ++i)
/* mXKa5lt9E ily traian SzNWCa6ZZ */     {
/* mXKa5lt9E ily traian SzNWCa6ZZ */         cin >> a[i];
/* mXKa5lt9E ily traian SzNWCa6ZZ */     }
/* mXKa5lt9E ily traian SzNWCa6ZZ */     sort(a, a+k);
/* mXKa5lt9E ily traian SzNWCa6ZZ */     for(int i = 0 ; i < k ; ++i)
/* mXKa5lt9E ily traian SzNWCa6ZZ */     cout << a[i] << ' ';
/* mXKa5lt9E ily traian SzNWCa6ZZ */     sort(a+k , a+n);
/* mXKa5lt9E ily traian SzNWCa6ZZ */     for(int i = n-1 ; i >= k ; --i)
/* mXKa5lt9E ily traian SzNWCa6ZZ */     cout << a[i] << ' ';
/* mXKa5lt9E ily traian SzNWCa6ZZ */     return 0;    
/* mXKa5lt9E ily traian SzNWCa6ZZ */ }