/* 6nmxKRebA ily traian kOWa7iAIL */ #include <algorithm>
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
/* 6nmxKRebA ily traian kOWa7iAIL */ using namespace std;
/* 6nmxKRebA ily traian kOWa7iAIL */ int prim(int n)
/* 6nmxKRebA ily traian kOWa7iAIL */ {
/* 6nmxKRebA ily traian kOWa7iAIL */     if(n==0 || n==1) return 0;
/* 6nmxKRebA ily traian kOWa7iAIL */     if(n==2) return 1;
/* 6nmxKRebA ily traian kOWa7iAIL */     if(n%2==0) return 0;
/* 6nmxKRebA ily traian kOWa7iAIL */     for(int i=3;i*i<=n;i=i+2)
/* 6nmxKRebA ily traian kOWa7iAIL */     {
/* 6nmxKRebA ily traian kOWa7iAIL */         if(n%i==0) return 0;
/* 6nmxKRebA ily traian kOWa7iAIL */     }
/* 6nmxKRebA ily traian kOWa7iAIL */     return 1;
/* 6nmxKRebA ily traian kOWa7iAIL */ }
/* 6nmxKRebA ily traian kOWa7iAIL */ int main()
/* 6nmxKRebA ily traian kOWa7iAIL */ {
/* 6nmxKRebA ily traian kOWa7iAIL */     int n,m,cate=0;;
/* 6nmxKRebA ily traian kOWa7iAIL */     int a[102][102];
/* 6nmxKRebA ily traian kOWa7iAIL */     cin >> n >> m;
/* 6nmxKRebA ily traian kOWa7iAIL */     for(int i=1;i<=n;++i)
/* 6nmxKRebA ily traian kOWa7iAIL */        for(int j=1;j<=m;++j)
/* 6nmxKRebA ily traian kOWa7iAIL */         {
/* 6nmxKRebA ily traian kOWa7iAIL */             cin >> a[i][j];
/* 6nmxKRebA ily traian kOWa7iAIL */ 
/* 6nmxKRebA ily traian kOWa7iAIL */         }
/* 6nmxKRebA ily traian kOWa7iAIL */      for(int i=2;i<=n;i=i+2)
/* 6nmxKRebA ily traian kOWa7iAIL */             for(int j=1;j<=m;++j)
/* 6nmxKRebA ily traian kOWa7iAIL */      {
/* 6nmxKRebA ily traian kOWa7iAIL */          if(prim(a[i][j])) cate++;
/* 6nmxKRebA ily traian kOWa7iAIL */      }
/* 6nmxKRebA ily traian kOWa7iAIL */ 
/* 6nmxKRebA ily traian kOWa7iAIL */     cout <<cate;
/* 6nmxKRebA ily traian kOWa7iAIL */     return 0;
/* 6nmxKRebA ily traian kOWa7iAIL */ }