/* vWWABX2bF ily traian HjuGs4pXX */ //Somesan Paul Ioan
/* vWWABX2bF ily traian HjuGs4pXX */ #include <algorithm>
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
/* vWWABX2bF ily traian HjuGs4pXX */ using namespace std;
/* vWWABX2bF ily traian HjuGs4pXX */ 
/* vWWABX2bF ily traian HjuGs4pXX */ ifstream cin("tv.in");
/* vWWABX2bF ily traian HjuGs4pXX */ ofstream cout("tv.out");
/* vWWABX2bF ily traian HjuGs4pXX */ 
/* vWWABX2bF ily traian HjuGs4pXX */ int f[100001];
/* vWWABX2bF ily traian HjuGs4pXX */ int c , n;
/* vWWABX2bF ily traian HjuGs4pXX */ char s[10];
/* vWWABX2bF ily traian HjuGs4pXX */ 
/* vWWABX2bF ily traian HjuGs4pXX */ int main()
/* vWWABX2bF ily traian HjuGs4pXX */ {
/* vWWABX2bF ily traian HjuGs4pXX */     cin >> c >> n;
/* vWWABX2bF ily traian HjuGs4pXX */     int nr = 0;
/* vWWABX2bF ily traian HjuGs4pXX */     int num[3];
/* vWWABX2bF ily traian HjuGs4pXX */     for(int i = 1 ; i <= n ; ++i)
/* vWWABX2bF ily traian HjuGs4pXX */     {
/* vWWABX2bF ily traian HjuGs4pXX */         cin >> nr >> s;
/* vWWABX2bF ily traian HjuGs4pXX */         int c = 0;
/* vWWABX2bF ily traian HjuGs4pXX */         int j = 0;
/* vWWABX2bF ily traian HjuGs4pXX */         for(int k = 0 ; k < 3 ; ++k)
/* vWWABX2bF ily traian HjuGs4pXX */             num[k]=0;
/* vWWABX2bF ily traian HjuGs4pXX */         while(s[j])
/* vWWABX2bF ily traian HjuGs4pXX */         {
/* vWWABX2bF ily traian HjuGs4pXX */             if(s[j]!=':')
/* vWWABX2bF ily traian HjuGs4pXX */                 num[c] = num[c] * 10 + s[j] - '0';
/* vWWABX2bF ily traian HjuGs4pXX */             else
/* vWWABX2bF ily traian HjuGs4pXX */                 c++;
/* vWWABX2bF ily traian HjuGs4pXX */             j++;
/* vWWABX2bF ily traian HjuGs4pXX */         }
/* vWWABX2bF ily traian HjuGs4pXX */         int timp = num[2] + num[1] * 60 + num[0]*3600;
/* vWWABX2bF ily traian HjuGs4pXX */         f[timp]++;
/* vWWABX2bF ily traian HjuGs4pXX */         f[timp+nr]--;
/* vWWABX2bF ily traian HjuGs4pXX */     }
/* vWWABX2bF ily traian HjuGs4pXX */     int cnt = 0;
/* vWWABX2bF ily traian HjuGs4pXX */     for(int i = 1 ; i < 86400 ; ++i)
/* vWWABX2bF ily traian HjuGs4pXX */         f[i] = f[i] + f[i-1];
/* vWWABX2bF ily traian HjuGs4pXX */     for(int i = 0 ; i < 86400 ; ++i)
/* vWWABX2bF ily traian HjuGs4pXX */         if(f[i]==0)
/* vWWABX2bF ily traian HjuGs4pXX */             cnt++;
/* vWWABX2bF ily traian HjuGs4pXX */     int h=0 , m=0 , s=0;
/* vWWABX2bF ily traian HjuGs4pXX */     while(cnt >= 3600)
/* vWWABX2bF ily traian HjuGs4pXX */         cnt-=3600 , h++;
/* vWWABX2bF ily traian HjuGs4pXX */     while(cnt >= 60)
/* vWWABX2bF ily traian HjuGs4pXX */         cnt-=60 , m++;
/* vWWABX2bF ily traian HjuGs4pXX */     s=cnt;
/* vWWABX2bF ily traian HjuGs4pXX */     if(c == 1)
/* vWWABX2bF ily traian HjuGs4pXX */     {
/* vWWABX2bF ily traian HjuGs4pXX */         if(h > 9)
/* vWWABX2bF ily traian HjuGs4pXX */             cout << h << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         else
/* vWWABX2bF ily traian HjuGs4pXX */             cout << 0 << h << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         if(m > 9)
/* vWWABX2bF ily traian HjuGs4pXX */             cout << m << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         else
/* vWWABX2bF ily traian HjuGs4pXX */             cout << 0 << m << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         if(s > 9)
/* vWWABX2bF ily traian HjuGs4pXX */             cout << s;
/* vWWABX2bF ily traian HjuGs4pXX */         else
/* vWWABX2bF ily traian HjuGs4pXX */             cout << 0 << s;
/* vWWABX2bF ily traian HjuGs4pXX */     }
/* vWWABX2bF ily traian HjuGs4pXX */     int max = 0 , tmp = 0;
/* vWWABX2bF ily traian HjuGs4pXX */     if(c == 2)
/* vWWABX2bF ily traian HjuGs4pXX */     {
/* vWWABX2bF ily traian HjuGs4pXX */         for(int i = 0 ; i < 86400 ; ++i)
/* vWWABX2bF ily traian HjuGs4pXX */             if(f[i] > max)
/* vWWABX2bF ily traian HjuGs4pXX */                 max = f[i] , tmp = i;
/* vWWABX2bF ily traian HjuGs4pXX */         h=0 , m=0 , s=0;
/* vWWABX2bF ily traian HjuGs4pXX */         while(tmp >= 3600)
/* vWWABX2bF ily traian HjuGs4pXX */             tmp-=3600 , h++;
/* vWWABX2bF ily traian HjuGs4pXX */         while(tmp >= 60)
/* vWWABX2bF ily traian HjuGs4pXX */             tmp-=60 , m++;
/* vWWABX2bF ily traian HjuGs4pXX */         s = tmp;
/* vWWABX2bF ily traian HjuGs4pXX */         if(h > 9)
/* vWWABX2bF ily traian HjuGs4pXX */             cout << h << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         else
/* vWWABX2bF ily traian HjuGs4pXX */             cout << 0 << h << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         if(m > 9)
/* vWWABX2bF ily traian HjuGs4pXX */             cout << m << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         else
/* vWWABX2bF ily traian HjuGs4pXX */             cout << 0 << m << ':';
/* vWWABX2bF ily traian HjuGs4pXX */         if(s > 9)
/* vWWABX2bF ily traian HjuGs4pXX */             cout << s;
/* vWWABX2bF ily traian HjuGs4pXX */         else
/* vWWABX2bF ily traian HjuGs4pXX */             cout << 0 << s;
/* vWWABX2bF ily traian HjuGs4pXX */     }
/* vWWABX2bF ily traian HjuGs4pXX */     return 0;
/* vWWABX2bF ily traian HjuGs4pXX */ }