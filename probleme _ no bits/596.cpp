/* vpNfThxdO ily traian rrjzpHk8B */ #include <algorithm>
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
/* vpNfThxdO ily traian rrjzpHk8B */ using namespace std;
/* vpNfThxdO ily traian rrjzpHk8B */ 
/* vpNfThxdO ily traian rrjzpHk8B */ ifstream cin("numere2.in");
/* vpNfThxdO ily traian rrjzpHk8B */ ofstream cout("numere2.out");
/* vpNfThxdO ily traian rrjzpHk8B */ 
/* vpNfThxdO ily traian rrjzpHk8B */ int main()
/* vpNfThxdO ily traian rrjzpHk8B */ {
/* vpNfThxdO ily traian rrjzpHk8B */     int n , a[25001] , cnt = 0;
/* vpNfThxdO ily traian rrjzpHk8B */     cin >> n;
/* vpNfThxdO ily traian rrjzpHk8B */     for(int i = 1 ; i <= n ; i++)
/* vpNfThxdO ily traian rrjzpHk8B */     {
/* vpNfThxdO ily traian rrjzpHk8B */         cin >> a[i];
/* vpNfThxdO ily traian rrjzpHk8B */         if(a[i]==a[i-1])
/* vpNfThxdO ily traian rrjzpHk8B */             cnt++ , n-=2 , i-=2;
/* vpNfThxdO ily traian rrjzpHk8B */     }
/* vpNfThxdO ily traian rrjzpHk8B */     cout << cnt << endl;
/* vpNfThxdO ily traian rrjzpHk8B */     for(int i = 1 ; i <= n ; i++)
/* vpNfThxdO ily traian rrjzpHk8B */         cout << a[i] << ' ';
/* vpNfThxdO ily traian rrjzpHk8B */     return 0;
/* vpNfThxdO ily traian rrjzpHk8B */ }