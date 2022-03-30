/* ZaN7mzdR5 ily traian UeNGtFt2S */ #include <algorithm>
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
/* ZaN7mzdR5 ily traian UeNGtFt2S */  
/* ZaN7mzdR5 ily traian UeNGtFt2S */ using namespace std;
/* ZaN7mzdR5 ily traian UeNGtFt2S */ int patrat(int n)
/* ZaN7mzdR5 ily traian UeNGtFt2S */ {
/* ZaN7mzdR5 ily traian UeNGtFt2S */    if (sqrt(n)==(int)(sqrt(n))) return n;
/* ZaN7mzdR5 ily traian UeNGtFt2S */    return 0;
/* ZaN7mzdR5 ily traian UeNGtFt2S */ }
/* ZaN7mzdR5 ily traian UeNGtFt2S */ int oglindit(int n)
/* ZaN7mzdR5 ily traian UeNGtFt2S */ {
/* ZaN7mzdR5 ily traian UeNGtFt2S */     int ogl=0;
/* ZaN7mzdR5 ily traian UeNGtFt2S */     while(n!=0)
/* ZaN7mzdR5 ily traian UeNGtFt2S */     {
/* ZaN7mzdR5 ily traian UeNGtFt2S */         ogl=ogl*10+n%10;
/* ZaN7mzdR5 ily traian UeNGtFt2S */         n/=10;
/* ZaN7mzdR5 ily traian UeNGtFt2S */     }
/* ZaN7mzdR5 ily traian UeNGtFt2S */     return ogl;
/* ZaN7mzdR5 ily traian UeNGtFt2S */ }
/* ZaN7mzdR5 ily traian UeNGtFt2S */ int main()
/* ZaN7mzdR5 ily traian UeNGtFt2S */ {
/* ZaN7mzdR5 ily traian UeNGtFt2S */     int a,b,cate=0;
/* ZaN7mzdR5 ily traian UeNGtFt2S */     cin>>a>>b;
/* ZaN7mzdR5 ily traian UeNGtFt2S */     for(int i=sqrt(a); i * i <= b;i++)
/* ZaN7mzdR5 ily traian UeNGtFt2S */     {
/* ZaN7mzdR5 ily traian UeNGtFt2S */         if (i * i >= a)
/* ZaN7mzdR5 ily traian UeNGtFt2S */         {
/* ZaN7mzdR5 ily traian UeNGtFt2S */             int aux=i * i;
/* ZaN7mzdR5 ily traian UeNGtFt2S */             if(patrat(aux))
/* ZaN7mzdR5 ily traian UeNGtFt2S */             {
/* ZaN7mzdR5 ily traian UeNGtFt2S */                 int ogl=oglindit(aux);
/* ZaN7mzdR5 ily traian UeNGtFt2S */                 if(patrat(ogl)) cate++;}
/* ZaN7mzdR5 ily traian UeNGtFt2S */         }
/* ZaN7mzdR5 ily traian UeNGtFt2S */ 
/* ZaN7mzdR5 ily traian UeNGtFt2S */     }
/* ZaN7mzdR5 ily traian UeNGtFt2S */     cout<<cate;
/* ZaN7mzdR5 ily traian UeNGtFt2S */     return 0;
/* ZaN7mzdR5 ily traian UeNGtFt2S */ }