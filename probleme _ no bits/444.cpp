/* Jb6t61Usl ily traian ZWtsjU3dH */ #include <algorithm>
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
/* Jb6t61Usl ily traian ZWtsjU3dH */ using namespace std;
/* Jb6t61Usl ily traian ZWtsjU3dH */ int main()
/* Jb6t61Usl ily traian ZWtsjU3dH */ {
/* Jb6t61Usl ily traian ZWtsjU3dH */     int n;
/* Jb6t61Usl ily traian ZWtsjU3dH */     cin>>n;
/* Jb6t61Usl ily traian ZWtsjU3dH */     for (int i=0;i<=9;i++)
/* Jb6t61Usl ily traian ZWtsjU3dH */     {
/* Jb6t61Usl ily traian ZWtsjU3dH */     int aux=n;
/* Jb6t61Usl ily traian ZWtsjU3dH */     while (aux!=0)
/* Jb6t61Usl ily traian ZWtsjU3dH */         {
/* Jb6t61Usl ily traian ZWtsjU3dH */         
/* Jb6t61Usl ily traian ZWtsjU3dH */     
/* Jb6t61Usl ily traian ZWtsjU3dH */             if (aux%10==i) {cout<<i<<" ";aux=0;}
/* Jb6t61Usl ily traian ZWtsjU3dH */             aux /=10;
/* Jb6t61Usl ily traian ZWtsjU3dH */          }
/* Jb6t61Usl ily traian ZWtsjU3dH */         }
/* Jb6t61Usl ily traian ZWtsjU3dH */ 
/* Jb6t61Usl ily traian ZWtsjU3dH */    return 0;}