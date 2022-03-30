/* rerJNhOg4 ily traian fiW5ycOhg */ #include <algorithm>
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
/* rerJNhOg4 ily traian fiW5ycOhg */ using namespace std;
/* rerJNhOg4 ily traian fiW5ycOhg */ 
/* rerJNhOg4 ily traian fiW5ycOhg */ ifstream cin("spp.in");
/* rerJNhOg4 ily traian fiW5ycOhg */ ofstream cout("spp.out");
/* rerJNhOg4 ily traian fiW5ycOhg */ 
/* rerJNhOg4 ily traian fiW5ycOhg */ long long sp[1500001];
/* rerJNhOg4 ily traian fiW5ycOhg */ 
/* rerJNhOg4 ily traian fiW5ycOhg */ long long CB(long long x, long long p){
/* rerJNhOg4 ily traian fiW5ycOhg */     int st = x, dr = 1460000;
/* rerJNhOg4 ily traian fiW5ycOhg */     while(st <= dr){
/* rerJNhOg4 ily traian fiW5ycOhg */         int mij = (st + dr) / 2;
/* rerJNhOg4 ily traian fiW5ycOhg */         if(sp[mij] - sp[x-1] > p)
/* rerJNhOg4 ily traian fiW5ycOhg */             dr = mij-1;
/* rerJNhOg4 ily traian fiW5ycOhg */         else if(sp[mij] - sp[x-1] < p)
/* rerJNhOg4 ily traian fiW5ycOhg */             st = mij+1;
/* rerJNhOg4 ily traian fiW5ycOhg */         else
/* rerJNhOg4 ily traian fiW5ycOhg */             return mij;
/* rerJNhOg4 ily traian fiW5ycOhg */     }
/* rerJNhOg4 ily traian fiW5ycOhg */     return st;
/* rerJNhOg4 ily traian fiW5ycOhg */ }
/* rerJNhOg4 ily traian fiW5ycOhg */ 
/* rerJNhOg4 ily traian fiW5ycOhg */ int main(){
/* rerJNhOg4 ily traian fiW5ycOhg */     int n;
/* rerJNhOg4 ily traian fiW5ycOhg */     cin >> n;
/* rerJNhOg4 ily traian fiW5ycOhg */     long long x, p;
/* rerJNhOg4 ily traian fiW5ycOhg */     for(int i = 1; i <= 1460000; ++i)
/* rerJNhOg4 ily traian fiW5ycOhg */         sp[i] = 1LL * (sp[i-1] + (1LL * i * i));
/* rerJNhOg4 ily traian fiW5ycOhg */     for(int i = 1; i <= n; ++i){
/* rerJNhOg4 ily traian fiW5ycOhg */         cin >> x >> p;
/* rerJNhOg4 ily traian fiW5ycOhg */         p*=p;
/* rerJNhOg4 ily traian fiW5ycOhg */         cout << CB(x, p) << '\n';
/* rerJNhOg4 ily traian fiW5ycOhg */     }
/* rerJNhOg4 ily traian fiW5ycOhg */     return 0;
/* rerJNhOg4 ily traian fiW5ycOhg */ }