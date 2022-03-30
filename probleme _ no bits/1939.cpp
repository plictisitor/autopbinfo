/* NaIBsyjx3 ily traian mAcYwWPDB */ #include <algorithm>
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
/* NaIBsyjx3 ily traian mAcYwWPDB */ using namespace std;
/* NaIBsyjx3 ily traian mAcYwWPDB */ 
/* NaIBsyjx3 ily traian mAcYwWPDB */ ifstream cin("bare.in");
/* NaIBsyjx3 ily traian mAcYwWPDB */ ofstream cout("bare.out");
/* NaIBsyjx3 ily traian mAcYwWPDB */ 
/* NaIBsyjx3 ily traian mAcYwWPDB */ int main()
/* NaIBsyjx3 ily traian mAcYwWPDB */ {
/* NaIBsyjx3 ily traian mAcYwWPDB */     int n , m , q;
/* NaIBsyjx3 ily traian mAcYwWPDB */     cin >> n >> m >> q;
/* NaIBsyjx3 ily traian mAcYwWPDB */     int x , y;
/* NaIBsyjx3 ily traian mAcYwWPDB */     char ch;
/* NaIBsyjx3 ily traian mAcYwWPDB */     int cntv = 0 , cnto = 0;
/* NaIBsyjx3 ily traian mAcYwWPDB */     for(int i = 1 ; i <= q ; ++i)
/* NaIBsyjx3 ily traian mAcYwWPDB */     {
/* NaIBsyjx3 ily traian mAcYwWPDB */         cin >> x >> y >> ch;
/* NaIBsyjx3 ily traian mAcYwWPDB */         if(ch == 'V')
/* NaIBsyjx3 ily traian mAcYwWPDB */             cntv++;
/* NaIBsyjx3 ily traian mAcYwWPDB */         else
/* NaIBsyjx3 ily traian mAcYwWPDB */             cnto++;
/* NaIBsyjx3 ily traian mAcYwWPDB */     }
/* NaIBsyjx3 ily traian mAcYwWPDB */     if(cntv < cnto)
/* NaIBsyjx3 ily traian mAcYwWPDB */         cout << 2*cntv + cnto;
/* NaIBsyjx3 ily traian mAcYwWPDB */     else
/* NaIBsyjx3 ily traian mAcYwWPDB */         cout << 2*cnto + cntv;
/* NaIBsyjx3 ily traian mAcYwWPDB */     return 0;
/* NaIBsyjx3 ily traian mAcYwWPDB */ }