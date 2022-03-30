/* ZBtAnVWWw ily traian ljR3EtKP9 */ #include <algorithm>
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
/* ZBtAnVWWw ily traian ljR3EtKP9 */ using namespace std;
/* ZBtAnVWWw ily traian ljR3EtKP9 */ 
/* ZBtAnVWWw ily traian ljR3EtKP9 */ ifstream fin("pozmax.in");
/* ZBtAnVWWw ily traian ljR3EtKP9 */ ofstream fout("pozmax.out");
/* ZBtAnVWWw ily traian ljR3EtKP9 */ 
/* ZBtAnVWWw ily traian ljR3EtKP9 */ int main()
/* ZBtAnVWWw ily traian ljR3EtKP9 */ {
/* ZBtAnVWWw ily traian ljR3EtKP9 */     int n;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     fin >> n;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     float tmp;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     int p=0;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     int u=0;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     int max=0;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     for (int i = 1 ; i <= n; ++i)
/* ZBtAnVWWw ily traian ljR3EtKP9 */     {
/* ZBtAnVWWw ily traian ljR3EtKP9 */         fin >> tmp;
/* ZBtAnVWWw ily traian ljR3EtKP9 */         if(tmp>max)
/* ZBtAnVWWw ily traian ljR3EtKP9 */         {
/* ZBtAnVWWw ily traian ljR3EtKP9 */             p=i;
/* ZBtAnVWWw ily traian ljR3EtKP9 */             max=tmp;
/* ZBtAnVWWw ily traian ljR3EtKP9 */         }
/* ZBtAnVWWw ily traian ljR3EtKP9 */         if (tmp==max)
/* ZBtAnVWWw ily traian ljR3EtKP9 */         u=i;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     }
/* ZBtAnVWWw ily traian ljR3EtKP9 */     fout << p << ' ' << u;
/* ZBtAnVWWw ily traian ljR3EtKP9 */     
/* ZBtAnVWWw ily traian ljR3EtKP9 */     fin.close();
/* ZBtAnVWWw ily traian ljR3EtKP9 */     fout.close();
/* ZBtAnVWWw ily traian ljR3EtKP9 */     return 0;
/* ZBtAnVWWw ily traian ljR3EtKP9 */ }