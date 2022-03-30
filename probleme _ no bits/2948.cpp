/* 59GjhuVck ily traian z2supegCG */ #include <algorithm>
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
/* 59GjhuVck ily traian z2supegCG */ #include<cmath>
/* 59GjhuVck ily traian z2supegCG */ #include<iomanip>
/* 59GjhuVck ily traian z2supegCG */ using namespace std;
/* 59GjhuVck ily traian z2supegCG */ 
/* 59GjhuVck ily traian z2supegCG */ int main()
/* 59GjhuVck ily traian z2supegCG */ {
/* 59GjhuVck ily traian z2supegCG */ 
/* 59GjhuVck ily traian z2supegCG */     double n,x,s=0;
/* 59GjhuVck ily traian z2supegCG */     cin>>n;
/* 59GjhuVck ily traian z2supegCG */     for( int i=1; i<=n;i++)
/* 59GjhuVck ily traian z2supegCG */     {
/* 59GjhuVck ily traian z2supegCG */         cin>>x;
/* 59GjhuVck ily traian z2supegCG */         s=s+x*x;
/* 59GjhuVck ily traian z2supegCG */     }
/* 59GjhuVck ily traian z2supegCG */     
/* 59GjhuVck ily traian z2supegCG */     cout<<fixed<<setprecision(2)<<sqrt(s/n);
/* 59GjhuVck ily traian z2supegCG */ 
/* 59GjhuVck ily traian z2supegCG */     return 0;
/* 59GjhuVck ily traian z2supegCG */ }