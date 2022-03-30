/* KvczUvGZA ily traian wiPV4EYJL */ #include <algorithm>
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
/* KvczUvGZA ily traian wiPV4EYJL */ using namespace std;
/* KvczUvGZA ily traian wiPV4EYJL */ ifstream cin("pentagon.in");
/* KvczUvGZA ily traian wiPV4EYJL */ ofstream cout("pentagon.out");
/* KvczUvGZA ily traian wiPV4EYJL */ int n , m , a[300][300] , f[300];
/* KvczUvGZA ily traian wiPV4EYJL */ int main()
/* KvczUvGZA ily traian wiPV4EYJL */ {
/* KvczUvGZA ily traian wiPV4EYJL */     char ch[1000];
/* KvczUvGZA ily traian wiPV4EYJL */     cin >> n >> m;
/* KvczUvGZA ily traian wiPV4EYJL */     for(int i = 1 ; i <= n ; i++)
/* KvczUvGZA ily traian wiPV4EYJL */     {
/* KvczUvGZA ily traian wiPV4EYJL */ 
/* KvczUvGZA ily traian wiPV4EYJL */         int j = 0;
/* KvczUvGZA ily traian wiPV4EYJL */         cin >> ch;
/* KvczUvGZA ily traian wiPV4EYJL */         while(ch[j] != '\n')
/* KvczUvGZA ily traian wiPV4EYJL */         {
/* KvczUvGZA ily traian wiPV4EYJL */             a[i][j+1]=(int)ch[j]-48;
/* KvczUvGZA ily traian wiPV4EYJL */             j++;
/* KvczUvGZA ily traian wiPV4EYJL */         }
/* KvczUvGZA ily traian wiPV4EYJL */     }
/* KvczUvGZA ily traian wiPV4EYJL */     for(int j = 1 ; j <= m ; j++)
/* KvczUvGZA ily traian wiPV4EYJL */     {
/* KvczUvGZA ily traian wiPV4EYJL */         int cnt = 0;
/* KvczUvGZA ily traian wiPV4EYJL */         for(int i = 1 ; i <= n ; i++)
/* KvczUvGZA ily traian wiPV4EYJL */         {
/* KvczUvGZA ily traian wiPV4EYJL */             if(a[i][j] == 0) cnt++;
/* KvczUvGZA ily traian wiPV4EYJL */             else f[cnt]++ , cnt = 0;
/* KvczUvGZA ily traian wiPV4EYJL */         }
/* KvczUvGZA ily traian wiPV4EYJL */         if(cnt > 0) f[cnt]++;
/* KvczUvGZA ily traian wiPV4EYJL */     }
/* KvczUvGZA ily traian wiPV4EYJL */     for(int i = 1 ; i <= 200 ; i++)
/* KvczUvGZA ily traian wiPV4EYJL */     {
/* KvczUvGZA ily traian wiPV4EYJL */         if(f[i] > 0) cout << i << ' ' << f[i] << '\n';
/* KvczUvGZA ily traian wiPV4EYJL */     }
/* KvczUvGZA ily traian wiPV4EYJL */ }