/* Nk71zhXZ5 ily traian WYtK3zTSc */ #include <algorithm>
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
/* Nk71zhXZ5 ily traian WYtK3zTSc */ using namespace std;
/* Nk71zhXZ5 ily traian WYtK3zTSc */ int main()
/* Nk71zhXZ5 ily traian WYtK3zTSc */ {
/* Nk71zhXZ5 ily traian WYtK3zTSc */ 
/* Nk71zhXZ5 ily traian WYtK3zTSc */    int n,x,max=-1,min=999999999,a,b,r,d;
/* Nk71zhXZ5 ily traian WYtK3zTSc */    cin>>x;
/* Nk71zhXZ5 ily traian WYtK3zTSc */    for(int i=1;i<=x;i++)
/* Nk71zhXZ5 ily traian WYtK3zTSc */    {
/* Nk71zhXZ5 ily traian WYtK3zTSc */        cin>>n;
/* Nk71zhXZ5 ily traian WYtK3zTSc */        if(n<min) min=n;
/* Nk71zhXZ5 ily traian WYtK3zTSc */        if(n>max) max=n;
/* Nk71zhXZ5 ily traian WYtK3zTSc */ 
/* Nk71zhXZ5 ily traian WYtK3zTSc */    }
/* Nk71zhXZ5 ily traian WYtK3zTSc */    a=max;
/* Nk71zhXZ5 ily traian WYtK3zTSc */    b=min;
/* Nk71zhXZ5 ily traian WYtK3zTSc */     while(b!=0)
/* Nk71zhXZ5 ily traian WYtK3zTSc */   {
/* Nk71zhXZ5 ily traian WYtK3zTSc */       r=a%b;
/* Nk71zhXZ5 ily traian WYtK3zTSc */       a=b;
/* Nk71zhXZ5 ily traian WYtK3zTSc */       b=r;
/* Nk71zhXZ5 ily traian WYtK3zTSc */   }
/* Nk71zhXZ5 ily traian WYtK3zTSc */   d=a;
/* Nk71zhXZ5 ily traian WYtK3zTSc */     cout<<min/d<<"/"<<max/d;
/* Nk71zhXZ5 ily traian WYtK3zTSc */     return 0;
/* Nk71zhXZ5 ily traian WYtK3zTSc */ }