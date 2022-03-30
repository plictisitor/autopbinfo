/* 0glfAt0m8 ily traian IrklqxYC2 */ #include <algorithm>
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
/* 0glfAt0m8 ily traian IrklqxYC2 */ using namespace std;
/* 0glfAt0m8 ily traian IrklqxYC2 */ 
/* 0glfAt0m8 ily traian IrklqxYC2 */ ifstream cin("maxim5.in");
/* 0glfAt0m8 ily traian IrklqxYC2 */ ofstream cout("maxim5.out");
/* 0glfAt0m8 ily traian IrklqxYC2 */ 
/* 0glfAt0m8 ily traian IrklqxYC2 */ int main()
/* 0glfAt0m8 ily traian IrklqxYC2 */ {
/* 0glfAt0m8 ily traian IrklqxYC2 */     int n=0;
/* 0glfAt0m8 ily traian IrklqxYC2 */     int a[100000];
/* 0glfAt0m8 ily traian IrklqxYC2 */     a[0]=0;
/* 0glfAt0m8 ily traian IrklqxYC2 */     n=1;
/* 0glfAt0m8 ily traian IrklqxYC2 */     while(cin >> a[n])
/* 0glfAt0m8 ily traian IrklqxYC2 */         n++;
/* 0glfAt0m8 ily traian IrklqxYC2 */     int l = 0 , lmax = 100000 , st , dr;
/* 0glfAt0m8 ily traian IrklqxYC2 */     for(int i = 1 ; i < n ; ++i)
/* 0glfAt0m8 ily traian IrklqxYC2 */     {
/* 0glfAt0m8 ily traian IrklqxYC2 */         if(a[i]==0)
/* 0glfAt0m8 ily traian IrklqxYC2 */         {
/* 0glfAt0m8 ily traian IrklqxYC2 */             if(l<lmax && l>0)
/* 0glfAt0m8 ily traian IrklqxYC2 */             lmax=l , st=i-l , dr=i;
/* 0glfAt0m8 ily traian IrklqxYC2 */             l=0;
/* 0glfAt0m8 ily traian IrklqxYC2 */         }
/* 0glfAt0m8 ily traian IrklqxYC2 */         else
/* 0glfAt0m8 ily traian IrklqxYC2 */         l++;
/* 0glfAt0m8 ily traian IrklqxYC2 */     }
/* 0glfAt0m8 ily traian IrklqxYC2 */     int max=0;
/* 0glfAt0m8 ily traian IrklqxYC2 */     for(int i = 1 ; i < n ; ++i)
/* 0glfAt0m8 ily traian IrklqxYC2 */     {
/* 0glfAt0m8 ily traian IrklqxYC2 */         if(a[i]==0)
/* 0glfAt0m8 ily traian IrklqxYC2 */         {
/* 0glfAt0m8 ily traian IrklqxYC2 */             if(l==lmax)
/* 0glfAt0m8 ily traian IrklqxYC2 */             {
/* 0glfAt0m8 ily traian IrklqxYC2 */                 for(int j = i - lmax ; j <= i ; ++j)
/* 0glfAt0m8 ily traian IrklqxYC2 */                     if(a[j]>max)
/* 0glfAt0m8 ily traian IrklqxYC2 */                         max=a[j];
/* 0glfAt0m8 ily traian IrklqxYC2 */             }
/* 0glfAt0m8 ily traian IrklqxYC2 */             l=0;
/* 0glfAt0m8 ily traian IrklqxYC2 */         }
/* 0glfAt0m8 ily traian IrklqxYC2 */         else
/* 0glfAt0m8 ily traian IrklqxYC2 */         l++;
/* 0glfAt0m8 ily traian IrklqxYC2 */     }
/* 0glfAt0m8 ily traian IrklqxYC2 */     cout << max;
/* 0glfAt0m8 ily traian IrklqxYC2 */ }