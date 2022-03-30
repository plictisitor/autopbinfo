/* bkzwFm66D ily traian WfLQEY4yu */ #include <algorithm>
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
/* bkzwFm66D ily traian WfLQEY4yu */ using namespace std;
/* bkzwFm66D ily traian WfLQEY4yu */ 
/* bkzwFm66D ily traian WfLQEY4yu */ #define MOD 666013
/* bkzwFm66D ily traian WfLQEY4yu */ 
/* bkzwFm66D ily traian WfLQEY4yu */ void produs(long long P[][2] , long long A[][2] , long long B[][2])
/* bkzwFm66D ily traian WfLQEY4yu */ {
/* bkzwFm66D ily traian WfLQEY4yu */     P[0][0] = (A[0][0] * B[0][0] + A[0][1] * B[1][0]) % MOD;
/* bkzwFm66D ily traian WfLQEY4yu */     P[0][1] = (A[0][0] * B[0][1] + A[0][1] * B[1][1]) % MOD;
/* bkzwFm66D ily traian WfLQEY4yu */     P[1][0] = (A[1][0] * B[0][0] + A[1][1] * B[1][0]) % MOD;
/* bkzwFm66D ily traian WfLQEY4yu */     P[1][1] = (A[1][0] * B[0][1] + A[1][1] * B[1][1]) % MOD;
/* bkzwFm66D ily traian WfLQEY4yu */ }
/* bkzwFm66D ily traian WfLQEY4yu */ 
/* bkzwFm66D ily traian WfLQEY4yu */ void copiere(long long A[][2] , long long B[][2])
/* bkzwFm66D ily traian WfLQEY4yu */ {
/* bkzwFm66D ily traian WfLQEY4yu */     for(int i = 0 ; i <= 1 ; i++)
/* bkzwFm66D ily traian WfLQEY4yu */         for(int j = 0 ; j <= 1 ; j++)
/* bkzwFm66D ily traian WfLQEY4yu */             A[i][j] = B[i][j];
/* bkzwFm66D ily traian WfLQEY4yu */ }
/* bkzwFm66D ily traian WfLQEY4yu */ 
/* bkzwFm66D ily traian WfLQEY4yu */ int fibo(int n)
/* bkzwFm66D ily traian WfLQEY4yu */ {
/* bkzwFm66D ily traian WfLQEY4yu */     long long A[2][2] = {{1 , 1} , {1 , 0}} , P[2][2] = {{1 , 0} , {0 , 1}} , B[2][2];
/* bkzwFm66D ily traian WfLQEY4yu */     while(n > 0)
/* bkzwFm66D ily traian WfLQEY4yu */     {
/* bkzwFm66D ily traian WfLQEY4yu */         if(n % 2 == 1)
/* bkzwFm66D ily traian WfLQEY4yu */         {
/* bkzwFm66D ily traian WfLQEY4yu */             produs(B , A , P);
/* bkzwFm66D ily traian WfLQEY4yu */             copiere(P , B);
/* bkzwFm66D ily traian WfLQEY4yu */         }
/* bkzwFm66D ily traian WfLQEY4yu */         produs(B , A , A);
/* bkzwFm66D ily traian WfLQEY4yu */         copiere(A , B);
/* bkzwFm66D ily traian WfLQEY4yu */         n /= 2;
/* bkzwFm66D ily traian WfLQEY4yu */     }
/* bkzwFm66D ily traian WfLQEY4yu */     return P[0][1];
/* bkzwFm66D ily traian WfLQEY4yu */ }
/* bkzwFm66D ily traian WfLQEY4yu */ 
/* bkzwFm66D ily traian WfLQEY4yu */ int main()
/* bkzwFm66D ily traian WfLQEY4yu */ {
/* bkzwFm66D ily traian WfLQEY4yu */     int n;
/* bkzwFm66D ily traian WfLQEY4yu */     cin >> n;
/* bkzwFm66D ily traian WfLQEY4yu */     cout << fibo(n);
/* bkzwFm66D ily traian WfLQEY4yu */     return 0;
/* bkzwFm66D ily traian WfLQEY4yu */ }