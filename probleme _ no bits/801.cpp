/* y6B2pcWXE ily traian 9IufDI8BX */ #include <algorithm>
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
/* y6B2pcWXE ily traian 9IufDI8BX */ using namespace std;
/* y6B2pcWXE ily traian 9IufDI8BX */ 
/* y6B2pcWXE ily traian 9IufDI8BX */ int main()
/* y6B2pcWXE ily traian 9IufDI8BX */ {
/* y6B2pcWXE ily traian 9IufDI8BX */     char ch[300];
/* y6B2pcWXE ily traian 9IufDI8BX */     cin.getline(ch , 300);
/* y6B2pcWXE ily traian 9IufDI8BX */     int i = 0;
/* y6B2pcWXE ily traian 9IufDI8BX */     while(ch[i]!='\0')
/* y6B2pcWXE ily traian 9IufDI8BX */     {
/* y6B2pcWXE ily traian 9IufDI8BX */         if((i==0 || ch[i-1]==' ') && ch[i]==' ')
/* y6B2pcWXE ily traian 9IufDI8BX */             {}
/* y6B2pcWXE ily traian 9IufDI8BX */         else
/* y6B2pcWXE ily traian 9IufDI8BX */             cout << ch[i];
/* y6B2pcWXE ily traian 9IufDI8BX */         i++;
/* y6B2pcWXE ily traian 9IufDI8BX */     }
/* y6B2pcWXE ily traian 9IufDI8BX */     return 0;    
/* y6B2pcWXE ily traian 9IufDI8BX */ }