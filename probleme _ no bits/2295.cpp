/* 91Dl2iQzJ ily traian u1aOq2iDu */ #include <algorithm>
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
/* 91Dl2iQzJ ily traian u1aOq2iDu */ 
/* 91Dl2iQzJ ily traian u1aOq2iDu */ using namespace std;
/* 91Dl2iQzJ ily traian u1aOq2iDu */ 
/* 91Dl2iQzJ ily traian u1aOq2iDu */ ifstream cin("baza.in");
/* 91Dl2iQzJ ily traian u1aOq2iDu */ ofstream cout("baza.out");
/* 91Dl2iQzJ ily traian u1aOq2iDu */ 
/* 91Dl2iQzJ ily traian u1aOq2iDu */ void inmultire(int a[] , int& n , int x)
/* 91Dl2iQzJ ily traian u1aOq2iDu */ {
/* 91Dl2iQzJ ily traian u1aOq2iDu */     int t = 0;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     for(int i = 1 ; i <= n ; ++i)
/* 91Dl2iQzJ ily traian u1aOq2iDu */     {
/* 91Dl2iQzJ ily traian u1aOq2iDu */         a[i] = a[i] * x + t;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         t = a[i] / 10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         a[i] %= 10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     }
/* 91Dl2iQzJ ily traian u1aOq2iDu */     while(t)
/* 91Dl2iQzJ ily traian u1aOq2iDu */     {
/* 91Dl2iQzJ ily traian u1aOq2iDu */         a[++n]=t%10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         t/=10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     }
/* 91Dl2iQzJ ily traian u1aOq2iDu */ }
/* 91Dl2iQzJ ily traian u1aOq2iDu */ 
/* 91Dl2iQzJ ily traian u1aOq2iDu */ void adunare(int a[] , int &n , int x)
/* 91Dl2iQzJ ily traian u1aOq2iDu */ {
/* 91Dl2iQzJ ily traian u1aOq2iDu */     int t = a[1] + x;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     a[1]=t%10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     t/=10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     int i = 2;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     while(t && i <= n)
/* 91Dl2iQzJ ily traian u1aOq2iDu */     {
/* 91Dl2iQzJ ily traian u1aOq2iDu */         int s = a[i] + t;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         a[i]=s%10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         t = s/10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         i++;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     }
/* 91Dl2iQzJ ily traian u1aOq2iDu */     while(t)
/* 91Dl2iQzJ ily traian u1aOq2iDu */     {
/* 91Dl2iQzJ ily traian u1aOq2iDu */         a[++n]=t%10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */         t/=10;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     }
/* 91Dl2iQzJ ily traian u1aOq2iDu */ }
/* 91Dl2iQzJ ily traian u1aOq2iDu */ 
/* 91Dl2iQzJ ily traian u1aOq2iDu */ int main()
/* 91Dl2iQzJ ily traian u1aOq2iDu */ {
/* 91Dl2iQzJ ily traian u1aOq2iDu */     char s[51];
/* 91Dl2iQzJ ily traian u1aOq2iDu */     cin >> s;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     int a[1500]={0} , n = 1;
/* 91Dl2iQzJ ily traian u1aOq2iDu */     adunare(a , n , s[0]-'a');
/* 91Dl2iQzJ ily traian u1aOq2iDu */     for(int i = 1 ; i < strlen(s) ; ++i)
/* 91Dl2iQzJ ily traian u1aOq2iDu */         inmultire(a , n , 26) , adunare(a , n , s[i]-'a');
/* 91Dl2iQzJ ily traian u1aOq2iDu */     for(int i = n ; i >=  1; --i)
/* 91Dl2iQzJ ily traian u1aOq2iDu */         cout << a[i];
/* 91Dl2iQzJ ily traian u1aOq2iDu */     return 0;
/* 91Dl2iQzJ ily traian u1aOq2iDu */ }