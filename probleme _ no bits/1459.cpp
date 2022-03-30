/* EA2ido05x ily traian PpkjH7y6d */ #include <algorithm>
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
/* EA2ido05x ily traian PpkjH7y6d */ using namespace std;
/* EA2ido05x ily traian PpkjH7y6d */ 
/* EA2ido05x ily traian PpkjH7y6d */ int a[101][9];
/* EA2ido05x ily traian PpkjH7y6d */ 
/* EA2ido05x ily traian PpkjH7y6d */ bool areamax(int i , int j , int x , int y)
/* EA2ido05x ily traian PpkjH7y6d */ {
/* EA2ido05x ily traian PpkjH7y6d */     for(int c = i ; c <= x ; ++c)
/* EA2ido05x ily traian PpkjH7y6d */         for(int d = j ; d <= y ; ++d)
/* EA2ido05x ily traian PpkjH7y6d */             if(a[c][d]!=a[i][j])
/* EA2ido05x ily traian PpkjH7y6d */                 return 0;
/* EA2ido05x ily traian PpkjH7y6d */     return 1;
/* EA2ido05x ily traian PpkjH7y6d */ }
/* EA2ido05x ily traian PpkjH7y6d */ 
/* EA2ido05x ily traian PpkjH7y6d */ int main()
/* EA2ido05x ily traian PpkjH7y6d */ {
/* EA2ido05x ily traian PpkjH7y6d */     char s[101];
/* EA2ido05x ily traian PpkjH7y6d */     cin >> s;
/* EA2ido05x ily traian PpkjH7y6d */     int i = 0;
/* EA2ido05x ily traian PpkjH7y6d */     while(s[i]!='\0')
/* EA2ido05x ily traian PpkjH7y6d */     {
/* EA2ido05x ily traian PpkjH7y6d */         int nr=(int)s[i];
/* EA2ido05x ily traian PpkjH7y6d */         int j=0;
/* EA2ido05x ily traian PpkjH7y6d */         while(nr)
/* EA2ido05x ily traian PpkjH7y6d */         {
/* EA2ido05x ily traian PpkjH7y6d */             a[i][j]=nr%2;
/* EA2ido05x ily traian PpkjH7y6d */             nr/=2;
/* EA2ido05x ily traian PpkjH7y6d */             j++;
/* EA2ido05x ily traian PpkjH7y6d */         }
/* EA2ido05x ily traian PpkjH7y6d */         i++;
/* EA2ido05x ily traian PpkjH7y6d */     }
/* EA2ido05x ily traian PpkjH7y6d */     int max=0;
/* EA2ido05x ily traian PpkjH7y6d */     int x , y , z , t;
/* EA2ido05x ily traian PpkjH7y6d */     //for(int j = 0 ; j < i ; ++j)
/* EA2ido05x ily traian PpkjH7y6d */     //{
/* EA2ido05x ily traian PpkjH7y6d */     //    for(int k = 0 ; k < 8 ; ++k)
/* EA2ido05x ily traian PpkjH7y6d */     //        cout << a[j][k] << ' ';
/* EA2ido05x ily traian PpkjH7y6d */     //    cout << endl;
/* EA2ido05x ily traian PpkjH7y6d */     //}
/* EA2ido05x ily traian PpkjH7y6d */     for(int j = 0 ; j < i ; ++j)
/* EA2ido05x ily traian PpkjH7y6d */     {
/* EA2ido05x ily traian PpkjH7y6d */         for(int k = 0 ; k < 8 ; ++k)
/* EA2ido05x ily traian PpkjH7y6d */         {
/* EA2ido05x ily traian PpkjH7y6d */             for(int q = 1 ; q + j < i && k + q < 8 ; ++q)
/* EA2ido05x ily traian PpkjH7y6d */                 if(areamax(j , k , j + q , k + q))
/* EA2ido05x ily traian PpkjH7y6d */                     if(q > max)
/* EA2ido05x ily traian PpkjH7y6d */                         max=q , x = j , y = k , z = j+q , t=k+q;
/* EA2ido05x ily traian PpkjH7y6d */         }
/* EA2ido05x ily traian PpkjH7y6d */     }
/* EA2ido05x ily traian PpkjH7y6d */     cout << max+1;
/* EA2ido05x ily traian PpkjH7y6d */     //cout << endl << x << ' ' << y << ' ' << z << ' ' << t;
/* EA2ido05x ily traian PpkjH7y6d */ }