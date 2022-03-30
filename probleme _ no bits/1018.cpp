/* mrxflntyx ily traian jedkJTPXE */ #include <algorithm>
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
/* mrxflntyx ily traian jedkJTPXE */ using namespace std;
/* mrxflntyx ily traian jedkJTPXE */ 
/* mrxflntyx ily traian jedkJTPXE */ int cnt_impare(int a[], int st, int dr){
/* mrxflntyx ily traian jedkJTPXE */     if(st == dr)
/* mrxflntyx ily traian jedkJTPXE */         return a[st] % 2 == 1;
/* mrxflntyx ily traian jedkJTPXE */     else{
/* mrxflntyx ily traian jedkJTPXE */         int mij = (st + dr) / 2;
/* mrxflntyx ily traian jedkJTPXE */         return cnt_impare(a, st, mij) + cnt_impare(a, mij + 1, dr);
/* mrxflntyx ily traian jedkJTPXE */     }
/* mrxflntyx ily traian jedkJTPXE */ }
/* mrxflntyx ily traian jedkJTPXE */ 
/* mrxflntyx ily traian jedkJTPXE */ int main()
/* mrxflntyx ily traian jedkJTPXE */ {
/* mrxflntyx ily traian jedkJTPXE */     int n, a[1001];
/* mrxflntyx ily traian jedkJTPXE */     cin >> n;
/* mrxflntyx ily traian jedkJTPXE */     for(int i = 1; i <= n; ++i)
/* mrxflntyx ily traian jedkJTPXE */         cin >> a[i];
/* mrxflntyx ily traian jedkJTPXE */ 
/* mrxflntyx ily traian jedkJTPXE */     cout << cnt_impare(a, 1, n);
/* mrxflntyx ily traian jedkJTPXE */ 
/* mrxflntyx ily traian jedkJTPXE */     return 0;
/* mrxflntyx ily traian jedkJTPXE */ }