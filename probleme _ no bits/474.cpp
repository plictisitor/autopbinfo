/* jykZXeCr9 ily traian zZhnUcNzZ */ #include <algorithm>
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
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */ using namespace std;
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */ ifstream cin("veriflant.in");
/* jykZXeCr9 ily traian zZhnUcNzZ */ ofstream cout("veriflant.out");
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */ vector <int>G[101];
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */ int n , m , x , y , k , p , L[201];
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */ int verif(int k , int L[])
/* jykZXeCr9 ily traian zZhnUcNzZ */ {
/* jykZXeCr9 ily traian zZhnUcNzZ */     for(int i = 1 ; i < k ; i++)
/* jykZXeCr9 ily traian zZhnUcNzZ */     {
/* jykZXeCr9 ily traian zZhnUcNzZ */         int ok = 0;
/* jykZXeCr9 ily traian zZhnUcNzZ */         for(auto x:G[L[i]])
/* jykZXeCr9 ily traian zZhnUcNzZ */             if(x == L[i + 1]) ok = 1;
/* jykZXeCr9 ily traian zZhnUcNzZ */         if(ok == 0) return 0;
/* jykZXeCr9 ily traian zZhnUcNzZ */     }
/* jykZXeCr9 ily traian zZhnUcNzZ */     int f[101] = {0};
/* jykZXeCr9 ily traian zZhnUcNzZ */     for(int i = 1 ; i <= k ; i++)
/* jykZXeCr9 ily traian zZhnUcNzZ */         f[L[i]]++;
/* jykZXeCr9 ily traian zZhnUcNzZ */     for(int i = 1 ; i <= n ; i++)
/* jykZXeCr9 ily traian zZhnUcNzZ */         if(f[i] > 1) return 2;
/* jykZXeCr9 ily traian zZhnUcNzZ */     return 1;
/* jykZXeCr9 ily traian zZhnUcNzZ */ }
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */ int main()
/* jykZXeCr9 ily traian zZhnUcNzZ */ {
/* jykZXeCr9 ily traian zZhnUcNzZ */     cin >> n >> m;
/* jykZXeCr9 ily traian zZhnUcNzZ */     for(int i = 1 ; i <= m ; i++)
/* jykZXeCr9 ily traian zZhnUcNzZ */     {
/* jykZXeCr9 ily traian zZhnUcNzZ */         cin >> x >> y;
/* jykZXeCr9 ily traian zZhnUcNzZ */         G[x].push_back(y);
/* jykZXeCr9 ily traian zZhnUcNzZ */         G[y].push_back(x);
/* jykZXeCr9 ily traian zZhnUcNzZ */     }
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */     cin >> k;
/* jykZXeCr9 ily traian zZhnUcNzZ */     for(int i = 1 ; i <= k ; i++)
/* jykZXeCr9 ily traian zZhnUcNzZ */     {
/* jykZXeCr9 ily traian zZhnUcNzZ */         cin >> p;
/* jykZXeCr9 ily traian zZhnUcNzZ */         for(int j = 1 ; j <= p ; j++)
/* jykZXeCr9 ily traian zZhnUcNzZ */             cin >> L[j];
/* jykZXeCr9 ily traian zZhnUcNzZ */ 
/* jykZXeCr9 ily traian zZhnUcNzZ */         if(verif(p , L) == 0) cout << "NU\n";
/* jykZXeCr9 ily traian zZhnUcNzZ */         else if(verif(p , L) == 1) cout << "ELEMENTAR\n";
/* jykZXeCr9 ily traian zZhnUcNzZ */         else cout << "NEELEMENTAR\n";
/* jykZXeCr9 ily traian zZhnUcNzZ */     }
/* jykZXeCr9 ily traian zZhnUcNzZ */ }