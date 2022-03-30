/* WI1BSTuHl ily traian E63Y5ybxO */ #include <algorithm>
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
/* WI1BSTuHl ily traian E63Y5ybxO */ using namespace std;
/* WI1BSTuHl ily traian E63Y5ybxO */ ifstream cin("joc8.in");
/* WI1BSTuHl ily traian E63Y5ybxO */ ofstream cout("joc8.out");
/* WI1BSTuHl ily traian E63Y5ybxO */ int special(int n)
/* WI1BSTuHl ily traian E63Y5ybxO */ {
/* WI1BSTuHl ily traian E63Y5ybxO */     int v[100];
/* WI1BSTuHl ily traian E63Y5ybxO */     bool perf=true;
/* WI1BSTuHl ily traian E63Y5ybxO */     int p = 0;
/* WI1BSTuHl ily traian E63Y5ybxO */     while(n)
/* WI1BSTuHl ily traian E63Y5ybxO */     {
/* WI1BSTuHl ily traian E63Y5ybxO */         v[p]=n%10;
/* WI1BSTuHl ily traian E63Y5ybxO */         p++;
/* WI1BSTuHl ily traian E63Y5ybxO */         n/=10;
/* WI1BSTuHl ily traian E63Y5ybxO */     }
/* WI1BSTuHl ily traian E63Y5ybxO */     if(p%2==1)
/* WI1BSTuHl ily traian E63Y5ybxO */     {
/* WI1BSTuHl ily traian E63Y5ybxO */         p--;
/* WI1BSTuHl ily traian E63Y5ybxO */         for(int i = 1 ; i < p ; ++i)
/* WI1BSTuHl ily traian E63Y5ybxO */         {
/* WI1BSTuHl ily traian E63Y5ybxO */             if((v[i]<v[i-1] && v[i+1] > v[i])||(v[i]>v[i-1] && v[i+1]<v[i]))
/* WI1BSTuHl ily traian E63Y5ybxO */             {
/* WI1BSTuHl ily traian E63Y5ybxO */ 
/* WI1BSTuHl ily traian E63Y5ybxO */             }
/* WI1BSTuHl ily traian E63Y5ybxO */             else
/* WI1BSTuHl ily traian E63Y5ybxO */                 perf=false;
/* WI1BSTuHl ily traian E63Y5ybxO */         }
/* WI1BSTuHl ily traian E63Y5ybxO */     }
/* WI1BSTuHl ily traian E63Y5ybxO */     else
/* WI1BSTuHl ily traian E63Y5ybxO */         perf=false;
/* WI1BSTuHl ily traian E63Y5ybxO */     if(perf)
/* WI1BSTuHl ily traian E63Y5ybxO */         return 1;
/* WI1BSTuHl ily traian E63Y5ybxO */     else
/* WI1BSTuHl ily traian E63Y5ybxO */         return 0;
/* WI1BSTuHl ily traian E63Y5ybxO */ }
/* WI1BSTuHl ily traian E63Y5ybxO */ 
/* WI1BSTuHl ily traian E63Y5ybxO */ int main()
/* WI1BSTuHl ily traian E63Y5ybxO */ {
/* WI1BSTuHl ily traian E63Y5ybxO */     int n;
/* WI1BSTuHl ily traian E63Y5ybxO */     cin >> n;
/* WI1BSTuHl ily traian E63Y5ybxO */     int cnt=0;
/* WI1BSTuHl ily traian E63Y5ybxO */     int x;
/* WI1BSTuHl ily traian E63Y5ybxO */     for(int i = 0 ; i < n ; ++i)
/* WI1BSTuHl ily traian E63Y5ybxO */     {
/* WI1BSTuHl ily traian E63Y5ybxO */         cin >> x;
/* WI1BSTuHl ily traian E63Y5ybxO */         if(special(x))
/* WI1BSTuHl ily traian E63Y5ybxO */            cnt++;
/* WI1BSTuHl ily traian E63Y5ybxO */     }
/* WI1BSTuHl ily traian E63Y5ybxO */     cout << cnt;
/* WI1BSTuHl ily traian E63Y5ybxO */     return 0;
/* WI1BSTuHl ily traian E63Y5ybxO */ }