/* OaOuBnnIi ily traian jOAIFYGhu */ #include <algorithm>
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
/* OaOuBnnIi ily traian jOAIFYGhu */  
/* OaOuBnnIi ily traian jOAIFYGhu */ using namespace std;
/* OaOuBnnIi ily traian jOAIFYGhu */ int main()
/* OaOuBnnIi ily traian jOAIFYGhu */ {
/* OaOuBnnIi ily traian jOAIFYGhu */     long long  n , cnt=0,x;
/* OaOuBnnIi ily traian jOAIFYGhu */     cin>>n>>x;
/* OaOuBnnIi ily traian jOAIFYGhu */     for (int i=1;i<n;i++)
/* OaOuBnnIi ily traian jOAIFYGhu */     {
/* OaOuBnnIi ily traian jOAIFYGhu */             int pr=x;
/* OaOuBnnIi ily traian jOAIFYGhu */             cin>>x;
/* OaOuBnnIi ily traian jOAIFYGhu */             int aux=x;
/* OaOuBnnIi ily traian jOAIFYGhu */             int a=pr;
/* OaOuBnnIi ily traian jOAIFYGhu */             int s1=0,s2=0;
/* OaOuBnnIi ily traian jOAIFYGhu */             while (aux!=0)
/* OaOuBnnIi ily traian jOAIFYGhu */             {
/* OaOuBnnIi ily traian jOAIFYGhu */                 s1=s1+aux%10;
/* OaOuBnnIi ily traian jOAIFYGhu */                 aux=aux/10;
/* OaOuBnnIi ily traian jOAIFYGhu */             }
/* OaOuBnnIi ily traian jOAIFYGhu */             while (a!=0)
/* OaOuBnnIi ily traian jOAIFYGhu */             {
/* OaOuBnnIi ily traian jOAIFYGhu */                 s2=s2+a%10;
/* OaOuBnnIi ily traian jOAIFYGhu */                 a=a/10;
/* OaOuBnnIi ily traian jOAIFYGhu */             }
/* OaOuBnnIi ily traian jOAIFYGhu */             if (s1%2==0 && s2%2==1) cnt++;
/* OaOuBnnIi ily traian jOAIFYGhu */             if (s1%2==1 && s2%2==0) cnt++;
/* OaOuBnnIi ily traian jOAIFYGhu */         
/* OaOuBnnIi ily traian jOAIFYGhu */         
/* OaOuBnnIi ily traian jOAIFYGhu */     }
/* OaOuBnnIi ily traian jOAIFYGhu */     cout<<cnt;
/* OaOuBnnIi ily traian jOAIFYGhu */     return 0;
/* OaOuBnnIi ily traian jOAIFYGhu */ }