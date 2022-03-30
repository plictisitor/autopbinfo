/* a74fRyDzG ily traian opyR1GoAP */ #include <algorithm>
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
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */ using namespace std;
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */ ifstream cin("subsircomunmaximal.in");
/* a74fRyDzG ily traian opyR1GoAP */ ofstream cout("subsircomunmaximal.out");
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */ int n , m , cnt;
/* a74fRyDzG ily traian opyR1GoAP */ char a[1001] , b[1001] , rez[1001];
/* a74fRyDzG ily traian opyR1GoAP */ int d[1001][1001];
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */ int main()
/* a74fRyDzG ily traian opyR1GoAP */ {
/* a74fRyDzG ily traian opyR1GoAP */     cin >> a >> b;
/* a74fRyDzG ily traian opyR1GoAP */     n = strlen(a);
/* a74fRyDzG ily traian opyR1GoAP */     m = strlen(b);
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */     for(int i = 1 ; i <= n ; i++)
/* a74fRyDzG ily traian opyR1GoAP */         for(int j = 1 ; j <= m ; j++)
/* a74fRyDzG ily traian opyR1GoAP */             if(a[i - 1] == b[j - 1]) d[i][j] = d[i - 1][j - 1] + 1;
/* a74fRyDzG ily traian opyR1GoAP */             else d[i][j] = max(d[i - 1][j] , d[i][j - 1]);
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */     for(int i = n ; i >= 1;)
/* a74fRyDzG ily traian opyR1GoAP */     {
/* a74fRyDzG ily traian opyR1GoAP */         for(int j = m ; j >= 1 ;)
/* a74fRyDzG ily traian opyR1GoAP */             if(a[i - 1] == b[j - 1]) rez[++cnt] = a[i - 1] , i-- , j--;
/* a74fRyDzG ily traian opyR1GoAP */             else if(d[i - 1][j] < d[i][j - 1]) j--;
/* a74fRyDzG ily traian opyR1GoAP */             else i--;
/* a74fRyDzG ily traian opyR1GoAP */     }
/* a74fRyDzG ily traian opyR1GoAP */ 
/* a74fRyDzG ily traian opyR1GoAP */     for(int i = cnt; i >= 1 ; i--)
/* a74fRyDzG ily traian opyR1GoAP */         cout << rez[i];
/* a74fRyDzG ily traian opyR1GoAP */ }