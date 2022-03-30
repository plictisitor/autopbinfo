/* da8HEXU7e ily traian rXX0fCLg8 */ #include <algorithm>
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
/* da8HEXU7e ily traian rXX0fCLg8 */ using namespace std;
/* da8HEXU7e ily traian rXX0fCLg8 */ int prim (int n)
/* da8HEXU7e ily traian rXX0fCLg8 */ {
/* da8HEXU7e ily traian rXX0fCLg8 */     if (n==0 || n==1) return 0;
/* da8HEXU7e ily traian rXX0fCLg8 */     if(n==2) return 1;
/* da8HEXU7e ily traian rXX0fCLg8 */     if(n%2==0) return 0;
/* da8HEXU7e ily traian rXX0fCLg8 */     for (int i=3;i*i<=n;i += 2)
/* da8HEXU7e ily traian rXX0fCLg8 */         if(n%i==0) return 0;
/* da8HEXU7e ily traian rXX0fCLg8 */     return 1;
/* da8HEXU7e ily traian rXX0fCLg8 */ }
/* da8HEXU7e ily traian rXX0fCLg8 */ int main()
/* da8HEXU7e ily traian rXX0fCLg8 */ {
/* da8HEXU7e ily traian rXX0fCLg8 */     long long n,x,s=0;
/* da8HEXU7e ily traian rXX0fCLg8 */     cin>>n;
/* da8HEXU7e ily traian rXX0fCLg8 */     for(int i=1;i<=n;i++)
/* da8HEXU7e ily traian rXX0fCLg8 */     {
/* da8HEXU7e ily traian rXX0fCLg8 */         cin>>x;
/* da8HEXU7e ily traian rXX0fCLg8 */         int ogl=0;
/* da8HEXU7e ily traian rXX0fCLg8 */         int aux=x;
/* da8HEXU7e ily traian rXX0fCLg8 */         while(x!=0)
/* da8HEXU7e ily traian rXX0fCLg8 */         {
/* da8HEXU7e ily traian rXX0fCLg8 */             ogl=ogl*10+x%10;
/* da8HEXU7e ily traian rXX0fCLg8 */             x/=10;
/* da8HEXU7e ily traian rXX0fCLg8 */         }
/* da8HEXU7e ily traian rXX0fCLg8 */         if(prim(ogl)) s=s+aux;
/* da8HEXU7e ily traian rXX0fCLg8 */     }
/* da8HEXU7e ily traian rXX0fCLg8 */     cout<<s;
/* da8HEXU7e ily traian rXX0fCLg8 */     return 0;
/* da8HEXU7e ily traian rXX0fCLg8 */ }