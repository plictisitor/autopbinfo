/* 42UbamUnq ily traian 8TlYVUqWe */ #include <algorithm>
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
/* 42UbamUnq ily traian 8TlYVUqWe */ using namespace std;
/* 42UbamUnq ily traian 8TlYVUqWe */ 
/* 42UbamUnq ily traian 8TlYVUqWe */ ifstream cin("multimi2.in");
/* 42UbamUnq ily traian 8TlYVUqWe */ ofstream cout("multimi2.out");
/* 42UbamUnq ily traian 8TlYVUqWe */ 
/* 42UbamUnq ily traian 8TlYVUqWe */ int main()
/* 42UbamUnq ily traian 8TlYVUqWe */ {
/* 42UbamUnq ily traian 8TlYVUqWe */     int c , s1 , c1 , s2 , c2;
/* 42UbamUnq ily traian 8TlYVUqWe */     cin >> c >> c1 >> s1 >> c2 >> s2;
/* 42UbamUnq ily traian 8TlYVUqWe */     if(c==1)
/* 42UbamUnq ily traian 8TlYVUqWe */     {
/* 42UbamUnq ily traian 8TlYVUqWe */         if(s1 > s2)
/* 42UbamUnq ily traian 8TlYVUqWe */             swap(s1 , s2) , swap(c1 , c2);
/* 42UbamUnq ily traian 8TlYVUqWe */         if(s1 + c1 <= s2)
/* 42UbamUnq ily traian 8TlYVUqWe */         {
/* 42UbamUnq ily traian 8TlYVUqWe */             for(int i = s1 ; i < s1+c1 ; ++i)
/* 42UbamUnq ily traian 8TlYVUqWe */                 cout << i << ' ';
/* 42UbamUnq ily traian 8TlYVUqWe */             for(int i = s2 ; i < s2+c2 ; ++i)
/* 42UbamUnq ily traian 8TlYVUqWe */                 cout << i << ' ';
/* 42UbamUnq ily traian 8TlYVUqWe */         }
/* 42UbamUnq ily traian 8TlYVUqWe */         else
/* 42UbamUnq ily traian 8TlYVUqWe */             for(int i = s1 ; i < max(s1 + c1 , s2 + c2) ; ++i)
/* 42UbamUnq ily traian 8TlYVUqWe */                 cout << i << ' ';
/* 42UbamUnq ily traian 8TlYVUqWe */     }
/* 42UbamUnq ily traian 8TlYVUqWe */     else
/* 42UbamUnq ily traian 8TlYVUqWe */     {
/* 42UbamUnq ily traian 8TlYVUqWe */         if(s1 > s2)
/* 42UbamUnq ily traian 8TlYVUqWe */             swap(s1 , s2) , swap(c1 , c2);
/* 42UbamUnq ily traian 8TlYVUqWe */         if(s1+c1 <= s2)
/* 42UbamUnq ily traian 8TlYVUqWe */             cout << -1;
/* 42UbamUnq ily traian 8TlYVUqWe */         else
/* 42UbamUnq ily traian 8TlYVUqWe */             for(int i = s2 ; i < min(s1+c1 , s2+c2) ; ++i)
/* 42UbamUnq ily traian 8TlYVUqWe */                 cout << i << ' ';
/* 42UbamUnq ily traian 8TlYVUqWe */     }
/* 42UbamUnq ily traian 8TlYVUqWe */     
/* 42UbamUnq ily traian 8TlYVUqWe */     cin.close();
/* 42UbamUnq ily traian 8TlYVUqWe */     cout.close();
/* 42UbamUnq ily traian 8TlYVUqWe */     
/* 42UbamUnq ily traian 8TlYVUqWe */     return 0;    
/* 42UbamUnq ily traian 8TlYVUqWe */ }