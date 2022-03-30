/* fRMDDIAJp ily traian vimCDNjLG */ #include <algorithm>
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
/* fRMDDIAJp ily traian vimCDNjLG */ using namespace std;
/* fRMDDIAJp ily traian vimCDNjLG */ ifstream cin("gradmax.in");
/* fRMDDIAJp ily traian vimCDNjLG */ ofstream cout("gradmax.out");
/* fRMDDIAJp ily traian vimCDNjLG */ int n , m , a[101][101] , p , r , e[2500];
/* fRMDDIAJp ily traian vimCDNjLG */ int main()
/* fRMDDIAJp ily traian vimCDNjLG */ {
/* fRMDDIAJp ily traian vimCDNjLG */     int cmax = -1 , x = 0;
/* fRMDDIAJp ily traian vimCDNjLG */     cin >> n;
/* fRMDDIAJp ily traian vimCDNjLG */     while(cin >> p >> r)
/* fRMDDIAJp ily traian vimCDNjLG */     {
/* fRMDDIAJp ily traian vimCDNjLG */         a[p][r] = 1;
/* fRMDDIAJp ily traian vimCDNjLG */         a[r][p] = 1;
/* fRMDDIAJp ily traian vimCDNjLG */     }
/* fRMDDIAJp ily traian vimCDNjLG */ 
/* fRMDDIAJp ily traian vimCDNjLG */     for(int i = 1 ; i <= n ; ++i)
/* fRMDDIAJp ily traian vimCDNjLG */     {
/* fRMDDIAJp ily traian vimCDNjLG */         int cnt = 0;
/* fRMDDIAJp ily traian vimCDNjLG */         for(int j = 1 ; j <= n ; ++j)
/* fRMDDIAJp ily traian vimCDNjLG */         {
/* fRMDDIAJp ily traian vimCDNjLG */            if(a[i][j]) cnt++;
/* fRMDDIAJp ily traian vimCDNjLG */         }
/* fRMDDIAJp ily traian vimCDNjLG */         if(cnt > cmax) {cmax = cnt;x = 1;}
/* fRMDDIAJp ily traian vimCDNjLG */         else if(cnt == cmax) x++;
/* fRMDDIAJp ily traian vimCDNjLG */     }
/* fRMDDIAJp ily traian vimCDNjLG */     cout << x << " ";
/* fRMDDIAJp ily traian vimCDNjLG */     for(int i = 1 ; i <= n ; ++i)
/* fRMDDIAJp ily traian vimCDNjLG */     {
/* fRMDDIAJp ily traian vimCDNjLG */         int cnt = 0;
/* fRMDDIAJp ily traian vimCDNjLG */         for(int j = 1 ; j <= n ; ++j)
/* fRMDDIAJp ily traian vimCDNjLG */             if(a[i][j]) cnt++;
/* fRMDDIAJp ily traian vimCDNjLG */             if(cnt == cmax) cout << i << " ";
/* fRMDDIAJp ily traian vimCDNjLG */     }
/* fRMDDIAJp ily traian vimCDNjLG */     return 0;
/* fRMDDIAJp ily traian vimCDNjLG */ }
/* fRMDDIAJp ily traian vimCDNjLG */ 