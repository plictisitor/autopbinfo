/* AhyAP3NjY ily traian s5OUCupgu */ #include <algorithm>
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
/* AhyAP3NjY ily traian s5OUCupgu */ using namespace std;
/* AhyAP3NjY ily traian s5OUCupgu */ 
/* AhyAP3NjY ily traian s5OUCupgu */ ifstream cin("culori.in");
/* AhyAP3NjY ily traian s5OUCupgu */ ofstream cout("culori.out");
/* AhyAP3NjY ily traian s5OUCupgu */ 
/* AhyAP3NjY ily traian s5OUCupgu */ int cer , n , m , c , a[10001] , x , y , z , b[10001];
/* AhyAP3NjY ily traian s5OUCupgu */ 
/* AhyAP3NjY ily traian s5OUCupgu */ int main()
/* AhyAP3NjY ily traian s5OUCupgu */ {
/* AhyAP3NjY ily traian s5OUCupgu */     cin >> cer >> c >> n >> m;
/* AhyAP3NjY ily traian s5OUCupgu */     for(int i = 1 ; i <= n ; i++)
/* AhyAP3NjY ily traian s5OUCupgu */         cin >> a[i];
/* AhyAP3NjY ily traian s5OUCupgu */     if(cer == 1)
/* AhyAP3NjY ily traian s5OUCupgu */     {
/* AhyAP3NjY ily traian s5OUCupgu */         for(int i = 1 ; i <= m ; i++)
/* AhyAP3NjY ily traian s5OUCupgu */             cin >> x >> y >> z;
/* AhyAP3NjY ily traian s5OUCupgu */         int lmax = 0 , l = 0;
/* AhyAP3NjY ily traian s5OUCupgu */         for(int i = 2 ; i <= n ; i++)
/* AhyAP3NjY ily traian s5OUCupgu */         {
/* AhyAP3NjY ily traian s5OUCupgu */             if(a[i] == a[i - 1]) l++;
/* AhyAP3NjY ily traian s5OUCupgu */             else
/* AhyAP3NjY ily traian s5OUCupgu */             {
/* AhyAP3NjY ily traian s5OUCupgu */                 if(l > lmax) lmax = l;
/* AhyAP3NjY ily traian s5OUCupgu */                 l = 0;
/* AhyAP3NjY ily traian s5OUCupgu */             }
/* AhyAP3NjY ily traian s5OUCupgu */         }
/* AhyAP3NjY ily traian s5OUCupgu */         cout << lmax + 1;
/* AhyAP3NjY ily traian s5OUCupgu */     }
/* AhyAP3NjY ily traian s5OUCupgu */     else
/* AhyAP3NjY ily traian s5OUCupgu */     {
/* AhyAP3NjY ily traian s5OUCupgu */         for(int i = 1 ; i <= m ; i++)
/* AhyAP3NjY ily traian s5OUCupgu */         {
/* AhyAP3NjY ily traian s5OUCupgu */             cin >> x >> y >> z;
/* AhyAP3NjY ily traian s5OUCupgu */             b[x] += z;
/* AhyAP3NjY ily traian s5OUCupgu */             b[y + 1] -= z;
/* AhyAP3NjY ily traian s5OUCupgu */         }
/* AhyAP3NjY ily traian s5OUCupgu */         for(int i = 1; i <= n ; i++)
/* AhyAP3NjY ily traian s5OUCupgu */             b[i] = b[i - 1]+b[i];
/* AhyAP3NjY ily traian s5OUCupgu */         for(int i = 1 ; i <= n ; i++)
/* AhyAP3NjY ily traian s5OUCupgu */             cout << a[i] + b[i] << " ";
/* AhyAP3NjY ily traian s5OUCupgu */     }
/* AhyAP3NjY ily traian s5OUCupgu */ }