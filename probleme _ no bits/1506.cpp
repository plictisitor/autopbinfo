/* qDYZg4ZJ6 ily traian ff6DM0hXS */ #include <algorithm>
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
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ using namespace std;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ ifstream cin("serbare1.in");
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ ofstream cout("serbare1.out");
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ int n , h , cnt , f[200] , nr , v[202];
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ char k[101] , p[101];
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ struct poz
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ {
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     char nume[55] , prenume[55];
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     int inaltime;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ };
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ poz a[155];
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ int compara(poz a , poz b)
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ {
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     if(a.inaltime > b.inaltime) return 1;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     else if(a.inaltime == b.inaltime && strcmp(a.nume , b.nume) < 0) return 1;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     else return 0;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ }
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ 
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ int main()
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ {
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     cin >> n;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     for(int i = 1 ; i <= n ; i++)
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     {
/* qDYZg4ZJ6 ily traian ff6DM0hXS */         cin >> a[i].nume >> a[i].prenume >> a[i].inaltime;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */         if(f[a[i].inaltime] == 0) cnt++;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */         f[a[i].inaltime]++;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     }
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     cout << cnt;
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     sort(a + 1 , a + n + 1 , compara);
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     for(int i = 150 ; i >= 1 ; i--)
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     {
/* qDYZg4ZJ6 ily traian ff6DM0hXS */         if(f[i] != 0)
/* qDYZg4ZJ6 ily traian ff6DM0hXS */         {
/* qDYZg4ZJ6 ily traian ff6DM0hXS */             cout << endl << f[i] << " ";
/* qDYZg4ZJ6 ily traian ff6DM0hXS */             for(int j = 1 ; j <= n ; j++)
/* qDYZg4ZJ6 ily traian ff6DM0hXS */                 if(i == a[j].inaltime)cout <<  a[j].nume << " " << a[j].prenume << " ";
/* qDYZg4ZJ6 ily traian ff6DM0hXS */         }
/* qDYZg4ZJ6 ily traian ff6DM0hXS */     }
/* qDYZg4ZJ6 ily traian ff6DM0hXS */ }