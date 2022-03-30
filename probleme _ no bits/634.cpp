/* c9uIzlzdd ily traian gDSSUt62F */ #include <algorithm>
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
/* c9uIzlzdd ily traian gDSSUt62F */ using namespace std;
/* c9uIzlzdd ily traian gDSSUt62F */ ifstream cin("repetare.in");
/* c9uIzlzdd ily traian gDSSUt62F */ ofstream cout("repetare.out");
/* c9uIzlzdd ily traian gDSSUt62F */ int main()
/* c9uIzlzdd ily traian gDSSUt62F */ {
/* c9uIzlzdd ily traian gDSSUt62F */     int n , m , a[1000] , b[1000] , ok = 0;
/* c9uIzlzdd ily traian gDSSUt62F */     cin >> n;
/* c9uIzlzdd ily traian gDSSUt62F */     for(int i = 0 ; i < n ; ++i)
/* c9uIzlzdd ily traian gDSSUt62F */         cin >> a[i];
/* c9uIzlzdd ily traian gDSSUt62F */     cin >> m;
/* c9uIzlzdd ily traian gDSSUt62F */     for(int i = 0 ; i < m ; ++i)
/* c9uIzlzdd ily traian gDSSUt62F */         cin >> b[i];
/* c9uIzlzdd ily traian gDSSUt62F */     for(int i = 0 ; i < m ; ++i)
/* c9uIzlzdd ily traian gDSSUt62F */     {
/* c9uIzlzdd ily traian gDSSUt62F */         int cnt = 0;
/* c9uIzlzdd ily traian gDSSUt62F */         for(int j = 0 ; j < n ; ++j)
/* c9uIzlzdd ily traian gDSSUt62F */             if(b[i]!=a[j]) cnt++;
/* c9uIzlzdd ily traian gDSSUt62F */         if(cnt == n)
/* c9uIzlzdd ily traian gDSSUt62F */         ok = 1;
/* c9uIzlzdd ily traian gDSSUt62F */     }
/* c9uIzlzdd ily traian gDSSUt62F */     if(ok == 0)
/* c9uIzlzdd ily traian gDSSUt62F */     {
/* c9uIzlzdd ily traian gDSSUt62F */         int k = 0 , i = 0 , cnt = 0;
/* c9uIzlzdd ily traian gDSSUt62F */         while(m > 1)
/* c9uIzlzdd ily traian gDSSUt62F */         {
/* c9uIzlzdd ily traian gDSSUt62F */             if(b[i]==a[k])
/* c9uIzlzdd ily traian gDSSUt62F */                 i++ , m--;
/* c9uIzlzdd ily traian gDSSUt62F */             k++;
/* c9uIzlzdd ily traian gDSSUt62F */             if(k==n) cnt++ , k = 0;
/* c9uIzlzdd ily traian gDSSUt62F */         }
/* c9uIzlzdd ily traian gDSSUt62F */         cout << cnt+1;
/* c9uIzlzdd ily traian gDSSUt62F */     }
/* c9uIzlzdd ily traian gDSSUt62F */     else cout << "IMPOSIBIL";
/* c9uIzlzdd ily traian gDSSUt62F */     return 0;
/* c9uIzlzdd ily traian gDSSUt62F */ }