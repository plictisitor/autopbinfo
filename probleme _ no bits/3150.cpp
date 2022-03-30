/* EDvGh4TpN ily traian RW4dK1Ylp */ #include <algorithm>
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
/* EDvGh4TpN ily traian RW4dK1Ylp */ using namespace std;
/* EDvGh4TpN ily traian RW4dK1Ylp */ 
/* EDvGh4TpN ily traian RW4dK1Ylp */ int n , m , x[30] , cnt , p[30];
/* EDvGh4TpN ily traian RW4dK1Ylp */ 
/* EDvGh4TpN ily traian RW4dK1Ylp */ int afisare()
/* EDvGh4TpN ily traian RW4dK1Ylp */ {
/* EDvGh4TpN ily traian RW4dK1Ylp */     int pp = 1;
/* EDvGh4TpN ily traian RW4dK1Ylp */     for(int i = 1 ; i <= n ; i++)
/* EDvGh4TpN ily traian RW4dK1Ylp */         if(i % 2 == 0) cout << i << " ";
/* EDvGh4TpN ily traian RW4dK1Ylp */         else cout << x[pp++] << " ";
/* EDvGh4TpN ily traian RW4dK1Ylp */     cout << '\n';
/* EDvGh4TpN ily traian RW4dK1Ylp */ }
/* EDvGh4TpN ily traian RW4dK1Ylp */ 
/* EDvGh4TpN ily traian RW4dK1Ylp */ void back(int k)
/* EDvGh4TpN ily traian RW4dK1Ylp */ {
/* EDvGh4TpN ily traian RW4dK1Ylp */     for(int i = 1 ; i <= n ; i += 2)
/* EDvGh4TpN ily traian RW4dK1Ylp */     if(!p[i])
/* EDvGh4TpN ily traian RW4dK1Ylp */     {
/* EDvGh4TpN ily traian RW4dK1Ylp */         x[k] = i;
/* EDvGh4TpN ily traian RW4dK1Ylp */         p[i] = 1;
/* EDvGh4TpN ily traian RW4dK1Ylp */         if(k == cnt) afisare();
/* EDvGh4TpN ily traian RW4dK1Ylp */         else back(k + 1);
/* EDvGh4TpN ily traian RW4dK1Ylp */         p[i] = 0;
/* EDvGh4TpN ily traian RW4dK1Ylp */ 
/* EDvGh4TpN ily traian RW4dK1Ylp */     }
/* EDvGh4TpN ily traian RW4dK1Ylp */ }
/* EDvGh4TpN ily traian RW4dK1Ylp */ 
/* EDvGh4TpN ily traian RW4dK1Ylp */ int main()
/* EDvGh4TpN ily traian RW4dK1Ylp */ {
/* EDvGh4TpN ily traian RW4dK1Ylp */     cin >> n;
/* EDvGh4TpN ily traian RW4dK1Ylp */     if(n % 2 == 0) cnt = n  / 2;
/* EDvGh4TpN ily traian RW4dK1Ylp */     else cnt = (n + 1) / 2;
/* EDvGh4TpN ily traian RW4dK1Ylp */     back(1);
/* EDvGh4TpN ily traian RW4dK1Ylp */     return 0;
/* EDvGh4TpN ily traian RW4dK1Ylp */ }