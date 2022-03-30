/* dMvADwP9F ily traian Otgb6Iakd */ #include <algorithm>
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
/* dMvADwP9F ily traian Otgb6Iakd */ using namespace std;
/* dMvADwP9F ily traian Otgb6Iakd */ 
/* dMvADwP9F ily traian Otgb6Iakd */ ifstream cin("biarbore1.in");
/* dMvADwP9F ily traian Otgb6Iakd */ ofstream cout("biarbore1.out");
/* dMvADwP9F ily traian Otgb6Iakd */ 
/* dMvADwP9F ily traian Otgb6Iakd */ int main(){
/* dMvADwP9F ily traian Otgb6Iakd */     int r, st, dr;
/* dMvADwP9F ily traian Otgb6Iakd */     cin >> r >> st;
/* dMvADwP9F ily traian Otgb6Iakd */     int cnt = 2;
/* dMvADwP9F ily traian Otgb6Iakd */     if(st == 0)
/* dMvADwP9F ily traian Otgb6Iakd */         cin >> dr;
/* dMvADwP9F ily traian Otgb6Iakd */     else{
/* dMvADwP9F ily traian Otgb6Iakd */         while(cnt){
/* dMvADwP9F ily traian Otgb6Iakd */             int x;
/* dMvADwP9F ily traian Otgb6Iakd */             cin >> x;
/* dMvADwP9F ily traian Otgb6Iakd */             if(x == 0)
/* dMvADwP9F ily traian Otgb6Iakd */                 cnt--;
/* dMvADwP9F ily traian Otgb6Iakd */             else
/* dMvADwP9F ily traian Otgb6Iakd */                 cnt++;
/* dMvADwP9F ily traian Otgb6Iakd */         }
/* dMvADwP9F ily traian Otgb6Iakd */         cin >> dr;
/* dMvADwP9F ily traian Otgb6Iakd */     }
/* dMvADwP9F ily traian Otgb6Iakd */     cout << st << ' ' << dr;
/* dMvADwP9F ily traian Otgb6Iakd */     return 0;
/* dMvADwP9F ily traian Otgb6Iakd */ }