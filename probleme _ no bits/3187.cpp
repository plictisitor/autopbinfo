/* Dw7OW0Rv8 ily traian xmPB25mbc */ #include <algorithm>
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
/* Dw7OW0Rv8 ily traian xmPB25mbc */ using namespace std;
/* Dw7OW0Rv8 ily traian xmPB25mbc */ 
/* Dw7OW0Rv8 ily traian xmPB25mbc */ int n, p, cnt;
/* Dw7OW0Rv8 ily traian xmPB25mbc */ 
/* Dw7OW0Rv8 ily traian xmPB25mbc */ ifstream cin("ratc2.in");
/* Dw7OW0Rv8 ily traian xmPB25mbc */ ofstream cout("ratc2.out");
/* Dw7OW0Rv8 ily traian xmPB25mbc */ 
/* Dw7OW0Rv8 ily traian xmPB25mbc */ struct co{
/* Dw7OW0Rv8 ily traian xmPB25mbc */     string nume, prenume;
/* Dw7OW0Rv8 ily traian xmPB25mbc */     int pe;
/* Dw7OW0Rv8 ily traian xmPB25mbc */ }v[101];
/* Dw7OW0Rv8 ily traian xmPB25mbc */ 
/* Dw7OW0Rv8 ily traian xmPB25mbc */ void invart(co a, co b){
/* Dw7OW0Rv8 ily traian xmPB25mbc */     swap(a, b);
/* Dw7OW0Rv8 ily traian xmPB25mbc */ }
/* Dw7OW0Rv8 ily traian xmPB25mbc */ 
/* Dw7OW0Rv8 ily traian xmPB25mbc */ int main(){
/* Dw7OW0Rv8 ily traian xmPB25mbc */     cin >> n >> p;
/* Dw7OW0Rv8 ily traian xmPB25mbc */     for(int i = 1; i <= n; ++i){
/* Dw7OW0Rv8 ily traian xmPB25mbc */         string a, b;
/* Dw7OW0Rv8 ily traian xmPB25mbc */         cin >> a >> b;
/* Dw7OW0Rv8 ily traian xmPB25mbc */         bool val;
/* Dw7OW0Rv8 ily traian xmPB25mbc */         cin >> val;
/* Dw7OW0Rv8 ily traian xmPB25mbc */         bool gasit = false;
/* Dw7OW0Rv8 ily traian xmPB25mbc */         for(int j = 1; j <= cnt; ++j){
/* Dw7OW0Rv8 ily traian xmPB25mbc */             if(a == v[j].prenume && b == v[j].nume)
/* Dw7OW0Rv8 ily traian xmPB25mbc */                 v[j].pe += !val, gasit = true;
/* Dw7OW0Rv8 ily traian xmPB25mbc */         }
/* Dw7OW0Rv8 ily traian xmPB25mbc */         if(!gasit)
/* Dw7OW0Rv8 ily traian xmPB25mbc */             v[++cnt].prenume = a, v[cnt].nume = b, v[cnt].pe = !val;
/* Dw7OW0Rv8 ily traian xmPB25mbc */     }
/* Dw7OW0Rv8 ily traian xmPB25mbc */     for(int i = 1; i < cnt; ++i)
/* Dw7OW0Rv8 ily traian xmPB25mbc */         for(int j = i + 1; j <= cnt; ++j)
/* Dw7OW0Rv8 ily traian xmPB25mbc */             if(v[i].pe < v[j].pe)
/* Dw7OW0Rv8 ily traian xmPB25mbc */                 swap(v[i], v[j]);
/* Dw7OW0Rv8 ily traian xmPB25mbc */             else if(v[i].pe == v[j].pe && v[i].prenume > v[j].prenume)
/* Dw7OW0Rv8 ily traian xmPB25mbc */                 swap(v[i], v[j]);
/* Dw7OW0Rv8 ily traian xmPB25mbc */             else if(v[i].pe == v[j].pe && v[i].prenume == v[j].prenume && v[i].nume > v[j].nume)
/* Dw7OW0Rv8 ily traian xmPB25mbc */                 swap(v[i], v[j]);
/* Dw7OW0Rv8 ily traian xmPB25mbc */     if(p == 1)
/* Dw7OW0Rv8 ily traian xmPB25mbc */         cout << v[1].prenume << ' ' << v[1].nume << ' ' << v[1].pe;
/* Dw7OW0Rv8 ily traian xmPB25mbc */     else
/* Dw7OW0Rv8 ily traian xmPB25mbc */         for(int i = 1; i <= cnt; ++i)
/* Dw7OW0Rv8 ily traian xmPB25mbc */             cout << v[i].prenume << ' ' << v[i].nume << ' ' << v[i].pe << endl;
/* Dw7OW0Rv8 ily traian xmPB25mbc */     return 0;
/* Dw7OW0Rv8 ily traian xmPB25mbc */ }