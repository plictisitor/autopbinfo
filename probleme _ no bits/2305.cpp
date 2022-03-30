/* C8QM1gNfF ily traian HnOYWUnLX */ #include <algorithm>
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
/* C8QM1gNfF ily traian HnOYWUnLX */ using namespace std;
/* C8QM1gNfF ily traian HnOYWUnLX */ 
/* C8QM1gNfF ily traian HnOYWUnLX */ int ogl(int n)
/* C8QM1gNfF ily traian HnOYWUnLX */ {
/* C8QM1gNfF ily traian HnOYWUnLX */     int ogl=0;
/* C8QM1gNfF ily traian HnOYWUnLX */     while(n)
/* C8QM1gNfF ily traian HnOYWUnLX */     {
/* C8QM1gNfF ily traian HnOYWUnLX */         ogl=ogl*10 + n%10;
/* C8QM1gNfF ily traian HnOYWUnLX */         n/=10;
/* C8QM1gNfF ily traian HnOYWUnLX */     }
/* C8QM1gNfF ily traian HnOYWUnLX */     return ogl;
/* C8QM1gNfF ily traian HnOYWUnLX */ }
/* C8QM1gNfF ily traian HnOYWUnLX */ 
/* C8QM1gNfF ily traian HnOYWUnLX */ int pie(int a , int b)
/* C8QM1gNfF ily traian HnOYWUnLX */ {
/* C8QM1gNfF ily traian HnOYWUnLX */     int r;
/* C8QM1gNfF ily traian HnOYWUnLX */     while(b)
/* C8QM1gNfF ily traian HnOYWUnLX */     {
/* C8QM1gNfF ily traian HnOYWUnLX */         r=a%b;
/* C8QM1gNfF ily traian HnOYWUnLX */         a=b;
/* C8QM1gNfF ily traian HnOYWUnLX */         b=r;
/* C8QM1gNfF ily traian HnOYWUnLX */     }
/* C8QM1gNfF ily traian HnOYWUnLX */     if(a==1)
/* C8QM1gNfF ily traian HnOYWUnLX */         return 1;
/* C8QM1gNfF ily traian HnOYWUnLX */     else
/* C8QM1gNfF ily traian HnOYWUnLX */         return 0;
/* C8QM1gNfF ily traian HnOYWUnLX */ }
/* C8QM1gNfF ily traian HnOYWUnLX */ 
/* C8QM1gNfF ily traian HnOYWUnLX */ int main()
/* C8QM1gNfF ily traian HnOYWUnLX */ {
/* C8QM1gNfF ily traian HnOYWUnLX */     int a, b;
/* C8QM1gNfF ily traian HnOYWUnLX */     cin >> a;
/* C8QM1gNfF ily traian HnOYWUnLX */     cin >> b;
/* C8QM1gNfF ily traian HnOYWUnLX */     int s=0;
/* C8QM1gNfF ily traian HnOYWUnLX */     while(a!=0 || b!=0)
/* C8QM1gNfF ily traian HnOYWUnLX */     {
/* C8QM1gNfF ily traian HnOYWUnLX */         if(pie(a,b) && pie(ogl(a), ogl(b)))
/* C8QM1gNfF ily traian HnOYWUnLX */             s+=a+b;
/* C8QM1gNfF ily traian HnOYWUnLX */             cin >> a >> b;
/* C8QM1gNfF ily traian HnOYWUnLX */     }
/* C8QM1gNfF ily traian HnOYWUnLX */     cout << s;
/* C8QM1gNfF ily traian HnOYWUnLX */ 
/* C8QM1gNfF ily traian HnOYWUnLX */     return 0;
/* C8QM1gNfF ily traian HnOYWUnLX */ }