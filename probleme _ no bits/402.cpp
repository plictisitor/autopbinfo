/* n57bwHv4M ily traian JzRdAOEPX */ #include <algorithm>
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
/* n57bwHv4M ily traian JzRdAOEPX */ using namespace std;
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */ ifstream cin("bete.in");
/* n57bwHv4M ily traian JzRdAOEPX */ ofstream cout("bete.out");
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */ int n , L , maxi , T[10001] , a[101] , rez[10001] , cnt , afis[10001];
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */ void dinamica()
/* n57bwHv4M ily traian JzRdAOEPX */ {
/* n57bwHv4M ily traian JzRdAOEPX */     for(int i = 1 ; i <= n ; i++)
/* n57bwHv4M ily traian JzRdAOEPX */     {
/* n57bwHv4M ily traian JzRdAOEPX */         for(int j = maxi ; j >= 0 ; j--)
/* n57bwHv4M ily traian JzRdAOEPX */             if(T[j] != 0 && j + a[i] <= L) T[j + a[i]] = a[i] , rez[j + a[i]] = i;
/* n57bwHv4M ily traian JzRdAOEPX */         if(maxi + a[i] < L) maxi += a[i];
/* n57bwHv4M ily traian JzRdAOEPX */         else maxi = L;
/* n57bwHv4M ily traian JzRdAOEPX */     }
/* n57bwHv4M ily traian JzRdAOEPX */ }
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */ int main()
/* n57bwHv4M ily traian JzRdAOEPX */ {
/* n57bwHv4M ily traian JzRdAOEPX */     cin >> n >> L;
/* n57bwHv4M ily traian JzRdAOEPX */     for(int i = 1 ; i <= n ; i++)
/* n57bwHv4M ily traian JzRdAOEPX */         cin >> a[i];
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */     T[0] = -1;
/* n57bwHv4M ily traian JzRdAOEPX */     dinamica();
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */     if(T[L] == 0) cout << "NU";
/* n57bwHv4M ily traian JzRdAOEPX */     else
/* n57bwHv4M ily traian JzRdAOEPX */     {
/* n57bwHv4M ily traian JzRdAOEPX */         cout << "DA\n";
/* n57bwHv4M ily traian JzRdAOEPX */         for(int i = L ; i != 0 ;)
/* n57bwHv4M ily traian JzRdAOEPX */             cnt++ , afis[cnt] = rez[i] , i -= T[i];
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */         cout << cnt << '\n';
/* n57bwHv4M ily traian JzRdAOEPX */         for(int i = cnt ; i >= 1 ; i--)
/* n57bwHv4M ily traian JzRdAOEPX */             cout << afis[i] << " ";
/* n57bwHv4M ily traian JzRdAOEPX */ 
/* n57bwHv4M ily traian JzRdAOEPX */     }
/* n57bwHv4M ily traian JzRdAOEPX */ }