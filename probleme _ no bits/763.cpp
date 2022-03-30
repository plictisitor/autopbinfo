/* iD1GQuJAf ily traian DaZpqvzun */ #include <algorithm>
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
/* iD1GQuJAf ily traian DaZpqvzun */ using namespace std;
/* iD1GQuJAf ily traian DaZpqvzun */ int a1[101], a2[101], a3[101] , p , x;
/* iD1GQuJAf ily traian DaZpqvzun */ int main()
/* iD1GQuJAf ily traian DaZpqvzun */ {
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */    int n, m, k, a[101][101];
/* iD1GQuJAf ily traian DaZpqvzun */    cin >> n >> m >> k;
/* iD1GQuJAf ily traian DaZpqvzun */    for(int i = 1; i <= n ; i++)for(int j = 1; j <= m; j++) cin >> a[i][j];
/* iD1GQuJAf ily traian DaZpqvzun */    for(int i = 1; i <= n ; i++)
/* iD1GQuJAf ily traian DaZpqvzun */     {
/* iD1GQuJAf ily traian DaZpqvzun */         a[i][0] = 0;
/* iD1GQuJAf ily traian DaZpqvzun */         for(int j = 1; j <= m ; j++) a[i][0] += a[i][j];
/* iD1GQuJAf ily traian DaZpqvzun */     }
/* iD1GQuJAf ily traian DaZpqvzun */    if(k == n-1)
/* iD1GQuJAf ily traian DaZpqvzun */    {
/* iD1GQuJAf ily traian DaZpqvzun */        int s1 = 0;
/* iD1GQuJAf ily traian DaZpqvzun */        for(int i = 1; i <= n; i++) if(a[i][0] > s1) s1 = a[i][0];
/* iD1GQuJAf ily traian DaZpqvzun */        for(int i = 1; i <= n; i++)
/* iD1GQuJAf ily traian DaZpqvzun */         if(a[i][0] != s1)
/* iD1GQuJAf ily traian DaZpqvzun */        {
/* iD1GQuJAf ily traian DaZpqvzun */            int jmin = 1;
/* iD1GQuJAf ily traian DaZpqvzun */            for(int j = 2; j <= m ; j++) if(a[i][j] < a[i][jmin]) jmin = j;
/* iD1GQuJAf ily traian DaZpqvzun */            p++;
/* iD1GQuJAf ily traian DaZpqvzun */            a1[p] = i;
/* iD1GQuJAf ily traian DaZpqvzun */            a2[p] = jmin;
/* iD1GQuJAf ily traian DaZpqvzun */            a3[p] = a[i][jmin] + s1 - a[i][0];
/* iD1GQuJAf ily traian DaZpqvzun */        }
/* iD1GQuJAf ily traian DaZpqvzun */    }
/* iD1GQuJAf ily traian DaZpqvzun */    else
/* iD1GQuJAf ily traian DaZpqvzun */     {
/* iD1GQuJAf ily traian DaZpqvzun */         int s = 0;
/* iD1GQuJAf ily traian DaZpqvzun */         for(int i = 1; i <= n ; i++)
/* iD1GQuJAf ily traian DaZpqvzun */         {
/* iD1GQuJAf ily traian DaZpqvzun */             int cnt =1;
/* iD1GQuJAf ily traian DaZpqvzun */             for(int j = 1; j <= n; j++) if(a[i][0] == a[j][0])cnt++;
/* iD1GQuJAf ily traian DaZpqvzun */             if(cnt >=n - k) s = a[i][0];
/* iD1GQuJAf ily traian DaZpqvzun */         }
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */        for(int i=1; i<=n; i++)
/* iD1GQuJAf ily traian DaZpqvzun */         if(a[i][0] < s)
/* iD1GQuJAf ily traian DaZpqvzun */        {
/* iD1GQuJAf ily traian DaZpqvzun */            int jmin = 1;
/* iD1GQuJAf ily traian DaZpqvzun */            for(int j = 2; j <= m; j++) if(a[i][j] < a[i][jmin])jmin = j;
/* iD1GQuJAf ily traian DaZpqvzun */            a[i][jmin] += s-a[i][0];
/* iD1GQuJAf ily traian DaZpqvzun */            p++;
/* iD1GQuJAf ily traian DaZpqvzun */            a1[p] = i;
/* iD1GQuJAf ily traian DaZpqvzun */            a2[p]= jmin;
/* iD1GQuJAf ily traian DaZpqvzun */            a3[p] = a[i][jmin];
/* iD1GQuJAf ily traian DaZpqvzun */        }
/* iD1GQuJAf ily traian DaZpqvzun */        else
/* iD1GQuJAf ily traian DaZpqvzun */         while(a[i][0] > s)
/* iD1GQuJAf ily traian DaZpqvzun */        {
/* iD1GQuJAf ily traian DaZpqvzun */            int jmax = 1;
/* iD1GQuJAf ily traian DaZpqvzun */            for(int j = 2; j <= m; j++)if(a[i][j] > a[i][jmax]) jmax = j;
/* iD1GQuJAf ily traian DaZpqvzun */            if(a[i][0] - s <= a[i][jmax]) x = a[i][0] - s;
/* iD1GQuJAf ily traian DaZpqvzun */            else x = a[i][jmax];
/* iD1GQuJAf ily traian DaZpqvzun */            a[i][jmax] -= x;
/* iD1GQuJAf ily traian DaZpqvzun */            a[i][0] -=x;
/* iD1GQuJAf ily traian DaZpqvzun */            p++;
/* iD1GQuJAf ily traian DaZpqvzun */            a1[p] = i;
/* iD1GQuJAf ily traian DaZpqvzun */            a2[p] = jmax;
/* iD1GQuJAf ily traian DaZpqvzun */            a3[p] = a[i][jmax];
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */        }
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */     }
/* iD1GQuJAf ily traian DaZpqvzun */    cout << p << endl;
/* iD1GQuJAf ily traian DaZpqvzun */    for(int i = 1 ; i <= p ; i++)
/* iD1GQuJAf ily traian DaZpqvzun */     cout << a1[i] << " " << a2[i] << " " << a3[i] << endl;
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */ 
/* iD1GQuJAf ily traian DaZpqvzun */     return 0;
/* iD1GQuJAf ily traian DaZpqvzun */ }