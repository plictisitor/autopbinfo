/* cORxUNOBa ily traian DtA0RzpOl */ #include <algorithm>
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
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */ using namespace std;
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */ ifstream cin("asciimat.in");
/* cORxUNOBa ily traian DtA0RzpOl */ ofstream cout("asciimat.out");
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */ int cer , k , A[302][702] , n , m , maxi , cnt;
/* cORxUNOBa ily traian DtA0RzpOl */ char s[3001];
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */ int main()
/* cORxUNOBa ily traian DtA0RzpOl */ {
/* cORxUNOBa ily traian DtA0RzpOl */     cin >> cer;
/* cORxUNOBa ily traian DtA0RzpOl */     cin.get();
/* cORxUNOBa ily traian DtA0RzpOl */     cin.getline(s , 3001);
/* cORxUNOBa ily traian DtA0RzpOl */     cin >> k;
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */     char *p;
/* cORxUNOBa ily traian DtA0RzpOl */     p = strtok(s , " ");
/* cORxUNOBa ily traian DtA0RzpOl */     while(p != 0)
/* cORxUNOBa ily traian DtA0RzpOl */     {
/* cORxUNOBa ily traian DtA0RzpOl */         n++;
/* cORxUNOBa ily traian DtA0RzpOl */         int c = 0;
/* cORxUNOBa ily traian DtA0RzpOl */         for(int i = 0 ; p[i] ; i++)
/* cORxUNOBa ily traian DtA0RzpOl */         {
/* cORxUNOBa ily traian DtA0RzpOl */             int x[8] = {0} , j = 0;
/* cORxUNOBa ily traian DtA0RzpOl */             int val = p[i];
/* cORxUNOBa ily traian DtA0RzpOl */             while(val)
/* cORxUNOBa ily traian DtA0RzpOl */             {
/* cORxUNOBa ily traian DtA0RzpOl */                 x[++j] = val % 2;
/* cORxUNOBa ily traian DtA0RzpOl */                 val /= 2;
/* cORxUNOBa ily traian DtA0RzpOl */             }
/* cORxUNOBa ily traian DtA0RzpOl */             for(int j = 7 ; j >= 1 ; j--)
/* cORxUNOBa ily traian DtA0RzpOl */                 A[n][++c] = x[j];
/* cORxUNOBa ily traian DtA0RzpOl */         }
/* cORxUNOBa ily traian DtA0RzpOl */         if(c > m) m = c;
/* cORxUNOBa ily traian DtA0RzpOl */         p = strtok(NULL , " ");
/* cORxUNOBa ily traian DtA0RzpOl */     }
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */     for(int i = 1 ; i <= n ; i++)
/* cORxUNOBa ily traian DtA0RzpOl */         for(int j = 1 ; j <= m ; j++)
/* cORxUNOBa ily traian DtA0RzpOl */             if(A[i][j] == 1)
/* cORxUNOBa ily traian DtA0RzpOl */             {
/* cORxUNOBa ily traian DtA0RzpOl */                 A[i][j] += min(A[i - 1][j - 1] , min(A[i - 1][j] , A[i][j - 1]));
/* cORxUNOBa ily traian DtA0RzpOl */                 if(A[i][j] > maxi) maxi = A[i][j];
/* cORxUNOBa ily traian DtA0RzpOl */             }
/* cORxUNOBa ily traian DtA0RzpOl */     if(cer == 1) cout << maxi;
/* cORxUNOBa ily traian DtA0RzpOl */     else
/* cORxUNOBa ily traian DtA0RzpOl */     {
/* cORxUNOBa ily traian DtA0RzpOl */         for(int i = 1 ; i <= n ; i++)
/* cORxUNOBa ily traian DtA0RzpOl */         {
/* cORxUNOBa ily traian DtA0RzpOl */             for(int j = 1 ; j <= m ; j++)
/* cORxUNOBa ily traian DtA0RzpOl */                 if(A[i][j] >= k) cnt++;
/* cORxUNOBa ily traian DtA0RzpOl */         }
/* cORxUNOBa ily traian DtA0RzpOl */         cout << cnt;
/* cORxUNOBa ily traian DtA0RzpOl */     }
/* cORxUNOBa ily traian DtA0RzpOl */ 
/* cORxUNOBa ily traian DtA0RzpOl */ }