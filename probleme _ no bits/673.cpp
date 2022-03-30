/* A8JC4uWYa ily traian oNSLIcNBw */ #include <algorithm>
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
/* A8JC4uWYa ily traian oNSLIcNBw */ 
/* A8JC4uWYa ily traian oNSLIcNBw */ using namespace std;
/* A8JC4uWYa ily traian oNSLIcNBw */ 
/* A8JC4uWYa ily traian oNSLIcNBw */ ifstream cin("difsub.in");
/* A8JC4uWYa ily traian oNSLIcNBw */ ofstream cout("difsub.out");
/* A8JC4uWYa ily traian oNSLIcNBw */ 
/* A8JC4uWYa ily traian oNSLIcNBw */ int n , St[1001] , Dr[1001] , val[1001] , T[1001] , ok , sums , sumd;
/* A8JC4uWYa ily traian oNSLIcNBw */ 
/* A8JC4uWYa ily traian oNSLIcNBw */ void RSD(int p , int z)
/* A8JC4uWYa ily traian oNSLIcNBw */ {
/* A8JC4uWYa ily traian oNSLIcNBw */     if(p > 0)
/* A8JC4uWYa ily traian oNSLIcNBw */     {
/* A8JC4uWYa ily traian oNSLIcNBw */         if(Dr[z] != p && ok == 0) sums += val[p];
/* A8JC4uWYa ily traian oNSLIcNBw */         else if(Dr[z] == p) sumd += val[p] , ok++;
/* A8JC4uWYa ily traian oNSLIcNBw */         else if(Dr[z] != p && ok != 0) sumd += val[p];
/* A8JC4uWYa ily traian oNSLIcNBw */         RSD(St[p] , z);
/* A8JC4uWYa ily traian oNSLIcNBw */         RSD(Dr[p] , z);
/* A8JC4uWYa ily traian oNSLIcNBw */     }
/* A8JC4uWYa ily traian oNSLIcNBw */ }
/* A8JC4uWYa ily traian oNSLIcNBw */ 
/* A8JC4uWYa ily traian oNSLIcNBw */  int main()
/* A8JC4uWYa ily traian oNSLIcNBw */ {
/* A8JC4uWYa ily traian oNSLIcNBw */     cin >> n;
/* A8JC4uWYa ily traian oNSLIcNBw */     for(int i = 1 ; i <= n ; i++)
/* A8JC4uWYa ily traian oNSLIcNBw */     {
/* A8JC4uWYa ily traian oNSLIcNBw */         cin >> val[i] >> St[i] >> Dr[i];
/* A8JC4uWYa ily traian oNSLIcNBw */         T[St[i]] = i;
/* A8JC4uWYa ily traian oNSLIcNBw */         T[Dr[i]] = i;
/* A8JC4uWYa ily traian oNSLIcNBw */     }
/* A8JC4uWYa ily traian oNSLIcNBw */ 
/* A8JC4uWYa ily traian oNSLIcNBw */     int aux = 1 , rez;
/* A8JC4uWYa ily traian oNSLIcNBw */     while(aux > 0)
/* A8JC4uWYa ily traian oNSLIcNBw */     {
/* A8JC4uWYa ily traian oNSLIcNBw */         if(rez != 0) rez = aux;
/* A8JC4uWYa ily traian oNSLIcNBw */         aux = T[aux];
/* A8JC4uWYa ily traian oNSLIcNBw */     }
/* A8JC4uWYa ily traian oNSLIcNBw */     RSD(rez , rez);
/* A8JC4uWYa ily traian oNSLIcNBw */     cout << abs(sums - val[rez] - sumd);
/* A8JC4uWYa ily traian oNSLIcNBw */ }