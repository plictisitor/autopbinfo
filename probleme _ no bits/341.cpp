/* tkJdXbrlE ily traian jYVmEkYje */ #include <algorithm>
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
/* tkJdXbrlE ily traian jYVmEkYje */ using namespace std;
/* tkJdXbrlE ily traian jYVmEkYje */ ifstream cin("bomboane.in");
/* tkJdXbrlE ily traian jYVmEkYje */ ofstream cout("bomboane.out");
/* tkJdXbrlE ily traian jYVmEkYje */ int n , a[1001] , rez[1001][3] , sum , mini , maxi , imin , imax , ind;
/* tkJdXbrlE ily traian jYVmEkYje */ int main()
/* tkJdXbrlE ily traian jYVmEkYje */ {
/* tkJdXbrlE ily traian jYVmEkYje */     cin >> n;
/* tkJdXbrlE ily traian jYVmEkYje */     for (int i = 1; i <= n; i++)
/* tkJdXbrlE ily traian jYVmEkYje */         cin >> a[i] , sum += a[i];
/* tkJdXbrlE ily traian jYVmEkYje */     if(sum%n)cout << -1;
/* tkJdXbrlE ily traian jYVmEkYje */     else
/* tkJdXbrlE ily traian jYVmEkYje */     {
/* tkJdXbrlE ily traian jYVmEkYje */         sum /= n;
/* tkJdXbrlE ily traian jYVmEkYje */         int ok = 1;
/* tkJdXbrlE ily traian jYVmEkYje */         while(ok)
/* tkJdXbrlE ily traian jYVmEkYje */         {
/* tkJdXbrlE ily traian jYVmEkYje */             mini = 1000000;
/* tkJdXbrlE ily traian jYVmEkYje */             maxi = -1;
/* tkJdXbrlE ily traian jYVmEkYje */             for (int i = 1; i <= n; i++)
/* tkJdXbrlE ily traian jYVmEkYje */             {
/* tkJdXbrlE ily traian jYVmEkYje */                 if(mini > a[i]) mini = a[i], imin = i;
/* tkJdXbrlE ily traian jYVmEkYje */                 if(maxi < a[i]) maxi = a[i], imax = i;
/* tkJdXbrlE ily traian jYVmEkYje */             }
/* tkJdXbrlE ily traian jYVmEkYje */             if(mini == maxi) ok = 0;
/* tkJdXbrlE ily traian jYVmEkYje */             else
/* tkJdXbrlE ily traian jYVmEkYje */             {
/* tkJdXbrlE ily traian jYVmEkYje */                 rez[++ind][0] = imax;
/* tkJdXbrlE ily traian jYVmEkYje */                 rez[ind][1] = imin;
/* tkJdXbrlE ily traian jYVmEkYje */                 rez[ind][2] = sum - mini;
/* tkJdXbrlE ily traian jYVmEkYje */                 a[imin] = sum;
/* tkJdXbrlE ily traian jYVmEkYje */                 a[imax] = maxi - (sum - mini);
/* tkJdXbrlE ily traian jYVmEkYje */             }
/* tkJdXbrlE ily traian jYVmEkYje */         }
/* tkJdXbrlE ily traian jYVmEkYje */         cout << ind << '\n';
/* tkJdXbrlE ily traian jYVmEkYje */         for (int i = 1; i <= ind; i ++)
/* tkJdXbrlE ily traian jYVmEkYje */         {
/* tkJdXbrlE ily traian jYVmEkYje */             for (int j = 0; j < 3; j++) cout << rez[i][j] << ' ';
/* tkJdXbrlE ily traian jYVmEkYje */             cout << '\n';
/* tkJdXbrlE ily traian jYVmEkYje */         }
/* tkJdXbrlE ily traian jYVmEkYje */     }
/* tkJdXbrlE ily traian jYVmEkYje */ }