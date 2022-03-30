/* qsbHjYUvq ily traian UTCekKNFw */ #include <algorithm>
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
/* qsbHjYUvq ily traian UTCekKNFw */ using namespace std;
/* qsbHjYUvq ily traian UTCekKNFw */ 
/* qsbHjYUvq ily traian UTCekKNFw */ int E[100001], c, n;
/* qsbHjYUvq ily traian UTCekKNFw */ bool e[1000001], B[1000001];
/* qsbHjYUvq ily traian UTCekKNFw */ int x = 1000001;
/* qsbHjYUvq ily traian UTCekKNFw */ 
/* qsbHjYUvq ily traian UTCekKNFw */ void eratostene(){
/* qsbHjYUvq ily traian UTCekKNFw */     e[0] = e[1] = 1;
/* qsbHjYUvq ily traian UTCekKNFw */     for(int i = 2 ; i * i <= x ; ++i)
/* qsbHjYUvq ily traian UTCekKNFw */         for(int j = 2 ; i * j <= x ; ++j)
/* qsbHjYUvq ily traian UTCekKNFw */             e[i * j] = 1;
/* qsbHjYUvq ily traian UTCekKNFw */     for(int i = 1; i <= 1000000; ++i)
/* qsbHjYUvq ily traian UTCekKNFw */         if(!e[i])
/* qsbHjYUvq ily traian UTCekKNFw */             E[++c] = i;
/* qsbHjYUvq ily traian UTCekKNFw */     for(int i = 1; i < c; ++i)
/* qsbHjYUvq ily traian UTCekKNFw */         for(int j = 1; j <= c; ++j)
/* qsbHjYUvq ily traian UTCekKNFw */             if(1LL * E[i] * E[j] < 1000001)
/* qsbHjYUvq ily traian UTCekKNFw */                 B[E[i] * E[j]] = 1;
/* qsbHjYUvq ily traian UTCekKNFw */             else i++, j=1;
/* qsbHjYUvq ily traian UTCekKNFw */     for(int i = 1; n != 0; ++i){
/* qsbHjYUvq ily traian UTCekKNFw */         if(B[i] == 1){
/* qsbHjYUvq ily traian UTCekKNFw */             n--;
/* qsbHjYUvq ily traian UTCekKNFw */             if(n==0){
/* qsbHjYUvq ily traian UTCekKNFw */                 cout << i;
/* qsbHjYUvq ily traian UTCekKNFw */                 return;
/* qsbHjYUvq ily traian UTCekKNFw */             }
/* qsbHjYUvq ily traian UTCekKNFw */         }
/* qsbHjYUvq ily traian UTCekKNFw */     }
/* qsbHjYUvq ily traian UTCekKNFw */ }
/* qsbHjYUvq ily traian UTCekKNFw */ 
/* qsbHjYUvq ily traian UTCekKNFw */ int main(){
/* qsbHjYUvq ily traian UTCekKNFw */     cin >> n;
/* qsbHjYUvq ily traian UTCekKNFw */     eratostene();
/* qsbHjYUvq ily traian UTCekKNFw */ }