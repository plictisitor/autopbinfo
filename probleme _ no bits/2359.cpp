/* viigKdYpR ily traian N9FQBix4l */ #include <algorithm>
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
/* viigKdYpR ily traian N9FQBix4l */ 
/* viigKdYpR ily traian N9FQBix4l */ using namespace std;
/* viigKdYpR ily traian N9FQBix4l */ 
/* viigKdYpR ily traian N9FQBix4l */ ifstream cin("cifre13.in");
/* viigKdYpR ily traian N9FQBix4l */ ofstream cout("cifre13.out");
/* viigKdYpR ily traian N9FQBix4l */ 
/* viigKdYpR ily traian N9FQBix4l */ bitset<2001> a[2001];
/* viigKdYpR ily traian N9FQBix4l */ 
/* viigKdYpR ily traian N9FQBix4l */ int main()
/* viigKdYpR ily traian N9FQBix4l */ {
/* viigKdYpR ily traian N9FQBix4l */     int n , m , c;
/* viigKdYpR ily traian N9FQBix4l */     cin >> n >> m >> c;
/* viigKdYpR ily traian N9FQBix4l */     for(int i = 1 ; i <= c ; ++i)
/* viigKdYpR ily traian N9FQBix4l */     {
/* viigKdYpR ily traian N9FQBix4l */         int x , y , val;
/* viigKdYpR ily traian N9FQBix4l */         cin >> val >> x >> y;
/* viigKdYpR ily traian N9FQBix4l */         if(val==0)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y]=a[x+4][y]=a[x+5][y]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+3]=a[x+4][y+3]=a[x+5][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==1)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x+2][y]=a[x+1][y+1]=a[x][y+2]=a[x+1][y+2]=a[x+2][y+2]=a[x+3][y+2]=a[x+4][y+2]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+5][y+2]=a[x+6][y+2]=a[x+6][y+1]=a[x+6][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==2)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x+1][y]=a[x][y+1]=a[x+2][y]=a[x][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+2]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+4][y+1]=a[x+5][y]=a[x+6][y]=a[x+6][y+1]=a[x+6][y+2]=a[x+6][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==3)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+4][y]=a[x+5][y]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==4)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x+2][y]=a[x+1][y+1]=a[x][y+2]=a[x+3][y]=a[x+3][y+1]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+3][y+2]=a[x+3][y+3]=a[x+4][y+2]=a[x+5][y+2]=a[x+6][y+2]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==5)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y+1]=a[x][y+2]=a[x][y+3]=a[x+1][y]=a[x+2][y]=a[x+3][y+1]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=a[x+6][y+2]=a[x+6][y+1]=a[x+5][y]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==6)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y]=a[x+4][y]=a[x+5][y]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+3][y+1]=a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==7)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y]=a[x][y+1]=a[x][y+2]=a[x][y+3]=a[x+1][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+2][y+2]=a[x+3][y+2]=a[x+4][y+1]=a[x+5][y+1]=a[x+6][y+1]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==8)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y+1]=a[x+4][y]=a[x+5][y]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+2]=a[x+4][y+3]=a[x+5][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */         if(val==9)
/* viigKdYpR ily traian N9FQBix4l */         {
/* viigKdYpR ily traian N9FQBix4l */             a[x][y+1]=a[x][y+2]=a[x+1][y]=a[x+2][y]=a[x+3][y+1]=a[x+3][y+2]=a[x+5][y]=1;
/* viigKdYpR ily traian N9FQBix4l */             a[x+6][y+1]=a[x+6][y+2]=a[x+1][y+3]=a[x+2][y+3]=a[x+3][y+3]=a[x+4][y+3]=a[x+5][y+3]=1;
/* viigKdYpR ily traian N9FQBix4l */         }
/* viigKdYpR ily traian N9FQBix4l */     }
/* viigKdYpR ily traian N9FQBix4l */     int cnt=0;
/* viigKdYpR ily traian N9FQBix4l */     for(int i = 1 ; i <= n ; ++i)
/* viigKdYpR ily traian N9FQBix4l */     {
/* viigKdYpR ily traian N9FQBix4l */         for(int j = 1 ; j <= m ; ++j)
/* viigKdYpR ily traian N9FQBix4l */             if(a[i][j]==1)
/* viigKdYpR ily traian N9FQBix4l */                 cnt++;
/* viigKdYpR ily traian N9FQBix4l */     }
/* viigKdYpR ily traian N9FQBix4l */     cout << cnt;
/* viigKdYpR ily traian N9FQBix4l */     return 0;
/* viigKdYpR ily traian N9FQBix4l */ }