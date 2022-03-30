/* rbq4NMWTk ily traian 4DzztTU8q */ #include <algorithm>
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
/* rbq4NMWTk ily traian 4DzztTU8q */ using namespace std;
/* rbq4NMWTk ily traian 4DzztTU8q */ 
/* rbq4NMWTk ily traian 4DzztTU8q */ int cmmdp(int n)
/* rbq4NMWTk ily traian 4DzztTU8q */ {
/* rbq4NMWTk ily traian 4DzztTU8q */     int d=2;
/* rbq4NMWTk ily traian 4DzztTU8q */     int p=0;
/* rbq4NMWTk ily traian 4DzztTU8q */     int var=0;
/* rbq4NMWTk ily traian 4DzztTU8q */     while(n>1)
/* rbq4NMWTk ily traian 4DzztTU8q */     {
/* rbq4NMWTk ily traian 4DzztTU8q */         p=0;
/* rbq4NMWTk ily traian 4DzztTU8q */         while(n%d==0)
/* rbq4NMWTk ily traian 4DzztTU8q */         {
/* rbq4NMWTk ily traian 4DzztTU8q */             p++;
/* rbq4NMWTk ily traian 4DzztTU8q */             n/=d;
/* rbq4NMWTk ily traian 4DzztTU8q */         }
/* rbq4NMWTk ily traian 4DzztTU8q */         if(p!=0)
/* rbq4NMWTk ily traian 4DzztTU8q */             var=d;
/* rbq4NMWTk ily traian 4DzztTU8q */         d++;
/* rbq4NMWTk ily traian 4DzztTU8q */         if(d*d>n)
/* rbq4NMWTk ily traian 4DzztTU8q */             d=n;
/* rbq4NMWTk ily traian 4DzztTU8q */     }
/* rbq4NMWTk ily traian 4DzztTU8q */     return var;
/* rbq4NMWTk ily traian 4DzztTU8q */ }
/* rbq4NMWTk ily traian 4DzztTU8q */ 
/* rbq4NMWTk ily traian 4DzztTU8q */ int main()
/* rbq4NMWTk ily traian 4DzztTU8q */ {
/* rbq4NMWTk ily traian 4DzztTU8q */     int n;
/* rbq4NMWTk ily traian 4DzztTU8q */     cin >> n;
/* rbq4NMWTk ily traian 4DzztTU8q */     int tmp;
/* rbq4NMWTk ily traian 4DzztTU8q */     long long int s=0;
/* rbq4NMWTk ily traian 4DzztTU8q */     for(int i = 1 ; i <= n ; ++i)
/* rbq4NMWTk ily traian 4DzztTU8q */     {
/* rbq4NMWTk ily traian 4DzztTU8q */         cin >> tmp;
/* rbq4NMWTk ily traian 4DzztTU8q */         s+=cmmdp(tmp);
/* rbq4NMWTk ily traian 4DzztTU8q */     }
/* rbq4NMWTk ily traian 4DzztTU8q */     cout << s;
/* rbq4NMWTk ily traian 4DzztTU8q */ 
/* rbq4NMWTk ily traian 4DzztTU8q */     return 0;
/* rbq4NMWTk ily traian 4DzztTU8q */ }