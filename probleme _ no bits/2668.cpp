/* Jm48xpPPh ily traian FNJwlkcFc */ #include <algorithm>
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
/* Jm48xpPPh ily traian FNJwlkcFc */ using namespace std;
/* Jm48xpPPh ily traian FNJwlkcFc */ 
/* Jm48xpPPh ily traian FNJwlkcFc */ int a[100005] , b[100005] , c[100005] , d[100005];
/* Jm48xpPPh ily traian FNJwlkcFc */ 
/* Jm48xpPPh ily traian FNJwlkcFc */ int main()
/* Jm48xpPPh ily traian FNJwlkcFc */ {
/* Jm48xpPPh ily traian FNJwlkcFc */     int n;
/* Jm48xpPPh ily traian FNJwlkcFc */     cin >> n;
/* Jm48xpPPh ily traian FNJwlkcFc */     for(int i = 1 ; i <= n ; i++)
/* Jm48xpPPh ily traian FNJwlkcFc */         cin >> a[i];
/* Jm48xpPPh ily traian FNJwlkcFc */     for(int i = 1 ; i <= n ; i++)
/* Jm48xpPPh ily traian FNJwlkcFc */         cin >> b[i];
/* Jm48xpPPh ily traian FNJwlkcFc */     for(int i = 1 ; i <= n ; i++)
/* Jm48xpPPh ily traian FNJwlkcFc */         cin >> c[i];
/* Jm48xpPPh ily traian FNJwlkcFc */     int cnt = 0;
/* Jm48xpPPh ily traian FNJwlkcFc */     int i = 1 , j = 1;
/* Jm48xpPPh ily traian FNJwlkcFc */     while(i <= n && j <= n)
/* Jm48xpPPh ily traian FNJwlkcFc */     {
/* Jm48xpPPh ily traian FNJwlkcFc */         if(a[i] == b[j]) d[++cnt] = a[i] , i++ , j++;
/* Jm48xpPPh ily traian FNJwlkcFc */         else if(a[i] < b[j]) i++;
/* Jm48xpPPh ily traian FNJwlkcFc */         else j++;
/* Jm48xpPPh ily traian FNJwlkcFc */     }
/* Jm48xpPPh ily traian FNJwlkcFc */     i = 1 , j = 1;
/* Jm48xpPPh ily traian FNJwlkcFc */     int rez = -1;
/* Jm48xpPPh ily traian FNJwlkcFc */     while(i <= n && j <= cnt)
/* Jm48xpPPh ily traian FNJwlkcFc */     {
/* Jm48xpPPh ily traian FNJwlkcFc */         if(c[i] == d[j])
/* Jm48xpPPh ily traian FNJwlkcFc */         {
/* Jm48xpPPh ily traian FNJwlkcFc */             rez = c[i];
/* Jm48xpPPh ily traian FNJwlkcFc */             break;
/* Jm48xpPPh ily traian FNJwlkcFc */         }
/* Jm48xpPPh ily traian FNJwlkcFc */         if(c[i] < d[j]) i++;
/* Jm48xpPPh ily traian FNJwlkcFc */         else j++;
/* Jm48xpPPh ily traian FNJwlkcFc */     }
/* Jm48xpPPh ily traian FNJwlkcFc */     cout << rez;
/* Jm48xpPPh ily traian FNJwlkcFc */ }