/* 7EeGXZbUA ily traian CSokKPrpF */ #include <algorithm>
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
/* 7EeGXZbUA ily traian CSokKPrpF */ using namespace std;
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */ ifstream cin("dslm.in");
/* 7EeGXZbUA ily traian CSokKPrpF */ ofstream cout("dslm.out");
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */ int n , a[25][25] , x1 , y , x[25] , p[25] , P , kmax , re[101];
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */ void afisare(int k)
/* 7EeGXZbUA ily traian CSokKPrpF */ {
/* 7EeGXZbUA ily traian CSokKPrpF */     for(int i = 1 ; i <= k ; i++)
/* 7EeGXZbUA ily traian CSokKPrpF */         cout << x[i] << " ";
/* 7EeGXZbUA ily traian CSokKPrpF */     cout << '\n';
/* 7EeGXZbUA ily traian CSokKPrpF */ }
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */ void rez(int k)
/* 7EeGXZbUA ily traian CSokKPrpF */ {
/* 7EeGXZbUA ily traian CSokKPrpF */    for(int i = 1 ; i <= k ; i++)
/* 7EeGXZbUA ily traian CSokKPrpF */         re[i] = x[i];
/* 7EeGXZbUA ily traian CSokKPrpF */ }
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */ void back(int k)
/* 7EeGXZbUA ily traian CSokKPrpF */ {
/* 7EeGXZbUA ily traian CSokKPrpF */     for(int i = 1 ; i <= n ; i++)
/* 7EeGXZbUA ily traian CSokKPrpF */     {
/* 7EeGXZbUA ily traian CSokKPrpF */         x[k] = i;
/* 7EeGXZbUA ily traian CSokKPrpF */         if(a[x[k - 1]][x[k]] == 1)
/* 7EeGXZbUA ily traian CSokKPrpF */         {
/* 7EeGXZbUA ily traian CSokKPrpF */             a[x[k - 1]][x[k]] = 0;
/* 7EeGXZbUA ily traian CSokKPrpF */             if(k > kmax) kmax = k , rez(k);
/* 7EeGXZbUA ily traian CSokKPrpF */             back(k + 1);
/* 7EeGXZbUA ily traian CSokKPrpF */             a[x[k - 1]][x[k]] = 1;
/* 7EeGXZbUA ily traian CSokKPrpF */         }
/* 7EeGXZbUA ily traian CSokKPrpF */     }
/* 7EeGXZbUA ily traian CSokKPrpF */ }
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */ int main()
/* 7EeGXZbUA ily traian CSokKPrpF */ {
/* 7EeGXZbUA ily traian CSokKPrpF */     cin >> n >> P;
/* 7EeGXZbUA ily traian CSokKPrpF */     while(cin >> x1 >> y) a[x1][y] = 1;
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */     x[1] = P;
/* 7EeGXZbUA ily traian CSokKPrpF */     p[P] = 1;
/* 7EeGXZbUA ily traian CSokKPrpF */     back(2);
/* 7EeGXZbUA ily traian CSokKPrpF */ 
/* 7EeGXZbUA ily traian CSokKPrpF */     for(int i = 1 ; i <= kmax ; i++)
/* 7EeGXZbUA ily traian CSokKPrpF */         cout << re[i] << " ";
/* 7EeGXZbUA ily traian CSokKPrpF */ }