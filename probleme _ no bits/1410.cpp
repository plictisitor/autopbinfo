/* dcJTXUp8P ily traian PYSTn5dDK */ #include <algorithm>
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
/* dcJTXUp8P ily traian PYSTn5dDK */ using namespace std;
/* dcJTXUp8P ily traian PYSTn5dDK */ 
/* dcJTXUp8P ily traian PYSTn5dDK */ int main()
/* dcJTXUp8P ily traian PYSTn5dDK */ {
/* dcJTXUp8P ily traian PYSTn5dDK */     int x,y,cate=0;
/* dcJTXUp8P ily traian PYSTn5dDK */     cin>>x>>y;
/* dcJTXUp8P ily traian PYSTn5dDK */     while(x!=0 || y!=0)
/* dcJTXUp8P ily traian PYSTn5dDK */     {
/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez puterea lui 10 < x
/* dcJTXUp8P ily traian PYSTn5dDK */         int px=1;
/* dcJTXUp8P ily traian PYSTn5dDK */         while(x>=px) px=px*10;
/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez puterea lui 10 < y
/* dcJTXUp8P ily traian PYSTn5dDK */         int py=1;
/* dcJTXUp8P ily traian PYSTn5dDK */         while(y>=py) py=py*10;
/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez cocatenatele
/* dcJTXUp8P ily traian PYSTn5dDK */         unsigned long long xy,yx;
/* dcJTXUp8P ily traian PYSTn5dDK */         xy=1ull*x*py+y;
/* dcJTXUp8P ily traian PYSTn5dDK */         yx=1ull*y*px+x;
/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez resturnatele
/* dcJTXUp8P ily traian PYSTn5dDK */         unsigned long long rxy=0,ryx=0;
/* dcJTXUp8P ily traian PYSTn5dDK */         unsigned long long cxy=xy,cyx=yx;
/* dcJTXUp8P ily traian PYSTn5dDK */         while(cxy>0)
/* dcJTXUp8P ily traian PYSTn5dDK */         {
/* dcJTXUp8P ily traian PYSTn5dDK */             rxy=rxy*10+cxy%10;
/* dcJTXUp8P ily traian PYSTn5dDK */             cxy=cxy/10;
/* dcJTXUp8P ily traian PYSTn5dDK */         }
/* dcJTXUp8P ily traian PYSTn5dDK */         while(cyx>0)
/* dcJTXUp8P ily traian PYSTn5dDK */         {
/* dcJTXUp8P ily traian PYSTn5dDK */             ryx=ryx*10+cyx%10;
/* dcJTXUp8P ily traian PYSTn5dDK */             cyx=cyx/10;
/* dcJTXUp8P ily traian PYSTn5dDK */         }
/* dcJTXUp8P ily traian PYSTn5dDK */ 
/* dcJTXUp8P ily traian PYSTn5dDK */         ///verific daca e palindrom
/* dcJTXUp8P ily traian PYSTn5dDK */         if(xy==rxy || yx==ryx) cate++;
/* dcJTXUp8P ily traian PYSTn5dDK */         cin>>x>>y;
/* dcJTXUp8P ily traian PYSTn5dDK */     }
/* dcJTXUp8P ily traian PYSTn5dDK */     cout<<cate;
/* dcJTXUp8P ily traian PYSTn5dDK */     return 0;
/* dcJTXUp8P ily traian PYSTn5dDK */ 
/* dcJTXUp8P ily traian PYSTn5dDK */ }