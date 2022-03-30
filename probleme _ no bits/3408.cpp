/* I1G7yN7mx ily traian 6gKRzqn5T */ #include <algorithm>
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
/* I1G7yN7mx ily traian 6gKRzqn5T */ using namespace std;
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */ ifstream cin("joc2020.in");
/* I1G7yN7mx ily traian 6gKRzqn5T */ ofstream cout("joc2020.out");
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */ bool c[1000001];
/* I1G7yN7mx ily traian 6gKRzqn5T */ int divi[100001], ind = 0;
/* I1G7yN7mx ily traian 6gKRzqn5T */ int rez[500001];
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */ int main()
/* I1G7yN7mx ily traian 6gKRzqn5T */ {
/* I1G7yN7mx ily traian 6gKRzqn5T */     c[0] = c[1] = 1;
/* I1G7yN7mx ily traian 6gKRzqn5T */     for(int i = 2; i <= 1000; ++i)
/* I1G7yN7mx ily traian 6gKRzqn5T */         if(c[i] == 0)
/* I1G7yN7mx ily traian 6gKRzqn5T */             for(int j = 2; i * j <= 1000000; ++j)
/* I1G7yN7mx ily traian 6gKRzqn5T */                 c[i * j] = 1;
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */     for(int i = 1; i <= 1000000; ++i)
/* I1G7yN7mx ily traian 6gKRzqn5T */         if(c[i] == 0)
/* I1G7yN7mx ily traian 6gKRzqn5T */             divi[++ind] = i;
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */     int n;
/* I1G7yN7mx ily traian 6gKRzqn5T */     cin >> n;
/* I1G7yN7mx ily traian 6gKRzqn5T */     int x;
/* I1G7yN7mx ily traian 6gKRzqn5T */     for(int i = 1; i <= n; ++i){
/* I1G7yN7mx ily traian 6gKRzqn5T */         cin >> x;
/* I1G7yN7mx ily traian 6gKRzqn5T */         int nrdiv = 1;
/* I1G7yN7mx ily traian 6gKRzqn5T */         int d = 1;
/* I1G7yN7mx ily traian 6gKRzqn5T */         while(x > 1){
/* I1G7yN7mx ily traian 6gKRzqn5T */             int p = 0;
/* I1G7yN7mx ily traian 6gKRzqn5T */             while(x % divi[d] == 0)
/* I1G7yN7mx ily traian 6gKRzqn5T */                 x /= divi[d], p++;
/* I1G7yN7mx ily traian 6gKRzqn5T */             d++;
/* I1G7yN7mx ily traian 6gKRzqn5T */             nrdiv *= (p + 1);
/* I1G7yN7mx ily traian 6gKRzqn5T */             if(divi[d] * divi[d] > x){
/* I1G7yN7mx ily traian 6gKRzqn5T */                 if(x != 1){
/* I1G7yN7mx ily traian 6gKRzqn5T */                     nrdiv *= 2;
/* I1G7yN7mx ily traian 6gKRzqn5T */                     break;
/* I1G7yN7mx ily traian 6gKRzqn5T */                 }
/* I1G7yN7mx ily traian 6gKRzqn5T */             }
/* I1G7yN7mx ily traian 6gKRzqn5T */         }
/* I1G7yN7mx ily traian 6gKRzqn5T */         rez[i] = nrdiv;
/* I1G7yN7mx ily traian 6gKRzqn5T */     }
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */     for(int i = 1; i <= n; ++i)
/* I1G7yN7mx ily traian 6gKRzqn5T */         cout << rez[i] << ' ';
/* I1G7yN7mx ily traian 6gKRzqn5T */ 
/* I1G7yN7mx ily traian 6gKRzqn5T */     return 0;
/* I1G7yN7mx ily traian 6gKRzqn5T */ }