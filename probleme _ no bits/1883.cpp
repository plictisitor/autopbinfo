/* 4hR3GeJSS ily traian pkmTcgs2f */ #include <algorithm>
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
/* 4hR3GeJSS ily traian pkmTcgs2f */ 
/* 4hR3GeJSS ily traian pkmTcgs2f */ using namespace std;
/* 4hR3GeJSS ily traian pkmTcgs2f */ 
/* 4hR3GeJSS ily traian pkmTcgs2f */ int main()
/* 4hR3GeJSS ily traian pkmTcgs2f */ {
/* 4hR3GeJSS ily traian pkmTcgs2f */     int n;
/* 4hR3GeJSS ily traian pkmTcgs2f */     cin >> n;
/* 4hR3GeJSS ily traian pkmTcgs2f */     int a[1001];
/* 4hR3GeJSS ily traian pkmTcgs2f */     int ok = 0;
/* 4hR3GeJSS ily traian pkmTcgs2f */     for(int i = 0 ; i < n ; ++i)
/* 4hR3GeJSS ily traian pkmTcgs2f */     cin >> a[i];
/* 4hR3GeJSS ily traian pkmTcgs2f */     for(int i = 0 ; i < n ; ++i)
/* 4hR3GeJSS ily traian pkmTcgs2f */     {
/* 4hR3GeJSS ily traian pkmTcgs2f */         ok=0;
/* 4hR3GeJSS ily traian pkmTcgs2f */         for(int j = i+1 ; j < n ; ++j)
/* 4hR3GeJSS ily traian pkmTcgs2f */         {
/* 4hR3GeJSS ily traian pkmTcgs2f */             if(a[i]<a[j])
/* 4hR3GeJSS ily traian pkmTcgs2f */             {
/* 4hR3GeJSS ily traian pkmTcgs2f */             cout << a[j] << ' ';
/* 4hR3GeJSS ily traian pkmTcgs2f */             ok++;
/* 4hR3GeJSS ily traian pkmTcgs2f */             break;
/* 4hR3GeJSS ily traian pkmTcgs2f */             }
/* 4hR3GeJSS ily traian pkmTcgs2f */         }
/* 4hR3GeJSS ily traian pkmTcgs2f */         if(ok==0)
/* 4hR3GeJSS ily traian pkmTcgs2f */             cout << -1 << ' ';
/* 4hR3GeJSS ily traian pkmTcgs2f */     }
/* 4hR3GeJSS ily traian pkmTcgs2f */ }