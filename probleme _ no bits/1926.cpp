/* RE1YuVvMp ily traian Mj995EdCE */ #include <algorithm>
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
/* RE1YuVvMp ily traian Mj995EdCE */ using namespace std;
/* RE1YuVvMp ily traian Mj995EdCE */ ifstream cin("numarspecial.in");
/* RE1YuVvMp ily traian Mj995EdCE */ ofstream cout("numarspecial.out");
/* RE1YuVvMp ily traian Mj995EdCE */ int n , a[1000001] , c1 , c2 , c3 , k , x , y;
/* RE1YuVvMp ily traian Mj995EdCE */ int E[1000001];
/* RE1YuVvMp ily traian Mj995EdCE */ int main()
/* RE1YuVvMp ily traian Mj995EdCE */ {
/* RE1YuVvMp ily traian Mj995EdCE */     int max=1000000;
/* RE1YuVvMp ily traian Mj995EdCE */     for(int i = 2 ; i <= max ; i++) E[i] = 1;
/* RE1YuVvMp ily traian Mj995EdCE */     for(int i = 2 ; i*i <= max ; i++)
/* RE1YuVvMp ily traian Mj995EdCE */         if(E[i] == 1)
/* RE1YuVvMp ily traian Mj995EdCE */             for(int j = i*i; j <= max; j += i) E[j]=0;
/* RE1YuVvMp ily traian Mj995EdCE */     cin >> n;
/* RE1YuVvMp ily traian Mj995EdCE */     for(int i = 1 ; i <= n ; i++)
/* RE1YuVvMp ily traian Mj995EdCE */     {
/* RE1YuVvMp ily traian Mj995EdCE */         cin >> a[i];
/* RE1YuVvMp ily traian Mj995EdCE */         if(a[i] % 9 == 0) c1++;
/* RE1YuVvMp ily traian Mj995EdCE */         if(i > 2)
/* RE1YuVvMp ily traian Mj995EdCE */             if(a[i-1] % 9 == 0 && E[a[i]] && E[a[i-2]]) c2++;
/* RE1YuVvMp ily traian Mj995EdCE */     }
/* RE1YuVvMp ily traian Mj995EdCE */     cout << c1 << '\n' << c2 << '\n';
/* RE1YuVvMp ily traian Mj995EdCE */     for(int i = 1 ; i <= n ; i++)
/* RE1YuVvMp ily traian Mj995EdCE */     {
/* RE1YuVvMp ily traian Mj995EdCE */         x = i - 1 ;
/* RE1YuVvMp ily traian Mj995EdCE */         y = i + 1 ;
/* RE1YuVvMp ily traian Mj995EdCE */         k = 0 ;
/* RE1YuVvMp ily traian Mj995EdCE */         if(i > 1 && i < n && a[i] % 9 == 0)
/* RE1YuVvMp ily traian Mj995EdCE */         while(E[a[x]] && E[a[y]])
/* RE1YuVvMp ily traian Mj995EdCE */         {
/* RE1YuVvMp ily traian Mj995EdCE */             k++;
/* RE1YuVvMp ily traian Mj995EdCE */             x--;
/* RE1YuVvMp ily traian Mj995EdCE */             y++;
/* RE1YuVvMp ily traian Mj995EdCE */             if(x < 1 && y > n) break;
/* RE1YuVvMp ily traian Mj995EdCE */         }
/* RE1YuVvMp ily traian Mj995EdCE */         if(k > c3) c3 = k;
/* RE1YuVvMp ily traian Mj995EdCE */     }
/* RE1YuVvMp ily traian Mj995EdCE */     cout << c3;
/* RE1YuVvMp ily traian Mj995EdCE */     return 0;
/* RE1YuVvMp ily traian Mj995EdCE */ 
/* RE1YuVvMp ily traian Mj995EdCE */ }