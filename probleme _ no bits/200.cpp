/* oiUOmpGcq ily traian GCxakWQtd */ #include <algorithm>
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
/* oiUOmpGcq ily traian GCxakWQtd */ using namespace std;
/* oiUOmpGcq ily traian GCxakWQtd */ 
/* oiUOmpGcq ily traian GCxakWQtd */ int main()
/* oiUOmpGcq ily traian GCxakWQtd */ {
/* oiUOmpGcq ily traian GCxakWQtd */     char a[260] , b[260];
/* oiUOmpGcq ily traian GCxakWQtd */     cin.getline(a , 260);
/* oiUOmpGcq ily traian GCxakWQtd */     cin.getline(b , 260);
/* oiUOmpGcq ily traian GCxakWQtd */     int i = 0 ;
/* oiUOmpGcq ily traian GCxakWQtd */     int start=0;
/* oiUOmpGcq ily traian GCxakWQtd */     while(a[i]!='\0')
/* oiUOmpGcq ily traian GCxakWQtd */     {
/* oiUOmpGcq ily traian GCxakWQtd */         bool ok = true;
/* oiUOmpGcq ily traian GCxakWQtd */         int j = 0 ;
/* oiUOmpGcq ily traian GCxakWQtd */         while(b[j]!='\0')
/* oiUOmpGcq ily traian GCxakWQtd */         {
/* oiUOmpGcq ily traian GCxakWQtd */             if(a[i+j]!=b[j])
/* oiUOmpGcq ily traian GCxakWQtd */                 ok=false;
/* oiUOmpGcq ily traian GCxakWQtd */             j++;
/* oiUOmpGcq ily traian GCxakWQtd */         }
/* oiUOmpGcq ily traian GCxakWQtd */         if(ok==true)
/* oiUOmpGcq ily traian GCxakWQtd */             start=i;
/* oiUOmpGcq ily traian GCxakWQtd */         i++;
/* oiUOmpGcq ily traian GCxakWQtd */     }
/* oiUOmpGcq ily traian GCxakWQtd */     i=0;
/* oiUOmpGcq ily traian GCxakWQtd */     while(a[i]!='\0')
/* oiUOmpGcq ily traian GCxakWQtd */     {
/* oiUOmpGcq ily traian GCxakWQtd */         if(i==start)
/* oiUOmpGcq ily traian GCxakWQtd */         {
/* oiUOmpGcq ily traian GCxakWQtd */             int j = 0;
/* oiUOmpGcq ily traian GCxakWQtd */             while(b[j]!='\0')
/* oiUOmpGcq ily traian GCxakWQtd */                 j++ , i++;
/* oiUOmpGcq ily traian GCxakWQtd */         }
/* oiUOmpGcq ily traian GCxakWQtd */         cout << a[i];
/* oiUOmpGcq ily traian GCxakWQtd */         i++;
/* oiUOmpGcq ily traian GCxakWQtd */     }
/* oiUOmpGcq ily traian GCxakWQtd */     return 0;    
/* oiUOmpGcq ily traian GCxakWQtd */ }