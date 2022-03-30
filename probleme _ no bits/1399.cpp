/* H6P4AsYwH ily traian fOeDf93ng */ #include <algorithm>
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
/* H6P4AsYwH ily traian fOeDf93ng */ 
/* H6P4AsYwH ily traian fOeDf93ng */ using namespace std;
/* H6P4AsYwH ily traian fOeDf93ng */ 
/* H6P4AsYwH ily traian fOeDf93ng */ int main()
/* H6P4AsYwH ily traian fOeDf93ng */ {
/* H6P4AsYwH ily traian fOeDf93ng */     int n;
/* H6P4AsYwH ily traian fOeDf93ng */     cin >> n;
/* H6P4AsYwH ily traian fOeDf93ng */     int a[1000];
/* H6P4AsYwH ily traian fOeDf93ng */     int b[1000];
/* H6P4AsYwH ily traian fOeDf93ng */     int c[1000];
/* H6P4AsYwH ily traian fOeDf93ng */     int p1 = 0 , p2 = 0 , cnt = 0;
/* H6P4AsYwH ily traian fOeDf93ng */     for(int i = 0 ; i < n ; ++i)
/* H6P4AsYwH ily traian fOeDf93ng */     {
/* H6P4AsYwH ily traian fOeDf93ng */         cin >> a[i];
/* H6P4AsYwH ily traian fOeDf93ng */         if(a[i]<0)
/* H6P4AsYwH ily traian fOeDf93ng */         {
/* H6P4AsYwH ily traian fOeDf93ng */             c[p1]=a[i];
/* H6P4AsYwH ily traian fOeDf93ng */             p1++;
/* H6P4AsYwH ily traian fOeDf93ng */         }
/* H6P4AsYwH ily traian fOeDf93ng */         if(a[i]>0)
/* H6P4AsYwH ily traian fOeDf93ng */         {
/* H6P4AsYwH ily traian fOeDf93ng */             b[p2]=a[i];
/* H6P4AsYwH ily traian fOeDf93ng */             p2++;
/* H6P4AsYwH ily traian fOeDf93ng */         }
/* H6P4AsYwH ily traian fOeDf93ng */         if(a[i]==0)
/* H6P4AsYwH ily traian fOeDf93ng */         cnt++;
/* H6P4AsYwH ily traian fOeDf93ng */     }
/* H6P4AsYwH ily traian fOeDf93ng */     sort(c , c+p1);
/* H6P4AsYwH ily traian fOeDf93ng */     for(int i = p1-1 ; i >= 0 ; i--)
/* H6P4AsYwH ily traian fOeDf93ng */     cout << c[i] << ' ';
/* H6P4AsYwH ily traian fOeDf93ng */     for(int i = 0 ; i < cnt ; i++)
/* H6P4AsYwH ily traian fOeDf93ng */     cout << 0 << ' ';
/* H6P4AsYwH ily traian fOeDf93ng */     sort(b , b+p2);
/* H6P4AsYwH ily traian fOeDf93ng */     for(int i = p2-1 ; i >= 0 ; --i)
/* H6P4AsYwH ily traian fOeDf93ng */     cout << b[i] << ' ';
/* H6P4AsYwH ily traian fOeDf93ng */     return 0;
/* H6P4AsYwH ily traian fOeDf93ng */ }