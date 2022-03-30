/* ad7HRG9gt ily traian dwjzphqbf */ #include <algorithm>
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
/* ad7HRG9gt ily traian dwjzphqbf */ 
/* ad7HRG9gt ily traian dwjzphqbf */ using namespace std;
/* ad7HRG9gt ily traian dwjzphqbf */ 
/* ad7HRG9gt ily traian dwjzphqbf */ int main()
/* ad7HRG9gt ily traian dwjzphqbf */ {
/* ad7HRG9gt ily traian dwjzphqbf */     int a,b,r;
/* ad7HRG9gt ily traian dwjzphqbf */     cin >>a >>b;
/* ad7HRG9gt ily traian dwjzphqbf */     int x,y;
/* ad7HRG9gt ily traian dwjzphqbf */     x=a,y=b;
/* ad7HRG9gt ily traian dwjzphqbf */     if (a==0 && b==0) a=-1;
/* ad7HRG9gt ily traian dwjzphqbf */     while (b)
/* ad7HRG9gt ily traian dwjzphqbf */     {
/* ad7HRG9gt ily traian dwjzphqbf */         r=a%b;
/* ad7HRG9gt ily traian dwjzphqbf */         a=b;
/* ad7HRG9gt ily traian dwjzphqbf */         b=r;
/* ad7HRG9gt ily traian dwjzphqbf */     }
/* ad7HRG9gt ily traian dwjzphqbf */     int m,n;
/* ad7HRG9gt ily traian dwjzphqbf */     m=x/a;
/* ad7HRG9gt ily traian dwjzphqbf */     n=y/a;
/* ad7HRG9gt ily traian dwjzphqbf */     cout << n*m << ' ' << a;
/* ad7HRG9gt ily traian dwjzphqbf */     return 0;
/* ad7HRG9gt ily traian dwjzphqbf */ }