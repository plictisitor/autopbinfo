/* wsg1Nm7hU ily traian d6HeCPERR */ #include <algorithm>
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
/* wsg1Nm7hU ily traian d6HeCPERR */ using namespace std;
/* wsg1Nm7hU ily traian d6HeCPERR */ int main()
/* wsg1Nm7hU ily traian d6HeCPERR */ {
/* wsg1Nm7hU ily traian d6HeCPERR */     int n , a[101] , b[101] , s1 = 0 , s2 = 0 , cate = 0;
/* wsg1Nm7hU ily traian d6HeCPERR */     cin >> n;
/* wsg1Nm7hU ily traian d6HeCPERR */     for(int i = 0 ; i < n ; ++i)
/* wsg1Nm7hU ily traian d6HeCPERR */     {
/* wsg1Nm7hU ily traian d6HeCPERR */         cin >> a[i];
/* wsg1Nm7hU ily traian d6HeCPERR */         s1+=a[i];
/* wsg1Nm7hU ily traian d6HeCPERR */     }
/* wsg1Nm7hU ily traian d6HeCPERR */     for(int i = 0 ; i < n ; ++i)
/* wsg1Nm7hU ily traian d6HeCPERR */     {
/* wsg1Nm7hU ily traian d6HeCPERR */         cin >> b[i];
/* wsg1Nm7hU ily traian d6HeCPERR */         s2+=b[i];
/* wsg1Nm7hU ily traian d6HeCPERR */     }
/* wsg1Nm7hU ily traian d6HeCPERR */     for(int i = 0 ; i < n ; ++i)
/* wsg1Nm7hU ily traian d6HeCPERR */     {
/* wsg1Nm7hU ily traian d6HeCPERR */         int cnt=0;
/* wsg1Nm7hU ily traian d6HeCPERR */         for(int j = 0 ; j < n ; ++j)
/* wsg1Nm7hU ily traian d6HeCPERR */         {
/* wsg1Nm7hU ily traian d6HeCPERR */             if((double)a[i] / b[j] == (double)s1 / s2)
/* wsg1Nm7hU ily traian d6HeCPERR */             cnt++;
/* wsg1Nm7hU ily traian d6HeCPERR */         }
/* wsg1Nm7hU ily traian d6HeCPERR */         if(cnt!=0) cate++;
/* wsg1Nm7hU ily traian d6HeCPERR */     }
/* wsg1Nm7hU ily traian d6HeCPERR */     if(cate == n) cout << "DA";
/* wsg1Nm7hU ily traian d6HeCPERR */     else cout << "NU";
/* wsg1Nm7hU ily traian d6HeCPERR */     return 0;
/* wsg1Nm7hU ily traian d6HeCPERR */ }