/* UavOXpbQ8 ily traian Gg4LyUidX */ #include <algorithm>
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
/* UavOXpbQ8 ily traian Gg4LyUidX */ 
/* UavOXpbQ8 ily traian Gg4LyUidX */ using namespace std;
/* UavOXpbQ8 ily traian Gg4LyUidX */ 
/* UavOXpbQ8 ily traian Gg4LyUidX */ int n , n1 , n2;
/* UavOXpbQ8 ily traian Gg4LyUidX */ char v[4001], v1[4001] , c , voc[]="aeiou";
/* UavOXpbQ8 ily traian Gg4LyUidX */ 
/* UavOXpbQ8 ily traian Gg4LyUidX */ int main()
/* UavOXpbQ8 ily traian Gg4LyUidX */ {
/* UavOXpbQ8 ily traian Gg4LyUidX */     cin >> n;
/* UavOXpbQ8 ily traian Gg4LyUidX */     for(int i = 1 ; i <= n ; ++i)
/* UavOXpbQ8 ily traian Gg4LyUidX */     {
/* UavOXpbQ8 ily traian Gg4LyUidX */         cin >> c;
/* UavOXpbQ8 ily traian Gg4LyUidX */         if(strchr(voc,c))
/* UavOXpbQ8 ily traian Gg4LyUidX */             v[++n1]=c;
/* UavOXpbQ8 ily traian Gg4LyUidX */         else
/* UavOXpbQ8 ily traian Gg4LyUidX */             v1[++n2]=c;
/* UavOXpbQ8 ily traian Gg4LyUidX */     }
/* UavOXpbQ8 ily traian Gg4LyUidX */     for(int i = 1 ; i <= n1 ; ++i)
/* UavOXpbQ8 ily traian Gg4LyUidX */         cout << v[i] << ' ';
/* UavOXpbQ8 ily traian Gg4LyUidX */     for(int i = 1 ; i <= n2 ; ++i)
/* UavOXpbQ8 ily traian Gg4LyUidX */         cout << v1[i] << ' ';
/* UavOXpbQ8 ily traian Gg4LyUidX */     return 0;
/* UavOXpbQ8 ily traian Gg4LyUidX */ }