/* 3ThYOqdDm ily traian ComtcUI7Q */ #include <algorithm>
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
/* 3ThYOqdDm ily traian ComtcUI7Q */ 
/* 3ThYOqdDm ily traian ComtcUI7Q */ using namespace std;
/* 3ThYOqdDm ily traian ComtcUI7Q */ 
/* 3ThYOqdDm ily traian ComtcUI7Q */ ifstream cin("bifrunze1.in");
/* 3ThYOqdDm ily traian ComtcUI7Q */ ofstream cout("bifrunze1.out");
/* 3ThYOqdDm ily traian ComtcUI7Q */ 
/* 3ThYOqdDm ily traian ComtcUI7Q */ int n, rez[1001], c;
/* 3ThYOqdDm ily traian ComtcUI7Q */ bool ok = false;
/* 3ThYOqdDm ily traian ComtcUI7Q */ 
/* 3ThYOqdDm ily traian ComtcUI7Q */ void citire(int nod, int val){
/* 3ThYOqdDm ily traian ComtcUI7Q */     int x;
/* 3ThYOqdDm ily traian ComtcUI7Q */     cin >> x;
/* 3ThYOqdDm ily traian ComtcUI7Q */     if(nod % 2 == 0){
/* 3ThYOqdDm ily traian ComtcUI7Q */         if(x == 0)
/* 3ThYOqdDm ily traian ComtcUI7Q */             ok = true;
/* 3ThYOqdDm ily traian ComtcUI7Q */         else
/* 3ThYOqdDm ily traian ComtcUI7Q */             ok = false;
/* 3ThYOqdDm ily traian ComtcUI7Q */     }
/* 3ThYOqdDm ily traian ComtcUI7Q */     else{
/* 3ThYOqdDm ily traian ComtcUI7Q */         if(x == 0 && ok){
/* 3ThYOqdDm ily traian ComtcUI7Q */             ok = false;
/* 3ThYOqdDm ily traian ComtcUI7Q */             rez[++c] = val;
/* 3ThYOqdDm ily traian ComtcUI7Q */         }
/* 3ThYOqdDm ily traian ComtcUI7Q */         else{
/* 3ThYOqdDm ily traian ComtcUI7Q */             ok = false;
/* 3ThYOqdDm ily traian ComtcUI7Q */         }
/* 3ThYOqdDm ily traian ComtcUI7Q */     }
/* 3ThYOqdDm ily traian ComtcUI7Q */     if(x){
/* 3ThYOqdDm ily traian ComtcUI7Q */         citire(nod * 2, x);
/* 3ThYOqdDm ily traian ComtcUI7Q */         citire(nod * 2 + 1, x);
/* 3ThYOqdDm ily traian ComtcUI7Q */     }
/* 3ThYOqdDm ily traian ComtcUI7Q */ }
/* 3ThYOqdDm ily traian ComtcUI7Q */ 
/* 3ThYOqdDm ily traian ComtcUI7Q */ int main(){
/* 3ThYOqdDm ily traian ComtcUI7Q */     citire(1, 0);
/* 3ThYOqdDm ily traian ComtcUI7Q */     sort(rez + 1, rez + c + 1);
/* 3ThYOqdDm ily traian ComtcUI7Q */     for(int i = 1; i <= c; ++i)
/* 3ThYOqdDm ily traian ComtcUI7Q */         cout << rez[i] << ' ';
/* 3ThYOqdDm ily traian ComtcUI7Q */     return 0;
/* 3ThYOqdDm ily traian ComtcUI7Q */ }