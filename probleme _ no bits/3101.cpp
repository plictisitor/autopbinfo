/* GV0FSz2VC ily traian z2VqnpGtJ */ #include <algorithm>
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
/* GV0FSz2VC ily traian z2VqnpGtJ */ 
/* GV0FSz2VC ily traian z2VqnpGtJ */ using namespace std;
/* GV0FSz2VC ily traian z2VqnpGtJ */ 
/* GV0FSz2VC ily traian z2VqnpGtJ */ ifstream cin("xorcrypt.in");
/* GV0FSz2VC ily traian z2VqnpGtJ */ ofstream cout("xorcrypt.out");
/* GV0FSz2VC ily traian z2VqnpGtJ */ 
/* GV0FSz2VC ily traian z2VqnpGtJ */ char a[256] , b[256] , rez[8];
/* GV0FSz2VC ily traian z2VqnpGtJ */ int n , x , y;
/* GV0FSz2VC ily traian z2VqnpGtJ */ 
/* GV0FSz2VC ily traian z2VqnpGtJ */ void schimb(int n)
/* GV0FSz2VC ily traian z2VqnpGtJ */ {
/* GV0FSz2VC ily traian z2VqnpGtJ */     for(int i = 0 ; i < 8 ; i++)
/* GV0FSz2VC ily traian z2VqnpGtJ */         rez[i] = '0';
/* GV0FSz2VC ily traian z2VqnpGtJ */ 
/* GV0FSz2VC ily traian z2VqnpGtJ */     int ind = 7;
/* GV0FSz2VC ily traian z2VqnpGtJ */     while(n != 0)
/* GV0FSz2VC ily traian z2VqnpGtJ */     {
/* GV0FSz2VC ily traian z2VqnpGtJ */         rez[ind] = n % 2 + '0';
/* GV0FSz2VC ily traian z2VqnpGtJ */         ind--;
/* GV0FSz2VC ily traian z2VqnpGtJ */         n /= 2;
/* GV0FSz2VC ily traian z2VqnpGtJ */     }
/* GV0FSz2VC ily traian z2VqnpGtJ */     cout << rez << " ";
/* GV0FSz2VC ily traian z2VqnpGtJ */ }
/* GV0FSz2VC ily traian z2VqnpGtJ */ 
/* GV0FSz2VC ily traian z2VqnpGtJ */ int main()
/* GV0FSz2VC ily traian z2VqnpGtJ */ {
/* GV0FSz2VC ily traian z2VqnpGtJ */     cin.getline(a , 260);
/* GV0FSz2VC ily traian z2VqnpGtJ */     cin.getline(b , 260);
/* GV0FSz2VC ily traian z2VqnpGtJ */     n = strlen(a);
/* GV0FSz2VC ily traian z2VqnpGtJ */     for(int i = 0 ; i < n ; i++)
/* GV0FSz2VC ily traian z2VqnpGtJ */     {
/* GV0FSz2VC ily traian z2VqnpGtJ */         x = int(a[i]) , y = int(b[i]);
/* GV0FSz2VC ily traian z2VqnpGtJ */         schimb(x^y);
/* GV0FSz2VC ily traian z2VqnpGtJ */     }
/* GV0FSz2VC ily traian z2VqnpGtJ */     return 0;
/* GV0FSz2VC ily traian z2VqnpGtJ */ }