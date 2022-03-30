/* ZWo1hyxz1 ily traian 0HlThhqX0 */ #include <algorithm>
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
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ 
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ using namespace std;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ 
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ ifstream cin("convert_submatrix.in");
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ ofstream cout("convert_submatrix.out");
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ 
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ char s[101];
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ int m[101][10], maxi = 1;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ 
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ bool inmat(int i, int j){
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     return i < strlen(s) && j <= 8;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ }
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ 
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ int ok(int i1, int j1, int i2, int j2){
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     int cnt = 0;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     if(i2-i1 == j2-j1 && inmat(i2,j2)){
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         for(int i = i1; i <= i2; ++i)
/* ZWo1hyxz1 ily traian 0HlThhqX0 */             for(int j = j1; j <= j2; ++j)
/* ZWo1hyxz1 ily traian 0HlThhqX0 */                 cnt+=m[i][j];
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         if(cnt == 0 || cnt == (i2-i1+1)*(j2-j1+1))
/* ZWo1hyxz1 ily traian 0HlThhqX0 */             return i2-i1+1;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     }
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     return -1;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ }
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ 
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ int main(){
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     cin.getline(s, 101);
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     int i = 0;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     while(s[i]){
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         int x = s[i];
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         int j = 8;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         while(x){
/* ZWo1hyxz1 ily traian 0HlThhqX0 */             m[i][j--] = x % 2;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */             x/=2;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         }
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         i++;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     }
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     for(int i = 0; i < strlen(s); ++i)
/* ZWo1hyxz1 ily traian 0HlThhqX0 */         for(int j = 1; j <= 8; ++j)
/* ZWo1hyxz1 ily traian 0HlThhqX0 */             for(int t = 0; t <= 7; ++t)
/* ZWo1hyxz1 ily traian 0HlThhqX0 */                     maxi = max(ok(i,j,i+t,j+t), maxi);
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     cout << maxi;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */     return 0;
/* ZWo1hyxz1 ily traian 0HlThhqX0 */ }