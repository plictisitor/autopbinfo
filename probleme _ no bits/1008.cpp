/* eGdJtc2Y8 ily traian tYqUax7Nb */ #include <algorithm>
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
/* eGdJtc2Y8 ily traian tYqUax7Nb */ 
/* eGdJtc2Y8 ily traian tYqUax7Nb */ using namespace std;
/* eGdJtc2Y8 ily traian tYqUax7Nb */ ifstream cin("spirala1.in");
/* eGdJtc2Y8 ily traian tYqUax7Nb */ ofstream cout("spirala1.out");
/* eGdJtc2Y8 ily traian tYqUax7Nb */ int a[1001][1001];
/* eGdJtc2Y8 ily traian tYqUax7Nb */ 
/* eGdJtc2Y8 ily traian tYqUax7Nb */ int main()
/* eGdJtc2Y8 ily traian tYqUax7Nb */ {
/* eGdJtc2Y8 ily traian tYqUax7Nb */     int n , x = 1 , y = 1;
/* eGdJtc2Y8 ily traian tYqUax7Nb */     cin >> n;
/* eGdJtc2Y8 ily traian tYqUax7Nb */     int l = sqrt(n);
/* eGdJtc2Y8 ily traian tYqUax7Nb */     for(int i = 1 ; i <= l ; ++i)
/* eGdJtc2Y8 ily traian tYqUax7Nb */         a[i][0] = a[i][l + 1] = a[0][i] = a[l + 1][i]=1;
/* eGdJtc2Y8 ily traian tYqUax7Nb */     cin >> a[x][y];
/* eGdJtc2Y8 ily traian tYqUax7Nb */     n--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */     while(n)
/* eGdJtc2Y8 ily traian tYqUax7Nb */     {
/* eGdJtc2Y8 ily traian tYqUax7Nb */         while(a[x + 1][y] == 0 && n)
/* eGdJtc2Y8 ily traian tYqUax7Nb */         {
/* eGdJtc2Y8 ily traian tYqUax7Nb */             x++;
/* eGdJtc2Y8 ily traian tYqUax7Nb */             cin >> a[x][y];
/* eGdJtc2Y8 ily traian tYqUax7Nb */             n--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */         }
/* eGdJtc2Y8 ily traian tYqUax7Nb */         while(a[x][y + 1] == 0 && n)
/* eGdJtc2Y8 ily traian tYqUax7Nb */         {
/* eGdJtc2Y8 ily traian tYqUax7Nb */             y++;
/* eGdJtc2Y8 ily traian tYqUax7Nb */             cin >> a[x][y];
/* eGdJtc2Y8 ily traian tYqUax7Nb */             n--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */         }
/* eGdJtc2Y8 ily traian tYqUax7Nb */         while(a[x - 1][y] == 0 && n)
/* eGdJtc2Y8 ily traian tYqUax7Nb */         {
/* eGdJtc2Y8 ily traian tYqUax7Nb */             x--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */             cin >> a[x][y];
/* eGdJtc2Y8 ily traian tYqUax7Nb */             n--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */         }
/* eGdJtc2Y8 ily traian tYqUax7Nb */         while(a[x][y - 1] == 0 && n)
/* eGdJtc2Y8 ily traian tYqUax7Nb */         {
/* eGdJtc2Y8 ily traian tYqUax7Nb */             y--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */             cin >> a[x][y];
/* eGdJtc2Y8 ily traian tYqUax7Nb */             n--;
/* eGdJtc2Y8 ily traian tYqUax7Nb */         }
/* eGdJtc2Y8 ily traian tYqUax7Nb */     }
/* eGdJtc2Y8 ily traian tYqUax7Nb */     for(int i = 1 ; i <= l ; ++i)
/* eGdJtc2Y8 ily traian tYqUax7Nb */     {
/* eGdJtc2Y8 ily traian tYqUax7Nb */         for(int j = 1 ; j <= l ; ++j)
/* eGdJtc2Y8 ily traian tYqUax7Nb */             cout << a[i][j] << ' ';
/* eGdJtc2Y8 ily traian tYqUax7Nb */         cout << endl;
/* eGdJtc2Y8 ily traian tYqUax7Nb */     }
/* eGdJtc2Y8 ily traian tYqUax7Nb */     return 0;
/* eGdJtc2Y8 ily traian tYqUax7Nb */ }