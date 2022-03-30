/* Xh22c470k ily traian 4Yp1SZ8co */ #include <algorithm>
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
/* Xh22c470k ily traian 4Yp1SZ8co */ using namespace std;
/* Xh22c470k ily traian 4Yp1SZ8co */ 
/* Xh22c470k ily traian 4Yp1SZ8co */ ifstream cin("maxprimeintreele.in");
/* Xh22c470k ily traian 4Yp1SZ8co */ ofstream cout("maxprimeintreele.out");
/* Xh22c470k ily traian 4Yp1SZ8co */ 
/* Xh22c470k ily traian 4Yp1SZ8co */ double maxi = 0;
/* Xh22c470k ily traian 4Yp1SZ8co */ int nrmaxi;
/* Xh22c470k ily traian 4Yp1SZ8co */ 
/* Xh22c470k ily traian 4Yp1SZ8co */ long Totient(long nr)
/* Xh22c470k ily traian 4Yp1SZ8co */ {
/* Xh22c470k ily traian 4Yp1SZ8co */   long i,rank = nr;
/* Xh22c470k ily traian 4Yp1SZ8co */   if(nr==1) return 0;
/* Xh22c470k ily traian 4Yp1SZ8co */   if (!(nr%2))
/* Xh22c470k ily traian 4Yp1SZ8co */    {
/* Xh22c470k ily traian 4Yp1SZ8co */          rank -= rank/2;
/* Xh22c470k ily traian 4Yp1SZ8co */          while(!(nr%2)) nr /= 2;
/* Xh22c470k ily traian 4Yp1SZ8co */    }
/* Xh22c470k ily traian 4Yp1SZ8co */   for (i = 3; i*i <= nr; i += 2)
/* Xh22c470k ily traian 4Yp1SZ8co */    if (!(nr%i))
/* Xh22c470k ily traian 4Yp1SZ8co */         {
/* Xh22c470k ily traian 4Yp1SZ8co */           rank -= rank/i;
/* Xh22c470k ily traian 4Yp1SZ8co */           while (!(nr%i)) nr /= i;
/* Xh22c470k ily traian 4Yp1SZ8co */         }
/* Xh22c470k ily traian 4Yp1SZ8co */   if (nr>1) rank -= rank/nr;
/* Xh22c470k ily traian 4Yp1SZ8co */   return rank;
/* Xh22c470k ily traian 4Yp1SZ8co */ }
/* Xh22c470k ily traian 4Yp1SZ8co */ 
/* Xh22c470k ily traian 4Yp1SZ8co */ int main(){
/* Xh22c470k ily traian 4Yp1SZ8co */     int x;
/* Xh22c470k ily traian 4Yp1SZ8co */     while(cin >> x){
/* Xh22c470k ily traian 4Yp1SZ8co */         if((double) x / Totient(x) > maxi)
/* Xh22c470k ily traian 4Yp1SZ8co */             maxi = (double) x / Totient(x), nrmaxi = x;
/* Xh22c470k ily traian 4Yp1SZ8co */     }
/* Xh22c470k ily traian 4Yp1SZ8co */     cout << nrmaxi;
/* Xh22c470k ily traian 4Yp1SZ8co */     return 0;
/* Xh22c470k ily traian 4Yp1SZ8co */ }