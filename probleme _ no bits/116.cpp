/* plsvSNYXZ ily traian cPJUrcjHq */ #include <algorithm>
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
/* plsvSNYXZ ily traian cPJUrcjHq */ 
/* plsvSNYXZ ily traian cPJUrcjHq */ using namespace std;
/* plsvSNYXZ ily traian cPJUrcjHq */ 
/* plsvSNYXZ ily traian cPJUrcjHq */ bool prim(int n)
/* plsvSNYXZ ily traian cPJUrcjHq */ {
/* plsvSNYXZ ily traian cPJUrcjHq */     int cnt = 0;
/* plsvSNYXZ ily traian cPJUrcjHq */     for(int d = 1 ; d * d <= n ; ++d)
/* plsvSNYXZ ily traian cPJUrcjHq */     {
/* plsvSNYXZ ily traian cPJUrcjHq */         if(n % d == 0)
/* plsvSNYXZ ily traian cPJUrcjHq */             cnt+=2;
/* plsvSNYXZ ily traian cPJUrcjHq */         if(d * d == n)
/* plsvSNYXZ ily traian cPJUrcjHq */             cnt--;
/* plsvSNYXZ ily traian cPJUrcjHq */     }
/* plsvSNYXZ ily traian cPJUrcjHq */     if(cnt == 2)
/* plsvSNYXZ ily traian cPJUrcjHq */         return 1;
/* plsvSNYXZ ily traian cPJUrcjHq */     return 0;
/* plsvSNYXZ ily traian cPJUrcjHq */ }
/* plsvSNYXZ ily traian cPJUrcjHq */ 
/* plsvSNYXZ ily traian cPJUrcjHq */ int main()
/* plsvSNYXZ ily traian cPJUrcjHq */ {
/* plsvSNYXZ ily traian cPJUrcjHq */     int n;
/* plsvSNYXZ ily traian cPJUrcjHq */     cin >> n;
/* plsvSNYXZ ily traian cPJUrcjHq */     int x , cntp=0 , sp=0;
/* plsvSNYXZ ily traian cPJUrcjHq */     for(int i = 1 ; i <= n ; ++i)
/* plsvSNYXZ ily traian cPJUrcjHq */     {
/* plsvSNYXZ ily traian cPJUrcjHq */         cin >> x;
/* plsvSNYXZ ily traian cPJUrcjHq */         if(prim(x))
/* plsvSNYXZ ily traian cPJUrcjHq */             sp+=x , cntp++;
/* plsvSNYXZ ily traian cPJUrcjHq */     }
/* plsvSNYXZ ily traian cPJUrcjHq */     cout << fixed << setprecision(2) << (double)(sp*100/cntp)*0.01;
/* plsvSNYXZ ily traian cPJUrcjHq */     return 0;
/* plsvSNYXZ ily traian cPJUrcjHq */ }