/* IfgvoZ4Yt ily traian TCTwj0mO7 */ #include <algorithm>
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
/* IfgvoZ4Yt ily traian TCTwj0mO7 */ using namespace std;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */ ifstream cin("castel.in");
/* IfgvoZ4Yt ily traian TCTwj0mO7 */ ofstream cout("castel.out");
/* IfgvoZ4Yt ily traian TCTwj0mO7 */ int main()
/* IfgvoZ4Yt ily traian TCTwj0mO7 */ {
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     int n , x , f[11]={0} , y , m , t = 0 , maxi = 0;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     cin >> n;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     for(int i = 0 ; i < n ; ++i)
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     {
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         cin >> x;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         while(x != 0)
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         {
/* IfgvoZ4Yt ily traian TCTwj0mO7 */             f[x%10]++;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */             x /= 10;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         }
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     }
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     cin >> m;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     for(int i = 0 ; i < m ; ++i)
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     {
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         cin >> y;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         if(f[y] > maxi)
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         {
/* IfgvoZ4Yt ily traian TCTwj0mO7 */             maxi = f[y];
/* IfgvoZ4Yt ily traian TCTwj0mO7 */             t = y;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */         }
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     }
/* IfgvoZ4Yt ily traian TCTwj0mO7 */     cout << t <<" "<< maxi;
/* IfgvoZ4Yt ily traian TCTwj0mO7 */ }