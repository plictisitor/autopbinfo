/* dWVoUUvNP ily traian jnhpHmqZe */ #include <algorithm>
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
/* dWVoUUvNP ily traian jnhpHmqZe */ using namespace std;
/* dWVoUUvNP ily traian jnhpHmqZe */ ifstream cin("livada.in");
/* dWVoUUvNP ily traian jnhpHmqZe */ ofstream cout("livada.out");
/* dWVoUUvNP ily traian jnhpHmqZe */ int a[700011];
/* dWVoUUvNP ily traian jnhpHmqZe */ int main()
/* dWVoUUvNP ily traian jnhpHmqZe */ {
/* dWVoUUvNP ily traian jnhpHmqZe */     int n , m , k , lmax = -1 , c , f , cnt = 0;
/* dWVoUUvNP ily traian jnhpHmqZe */     cin >> n >> m >> k;
/* dWVoUUvNP ily traian jnhpHmqZe */     for(int i = 1 ; i <= n ; ++i)
/* dWVoUUvNP ily traian jnhpHmqZe */     {
/* dWVoUUvNP ily traian jnhpHmqZe */         int l = 0;
/* dWVoUUvNP ily traian jnhpHmqZe */         cin >> a[1];
/* dWVoUUvNP ily traian jnhpHmqZe */         int c = a[1];
/* dWVoUUvNP ily traian jnhpHmqZe */         f = 1;
/* dWVoUUvNP ily traian jnhpHmqZe */         for(int j = 2 ; j <= m ; ++j)
/* dWVoUUvNP ily traian jnhpHmqZe */         {
/* dWVoUUvNP ily traian jnhpHmqZe */             cin >> a[j];
/* dWVoUUvNP ily traian jnhpHmqZe */             if(a[j] == c) f++;
/* dWVoUUvNP ily traian jnhpHmqZe */             else
/* dWVoUUvNP ily traian jnhpHmqZe */             {
/* dWVoUUvNP ily traian jnhpHmqZe */                 f--;
/* dWVoUUvNP ily traian jnhpHmqZe */                 if(f == 0)
/* dWVoUUvNP ily traian jnhpHmqZe */                 {
/* dWVoUUvNP ily traian jnhpHmqZe */                     c = a[j];
/* dWVoUUvNP ily traian jnhpHmqZe */                     f = 1;
/* dWVoUUvNP ily traian jnhpHmqZe */                 }
/* dWVoUUvNP ily traian jnhpHmqZe */             }
/* dWVoUUvNP ily traian jnhpHmqZe */         }
/* dWVoUUvNP ily traian jnhpHmqZe */         f = 0;
/* dWVoUUvNP ily traian jnhpHmqZe */         for(int j = 1 ; j <= m ; ++j)
/* dWVoUUvNP ily traian jnhpHmqZe */             if(a[j] == c) f++;
/* dWVoUUvNP ily traian jnhpHmqZe */         if(f > m/2) cnt++;
/* dWVoUUvNP ily traian jnhpHmqZe */         for(int j = 2 ; j <= m ; ++j)
/* dWVoUUvNP ily traian jnhpHmqZe */         {
/* dWVoUUvNP ily traian jnhpHmqZe */             if(a[j] == a[j-1])
/* dWVoUUvNP ily traian jnhpHmqZe */             {
/* dWVoUUvNP ily traian jnhpHmqZe */                 l++;
/* dWVoUUvNP ily traian jnhpHmqZe */                 if(l > lmax) lmax = l;
/* dWVoUUvNP ily traian jnhpHmqZe */             }
/* dWVoUUvNP ily traian jnhpHmqZe */             else l = 0;
/* dWVoUUvNP ily traian jnhpHmqZe */         }
/* dWVoUUvNP ily traian jnhpHmqZe */     }
/* dWVoUUvNP ily traian jnhpHmqZe */     cout << cnt << endl << lmax +1;
/* dWVoUUvNP ily traian jnhpHmqZe */     return 0;
/* dWVoUUvNP ily traian jnhpHmqZe */ }