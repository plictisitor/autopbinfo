/* 8iaVqN1KD ily traian ZFgNXeGzz */ #include <algorithm>
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
/* 8iaVqN1KD ily traian ZFgNXeGzz */ using namespace std;
/* 8iaVqN1KD ily traian ZFgNXeGzz */ 
/* 8iaVqN1KD ily traian ZFgNXeGzz */ ifstream cin("schimb.in");
/* 8iaVqN1KD ily traian ZFgNXeGzz */ ofstream cout("schimb.out");
/* 8iaVqN1KD ily traian ZFgNXeGzz */ 
/* 8iaVqN1KD ily traian ZFgNXeGzz */ int main()
/* 8iaVqN1KD ily traian ZFgNXeGzz */ {
/* 8iaVqN1KD ily traian ZFgNXeGzz */     int n , k , p;
/* 8iaVqN1KD ily traian ZFgNXeGzz */     cin >> n >> k >> p;
/* 8iaVqN1KD ily traian ZFgNXeGzz */     char ch = (char)96+p;
/* 8iaVqN1KD ily traian ZFgNXeGzz */     cin.get();
/* 8iaVqN1KD ily traian ZFgNXeGzz */     for(int t = 0 ; t < n ; ++t)
/* 8iaVqN1KD ily traian ZFgNXeGzz */     {
/* 8iaVqN1KD ily traian ZFgNXeGzz */         char a[501];
/* 8iaVqN1KD ily traian ZFgNXeGzz */         cin.getline(a , 501);
/* 8iaVqN1KD ily traian ZFgNXeGzz */         int i = 0;
/* 8iaVqN1KD ily traian ZFgNXeGzz */         int cnt=0;
/* 8iaVqN1KD ily traian ZFgNXeGzz */         bool ok=false;
/* 8iaVqN1KD ily traian ZFgNXeGzz */         int capat=0;
/* 8iaVqN1KD ily traian ZFgNXeGzz */         while(a[i]!='\0')
/* 8iaVqN1KD ily traian ZFgNXeGzz */         {
/* 8iaVqN1KD ily traian ZFgNXeGzz */             if(a[i]!=' ')
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 cnt++;
/* 8iaVqN1KD ily traian ZFgNXeGzz */             if(cnt==k)
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 ok=true;
/* 8iaVqN1KD ily traian ZFgNXeGzz */             capat=i;
/* 8iaVqN1KD ily traian ZFgNXeGzz */             i++;    
/* 8iaVqN1KD ily traian ZFgNXeGzz */         }
/* 8iaVqN1KD ily traian ZFgNXeGzz */         if(ok)
/* 8iaVqN1KD ily traian ZFgNXeGzz */         {
/* 8iaVqN1KD ily traian ZFgNXeGzz */             i=0;
/* 8iaVqN1KD ily traian ZFgNXeGzz */             while(a[i]!='\0')
/* 8iaVqN1KD ily traian ZFgNXeGzz */             {
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 if(i+1==k)
/* 8iaVqN1KD ily traian ZFgNXeGzz */                     cout << ch;
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 else
/* 8iaVqN1KD ily traian ZFgNXeGzz */                     cout << a[i];
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 i++;    
/* 8iaVqN1KD ily traian ZFgNXeGzz */             }
/* 8iaVqN1KD ily traian ZFgNXeGzz */         }
/* 8iaVqN1KD ily traian ZFgNXeGzz */         else
/* 8iaVqN1KD ily traian ZFgNXeGzz */             while(capat>-1)
/* 8iaVqN1KD ily traian ZFgNXeGzz */             {
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 cout << a[capat];
/* 8iaVqN1KD ily traian ZFgNXeGzz */                 capat--;
/* 8iaVqN1KD ily traian ZFgNXeGzz */             }
/* 8iaVqN1KD ily traian ZFgNXeGzz */         cout << endl;
/* 8iaVqN1KD ily traian ZFgNXeGzz */     }
/* 8iaVqN1KD ily traian ZFgNXeGzz */     return 0;    
/* 8iaVqN1KD ily traian ZFgNXeGzz */ }