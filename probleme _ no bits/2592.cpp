/* CKpjg8gel ily traian wXrnprD9e */ #include <algorithm>
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
/* CKpjg8gel ily traian wXrnprD9e */ using namespace std;
/* CKpjg8gel ily traian wXrnprD9e */ 
/* CKpjg8gel ily traian wXrnprD9e */ char m[11][1001];
/* CKpjg8gel ily traian wXrnprD9e */ int v[11];
/* CKpjg8gel ily traian wXrnprD9e */ 
/* CKpjg8gel ily traian wXrnprD9e */ int main()
/* CKpjg8gel ily traian wXrnprD9e */ {
/* CKpjg8gel ily traian wXrnprD9e */     int n , cnt=0;
/* CKpjg8gel ily traian wXrnprD9e */     cin >> n;
/* CKpjg8gel ily traian wXrnprD9e */     cin.getline(m[0] , 1001);
/* CKpjg8gel ily traian wXrnprD9e */     for(int i = 1 ; i <= n ; ++i)
/* CKpjg8gel ily traian wXrnprD9e */         cin.getline(m[i] , 1001);
/* CKpjg8gel ily traian wXrnprD9e */     for(int i = 1 ; i <= n ; ++i)
/* CKpjg8gel ily traian wXrnprD9e */     {
/* CKpjg8gel ily traian wXrnprD9e */         int j = 0;
/* CKpjg8gel ily traian wXrnprD9e */         while(m[i][j]!='\0')
/* CKpjg8gel ily traian wXrnprD9e */         {
/* CKpjg8gel ily traian wXrnprD9e */             if(m[i][j]==' ' && m[i][j+1]!=' ')
/* CKpjg8gel ily traian wXrnprD9e */                 cnt++;
/* CKpjg8gel ily traian wXrnprD9e */             j++;
/* CKpjg8gel ily traian wXrnprD9e */         }
/* CKpjg8gel ily traian wXrnprD9e */         cnt++;
/* CKpjg8gel ily traian wXrnprD9e */     }
/* CKpjg8gel ily traian wXrnprD9e */     while(cnt)
/* CKpjg8gel ily traian wXrnprD9e */     for(int i = 1 ; i <= n; ++i)
/* CKpjg8gel ily traian wXrnprD9e */     {
/* CKpjg8gel ily traian wXrnprD9e */         bool ok=false;
/* CKpjg8gel ily traian wXrnprD9e */         while(m[i][v[i]]!=' ' && m[i][v[i]]!='\0')
/* CKpjg8gel ily traian wXrnprD9e */             cout << m[i][v[i]], v[i]++ , ok=true;
/* CKpjg8gel ily traian wXrnprD9e */         if(ok)
/* CKpjg8gel ily traian wXrnprD9e */             cout << ' ' , cnt--;
/* CKpjg8gel ily traian wXrnprD9e */         v[i]++;
/* CKpjg8gel ily traian wXrnprD9e */     }
/* CKpjg8gel ily traian wXrnprD9e */     return 0;
/* CKpjg8gel ily traian wXrnprD9e */ }