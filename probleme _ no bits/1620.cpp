/* DRfLtUaZn ily traian 2L79zGnen */ #include <algorithm>
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
/* DRfLtUaZn ily traian 2L79zGnen */ 
/* DRfLtUaZn ily traian 2L79zGnen */ using namespace std;
/* DRfLtUaZn ily traian 2L79zGnen */ 
/* DRfLtUaZn ily traian 2L79zGnen */ ifstream cin("interesant.in");
/* DRfLtUaZn ily traian 2L79zGnen */ ofstream cout("interesant.out");
/* DRfLtUaZn ily traian 2L79zGnen */ 
/* DRfLtUaZn ily traian 2L79zGnen */ char m[201][5001];
/* DRfLtUaZn ily traian 2L79zGnen */ 
/* DRfLtUaZn ily traian 2L79zGnen */ bool subsir(char a[] , char b[])
/* DRfLtUaZn ily traian 2L79zGnen */ {
/* DRfLtUaZn ily traian 2L79zGnen */     if(strlen(a) > strlen(b))
/* DRfLtUaZn ily traian 2L79zGnen */         return 0;
/* DRfLtUaZn ily traian 2L79zGnen */     else
/* DRfLtUaZn ily traian 2L79zGnen */     {
/* DRfLtUaZn ily traian 2L79zGnen */         int i = 0;
/* DRfLtUaZn ily traian 2L79zGnen */         for(int j = 0 ; b[j] ; ++j)
/* DRfLtUaZn ily traian 2L79zGnen */         {
/* DRfLtUaZn ily traian 2L79zGnen */             if(a[i]==b[j])
/* DRfLtUaZn ily traian 2L79zGnen */                 i++;
/* DRfLtUaZn ily traian 2L79zGnen */             else if(strlen(a) - i > strlen(b) - j)
/* DRfLtUaZn ily traian 2L79zGnen */                     return 0;
/* DRfLtUaZn ily traian 2L79zGnen */         }
/* DRfLtUaZn ily traian 2L79zGnen */         if(i == strlen(a))
/* DRfLtUaZn ily traian 2L79zGnen */             return 1;
/* DRfLtUaZn ily traian 2L79zGnen */         return 0;
/* DRfLtUaZn ily traian 2L79zGnen */     }
/* DRfLtUaZn ily traian 2L79zGnen */ }
/* DRfLtUaZn ily traian 2L79zGnen */ 
/* DRfLtUaZn ily traian 2L79zGnen */ int main()
/* DRfLtUaZn ily traian 2L79zGnen */ {
/* DRfLtUaZn ily traian 2L79zGnen */     int t , n;
/* DRfLtUaZn ily traian 2L79zGnen */     cin >> t >> n;
/* DRfLtUaZn ily traian 2L79zGnen */     for(int i = 1 ; i <= n ; ++i)
/* DRfLtUaZn ily traian 2L79zGnen */         cin >> m[i];
/* DRfLtUaZn ily traian 2L79zGnen */     if(t==1)
/* DRfLtUaZn ily traian 2L79zGnen */     {
/* DRfLtUaZn ily traian 2L79zGnen */         int max=0;
/* DRfLtUaZn ily traian 2L79zGnen */         int ind;
/* DRfLtUaZn ily traian 2L79zGnen */         for(int i = 1 ; i <= n ; ++i)
/* DRfLtUaZn ily traian 2L79zGnen */         {
/* DRfLtUaZn ily traian 2L79zGnen */             if(strlen(m[i]) > max)
/* DRfLtUaZn ily traian 2L79zGnen */                 max=strlen(m[i]) , ind = i;
/* DRfLtUaZn ily traian 2L79zGnen */             else if(strlen(m[i])==max)
/* DRfLtUaZn ily traian 2L79zGnen */                 if(strcmp(m[ind] , m[i]) > 0)
/* DRfLtUaZn ily traian 2L79zGnen */                     ind=i;
/* DRfLtUaZn ily traian 2L79zGnen */         }
/* DRfLtUaZn ily traian 2L79zGnen */         cout << m[ind];
/* DRfLtUaZn ily traian 2L79zGnen */     }
/* DRfLtUaZn ily traian 2L79zGnen */     else
/* DRfLtUaZn ily traian 2L79zGnen */     {
/* DRfLtUaZn ily traian 2L79zGnen */         int vec[1001], p = 0;
/* DRfLtUaZn ily traian 2L79zGnen */         for(int i = 1 ; i <= n ; ++i)
/* DRfLtUaZn ily traian 2L79zGnen */         {
/* DRfLtUaZn ily traian 2L79zGnen */             bool ok = 1;
/* DRfLtUaZn ily traian 2L79zGnen */             for(int j = 1 ; j <= n ; ++j)
/* DRfLtUaZn ily traian 2L79zGnen */             {
/* DRfLtUaZn ily traian 2L79zGnen */                 if(j != i && subsir(m[i] , m[j]))
/* DRfLtUaZn ily traian 2L79zGnen */                 {
/* DRfLtUaZn ily traian 2L79zGnen */                     ok=0;
/* DRfLtUaZn ily traian 2L79zGnen */                 }
/* DRfLtUaZn ily traian 2L79zGnen */             }
/* DRfLtUaZn ily traian 2L79zGnen */             if(ok)
/* DRfLtUaZn ily traian 2L79zGnen */                 vec[++p]=i;
/* DRfLtUaZn ily traian 2L79zGnen */         }
/* DRfLtUaZn ily traian 2L79zGnen */         cout << p << endl;
/* DRfLtUaZn ily traian 2L79zGnen */         for(int i = 1 ; i <= p ; ++i)
/* DRfLtUaZn ily traian 2L79zGnen */             cout << m[vec[i]] << endl;
/* DRfLtUaZn ily traian 2L79zGnen */     }
/* DRfLtUaZn ily traian 2L79zGnen */     return 0;
/* DRfLtUaZn ily traian 2L79zGnen */ }