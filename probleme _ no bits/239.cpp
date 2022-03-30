/* obTG7H4Yc ily traian F75fjljVT */ #include <algorithm>
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
/* obTG7H4Yc ily traian F75fjljVT */ using namespace std;
/* obTG7H4Yc ily traian F75fjljVT */ 
/* obTG7H4Yc ily traian F75fjljVT */ ifstream fin("nrlipsa.in");
/* obTG7H4Yc ily traian F75fjljVT */ ofstream fout("nrlipsa.out");
/* obTG7H4Yc ily traian F75fjljVT */ 
/* obTG7H4Yc ily traian F75fjljVT */ int main()
/* obTG7H4Yc ily traian F75fjljVT */ {
/* obTG7H4Yc ily traian F75fjljVT */     int f[1000001]={0};
/* obTG7H4Yc ily traian F75fjljVT */     int a=-1 , b=-1 , ok = 0 , n;
/* obTG7H4Yc ily traian F75fjljVT */     fin >> n;
/* obTG7H4Yc ily traian F75fjljVT */     int x;
/* obTG7H4Yc ily traian F75fjljVT */     while(fin >> x)
/* obTG7H4Yc ily traian F75fjljVT */     {
/* obTG7H4Yc ily traian F75fjljVT */         if(x < 1000)
/* obTG7H4Yc ily traian F75fjljVT */             f[x]++;
/* obTG7H4Yc ily traian F75fjljVT */     }
/* obTG7H4Yc ily traian F75fjljVT */     for(int i = 999 ; i >= 100 ; i--)
/* obTG7H4Yc ily traian F75fjljVT */     {
/* obTG7H4Yc ily traian F75fjljVT */         if(f[i]==0 && ok < 2)
/* obTG7H4Yc ily traian F75fjljVT */         {
/* obTG7H4Yc ily traian F75fjljVT */             if(ok==0)
/* obTG7H4Yc ily traian F75fjljVT */             {
/* obTG7H4Yc ily traian F75fjljVT */                 a=i;
/* obTG7H4Yc ily traian F75fjljVT */             }
/* obTG7H4Yc ily traian F75fjljVT */             if(ok==1)
/* obTG7H4Yc ily traian F75fjljVT */             {
/* obTG7H4Yc ily traian F75fjljVT */                 b=i;
/* obTG7H4Yc ily traian F75fjljVT */             }
/* obTG7H4Yc ily traian F75fjljVT */             ok++;
/* obTG7H4Yc ily traian F75fjljVT */         }
/* obTG7H4Yc ily traian F75fjljVT */     }
/* obTG7H4Yc ily traian F75fjljVT */     if(ok==2)
/* obTG7H4Yc ily traian F75fjljVT */         fout << a << ' ' << b;
/* obTG7H4Yc ily traian F75fjljVT */     if(ok==0)
/* obTG7H4Yc ily traian F75fjljVT */         fout << "NU";
/* obTG7H4Yc ily traian F75fjljVT */     else if(ok < 2)
/* obTG7H4Yc ily traian F75fjljVT */         fout << "NU EXISTA";
/* obTG7H4Yc ily traian F75fjljVT */     return 0;
/* obTG7H4Yc ily traian F75fjljVT */ }