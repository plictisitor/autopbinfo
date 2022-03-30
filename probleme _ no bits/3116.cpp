/* ggEBdrEkz ily traian 3AlDIkR0d */ #include <algorithm>
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
/* ggEBdrEkz ily traian 3AlDIkR0d */ using namespace std;
/* ggEBdrEkz ily traian 3AlDIkR0d */ 
/* ggEBdrEkz ily traian 3AlDIkR0d */ ifstream cin("cifrab.in");
/* ggEBdrEkz ily traian 3AlDIkR0d */ ofstream cout("cifrab.out");
/* ggEBdrEkz ily traian 3AlDIkR0d */ 
/* ggEBdrEkz ily traian 3AlDIkR0d */ int a[100005], n;
/* ggEBdrEkz ily traian 3AlDIkR0d */ char s[100005];
/* ggEBdrEkz ily traian 3AlDIkR0d */ 
/* ggEBdrEkz ily traian 3AlDIkR0d */ bool cif(char ch)
/* ggEBdrEkz ily traian 3AlDIkR0d */ {
/* ggEBdrEkz ily traian 3AlDIkR0d */     return '0' <= ch && '9' >= ch;
/* ggEBdrEkz ily traian 3AlDIkR0d */ }
/* ggEBdrEkz ily traian 3AlDIkR0d */ 
/* ggEBdrEkz ily traian 3AlDIkR0d */ int rest(int b)
/* ggEBdrEkz ily traian 3AlDIkR0d */ {
/* ggEBdrEkz ily traian 3AlDIkR0d */     int r = 0;
/* ggEBdrEkz ily traian 3AlDIkR0d */     for(int i = 0 ; i < n; ++i)
/* ggEBdrEkz ily traian 3AlDIkR0d */         r = (b * r + a[i]) % (b - 1);
/* ggEBdrEkz ily traian 3AlDIkR0d */     return r;
/* ggEBdrEkz ily traian 3AlDIkR0d */ }
/* ggEBdrEkz ily traian 3AlDIkR0d */ 
/* ggEBdrEkz ily traian 3AlDIkR0d */ int main()
/* ggEBdrEkz ily traian 3AlDIkR0d */ {
/* ggEBdrEkz ily traian 3AlDIkR0d */     cin >> s;
/* ggEBdrEkz ily traian 3AlDIkR0d */     int i = 0;
/* ggEBdrEkz ily traian 3AlDIkR0d */     int bmax = 0;
/* ggEBdrEkz ily traian 3AlDIkR0d */     while(s[i])
/* ggEBdrEkz ily traian 3AlDIkR0d */     {
/* ggEBdrEkz ily traian 3AlDIkR0d */         if(cif(s[i]))
/* ggEBdrEkz ily traian 3AlDIkR0d */         {
/* ggEBdrEkz ily traian 3AlDIkR0d */             a[i] = s[i] - '0';
/* ggEBdrEkz ily traian 3AlDIkR0d */         }
/* ggEBdrEkz ily traian 3AlDIkR0d */         else
/* ggEBdrEkz ily traian 3AlDIkR0d */             a[i] = s[i] - 'A' + 10;
/* ggEBdrEkz ily traian 3AlDIkR0d */         i++;
/* ggEBdrEkz ily traian 3AlDIkR0d */         if(a[i-1] > bmax)
/* ggEBdrEkz ily traian 3AlDIkR0d */             bmax = a[i-1];
/* ggEBdrEkz ily traian 3AlDIkR0d */     }
/* ggEBdrEkz ily traian 3AlDIkR0d */     n = i;
/* ggEBdrEkz ily traian 3AlDIkR0d */     cout << bmax + 1 << endl;
/* ggEBdrEkz ily traian 3AlDIkR0d */     int rez = rest(bmax+1);
/* ggEBdrEkz ily traian 3AlDIkR0d */     if(rez == 0)
/* ggEBdrEkz ily traian 3AlDIkR0d */         rez = bmax;
/* ggEBdrEkz ily traian 3AlDIkR0d */     if(rez >= 10)
/* ggEBdrEkz ily traian 3AlDIkR0d */         cout <<(char) (rez + 'A' - 10);
/* ggEBdrEkz ily traian 3AlDIkR0d */     else
/* ggEBdrEkz ily traian 3AlDIkR0d */         cout << rez;
/* ggEBdrEkz ily traian 3AlDIkR0d */     return 0;
/* ggEBdrEkz ily traian 3AlDIkR0d */ }