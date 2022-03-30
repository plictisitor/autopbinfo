/* bzHzzMhCy ily traian WZEzPNKRX */ #include <algorithm>
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
/* bzHzzMhCy ily traian WZEzPNKRX */ using namespace std;
/* bzHzzMhCy ily traian WZEzPNKRX */ 
/* bzHzzMhCy ily traian WZEzPNKRX */ ifstream cin("palindrom_ciclic.in");
/* bzHzzMhCy ily traian WZEzPNKRX */ ofstream cout("palindrom_ciclic.out");
/* bzHzzMhCy ily traian WZEzPNKRX */ 
/* bzHzzMhCy ily traian WZEzPNKRX */ int v[2001] , n;
/* bzHzzMhCy ily traian WZEzPNKRX */ 
/* bzHzzMhCy ily traian WZEzPNKRX */ bool palindrom(int poz)
/* bzHzzMhCy ily traian WZEzPNKRX */ {
/* bzHzzMhCy ily traian WZEzPNKRX */     for(int i = poz, j = poz + n - 1 ; i < j ; ++i , j--)
/* bzHzzMhCy ily traian WZEzPNKRX */         if(v[i]!=v[j])
/* bzHzzMhCy ily traian WZEzPNKRX */             return 0;
/* bzHzzMhCy ily traian WZEzPNKRX */     return 1;
/* bzHzzMhCy ily traian WZEzPNKRX */ }
/* bzHzzMhCy ily traian WZEzPNKRX */ 
/* bzHzzMhCy ily traian WZEzPNKRX */ int main()
/* bzHzzMhCy ily traian WZEzPNKRX */ {
/* bzHzzMhCy ily traian WZEzPNKRX */     cin >> n;
/* bzHzzMhCy ily traian WZEzPNKRX */     for(int i = 0 ; i < n ; ++i)
/* bzHzzMhCy ily traian WZEzPNKRX */         cin >> v[i] , v[i+n]=v[i];
/* bzHzzMhCy ily traian WZEzPNKRX */     int cnt=0 , ok=0;
/* bzHzzMhCy ily traian WZEzPNKRX */     for(int i = 0 ; i < n ; ++i)
/* bzHzzMhCy ily traian WZEzPNKRX */     {
/* bzHzzMhCy ily traian WZEzPNKRX */         if(palindrom(i))
/* bzHzzMhCy ily traian WZEzPNKRX */         {
/* bzHzzMhCy ily traian WZEzPNKRX */             cout << "DA" << ' ' << cnt , ok++;
/* bzHzzMhCy ily traian WZEzPNKRX */             break;
/* bzHzzMhCy ily traian WZEzPNKRX */         }
/* bzHzzMhCy ily traian WZEzPNKRX */         cnt++;
/* bzHzzMhCy ily traian WZEzPNKRX */     }
/* bzHzzMhCy ily traian WZEzPNKRX */     if(ok==0)
/* bzHzzMhCy ily traian WZEzPNKRX */     cout << "NU";
/* bzHzzMhCy ily traian WZEzPNKRX */     return 0;
/* bzHzzMhCy ily traian WZEzPNKRX */ }