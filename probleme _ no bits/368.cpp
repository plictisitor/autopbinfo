/* EXO5SCX41 ily traian oGtvFHlMV */ #include <algorithm>
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
/* EXO5SCX41 ily traian oGtvFHlMV */ using namespace std;
/* EXO5SCX41 ily traian oGtvFHlMV */ int main()
/* EXO5SCX41 ily traian oGtvFHlMV */ {
/* EXO5SCX41 ily traian oGtvFHlMV */     int a,b,aux,ogl,cate=0,n;
/* EXO5SCX41 ily traian oGtvFHlMV */     cin>>a>>b;
/* EXO5SCX41 ily traian oGtvFHlMV */     if(a<=b)
/* EXO5SCX41 ily traian oGtvFHlMV */     {
/* EXO5SCX41 ily traian oGtvFHlMV */         for(int i=a;i<=b;i++)
/* EXO5SCX41 ily traian oGtvFHlMV */            {
/* EXO5SCX41 ily traian oGtvFHlMV */                n=i;
/* EXO5SCX41 ily traian oGtvFHlMV */                aux=i;
/* EXO5SCX41 ily traian oGtvFHlMV */                ogl=0;
/* EXO5SCX41 ily traian oGtvFHlMV */                while(n!=0)
/* EXO5SCX41 ily traian oGtvFHlMV */                {
/* EXO5SCX41 ily traian oGtvFHlMV */                    ogl=ogl*10+n%10;
/* EXO5SCX41 ily traian oGtvFHlMV */                    n=n/10;
/* EXO5SCX41 ily traian oGtvFHlMV */                }
/* EXO5SCX41 ily traian oGtvFHlMV */               if(aux==ogl ) cate++;
/* EXO5SCX41 ily traian oGtvFHlMV */            }
/* EXO5SCX41 ily traian oGtvFHlMV */     }
/* EXO5SCX41 ily traian oGtvFHlMV */     else if(b<a)
/* EXO5SCX41 ily traian oGtvFHlMV */     {
/* EXO5SCX41 ily traian oGtvFHlMV */         for(int i=b;i<=a;i++)
/* EXO5SCX41 ily traian oGtvFHlMV */            {
/* EXO5SCX41 ily traian oGtvFHlMV */                n=i;
/* EXO5SCX41 ily traian oGtvFHlMV */                aux=i;
/* EXO5SCX41 ily traian oGtvFHlMV */                ogl=0;
/* EXO5SCX41 ily traian oGtvFHlMV */                while(n!=0)
/* EXO5SCX41 ily traian oGtvFHlMV */                {
/* EXO5SCX41 ily traian oGtvFHlMV */                    ogl=ogl*10+n%10;
/* EXO5SCX41 ily traian oGtvFHlMV */                    n=n/10;
/* EXO5SCX41 ily traian oGtvFHlMV */                }
/* EXO5SCX41 ily traian oGtvFHlMV */               if(aux==ogl ) cate++;
/* EXO5SCX41 ily traian oGtvFHlMV */            }
/* EXO5SCX41 ily traian oGtvFHlMV */     }
/* EXO5SCX41 ily traian oGtvFHlMV */ cout<<cate;
/* EXO5SCX41 ily traian oGtvFHlMV */     return 0;
/* EXO5SCX41 ily traian oGtvFHlMV */ }