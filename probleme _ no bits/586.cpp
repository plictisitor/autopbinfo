/* FRAVEoCWV ily traian zmOIToK00 */ #include <algorithm>
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
/* FRAVEoCWV ily traian zmOIToK00 */ 
/* FRAVEoCWV ily traian zmOIToK00 */ using namespace std;
/* FRAVEoCWV ily traian zmOIToK00 */ 
/* FRAVEoCWV ily traian zmOIToK00 */ int n , m , x , y , ok;
/* FRAVEoCWV ily traian zmOIToK00 */ vector <int> G[101];
/* FRAVEoCWV ily traian zmOIToK00 */ 
/* FRAVEoCWV ily traian zmOIToK00 */ int main()
/* FRAVEoCWV ily traian zmOIToK00 */ {
/* FRAVEoCWV ily traian zmOIToK00 */     cin >> n >> m;
/* FRAVEoCWV ily traian zmOIToK00 */     for(int i = 1 ; i <= m ; i++)
/* FRAVEoCWV ily traian zmOIToK00 */     {
/* FRAVEoCWV ily traian zmOIToK00 */         cin >> x >> y;
/* FRAVEoCWV ily traian zmOIToK00 */         G[y].push_back(x);
/* FRAVEoCWV ily traian zmOIToK00 */     }
/* FRAVEoCWV ily traian zmOIToK00 */     for(int i = 1 ; i <= n; i++)
/* FRAVEoCWV ily traian zmOIToK00 */     {
/* FRAVEoCWV ily traian zmOIToK00 */         int cnt = 0;
/* FRAVEoCWV ily traian zmOIToK00 */         for(int q : G[i]) cnt++;
/* FRAVEoCWV ily traian zmOIToK00 */         if(cnt == 0) cout << i << " " , ok++;
/* FRAVEoCWV ily traian zmOIToK00 */     }
/* FRAVEoCWV ily traian zmOIToK00 */     if(ok == 0) cout << "NU EXISTA";
/* FRAVEoCWV ily traian zmOIToK00 */ }