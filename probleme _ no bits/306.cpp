/* CVMZB2kod ily traian 8gTuUG0q5 */ #include <algorithm>
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
/* CVMZB2kod ily traian 8gTuUG0q5 */ 
/* CVMZB2kod ily traian 8gTuUG0q5 */ using namespace std;
/* CVMZB2kod ily traian 8gTuUG0q5 */ int main()
/* CVMZB2kod ily traian 8gTuUG0q5 */ {
/* CVMZB2kod ily traian 8gTuUG0q5 */     int n,c2=0,c5=0,p=1,a=0,x;
/* CVMZB2kod ily traian 8gTuUG0q5 */     cin>>n;
/* CVMZB2kod ily traian 8gTuUG0q5 */     for(int i=1;i<=n;i++)
/* CVMZB2kod ily traian 8gTuUG0q5 */     {
/* CVMZB2kod ily traian 8gTuUG0q5 */         cin>>x;
/* CVMZB2kod ily traian 8gTuUG0q5 */         while(x%2==0)
/* CVMZB2kod ily traian 8gTuUG0q5 */         {
/* CVMZB2kod ily traian 8gTuUG0q5 */             c2++;
/* CVMZB2kod ily traian 8gTuUG0q5 */             x=x/2;
/* CVMZB2kod ily traian 8gTuUG0q5 */         }
/* CVMZB2kod ily traian 8gTuUG0q5 */         while(x%5==0)
/* CVMZB2kod ily traian 8gTuUG0q5 */         {
/* CVMZB2kod ily traian 8gTuUG0q5 */             c5++;
/* CVMZB2kod ily traian 8gTuUG0q5 */             x=x/5;
/* CVMZB2kod ily traian 8gTuUG0q5 */         }
/* CVMZB2kod ily traian 8gTuUG0q5 */ 
/* CVMZB2kod ily traian 8gTuUG0q5 */     }
/* CVMZB2kod ily traian 8gTuUG0q5 */     cout<<min(c2,c5);
/* CVMZB2kod ily traian 8gTuUG0q5 */     return 0;
/* CVMZB2kod ily traian 8gTuUG0q5 */ }