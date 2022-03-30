/* 2x4AB7f1Q ily traian niRJpcOx0 */ #include <algorithm>
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
/* 2x4AB7f1Q ily traian niRJpcOx0 */ using namespace std;
/* 2x4AB7f1Q ily traian niRJpcOx0 */ 
/* 2x4AB7f1Q ily traian niRJpcOx0 */ ifstream fin("subnumar.in");
/* 2x4AB7f1Q ily traian niRJpcOx0 */ ofstream fout("subnumar.out");
/* 2x4AB7f1Q ily traian niRJpcOx0 */ 
/* 2x4AB7f1Q ily traian niRJpcOx0 */ int main()
/* 2x4AB7f1Q ily traian niRJpcOx0 */ {
/* 2x4AB7f1Q ily traian niRJpcOx0 */     int f[100]={0};
/* 2x4AB7f1Q ily traian niRJpcOx0 */     int tmp=0;
/* 2x4AB7f1Q ily traian niRJpcOx0 */     while(fin >> tmp)
/* 2x4AB7f1Q ily traian niRJpcOx0 */     {
/* 2x4AB7f1Q ily traian niRJpcOx0 */         while(tmp>9)
/* 2x4AB7f1Q ily traian niRJpcOx0 */         {
/* 2x4AB7f1Q ily traian niRJpcOx0 */             f[tmp%100]++;
/* 2x4AB7f1Q ily traian niRJpcOx0 */             tmp/=10;
/* 2x4AB7f1Q ily traian niRJpcOx0 */         }
/* 2x4AB7f1Q ily traian niRJpcOx0 */     }
/* 2x4AB7f1Q ily traian niRJpcOx0 */     int max=0;
/* 2x4AB7f1Q ily traian niRJpcOx0 */     for(int i = 10 ; i < 99 ; ++i)
/* 2x4AB7f1Q ily traian niRJpcOx0 */     {
/* 2x4AB7f1Q ily traian niRJpcOx0 */         if(f[i]>max)
/* 2x4AB7f1Q ily traian niRJpcOx0 */         max=f[i];
/* 2x4AB7f1Q ily traian niRJpcOx0 */     }
/* 2x4AB7f1Q ily traian niRJpcOx0 */     for(int i = 99 ; i > 9 ; --i)
/* 2x4AB7f1Q ily traian niRJpcOx0 */     {
/* 2x4AB7f1Q ily traian niRJpcOx0 */         if(f[i]==max)
/* 2x4AB7f1Q ily traian niRJpcOx0 */         fout << i << ' ';
/* 2x4AB7f1Q ily traian niRJpcOx0 */     }
/* 2x4AB7f1Q ily traian niRJpcOx0 */     
/* 2x4AB7f1Q ily traian niRJpcOx0 */     fin.close();
/* 2x4AB7f1Q ily traian niRJpcOx0 */     fout.close();
/* 2x4AB7f1Q ily traian niRJpcOx0 */     
/* 2x4AB7f1Q ily traian niRJpcOx0 */     return 0;
/* 2x4AB7f1Q ily traian niRJpcOx0 */ }