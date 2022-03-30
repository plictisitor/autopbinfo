/* bTjZ21rad ily traian xu9KM52I6 */ #include <algorithm>
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
/* bTjZ21rad ily traian xu9KM52I6 */ using namespace std;
/* bTjZ21rad ily traian xu9KM52I6 */ 
/* bTjZ21rad ily traian xu9KM52I6 */ ifstream cin("muzical.in");
/* bTjZ21rad ily traian xu9KM52I6 */ ofstream cout("muzical.out");
/* bTjZ21rad ily traian xu9KM52I6 */ 
/* bTjZ21rad ily traian xu9KM52I6 */ int main()
/* bTjZ21rad ily traian xu9KM52I6 */ {
/* bTjZ21rad ily traian xu9KM52I6 */     char ch1 , ch2 , ch3;
/* bTjZ21rad ily traian xu9KM52I6 */     int n;
/* bTjZ21rad ily traian xu9KM52I6 */     cin >> n;
/* bTjZ21rad ily traian xu9KM52I6 */     int s=0;
/* bTjZ21rad ily traian xu9KM52I6 */     for(int i = 0 ; i < n ; ++i)
/* bTjZ21rad ily traian xu9KM52I6 */     {
/* bTjZ21rad ily traian xu9KM52I6 */         cin >> ch1 >> ch2;
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='d' && ch2=='o')
/* bTjZ21rad ily traian xu9KM52I6 */         {
/* bTjZ21rad ily traian xu9KM52I6 */         cin >> ch3;
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch3=='1')
/* bTjZ21rad ily traian xu9KM52I6 */         s+=0;
/* bTjZ21rad ily traian xu9KM52I6 */         else
/* bTjZ21rad ily traian xu9KM52I6 */         s+=7;
/* bTjZ21rad ily traian xu9KM52I6 */         }
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='r' && ch2=='e')
/* bTjZ21rad ily traian xu9KM52I6 */         s+=1;
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='m' && ch2=='i')
/* bTjZ21rad ily traian xu9KM52I6 */         s+=2;
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='f' && ch2=='a')
/* bTjZ21rad ily traian xu9KM52I6 */         s+=3;
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='s' && ch2=='o')
/* bTjZ21rad ily traian xu9KM52I6 */         {
/* bTjZ21rad ily traian xu9KM52I6 */             cin >> ch3;
/* bTjZ21rad ily traian xu9KM52I6 */         s+=4;
/* bTjZ21rad ily traian xu9KM52I6 */         }
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='l' && ch2=='a')
/* bTjZ21rad ily traian xu9KM52I6 */         s+=5;
/* bTjZ21rad ily traian xu9KM52I6 */         if(ch1=='s' && ch2=='i')
/* bTjZ21rad ily traian xu9KM52I6 */         s+=6;
/* bTjZ21rad ily traian xu9KM52I6 */     }
/* bTjZ21rad ily traian xu9KM52I6 */     int m=s%8;
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==0)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "do1";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==1)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "re";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==2)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "mi";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==3)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "fa";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==4)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "sol";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==5)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "la";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==6)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "si";
/* bTjZ21rad ily traian xu9KM52I6 */     if(m==7)
/* bTjZ21rad ily traian xu9KM52I6 */         cout << "do2";
/* bTjZ21rad ily traian xu9KM52I6 */     return 0;    
/* bTjZ21rad ily traian xu9KM52I6 */ }