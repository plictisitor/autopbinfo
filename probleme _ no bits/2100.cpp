/* WgdeJbY2P ily traian FqMVPDVkg */ #include <algorithm>
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
/* WgdeJbY2P ily traian FqMVPDVkg */ 
/* WgdeJbY2P ily traian FqMVPDVkg */ using namespace std;
/* WgdeJbY2P ily traian FqMVPDVkg */ ifstream cin("prodnr.in");
/* WgdeJbY2P ily traian FqMVPDVkg */ ofstream cout("prodnr.out");
/* WgdeJbY2P ily traian FqMVPDVkg */ char a[30001];
/* WgdeJbY2P ily traian FqMVPDVkg */ int f[100000] , n , nr , k , i , cnt;
/* WgdeJbY2P ily traian FqMVPDVkg */ int main()
/* WgdeJbY2P ily traian FqMVPDVkg */ {
/* WgdeJbY2P ily traian FqMVPDVkg */     cin >> a;
/* WgdeJbY2P ily traian FqMVPDVkg */     nr = strlen(a);
/* WgdeJbY2P ily traian FqMVPDVkg */     i = 0;
/* WgdeJbY2P ily traian FqMVPDVkg */     while(i < nr)
/* WgdeJbY2P ily traian FqMVPDVkg */     {
/* WgdeJbY2P ily traian FqMVPDVkg */         n = a[i]-'0';
/* WgdeJbY2P ily traian FqMVPDVkg */         i++;
/* WgdeJbY2P ily traian FqMVPDVkg */         int rez = 0;
/* WgdeJbY2P ily traian FqMVPDVkg */         for(int j = 0 ; j < n ; j++)
/* WgdeJbY2P ily traian FqMVPDVkg */             rez = rez * 10 + a[i++] - '0';
/* WgdeJbY2P ily traian FqMVPDVkg */         int d = 2;
/* WgdeJbY2P ily traian FqMVPDVkg */         while(rez > 1)
/* WgdeJbY2P ily traian FqMVPDVkg */         {
/* WgdeJbY2P ily traian FqMVPDVkg */             while(rez % d == 0) f[d]++, rez/=d;
/* WgdeJbY2P ily traian FqMVPDVkg */             d++;
/* WgdeJbY2P ily traian FqMVPDVkg */             if(d*d>rez) d=rez;
/* WgdeJbY2P ily traian FqMVPDVkg */         }
/* WgdeJbY2P ily traian FqMVPDVkg */         cnt++;
/* WgdeJbY2P ily traian FqMVPDVkg */     }
/* WgdeJbY2P ily traian FqMVPDVkg */     cout << cnt << endl;
/* WgdeJbY2P ily traian FqMVPDVkg */     for(int i = 2 ; i < 100000; i++)
/* WgdeJbY2P ily traian FqMVPDVkg */         if(f[i]!=0) cout << i << ' ' << f[i] << endl;
/* WgdeJbY2P ily traian FqMVPDVkg */     return 0;
/* WgdeJbY2P ily traian FqMVPDVkg */ }