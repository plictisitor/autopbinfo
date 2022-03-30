/* leDGDUZld ily traian g7FYuwlel */ #include <algorithm>
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
/* leDGDUZld ily traian g7FYuwlel */ using namespace std;
/* leDGDUZld ily traian g7FYuwlel */ 
/* leDGDUZld ily traian g7FYuwlel */ ifstream cin("biminprim.in");
/* leDGDUZld ily traian g7FYuwlel */ ofstream cout("biminprim.out");
/* leDGDUZld ily traian g7FYuwlel */ 
/* leDGDUZld ily traian g7FYuwlel */ int mini = 1000000;
/* leDGDUZld ily traian g7FYuwlel */ 
/* leDGDUZld ily traian g7FYuwlel */ bool prim(int n){
/* leDGDUZld ily traian g7FYuwlel */     int cnt = 0;
/* leDGDUZld ily traian g7FYuwlel */     for(int d = 1; d * d <= n; ++d){
/* leDGDUZld ily traian g7FYuwlel */         if(n % d == 0)
/* leDGDUZld ily traian g7FYuwlel */             cnt+=2;
/* leDGDUZld ily traian g7FYuwlel */         if(d * d == n)
/* leDGDUZld ily traian g7FYuwlel */             cnt--;
/* leDGDUZld ily traian g7FYuwlel */     }
/* leDGDUZld ily traian g7FYuwlel */     if(cnt == 2)
/* leDGDUZld ily traian g7FYuwlel */         return 1;
/* leDGDUZld ily traian g7FYuwlel */     return 0;
/* leDGDUZld ily traian g7FYuwlel */ }
/* leDGDUZld ily traian g7FYuwlel */ 
/* leDGDUZld ily traian g7FYuwlel */ void citire(int nod){
/* leDGDUZld ily traian g7FYuwlel */     int x;
/* leDGDUZld ily traian g7FYuwlel */     cin >> x;
/* leDGDUZld ily traian g7FYuwlel */     if(x < mini && prim(x))
/* leDGDUZld ily traian g7FYuwlel */         mini = x;
/* leDGDUZld ily traian g7FYuwlel */     if(x != 0){
/* leDGDUZld ily traian g7FYuwlel */         citire(2 * nod);
/* leDGDUZld ily traian g7FYuwlel */         citire(2 * nod + 1);
/* leDGDUZld ily traian g7FYuwlel */     }
/* leDGDUZld ily traian g7FYuwlel */ }
/* leDGDUZld ily traian g7FYuwlel */ 
/* leDGDUZld ily traian g7FYuwlel */ int main(){
/* leDGDUZld ily traian g7FYuwlel */     int x;
/* leDGDUZld ily traian g7FYuwlel */     cin >> x;
/* leDGDUZld ily traian g7FYuwlel */     citire(2);
/* leDGDUZld ily traian g7FYuwlel */     int s;
/* leDGDUZld ily traian g7FYuwlel */     if(mini != 1000000)
/* leDGDUZld ily traian g7FYuwlel */         s = mini;
/* leDGDUZld ily traian g7FYuwlel */     else
/* leDGDUZld ily traian g7FYuwlel */         s = -1;
/* leDGDUZld ily traian g7FYuwlel */     mini = 1000000;
/* leDGDUZld ily traian g7FYuwlel */     citire(3);
/* leDGDUZld ily traian g7FYuwlel */     int s1;
/* leDGDUZld ily traian g7FYuwlel */     if(mini != 1000000)
/* leDGDUZld ily traian g7FYuwlel */         s1 = mini;
/* leDGDUZld ily traian g7FYuwlel */     else
/* leDGDUZld ily traian g7FYuwlel */         s1 = -1;
/* leDGDUZld ily traian g7FYuwlel */     cout << s << ' ' << s1;
/* leDGDUZld ily traian g7FYuwlel */     return 0;
/* leDGDUZld ily traian g7FYuwlel */ }