/* 9Zgteb8jh ily traian jxlb9fAz0 */ #include <algorithm>
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
/* 9Zgteb8jh ily traian jxlb9fAz0 */ 
/* 9Zgteb8jh ily traian jxlb9fAz0 */ 
/* 9Zgteb8jh ily traian jxlb9fAz0 */ using namespace std;
/* 9Zgteb8jh ily traian jxlb9fAz0 */ 
/* 9Zgteb8jh ily traian jxlb9fAz0 */ int main()
/* 9Zgteb8jh ily traian jxlb9fAz0 */ {
/* 9Zgteb8jh ily traian jxlb9fAz0 */     long long int n;
/* 9Zgteb8jh ily traian jxlb9fAz0 */     cin >> n;
/* 9Zgteb8jh ily traian jxlb9fAz0 */     long long int s=0;
/* 9Zgteb8jh ily traian jxlb9fAz0 */     long long int d=2;
/* 9Zgteb8jh ily traian jxlb9fAz0 */     while(n>1)
/* 9Zgteb8jh ily traian jxlb9fAz0 */     {
/* 9Zgteb8jh ily traian jxlb9fAz0 */         int p = 0;
/* 9Zgteb8jh ily traian jxlb9fAz0 */         while(n%d==0)
/* 9Zgteb8jh ily traian jxlb9fAz0 */         {
/* 9Zgteb8jh ily traian jxlb9fAz0 */             n/=d;
/* 9Zgteb8jh ily traian jxlb9fAz0 */             p++;
/* 9Zgteb8jh ily traian jxlb9fAz0 */         }
/* 9Zgteb8jh ily traian jxlb9fAz0 */         if(p>0)
/* 9Zgteb8jh ily traian jxlb9fAz0 */         {
/* 9Zgteb8jh ily traian jxlb9fAz0 */             s+=d;
/* 9Zgteb8jh ily traian jxlb9fAz0 */         }
/* 9Zgteb8jh ily traian jxlb9fAz0 */         d++;
/* 9Zgteb8jh ily traian jxlb9fAz0 */         if(d*d>n)
/* 9Zgteb8jh ily traian jxlb9fAz0 */             d=n;
/* 9Zgteb8jh ily traian jxlb9fAz0 */     }
/* 9Zgteb8jh ily traian jxlb9fAz0 */     cout << s;
/* 9Zgteb8jh ily traian jxlb9fAz0 */     return 0;
/* 9Zgteb8jh ily traian jxlb9fAz0 */ }