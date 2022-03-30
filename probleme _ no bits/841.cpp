/* J0xm2pj9B ily traian YQToxNRG1 */ #include <algorithm>
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
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ using namespace std;
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ ifstream cin("bomber.in");
/* J0xm2pj9B ily traian YQToxNRG1 */ ofstream cout("bomber.out");
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ int n , I;
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ struct shen
/* J0xm2pj9B ily traian YQToxNRG1 */ {
/* J0xm2pj9B ily traian YQToxNRG1 */     int x , y , p;
/* J0xm2pj9B ily traian YQToxNRG1 */ }v[101];
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ bool puscate[101];
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ int dist(int a , int b , int c , int d)
/* J0xm2pj9B ily traian YQToxNRG1 */ {
/* J0xm2pj9B ily traian YQToxNRG1 */     return sqrt((a - c) * (a - c) + (b - d) * (b - d));
/* J0xm2pj9B ily traian YQToxNRG1 */ }
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ void pusc(int i , int j , int putere , int q)
/* J0xm2pj9B ily traian YQToxNRG1 */ {
/* J0xm2pj9B ily traian YQToxNRG1 */     puscate[q]=1;
/* J0xm2pj9B ily traian YQToxNRG1 */     for(int k = 1 ; k <= n ; ++k)
/* J0xm2pj9B ily traian YQToxNRG1 */     {
/* J0xm2pj9B ily traian YQToxNRG1 */         if(dist(v[k].x , v[k].y , i , j) <= putere && k!=q && puscate[k]==0)
/* J0xm2pj9B ily traian YQToxNRG1 */             pusc(v[k].x , v[k].y , v[k].p , k);
/* J0xm2pj9B ily traian YQToxNRG1 */     }
/* J0xm2pj9B ily traian YQToxNRG1 */ }
/* J0xm2pj9B ily traian YQToxNRG1 */ 
/* J0xm2pj9B ily traian YQToxNRG1 */ int main()
/* J0xm2pj9B ily traian YQToxNRG1 */ {
/* J0xm2pj9B ily traian YQToxNRG1 */     cin >> n >> I;
/* J0xm2pj9B ily traian YQToxNRG1 */     for(int i = 1 ; i <= n ; ++i)
/* J0xm2pj9B ily traian YQToxNRG1 */         cin >> v[i].x >> v[i].y >> v[i].p;
/* J0xm2pj9B ily traian YQToxNRG1 */     pusc(v[I].x , v[I].y , v[I].p , I);
/* J0xm2pj9B ily traian YQToxNRG1 */     int cnt=0;
/* J0xm2pj9B ily traian YQToxNRG1 */     for(int i = 1 ; i <= n ; ++i)
/* J0xm2pj9B ily traian YQToxNRG1 */         if(puscate[i]==0)
/* J0xm2pj9B ily traian YQToxNRG1 */             cnt++;
/* J0xm2pj9B ily traian YQToxNRG1 */     cout << cnt;
/* J0xm2pj9B ily traian YQToxNRG1 */     return 0;
/* J0xm2pj9B ily traian YQToxNRG1 */ }