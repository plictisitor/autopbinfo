/* I7Zezz9q4 ily traian 3uJ1KhdDV */ #include <algorithm>
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
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ 
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ using namespace std;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ 
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ ifstream cin("tabel1.in");
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ ofstream cout("tabel1.out");
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ 
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ int f[200] , a[101] , p=0 , fr[10];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ char s[1000001];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ 
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ bool cifra(char ch)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ {
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     return ch >= '0' && ch <= '9';
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ }
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ 
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ int main()
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ {
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     int n;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     cin >> n;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     char ch;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     int x;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     for(int i = 1 ; i <= 199 ; ++i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         f[i]=i;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     for(int i = 1 ; i <= n ; ++i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         cin >> ch >> x , f[(int)ch]=x;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     for(int i = 48 ; i <= 57 ; ++i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         f[i]=0;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     cin >> s;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     int cnt = 0;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     int i = 0;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     while(s[i]!='\0')
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     {
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         cnt+=f[(int)s[i]];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         if(cifra(s[i]) && fr[(int)s[i]-48]==0)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */             a[p]=(int)s[i]-48 , p++ , fr[(int)s[i]-48]++;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         i++;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     }
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     sort(a , a+p);
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     cout << cnt << endl;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     if(p%2==0)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     {
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         for(int i = p-1 ; i >= p/2 ; --i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */             cout << a[i];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         for(int i = 0 ; i < p/2 ; ++i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */             cout << a[i];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     }
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     else
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     {
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         for(int i = p-1 ; i > p/2 ; --i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */             cout << a[i];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */         for(int i = 0 ; i <= p/2 ; ++i)
/* I7Zezz9q4 ily traian 3uJ1KhdDV */             cout << a[i];
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     }
/* I7Zezz9q4 ily traian 3uJ1KhdDV */     return 0;
/* I7Zezz9q4 ily traian 3uJ1KhdDV */ }