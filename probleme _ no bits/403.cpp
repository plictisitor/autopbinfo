/* Q2HDZyE2s ily traian q6nRUZtbe */ #include <algorithm>
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
/* Q2HDZyE2s ily traian q6nRUZtbe */ 
/* Q2HDZyE2s ily traian q6nRUZtbe */ using namespace std;
/* Q2HDZyE2s ily traian q6nRUZtbe */ 
/* Q2HDZyE2s ily traian q6nRUZtbe */ ifstream cin("concert.in");
/* Q2HDZyE2s ily traian q6nRUZtbe */ ofstream cout("concert.out");
/* Q2HDZyE2s ily traian q6nRUZtbe */ 
/* Q2HDZyE2s ily traian q6nRUZtbe */ int n , timp , s[101] , cnt;
/* Q2HDZyE2s ily traian q6nRUZtbe */ char v[10];
/* Q2HDZyE2s ily traian q6nRUZtbe */ 
/* Q2HDZyE2s ily traian q6nRUZtbe */ struct poz
/* Q2HDZyE2s ily traian q6nRUZtbe */ {
/* Q2HDZyE2s ily traian q6nRUZtbe */     int t , ind;
/* Q2HDZyE2s ily traian q6nRUZtbe */ }x[101];
/* Q2HDZyE2s ily traian q6nRUZtbe */ 
/* Q2HDZyE2s ily traian q6nRUZtbe */ int comp(poz a , poz b)
/* Q2HDZyE2s ily traian q6nRUZtbe */ {
/* Q2HDZyE2s ily traian q6nRUZtbe */     if(a.t <= b.t)return 1;
/* Q2HDZyE2s ily traian q6nRUZtbe */     else if(a.t == b.t && a.ind < b.ind) return 1;
/* Q2HDZyE2s ily traian q6nRUZtbe */     else return 0;
/* Q2HDZyE2s ily traian q6nRUZtbe */ }
/* Q2HDZyE2s ily traian q6nRUZtbe */ 
/* Q2HDZyE2s ily traian q6nRUZtbe */ int main()
/* Q2HDZyE2s ily traian q6nRUZtbe */ {
/* Q2HDZyE2s ily traian q6nRUZtbe */     cin >> n >> timp;
/* Q2HDZyE2s ily traian q6nRUZtbe */     for(int i = 1 ; i <= n ; i++)
/* Q2HDZyE2s ily traian q6nRUZtbe */     {
/* Q2HDZyE2s ily traian q6nRUZtbe */         cin >> v;
/* Q2HDZyE2s ily traian q6nRUZtbe */         int j = 0 , a = 0 , b = 0;
/* Q2HDZyE2s ily traian q6nRUZtbe */         while(v[j] != ':') a = a * 10 + v[j++] - '0';
/* Q2HDZyE2s ily traian q6nRUZtbe */         a *= 60;
/* Q2HDZyE2s ily traian q6nRUZtbe */         j++;
/* Q2HDZyE2s ily traian q6nRUZtbe */         while(v[j] != '\0') b = b * 10 + v[j++] - '0';
/* Q2HDZyE2s ily traian q6nRUZtbe */         a += b;
/* Q2HDZyE2s ily traian q6nRUZtbe */         x[i].t = a;
/* Q2HDZyE2s ily traian q6nRUZtbe */         x[i].ind = i;
/* Q2HDZyE2s ily traian q6nRUZtbe */     }
/* Q2HDZyE2s ily traian q6nRUZtbe */     sort(x + 1 , x + n + 1 , comp);
/* Q2HDZyE2s ily traian q6nRUZtbe */     int i = 1;
/* Q2HDZyE2s ily traian q6nRUZtbe */     while(i <= n && x[i].t <= timp)
/* Q2HDZyE2s ily traian q6nRUZtbe */     {
/* Q2HDZyE2s ily traian q6nRUZtbe */         s[++cnt] = x[i].ind;
/* Q2HDZyE2s ily traian q6nRUZtbe */         timp -= x[i].t;
/* Q2HDZyE2s ily traian q6nRUZtbe */         i++;
/* Q2HDZyE2s ily traian q6nRUZtbe */     }
/* Q2HDZyE2s ily traian q6nRUZtbe */     cout << cnt << '\n';
/* Q2HDZyE2s ily traian q6nRUZtbe */     for(int i = 1 ; i <= cnt ; i++)
/* Q2HDZyE2s ily traian q6nRUZtbe */         cout << s[i] << " ";
/* Q2HDZyE2s ily traian q6nRUZtbe */     return 0;
/* Q2HDZyE2s ily traian q6nRUZtbe */ }