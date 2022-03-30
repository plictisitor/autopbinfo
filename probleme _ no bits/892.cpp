/* hKExBI1G3 ily traian zTj33cO3W */ #include <algorithm>
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
/* hKExBI1G3 ily traian zTj33cO3W */ using namespace std;
/* hKExBI1G3 ily traian zTj33cO3W */ 
/* hKExBI1G3 ily traian zTj33cO3W */ int main()
/* hKExBI1G3 ily traian zTj33cO3W */ {
/* hKExBI1G3 ily traian zTj33cO3W */     char ch[260];
/* hKExBI1G3 ily traian zTj33cO3W */     cin.getline(ch , 260);
/* hKExBI1G3 ily traian zTj33cO3W */     int i = 0;
/* hKExBI1G3 ily traian zTj33cO3W */     while(ch[i]!='\0')
/* hKExBI1G3 ily traian zTj33cO3W */     {
/* hKExBI1G3 ily traian zTj33cO3W */         if((ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='u' || ch[i]=='o') && ch[i+1]=='p' && ch[i+2]==ch[i])
/* hKExBI1G3 ily traian zTj33cO3W */             cout << ch[i] , i+=2;
/* hKExBI1G3 ily traian zTj33cO3W */         else
/* hKExBI1G3 ily traian zTj33cO3W */             cout << ch[i];
/* hKExBI1G3 ily traian zTj33cO3W */         i++;
/* hKExBI1G3 ily traian zTj33cO3W */     }
/* hKExBI1G3 ily traian zTj33cO3W */ }