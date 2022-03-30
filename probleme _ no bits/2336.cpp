/* hZBV65Bos ily traian OSCT8Cutm */ #include <algorithm>
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
/* hZBV65Bos ily traian OSCT8Cutm */ 
/* hZBV65Bos ily traian OSCT8Cutm */ using namespace std;
/* hZBV65Bos ily traian OSCT8Cutm */ ifstream cin("primcolor.in");
/* hZBV65Bos ily traian OSCT8Cutm */ ofstream cout("primcolor.out");
/* hZBV65Bos ily traian OSCT8Cutm */ bitset<50000000> ciur;
/* hZBV65Bos ily traian OSCT8Cutm */ int main()
/* hZBV65Bos ily traian OSCT8Cutm */ {
/* hZBV65Bos ily traian OSCT8Cutm */     for(int i = 2 ; i * i <= 50000000 ; i++)
/* hZBV65Bos ily traian OSCT8Cutm */         if(ciur[i]==0)
/* hZBV65Bos ily traian OSCT8Cutm */             for(int j = i * i; j <= 50000000; j += i) ciur[j]=1;
/* hZBV65Bos ily traian OSCT8Cutm */     int n , cnt=2;
/* hZBV65Bos ily traian OSCT8Cutm */     cin >> n;
/* hZBV65Bos ily traian OSCT8Cutm */     if(n == 1)cout << 1;
/* hZBV65Bos ily traian OSCT8Cutm */     else if(n == 2)cout << 2;
/* hZBV65Bos ily traian OSCT8Cutm */     else if(n == 3)cout << 3;
/* hZBV65Bos ily traian OSCT8Cutm */     else if(n == 4)cout << 3;
/* hZBV65Bos ily traian OSCT8Cutm */     else
/* hZBV65Bos ily traian OSCT8Cutm */     {
/* hZBV65Bos ily traian OSCT8Cutm */         for(int i = n/2 + 1 ; i <= n ; ++i)
/* hZBV65Bos ily traian OSCT8Cutm */             if(ciur[i]==0) cnt++;
/* hZBV65Bos ily traian OSCT8Cutm */         cout << cnt;
/* hZBV65Bos ily traian OSCT8Cutm */     }
/* hZBV65Bos ily traian OSCT8Cutm */     return 0;
/* hZBV65Bos ily traian OSCT8Cutm */ }