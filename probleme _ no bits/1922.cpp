/* TWHXhiWFl ily traian qSM3VH6GW */ #include <algorithm>
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
/* TWHXhiWFl ily traian qSM3VH6GW */ 
/* TWHXhiWFl ily traian qSM3VH6GW */ using namespace std;
/* TWHXhiWFl ily traian qSM3VH6GW */ ifstream cin("nmod25.in");
/* TWHXhiWFl ily traian qSM3VH6GW */ ofstream cout("nmod25.out");
/* TWHXhiWFl ily traian qSM3VH6GW */ int put(int a , int b)
/* TWHXhiWFl ily traian qSM3VH6GW */ {
/* TWHXhiWFl ily traian qSM3VH6GW */     int p = 1;
/* TWHXhiWFl ily traian qSM3VH6GW */     for(int i = 1 ; i <=a ; ++i)
/* TWHXhiWFl ily traian qSM3VH6GW */         p*=b;
/* TWHXhiWFl ily traian qSM3VH6GW */     return p;
/* TWHXhiWFl ily traian qSM3VH6GW */ }
/* TWHXhiWFl ily traian qSM3VH6GW */ int main()
/* TWHXhiWFl ily traian qSM3VH6GW */ {
/* TWHXhiWFl ily traian qSM3VH6GW */     char c[100001];
/* TWHXhiWFl ily traian qSM3VH6GW */     int  x[100001] ,p;
/* TWHXhiWFl ily traian qSM3VH6GW */     cin >> p >> c;
/* TWHXhiWFl ily traian qSM3VH6GW */     int n = strlen(c);
/* TWHXhiWFl ily traian qSM3VH6GW */     for (int i = 0; i < n; i ++)
/* TWHXhiWFl ily traian qSM3VH6GW */         x[n - i ] = c[i] - '0';
/* TWHXhiWFl ily traian qSM3VH6GW */     int a = x[4]*1000+x[3]*100+x[2]*10+x[1];
/* TWHXhiWFl ily traian qSM3VH6GW */     if(a%put(p , 2)==0) cout << "DA" << endl;
/* TWHXhiWFl ily traian qSM3VH6GW */     else cout << "NU"<< endl;
/* TWHXhiWFl ily traian qSM3VH6GW */     if(a%put(p , 5)==0) cout << "DA";
/* TWHXhiWFl ily traian qSM3VH6GW */     else cout << "NU";
/* TWHXhiWFl ily traian qSM3VH6GW */     return 0;
/* TWHXhiWFl ily traian qSM3VH6GW */ }