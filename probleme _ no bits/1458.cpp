/* GEmhRWx1n ily traian qwaMczG3s */ #include <algorithm>
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
/* GEmhRWx1n ily traian qwaMczG3s */ 
/* GEmhRWx1n ily traian qwaMczG3s */ 
/* GEmhRWx1n ily traian qwaMczG3s */ 
/* GEmhRWx1n ily traian qwaMczG3s */ using namespace std;
/* GEmhRWx1n ily traian qwaMczG3s */ 
/* GEmhRWx1n ily traian qwaMczG3s */ ifstream cin("ecuatii.in");
/* GEmhRWx1n ily traian qwaMczG3s */ ofstream cout("ecuatii.out");
/* GEmhRWx1n ily traian qwaMczG3s */ 
/* GEmhRWx1n ily traian qwaMczG3s */ int main()
/* GEmhRWx1n ily traian qwaMczG3s */ {
/* GEmhRWx1n ily traian qwaMczG3s */     char ch;
/* GEmhRWx1n ily traian qwaMczG3s */     cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */     int a = 0;
/* GEmhRWx1n ily traian qwaMczG3s */     bool negativ=false;
/* GEmhRWx1n ily traian qwaMczG3s */     int cnt=0;
/* GEmhRWx1n ily traian qwaMczG3s */     while(ch != 'x')
/* GEmhRWx1n ily traian qwaMczG3s */     {
/* GEmhRWx1n ily traian qwaMczG3s */         if(ch == '-')
/* GEmhRWx1n ily traian qwaMczG3s */             negativ=true;
/* GEmhRWx1n ily traian qwaMczG3s */         else
/* GEmhRWx1n ily traian qwaMczG3s */             a=a*10+(int)ch - 48 , cnt++;
/* GEmhRWx1n ily traian qwaMczG3s */         cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */     }
/* GEmhRWx1n ily traian qwaMczG3s */     if(cnt==0)
/* GEmhRWx1n ily traian qwaMczG3s */         a=1;
/* GEmhRWx1n ily traian qwaMczG3s */     if(negativ)
/* GEmhRWx1n ily traian qwaMczG3s */         a*=-1;
/* GEmhRWx1n ily traian qwaMczG3s */     negativ=false;
/* GEmhRWx1n ily traian qwaMczG3s */     while(ch !='-' && ch !='+')
/* GEmhRWx1n ily traian qwaMczG3s */         cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */     int b = 0;
/* GEmhRWx1n ily traian qwaMczG3s */     if(ch == '+')
/* GEmhRWx1n ily traian qwaMczG3s */     {
/* GEmhRWx1n ily traian qwaMczG3s */         cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */         bool ok=true;
/* GEmhRWx1n ily traian qwaMczG3s */         if(ch=='x')
/* GEmhRWx1n ily traian qwaMczG3s */             ok=false;
/* GEmhRWx1n ily traian qwaMczG3s */         while(ch != 'x')
/* GEmhRWx1n ily traian qwaMczG3s */         {
/* GEmhRWx1n ily traian qwaMczG3s */             b = b * 10 + (int)ch - 48;
/* GEmhRWx1n ily traian qwaMczG3s */             cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */         }
/* GEmhRWx1n ily traian qwaMczG3s */         if(!ok)
/* GEmhRWx1n ily traian qwaMczG3s */             b=1;
/* GEmhRWx1n ily traian qwaMczG3s */     }
/* GEmhRWx1n ily traian qwaMczG3s */     else
/* GEmhRWx1n ily traian qwaMczG3s */     {
/* GEmhRWx1n ily traian qwaMczG3s */         cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */         bool ok=true;
/* GEmhRWx1n ily traian qwaMczG3s */         if(ch=='x')
/* GEmhRWx1n ily traian qwaMczG3s */             ok=false;
/* GEmhRWx1n ily traian qwaMczG3s */         while(ch != 'x')
/* GEmhRWx1n ily traian qwaMczG3s */         {
/* GEmhRWx1n ily traian qwaMczG3s */             b = b * 10 + (int)ch - 48;
/* GEmhRWx1n ily traian qwaMczG3s */             cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */         }
/* GEmhRWx1n ily traian qwaMczG3s */         if(!ok)
/* GEmhRWx1n ily traian qwaMczG3s */             b=1;
/* GEmhRWx1n ily traian qwaMczG3s */         b*=-1;
/* GEmhRWx1n ily traian qwaMczG3s */     }
/* GEmhRWx1n ily traian qwaMczG3s */     int c;
/* GEmhRWx1n ily traian qwaMczG3s */     cin >> ch;
/* GEmhRWx1n ily traian qwaMczG3s */     if(ch=='+')
/* GEmhRWx1n ily traian qwaMczG3s */         cin >> c;
/* GEmhRWx1n ily traian qwaMczG3s */     else
/* GEmhRWx1n ily traian qwaMczG3s */         cin >> c , c *= -1;
/* GEmhRWx1n ily traian qwaMczG3s */     float delta = b * b - 4 * a * c;
/* GEmhRWx1n ily traian qwaMczG3s */     if(delta < 0)
/* GEmhRWx1n ily traian qwaMczG3s */         cout << -1;
/* GEmhRWx1n ily traian qwaMczG3s */     else if(delta == 0)
/* GEmhRWx1n ily traian qwaMczG3s */     {
/* GEmhRWx1n ily traian qwaMczG3s */         float rez = - b / (2 * a);
/* GEmhRWx1n ily traian qwaMczG3s */         cout << fixed << setprecision(2) << rez;
/* GEmhRWx1n ily traian qwaMczG3s */     }
/* GEmhRWx1n ily traian qwaMczG3s */     else
/* GEmhRWx1n ily traian qwaMczG3s */     {
/* GEmhRWx1n ily traian qwaMczG3s */         float delta1 = sqrt(delta);
/* GEmhRWx1n ily traian qwaMczG3s */         float rez1 = (-b + delta1) / (2 * a);
/* GEmhRWx1n ily traian qwaMczG3s */         float rez2 = (-b - delta1) / (2 * a);
/* GEmhRWx1n ily traian qwaMczG3s */         if(rez1 > rez2)
/* GEmhRWx1n ily traian qwaMczG3s */             swap(rez1 , rez2);
/* GEmhRWx1n ily traian qwaMczG3s */         cout << fixed << setprecision(2) << rez1 << ' ' << rez2;
/* GEmhRWx1n ily traian qwaMczG3s */     }
/* GEmhRWx1n ily traian qwaMczG3s */     return 0;
/* GEmhRWx1n ily traian qwaMczG3s */ }