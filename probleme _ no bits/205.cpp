/* 49u4iWsqU ily traian 6x2dLc9IK */ #include <algorithm>
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
/* 49u4iWsqU ily traian 6x2dLc9IK */ 
/* 49u4iWsqU ily traian 6x2dLc9IK */ using namespace std;
/* 49u4iWsqU ily traian 6x2dLc9IK */ 
/* 49u4iWsqU ily traian 6x2dLc9IK */ ifstream cin("shuffle.in");
/* 49u4iWsqU ily traian 6x2dLc9IK */ ofstream cout("shuffle.out");
/* 49u4iWsqU ily traian 6x2dLc9IK */ 
/* 49u4iWsqU ily traian 6x2dLc9IK */ int n, s[10] , p [10] , c1[10] , c2[10] , a[10] , cnt;
/* 49u4iWsqU ily traian 6x2dLc9IK */ 
/* 49u4iWsqU ily traian 6x2dLc9IK */ void afis()
/* 49u4iWsqU ily traian 6x2dLc9IK */ {
/* 49u4iWsqU ily traian 6x2dLc9IK */     for(int i = 1 ; i <= n ; i++)
/* 49u4iWsqU ily traian 6x2dLc9IK */         cout << s[i] << " ";
/* 49u4iWsqU ily traian 6x2dLc9IK */     cout << '\n';
/* 49u4iWsqU ily traian 6x2dLc9IK */     cnt++;
/* 49u4iWsqU ily traian 6x2dLc9IK */ }
/* 49u4iWsqU ily traian 6x2dLc9IK */ void back(int k)
/* 49u4iWsqU ily traian 6x2dLc9IK */ {
/* 49u4iWsqU ily traian 6x2dLc9IK */     for(int i = 1 ; i <= n  ; i++)
/* 49u4iWsqU ily traian 6x2dLc9IK */         if(p[i] == 0 && s[k - 1] != c1[i] && s[k - 1] != c2[i])
/* 49u4iWsqU ily traian 6x2dLc9IK */         {
/* 49u4iWsqU ily traian 6x2dLc9IK */             p[i] = 1;
/* 49u4iWsqU ily traian 6x2dLc9IK */             s[k] = i;
/* 49u4iWsqU ily traian 6x2dLc9IK */             if(k == n) afis();
/* 49u4iWsqU ily traian 6x2dLc9IK */             else back(k + 1);
/* 49u4iWsqU ily traian 6x2dLc9IK */             p[i] = 0;
/* 49u4iWsqU ily traian 6x2dLc9IK */         }
/* 49u4iWsqU ily traian 6x2dLc9IK */ }
/* 49u4iWsqU ily traian 6x2dLc9IK */ 
/* 49u4iWsqU ily traian 6x2dLc9IK */ int main()
/* 49u4iWsqU ily traian 6x2dLc9IK */ {
/* 49u4iWsqU ily traian 6x2dLc9IK */     cin >> n;
/* 49u4iWsqU ily traian 6x2dLc9IK */     for(int i = 1 ; i <= n ; i++)
/* 49u4iWsqU ily traian 6x2dLc9IK */         cin >> a[i];
/* 49u4iWsqU ily traian 6x2dLc9IK */     a[0] = -1;
/* 49u4iWsqU ily traian 6x2dLc9IK */     a[n + 1] = -1;
/* 49u4iWsqU ily traian 6x2dLc9IK */     for(int i = 1 ; i <= n ; i++)
/* 49u4iWsqU ily traian 6x2dLc9IK */     {
/* 49u4iWsqU ily traian 6x2dLc9IK */         c1[a[i]] = a[i - 1];
/* 49u4iWsqU ily traian 6x2dLc9IK */         c2[a[i]] = a[i + 1];
/* 49u4iWsqU ily traian 6x2dLc9IK */     }
/* 49u4iWsqU ily traian 6x2dLc9IK */     back(1);
/* 49u4iWsqU ily traian 6x2dLc9IK */     if(cnt == 0) cout << "nu exista";
/* 49u4iWsqU ily traian 6x2dLc9IK */     return 0;
/* 49u4iWsqU ily traian 6x2dLc9IK */ }