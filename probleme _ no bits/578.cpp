/* rc8TzqUY1 ily traian DphHYM3VE */ #include <algorithm>
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
/* rc8TzqUY1 ily traian DphHYM3VE */ using namespace std;
/* rc8TzqUY1 ily traian DphHYM3VE */ long long v[100005];
/* rc8TzqUY1 ily traian DphHYM3VE */ int main()
/* rc8TzqUY1 ily traian DphHYM3VE */ {   
/* rc8TzqUY1 ily traian DphHYM3VE */     long long n,nrsecv=0,c;  
/* rc8TzqUY1 ily traian DphHYM3VE */     cin >> n;  
/* rc8TzqUY1 ily traian DphHYM3VE */     for (int i = 1; i<=n; i++)    
/* rc8TzqUY1 ily traian DphHYM3VE */     cin >> v[i];   
/* rc8TzqUY1 ily traian DphHYM3VE */     for (int i = 1; i<=n; i++)  
/* rc8TzqUY1 ily traian DphHYM3VE */     {        
/* rc8TzqUY1 ily traian DphHYM3VE */         c = 1;     
/* rc8TzqUY1 ily traian DphHYM3VE */         while (v[i] == v[i+1] && i+1<=n)    
/* rc8TzqUY1 ily traian DphHYM3VE */         {        
/* rc8TzqUY1 ily traian DphHYM3VE */             c++;    
/* rc8TzqUY1 ily traian DphHYM3VE */             i++;     
/* rc8TzqUY1 ily traian DphHYM3VE */         }     
/* rc8TzqUY1 ily traian DphHYM3VE */         nrsecv+=c*(c+1)/2;  
/* rc8TzqUY1 ily traian DphHYM3VE */     }  
/* rc8TzqUY1 ily traian DphHYM3VE */     cout << nrsecv;
/* rc8TzqUY1 ily traian DphHYM3VE */ }