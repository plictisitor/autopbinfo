/* umX6gS9Lp ily traian IQT6P5Qen */ #include <algorithm>
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
/* umX6gS9Lp ily traian IQT6P5Qen */ 
/* umX6gS9Lp ily traian IQT6P5Qen */ using namespace std;
/* umX6gS9Lp ily traian IQT6P5Qen */ ifstream cin("pprim.in");
/* umX6gS9Lp ily traian IQT6P5Qen */ ofstream cout("pprim.out");
/* umX6gS9Lp ily traian IQT6P5Qen */ int a[33001] , st , dr;
/* umX6gS9Lp ily traian IQT6P5Qen */ int primeintreele(int a , int b)
/* umX6gS9Lp ily traian IQT6P5Qen */ {
/* umX6gS9Lp ily traian IQT6P5Qen */     int r;
/* umX6gS9Lp ily traian IQT6P5Qen */     while(b!=0)
/* umX6gS9Lp ily traian IQT6P5Qen */     {
/* umX6gS9Lp ily traian IQT6P5Qen */         r = a %b;
/* umX6gS9Lp ily traian IQT6P5Qen */         a = b;
/* umX6gS9Lp ily traian IQT6P5Qen */         b = r;
/* umX6gS9Lp ily traian IQT6P5Qen */     }
/* umX6gS9Lp ily traian IQT6P5Qen */     if(a == 1) return 1;
/* umX6gS9Lp ily traian IQT6P5Qen */     else return 0;
/* umX6gS9Lp ily traian IQT6P5Qen */ }
/* umX6gS9Lp ily traian IQT6P5Qen */ void pprim(int p)
/* umX6gS9Lp ily traian IQT6P5Qen */ {
/* umX6gS9Lp ily traian IQT6P5Qen */     for(int n = 1 ; n <= 33001;++n)
/* umX6gS9Lp ily traian IQT6P5Qen */     {
/* umX6gS9Lp ily traian IQT6P5Qen */         int cnt = 0;
/* umX6gS9Lp ily traian IQT6P5Qen */         for(int i = 1 ; i*i<= n ; ++i)
/* umX6gS9Lp ily traian IQT6P5Qen */         {
/* umX6gS9Lp ily traian IQT6P5Qen */             if(n%i==0)
/* umX6gS9Lp ily traian IQT6P5Qen */             {
/* umX6gS9Lp ily traian IQT6P5Qen */                 if(primeintreele(i , n/i)==1)cnt++;
/* umX6gS9Lp ily traian IQT6P5Qen */             }
/* umX6gS9Lp ily traian IQT6P5Qen */         }
/* umX6gS9Lp ily traian IQT6P5Qen */         if(cnt==p) a[n]=a[n-1]+1;
/* umX6gS9Lp ily traian IQT6P5Qen */         else a[n] = a[n-1];
/* umX6gS9Lp ily traian IQT6P5Qen */     }
/* umX6gS9Lp ily traian IQT6P5Qen */ }
/* umX6gS9Lp ily traian IQT6P5Qen */ int main()
/* umX6gS9Lp ily traian IQT6P5Qen */ {
/* umX6gS9Lp ily traian IQT6P5Qen */     int n , p , ok = 0 , x , y , st , dr , max = -1;
/* umX6gS9Lp ily traian IQT6P5Qen */     cin >> n >> p;
/* umX6gS9Lp ily traian IQT6P5Qen */     pprim(p);
/* umX6gS9Lp ily traian IQT6P5Qen */     for(int i = 1 ; i <= n ; ++i)
/* umX6gS9Lp ily traian IQT6P5Qen */     {
/* umX6gS9Lp ily traian IQT6P5Qen */         cin >> x >> y;
/* umX6gS9Lp ily traian IQT6P5Qen */         int cnt = 0;
/* umX6gS9Lp ily traian IQT6P5Qen */         if(x > y){int aux = x ; x = y ; y = aux;}
/* umX6gS9Lp ily traian IQT6P5Qen */         if(a[y]-a[x-1] > max) max = a[y]-a[x-1] , st = x , dr = y;
/* umX6gS9Lp ily traian IQT6P5Qen */     }
/* umX6gS9Lp ily traian IQT6P5Qen */     if(max == -1) cout << "nu exista";
/* umX6gS9Lp ily traian IQT6P5Qen */     else cout << st << " " << dr;
/* umX6gS9Lp ily traian IQT6P5Qen */ }