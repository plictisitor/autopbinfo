/* PjMAuI1r3 ily traian 6yLBjkcJy */ #include <algorithm>
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
/* PjMAuI1r3 ily traian 6yLBjkcJy */ 
/* PjMAuI1r3 ily traian 6yLBjkcJy */ using namespace std;
/* PjMAuI1r3 ily traian 6yLBjkcJy */ 
/* PjMAuI1r3 ily traian 6yLBjkcJy */ ifstream cin("comp.in");
/* PjMAuI1r3 ily traian 6yLBjkcJy */ ofstream cout("comp.out");
/* PjMAuI1r3 ily traian 6yLBjkcJy */ 
/* PjMAuI1r3 ily traian 6yLBjkcJy */ int sum[3];
/* PjMAuI1r3 ily traian 6yLBjkcJy */ 
/* PjMAuI1r3 ily traian 6yLBjkcJy */ bool cif(char ch)
/* PjMAuI1r3 ily traian 6yLBjkcJy */ {
/* PjMAuI1r3 ily traian 6yLBjkcJy */     return ch >= '0' && ch <= '9';
/* PjMAuI1r3 ily traian 6yLBjkcJy */ }
/* PjMAuI1r3 ily traian 6yLBjkcJy */ 
/* PjMAuI1r3 ily traian 6yLBjkcJy */ int main()
/* PjMAuI1r3 ily traian 6yLBjkcJy */ {
/* PjMAuI1r3 ily traian 6yLBjkcJy */     char s[255];
/* PjMAuI1r3 ily traian 6yLBjkcJy */     int n;
/* PjMAuI1r3 ily traian 6yLBjkcJy */     cin >> n;
/* PjMAuI1r3 ily traian 6yLBjkcJy */     int ind=0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */     int b[1001] , p = 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */     for(int k = 1 ; k <= n ; ++k)
/* PjMAuI1r3 ily traian 6yLBjkcJy */     {
/* PjMAuI1r3 ily traian 6yLBjkcJy */         cin >> s;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         int i = 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         bool mm = true;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         int nr = 0 , cnt = 1;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         sum[1]=0 , sum[2]=0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         while(s[i])
/* PjMAuI1r3 ily traian 6yLBjkcJy */         {
/* PjMAuI1r3 ily traian 6yLBjkcJy */             while(cif(s[i]))
/* PjMAuI1r3 ily traian 6yLBjkcJy */             {
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 nr = nr * 10 + s[i] - '0';
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 i++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             }
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(s[i]=='u')
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 sum[cnt] += nr , nr = 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(s[i]=='z')
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 sum[cnt] += nr * 10 , nr = 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(s[i]=='s')
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 sum[cnt] += nr * 100 , nr = 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(s[i]=='m')
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 sum[cnt] += nr * 1000 , nr = 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(s[i]=='<')
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 mm = true , cnt++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(s[i]=='>')
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 mm = false , cnt++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             i++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             nr=0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         }
/* PjMAuI1r3 ily traian 6yLBjkcJy */         if(mm)
/* PjMAuI1r3 ily traian 6yLBjkcJy */         {
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(sum[1] < sum[2])
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 b[p]=1 , p++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             else
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 b[p]=0 , p++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         }
/* PjMAuI1r3 ily traian 6yLBjkcJy */         else
/* PjMAuI1r3 ily traian 6yLBjkcJy */         {
/* PjMAuI1r3 ily traian 6yLBjkcJy */             if(sum[1] > sum[2])
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 b[p]=1 , p++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */             else
/* PjMAuI1r3 ily traian 6yLBjkcJy */                 b[p]=0 , p++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */         }
/* PjMAuI1r3 ily traian 6yLBjkcJy */         if(mm)
/* PjMAuI1r3 ily traian 6yLBjkcJy */             ind++;
/* PjMAuI1r3 ily traian 6yLBjkcJy */ 
/* PjMAuI1r3 ily traian 6yLBjkcJy */     }
/* PjMAuI1r3 ily traian 6yLBjkcJy */     cout << ind << endl;
/* PjMAuI1r3 ily traian 6yLBjkcJy */     for(int i = 0 ; i < p ; ++i)
/* PjMAuI1r3 ily traian 6yLBjkcJy */         cout << b[i] << endl;
/* PjMAuI1r3 ily traian 6yLBjkcJy */     return 0;
/* PjMAuI1r3 ily traian 6yLBjkcJy */ }