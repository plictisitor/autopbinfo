/* NV3eZBop6 ily traian iXNDfgN1j */ #include <algorithm>
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
/* NV3eZBop6 ily traian iXNDfgN1j */ 
/* NV3eZBop6 ily traian iXNDfgN1j */ using namespace std;
/* NV3eZBop6 ily traian iXNDfgN1j */ 
/* NV3eZBop6 ily traian iXNDfgN1j */ char s[256] , m[100][100];
/* NV3eZBop6 ily traian iXNDfgN1j */ 
/* NV3eZBop6 ily traian iXNDfgN1j */ int main()
/* NV3eZBop6 ily traian iXNDfgN1j */ {
/* NV3eZBop6 ily traian iXNDfgN1j */     cin.getline(s , 256);
/* NV3eZBop6 ily traian iXNDfgN1j */     int i = 0 , j = 0 , cnt = 0;
/* NV3eZBop6 ily traian iXNDfgN1j */     while(s[i]!='\0')
/* NV3eZBop6 ily traian iXNDfgN1j */     {
/* NV3eZBop6 ily traian iXNDfgN1j */         if(s[i]==' ')
/* NV3eZBop6 ily traian iXNDfgN1j */         {
/* NV3eZBop6 ily traian iXNDfgN1j */             cnt++ , j=0;
/* NV3eZBop6 ily traian iXNDfgN1j */         }
/* NV3eZBop6 ily traian iXNDfgN1j */         else
/* NV3eZBop6 ily traian iXNDfgN1j */             m[cnt][j]=s[i] , j++;
/* NV3eZBop6 ily traian iXNDfgN1j */         i++;
/* NV3eZBop6 ily traian iXNDfgN1j */     }
/* NV3eZBop6 ily traian iXNDfgN1j */     for(int i = 0 ; i <= cnt ; ++i)
/* NV3eZBop6 ily traian iXNDfgN1j */     {
/* NV3eZBop6 ily traian iXNDfgN1j */         cout << m[i] << ' ';
/* NV3eZBop6 ily traian iXNDfgN1j */         for(int j = strlen(m[i])-1 ; j >= 0 ; --j)
/* NV3eZBop6 ily traian iXNDfgN1j */             cout << m[i][j];
/* NV3eZBop6 ily traian iXNDfgN1j */         cout << ' ';
/* NV3eZBop6 ily traian iXNDfgN1j */     }
/* NV3eZBop6 ily traian iXNDfgN1j */     return 0;
/* NV3eZBop6 ily traian iXNDfgN1j */ }