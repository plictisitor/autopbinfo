/* R0tt9nfYZ ily traian c618Pa3T9 */ #include <algorithm>
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
/* R0tt9nfYZ ily traian c618Pa3T9 */ 
/* R0tt9nfYZ ily traian c618Pa3T9 */ using namespace std;
/* R0tt9nfYZ ily traian c618Pa3T9 */ 
/* R0tt9nfYZ ily traian c618Pa3T9 */ ifstream fin("pareimpare.in");
/* R0tt9nfYZ ily traian c618Pa3T9 */ ofstream fout("pareimpare.out");
/* R0tt9nfYZ ily traian c618Pa3T9 */ 
/* R0tt9nfYZ ily traian c618Pa3T9 */ int main()
/* R0tt9nfYZ ily traian c618Pa3T9 */ {
/* R0tt9nfYZ ily traian c618Pa3T9 */     int n=1 , p1=1 , p2=1;
/* R0tt9nfYZ ily traian c618Pa3T9 */     int a[100000], b[100000], c[100000];
/* R0tt9nfYZ ily traian c618Pa3T9 */     b[0]=-1 , c[0]=-1;
/* R0tt9nfYZ ily traian c618Pa3T9 */     while(fin >> a[n])
/* R0tt9nfYZ ily traian c618Pa3T9 */         n++;
/* R0tt9nfYZ ily traian c618Pa3T9 */     for(int i = 1 ; i < n ; ++i)
/* R0tt9nfYZ ily traian c618Pa3T9 */     {
/* R0tt9nfYZ ily traian c618Pa3T9 */         if(a[i]%2==0)
/* R0tt9nfYZ ily traian c618Pa3T9 */         {
/* R0tt9nfYZ ily traian c618Pa3T9 */             b[p1]=a[i];
/* R0tt9nfYZ ily traian c618Pa3T9 */             p1++;
/* R0tt9nfYZ ily traian c618Pa3T9 */         }
/* R0tt9nfYZ ily traian c618Pa3T9 */         if(a[i]%2==1)
/* R0tt9nfYZ ily traian c618Pa3T9 */         {
/* R0tt9nfYZ ily traian c618Pa3T9 */             c[p2]=a[i];
/* R0tt9nfYZ ily traian c618Pa3T9 */             p2++;
/* R0tt9nfYZ ily traian c618Pa3T9 */         }
/* R0tt9nfYZ ily traian c618Pa3T9 */     }
/* R0tt9nfYZ ily traian c618Pa3T9 */     sort(c+1 , c+p2);
/* R0tt9nfYZ ily traian c618Pa3T9 */     for(int i = 1 ; i < p2 ; ++i)
/* R0tt9nfYZ ily traian c618Pa3T9 */     {
/* R0tt9nfYZ ily traian c618Pa3T9 */         if(c[i]!=c[i-1])
/* R0tt9nfYZ ily traian c618Pa3T9 */         fout << c[i] << ' ';
/* R0tt9nfYZ ily traian c618Pa3T9 */     }
/* R0tt9nfYZ ily traian c618Pa3T9 */     fout << endl;
/* R0tt9nfYZ ily traian c618Pa3T9 */     sort(b+1 , b+p1);
/* R0tt9nfYZ ily traian c618Pa3T9 */     for(int i = p1-1 ; i > 0 ; --i)
/* R0tt9nfYZ ily traian c618Pa3T9 */     {
/* R0tt9nfYZ ily traian c618Pa3T9 */         if(b[i-1]!=b[i])
/* R0tt9nfYZ ily traian c618Pa3T9 */         fout << b[i] << ' ';
/* R0tt9nfYZ ily traian c618Pa3T9 */     }
/* R0tt9nfYZ ily traian c618Pa3T9 */ 
/* R0tt9nfYZ ily traian c618Pa3T9 */     fin.close();
/* R0tt9nfYZ ily traian c618Pa3T9 */     fout.close();
/* R0tt9nfYZ ily traian c618Pa3T9 */     
/* R0tt9nfYZ ily traian c618Pa3T9 */     return 0;
/* R0tt9nfYZ ily traian c618Pa3T9 */ }