/* TuL5sGy29 ily traian jWIH2NxgP */ #include <algorithm>
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
/* TuL5sGy29 ily traian jWIH2NxgP */ 
/* TuL5sGy29 ily traian jWIH2NxgP */ using namespace std;
/* TuL5sGy29 ily traian jWIH2NxgP */ 
/* TuL5sGy29 ily traian jWIH2NxgP */ ifstream cin("gropi.in");
/* TuL5sGy29 ily traian jWIH2NxgP */ ofstream cout("gropi.out");
/* TuL5sGy29 ily traian jWIH2NxgP */ 
/* TuL5sGy29 ily traian jWIH2NxgP */ int n , m , x , y;
/* TuL5sGy29 ily traian jWIH2NxgP */ float a[1001][1001];
/* TuL5sGy29 ily traian jWIH2NxgP */ int cnt[10];
/* TuL5sGy29 ily traian jWIH2NxgP */ 
/* TuL5sGy29 ily traian jWIH2NxgP */ bool inmat(int x , int y)
/* TuL5sGy29 ily traian jWIH2NxgP */ {
/* TuL5sGy29 ily traian jWIH2NxgP */     return x >= 1 && x <= n && y >= 1 && y <= m;
/* TuL5sGy29 ily traian jWIH2NxgP */ }
/* TuL5sGy29 ily traian jWIH2NxgP */ 
/* TuL5sGy29 ily traian jWIH2NxgP */ int di[]={-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1};
/* TuL5sGy29 ily traian jWIH2NxgP */ int dj[]={0 , 1 , 1 , 1 , 0 , -1 , -1 , -1};
/* TuL5sGy29 ily traian jWIH2NxgP */ 
/* TuL5sGy29 ily traian jWIH2NxgP */ int main()
/* TuL5sGy29 ily traian jWIH2NxgP */ {
/* TuL5sGy29 ily traian jWIH2NxgP */     cin >> n >> m >> x >> y;
/* TuL5sGy29 ily traian jWIH2NxgP */     for(int i = 1 ; i <= n ; ++i)
/* TuL5sGy29 ily traian jWIH2NxgP */         for(int j = 1 ; j <= m ; ++j)
/* TuL5sGy29 ily traian jWIH2NxgP */             cin >> a[i][j];
/* TuL5sGy29 ily traian jWIH2NxgP */     for(int d = 0 ; d < 8 ; ++d)
/* TuL5sGy29 ily traian jWIH2NxgP */     {
/* TuL5sGy29 ily traian jWIH2NxgP */         int inou = x , jnou = y;
/* TuL5sGy29 ily traian jWIH2NxgP */         while(inmat(inou , jnou))
/* TuL5sGy29 ily traian jWIH2NxgP */         {
/* TuL5sGy29 ily traian jWIH2NxgP */             inou += di[d] , jnou += dj[d];
/* TuL5sGy29 ily traian jWIH2NxgP */             if(inmat(inou , jnou) && a[inou][jnou]==0)
/* TuL5sGy29 ily traian jWIH2NxgP */                 a[inou][jnou] = 1 , cnt[d]++;
/* TuL5sGy29 ily traian jWIH2NxgP */         }
/* TuL5sGy29 ily traian jWIH2NxgP */     }
/* TuL5sGy29 ily traian jWIH2NxgP */     int poz , max = 0;
/* TuL5sGy29 ily traian jWIH2NxgP */     for(int i = 0 ; i < 8 ; ++i)
/* TuL5sGy29 ily traian jWIH2NxgP */         if(cnt[i] >= max)
/* TuL5sGy29 ily traian jWIH2NxgP */             max = cnt[i] , poz = i;
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 0)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "N " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 1)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "NE " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 2)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "E " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 3)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "SE " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 4)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "S " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 5)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "SV " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 6)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "V " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     if(poz == 7)
/* TuL5sGy29 ily traian jWIH2NxgP */         cout << "NV " << cnt[poz];
/* TuL5sGy29 ily traian jWIH2NxgP */     return 0;
/* TuL5sGy29 ily traian jWIH2NxgP */ }