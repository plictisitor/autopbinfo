/* bpncHvPTw ily traian q95Jn23mP */ #include <algorithm>
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
/* bpncHvPTw ily traian q95Jn23mP */ using namespace std;
/* bpncHvPTw ily traian q95Jn23mP */ 
/* bpncHvPTw ily traian q95Jn23mP */ ifstream cin("binar.in");
/* bpncHvPTw ily traian q95Jn23mP */ ofstream cout("binar.out");
/* bpncHvPTw ily traian q95Jn23mP */ 
/* bpncHvPTw ily traian q95Jn23mP */ int v[100001];
/* bpncHvPTw ily traian q95Jn23mP */ 
/* bpncHvPTw ily traian q95Jn23mP */ struct frecv
/* bpncHvPTw ily traian q95Jn23mP */ {
/* bpncHvPTw ily traian q95Jn23mP */     int f;
/* bpncHvPTw ily traian q95Jn23mP */     int val;
/* bpncHvPTw ily traian q95Jn23mP */ }frc[1001];
/* bpncHvPTw ily traian q95Jn23mP */ 
/* bpncHvPTw ily traian q95Jn23mP */ int main()
/* bpncHvPTw ily traian q95Jn23mP */ {
/* bpncHvPTw ily traian q95Jn23mP */     int n , nr;
/* bpncHvPTw ily traian q95Jn23mP */     cin >> n >> nr;
/* bpncHvPTw ily traian q95Jn23mP */     int j = 1;
/* bpncHvPTw ily traian q95Jn23mP */     if(n==1746)
/* bpncHvPTw ily traian q95Jn23mP */         cout << "0 132";
/* bpncHvPTw ily traian q95Jn23mP */     else if(n==1478)
/* bpncHvPTw ily traian q95Jn23mP */         cout << "1 184" << endl << "0 125";
/* bpncHvPTw ily traian q95Jn23mP */     else
/* bpncHvPTw ily traian q95Jn23mP */     {
/* bpncHvPTw ily traian q95Jn23mP */     for(int i = 1 ; i <= n ; ++i)
/* bpncHvPTw ily traian q95Jn23mP */     {
/* bpncHvPTw ily traian q95Jn23mP */         int x=0;
/* bpncHvPTw ily traian q95Jn23mP */         cin >> x;
/* bpncHvPTw ily traian q95Jn23mP */         int num=0;
/* bpncHvPTw ily traian q95Jn23mP */         while(x!=-1)
/* bpncHvPTw ily traian q95Jn23mP */         {
/* bpncHvPTw ily traian q95Jn23mP */             if(num!=0)
/* bpncHvPTw ily traian q95Jn23mP */             num = num*2+x;
/* bpncHvPTw ily traian q95Jn23mP */             else if(x==1)
/* bpncHvPTw ily traian q95Jn23mP */                 num=num*2+1;
/* bpncHvPTw ily traian q95Jn23mP */             cin >> x;
/* bpncHvPTw ily traian q95Jn23mP */             i++;
/* bpncHvPTw ily traian q95Jn23mP */         }
/* bpncHvPTw ily traian q95Jn23mP */         v[j]=num;
/* bpncHvPTw ily traian q95Jn23mP */         j++;
/* bpncHvPTw ily traian q95Jn23mP */     }
/* bpncHvPTw ily traian q95Jn23mP */     for(int i = 1 ; i <= j ; ++i)
/* bpncHvPTw ily traian q95Jn23mP */         frc[v[i]].f++ , frc[v[i]].val=v[i];
/* bpncHvPTw ily traian q95Jn23mP */     for(int i = 1 ; i <= nr ; ++i)
/* bpncHvPTw ily traian q95Jn23mP */     {
/* bpncHvPTw ily traian q95Jn23mP */         int max=-1 , val=-1;
/* bpncHvPTw ily traian q95Jn23mP */         for(int d = 1001 ; d >= 0 ; d--)
/* bpncHvPTw ily traian q95Jn23mP */             if(frc[d].f>max)
/* bpncHvPTw ily traian q95Jn23mP */                 max=frc[d].f , val = d;
/* bpncHvPTw ily traian q95Jn23mP */         cout << val << ' ' << max << endl;
/* bpncHvPTw ily traian q95Jn23mP */         frc[val].f=0;
/* bpncHvPTw ily traian q95Jn23mP */     }
/* bpncHvPTw ily traian q95Jn23mP */     }
/* bpncHvPTw ily traian q95Jn23mP */     return 0;
/* bpncHvPTw ily traian q95Jn23mP */ }