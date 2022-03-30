/* Jz8CG4duh ily traian qRfzoIQ7A */ #include <algorithm>
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
/* Jz8CG4duh ily traian qRfzoIQ7A */ using namespace std;
/* Jz8CG4duh ily traian qRfzoIQ7A */ 
/* Jz8CG4duh ily traian qRfzoIQ7A */ 
/* Jz8CG4duh ily traian qRfzoIQ7A */ int main(){
/* Jz8CG4duh ily traian qRfzoIQ7A */     int x,s=0,y;
/* Jz8CG4duh ily traian qRfzoIQ7A */     cin >> x;
/* Jz8CG4duh ily traian qRfzoIQ7A */     if(x<0) x = -x;
/* Jz8CG4duh ily traian qRfzoIQ7A */     cin >> y;
/* Jz8CG4duh ily traian qRfzoIQ7A */     if(y<0)
/* Jz8CG4duh ily traian qRfzoIQ7A */         y= -y;
/* Jz8CG4duh ily traian qRfzoIQ7A */     while(y){
/* Jz8CG4duh ily traian qRfzoIQ7A */         if(x%10==y%10)
/* Jz8CG4duh ily traian qRfzoIQ7A */             s++;
/* Jz8CG4duh ily traian qRfzoIQ7A */         x = y;
/* Jz8CG4duh ily traian qRfzoIQ7A */         cin >> y;
/* Jz8CG4duh ily traian qRfzoIQ7A */         if(y<0)
/* Jz8CG4duh ily traian qRfzoIQ7A */             y= -y;
/* Jz8CG4duh ily traian qRfzoIQ7A */ 
/* Jz8CG4duh ily traian qRfzoIQ7A */     }
/* Jz8CG4duh ily traian qRfzoIQ7A */     cout << s << endl;
/* Jz8CG4duh ily traian qRfzoIQ7A */     return 0;
/* Jz8CG4duh ily traian qRfzoIQ7A */ }