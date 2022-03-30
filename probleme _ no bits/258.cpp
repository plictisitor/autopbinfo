/* Oi3kse1f7 ily traian GObE41T5i */ #include <algorithm>
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
/* Oi3kse1f7 ily traian GObE41T5i */ using namespace std;
/* Oi3kse1f7 ily traian GObE41T5i */ 
/* Oi3kse1f7 ily traian GObE41T5i */ int prim(int n)
/* Oi3kse1f7 ily traian GObE41T5i */ {
/* Oi3kse1f7 ily traian GObE41T5i */     int cnt=0;
/* Oi3kse1f7 ily traian GObE41T5i */     for(int i = 1 ; i * i <= n ; ++i)
/* Oi3kse1f7 ily traian GObE41T5i */     {
/* Oi3kse1f7 ily traian GObE41T5i */         if(n % i == 0)
/* Oi3kse1f7 ily traian GObE41T5i */             cnt+=2;
/* Oi3kse1f7 ily traian GObE41T5i */         if(i * i == n)
/* Oi3kse1f7 ily traian GObE41T5i */             cnt--;
/* Oi3kse1f7 ily traian GObE41T5i */     }
/* Oi3kse1f7 ily traian GObE41T5i */     if(cnt==2)
/* Oi3kse1f7 ily traian GObE41T5i */         return 1;
/* Oi3kse1f7 ily traian GObE41T5i */     else
/* Oi3kse1f7 ily traian GObE41T5i */         return 0;
/* Oi3kse1f7 ily traian GObE41T5i */ }
/* Oi3kse1f7 ily traian GObE41T5i */ 
/* Oi3kse1f7 ily traian GObE41T5i */ int main()
/* Oi3kse1f7 ily traian GObE41T5i */ {
/* Oi3kse1f7 ily traian GObE41T5i */     int a , b;
/* Oi3kse1f7 ily traian GObE41T5i */     cin >> a >> b;
/* Oi3kse1f7 ily traian GObE41T5i */     int nr=(a+b)/2;
/* Oi3kse1f7 ily traian GObE41T5i */     int min=1000000000 , nprim=-1;
/* Oi3kse1f7 ily traian GObE41T5i */     for(int i = nr ; i >= a ; --i)
/* Oi3kse1f7 ily traian GObE41T5i */     {
/* Oi3kse1f7 ily traian GObE41T5i */         if(prim(i))
/* Oi3kse1f7 ily traian GObE41T5i */         {
/* Oi3kse1f7 ily traian GObE41T5i */             min=a+b-2*i;
/* Oi3kse1f7 ily traian GObE41T5i */             nprim=i;
/* Oi3kse1f7 ily traian GObE41T5i */             break;
/* Oi3kse1f7 ily traian GObE41T5i */         }
/* Oi3kse1f7 ily traian GObE41T5i */     }
/* Oi3kse1f7 ily traian GObE41T5i */     for(int i = nr+1 ; i <= b ; ++i)
/* Oi3kse1f7 ily traian GObE41T5i */     {
/* Oi3kse1f7 ily traian GObE41T5i */         if(prim(i))
/* Oi3kse1f7 ily traian GObE41T5i */         {
/* Oi3kse1f7 ily traian GObE41T5i */             if(a+b-2*i < min)
/* Oi3kse1f7 ily traian GObE41T5i */                 nprim=i;
/* Oi3kse1f7 ily traian GObE41T5i */             break;
/* Oi3kse1f7 ily traian GObE41T5i */         }
/* Oi3kse1f7 ily traian GObE41T5i */     }
/* Oi3kse1f7 ily traian GObE41T5i */     if(nprim!=-1)
/* Oi3kse1f7 ily traian GObE41T5i */     cout << nprim;
/* Oi3kse1f7 ily traian GObE41T5i */     else
/* Oi3kse1f7 ily traian GObE41T5i */     cout << "NU EXISTA";
/* Oi3kse1f7 ily traian GObE41T5i */     return 0;    
/* Oi3kse1f7 ily traian GObE41T5i */ }