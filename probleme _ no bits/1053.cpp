/* BZbWNGYhQ ily traian a8hq6BLcF */ #include <algorithm>
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
/* BZbWNGYhQ ily traian a8hq6BLcF */ using namespace std;
/* BZbWNGYhQ ily traian a8hq6BLcF */ ifstream cin("cladiri.in");
/* BZbWNGYhQ ily traian a8hq6BLcF */ ofstream cout("cladiri.out");
/* BZbWNGYhQ ily traian a8hq6BLcF */ int cmax(long long n)
/* BZbWNGYhQ ily traian a8hq6BLcF */ {
/* BZbWNGYhQ ily traian a8hq6BLcF */     int max = 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */     while(n != 0){if(n % 10 > max) max = n % 10 ; n /= 10;}
/* BZbWNGYhQ ily traian a8hq6BLcF */     return max;
/* BZbWNGYhQ ily traian a8hq6BLcF */ }
/* BZbWNGYhQ ily traian a8hq6BLcF */ int pal(long long n)
/* BZbWNGYhQ ily traian a8hq6BLcF */ {
/* BZbWNGYhQ ily traian a8hq6BLcF */     long long aux = n , ogl = 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */     while(aux!=0){ogl=ogl*10+aux%10;aux/=10;}
/* BZbWNGYhQ ily traian a8hq6BLcF */     if(ogl==n)return 1;
/* BZbWNGYhQ ily traian a8hq6BLcF */     else return 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */ }
/* BZbWNGYhQ ily traian a8hq6BLcF */ 
/* BZbWNGYhQ ily traian a8hq6BLcF */ int lipsa(long long int n)
/* BZbWNGYhQ ily traian a8hq6BLcF */ {
/* BZbWNGYhQ ily traian a8hq6BLcF */     long long aux = n , ogl = 0 , cnt = 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */     while(aux != 0){ogl = ogl * 10 + aux % 10 ; aux /= 10;}
/* BZbWNGYhQ ily traian a8hq6BLcF */     while(n!=0)
/* BZbWNGYhQ ily traian a8hq6BLcF */     {
/* BZbWNGYhQ ily traian a8hq6BLcF */         if(n % 10 > ogl % 10)cnt += n % 10 - ogl % 10;
/* BZbWNGYhQ ily traian a8hq6BLcF */         else cnt += ogl % 10 - n % 10;
/* BZbWNGYhQ ily traian a8hq6BLcF */         n /= 10;
/* BZbWNGYhQ ily traian a8hq6BLcF */         ogl /= 10;
/* BZbWNGYhQ ily traian a8hq6BLcF */     }return cnt;
/* BZbWNGYhQ ily traian a8hq6BLcF */ }
/* BZbWNGYhQ ily traian a8hq6BLcF */ 
/* BZbWNGYhQ ily traian a8hq6BLcF */ long long a[10001];
/* BZbWNGYhQ ily traian a8hq6BLcF */ 
/* BZbWNGYhQ ily traian a8hq6BLcF */ int main()
/* BZbWNGYhQ ily traian a8hq6BLcF */ {
/* BZbWNGYhQ ily traian a8hq6BLcF */     int n , cnt = 0 , max = 0 , nr = 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */     cin >> n;
/* BZbWNGYhQ ily traian a8hq6BLcF */     for(int i = 0 ; i < n ; ++i)
/* BZbWNGYhQ ily traian a8hq6BLcF */         cin >> a[i];
/* BZbWNGYhQ ily traian a8hq6BLcF */     for(int i = 0 ; i < n ; ++i)
/* BZbWNGYhQ ily traian a8hq6BLcF */     {
/* BZbWNGYhQ ily traian a8hq6BLcF */         if(cmax(a[i]) > max)max = cmax(a[i]) , cnt=0;
/* BZbWNGYhQ ily traian a8hq6BLcF */         if(cmax(a[i]) == max) cnt++;
/* BZbWNGYhQ ily traian a8hq6BLcF */     }
/* BZbWNGYhQ ily traian a8hq6BLcF */     cout << max << ' ' << cnt << endl;
/* BZbWNGYhQ ily traian a8hq6BLcF */     cnt = 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */     for(int i = 0 ; i < n ; ++i)
/* BZbWNGYhQ ily traian a8hq6BLcF */     {
/* BZbWNGYhQ ily traian a8hq6BLcF */         if(pal(a[i])) nr++;
/* BZbWNGYhQ ily traian a8hq6BLcF */         else cnt+=lipsa(a[i]);
/* BZbWNGYhQ ily traian a8hq6BLcF */     }
/* BZbWNGYhQ ily traian a8hq6BLcF */     cout << nr << endl << cnt/2;
/* BZbWNGYhQ ily traian a8hq6BLcF */     return 0;
/* BZbWNGYhQ ily traian a8hq6BLcF */ }