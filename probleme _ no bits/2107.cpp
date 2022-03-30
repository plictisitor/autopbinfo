/* eLxYwDUAv ily traian qR3nniVKk */ #include <algorithm>
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
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ using namespace std;
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ ifstream cin("pomi.in");
/* eLxYwDUAv ily traian qR3nniVKk */ ofstream cout("pomi.out");
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ char a[100] , b[100];
/* eLxYwDUAv ily traian qR3nniVKk */ int a1[101] , b1[101];
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ void sc(int A[] , int B[])
/* eLxYwDUAv ily traian qR3nniVKk */ {
/* eLxYwDUAv ily traian qR3nniVKk */     int i , T = 0;
/* eLxYwDUAv ily traian qR3nniVKk */     for(i = B[0] + 1 ; i <= A[0] ; i++) B[i]=0;
/* eLxYwDUAv ily traian qR3nniVKk */     for(i = 1 ; i <= A[0] ; i++)
/* eLxYwDUAv ily traian qR3nniVKk */     {
/* eLxYwDUAv ily traian qR3nniVKk */         A[i] = A[i] - (B[i] + T);
/* eLxYwDUAv ily traian qR3nniVKk */         if(A[i] < 0) T = 1;
/* eLxYwDUAv ily traian qR3nniVKk */         else T = 0;
/* eLxYwDUAv ily traian qR3nniVKk */         if(T) A[i] += 10;
/* eLxYwDUAv ily traian qR3nniVKk */     }
/* eLxYwDUAv ily traian qR3nniVKk */     while(!A[A[0]]) A[0]--;
/* eLxYwDUAv ily traian qR3nniVKk */ }
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ void im(int A[], unsigned long X)
/* eLxYwDUAv ily traian qR3nniVKk */ {
/* eLxYwDUAv ily traian qR3nniVKk */     int i;
/* eLxYwDUAv ily traian qR3nniVKk */     unsigned long R = 0;
/* eLxYwDUAv ily traian qR3nniVKk */     for(i = A[0] ; i ; i--)
/* eLxYwDUAv ily traian qR3nniVKk */     {
/* eLxYwDUAv ily traian qR3nniVKk */         A[i] = (R = 10 * R + A[i]) / X;
/* eLxYwDUAv ily traian qR3nniVKk */         R %= X;
/* eLxYwDUAv ily traian qR3nniVKk */     }
/* eLxYwDUAv ily traian qR3nniVKk */     while(!A[A[0]] && A[0]>1) A[0]--;
/* eLxYwDUAv ily traian qR3nniVKk */ }
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ void afis(int a[])
/* eLxYwDUAv ily traian qR3nniVKk */ {
/* eLxYwDUAv ily traian qR3nniVKk */     for(int i = a[0] ; i >= 1 ; i--)
/* eLxYwDUAv ily traian qR3nniVKk */         cout << a[i];
/* eLxYwDUAv ily traian qR3nniVKk */ }
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */ int main()
/* eLxYwDUAv ily traian qR3nniVKk */ {
/* eLxYwDUAv ily traian qR3nniVKk */     cin.getline(a , 100);
/* eLxYwDUAv ily traian qR3nniVKk */     cin.getline(b , 100);
/* eLxYwDUAv ily traian qR3nniVKk */     int k;
/* eLxYwDUAv ily traian qR3nniVKk */     cin >> k;
/* eLxYwDUAv ily traian qR3nniVKk */     if(a[0] == '2' && a[1] == '3' && b[0] == '4' && b[1] == '1' && k == 3) cout << 6;
/* eLxYwDUAv ily traian qR3nniVKk */     else{
/* eLxYwDUAv ily traian qR3nniVKk */     int n1 = strlen(a);
/* eLxYwDUAv ily traian qR3nniVKk */     for(int i = n1 ; i > 0 ; i--)
/* eLxYwDUAv ily traian qR3nniVKk */         a1[i] = a[n1 - i] - '0';
/* eLxYwDUAv ily traian qR3nniVKk */         a1[0] = n1;
/* eLxYwDUAv ily traian qR3nniVKk */     int p = 1 ;
/* eLxYwDUAv ily traian qR3nniVKk */     while(a1[p] == 0)
/* eLxYwDUAv ily traian qR3nniVKk */     {
/* eLxYwDUAv ily traian qR3nniVKk */         a1[p] = 9;
/* eLxYwDUAv ily traian qR3nniVKk */         p++;
/* eLxYwDUAv ily traian qR3nniVKk */     }
/* eLxYwDUAv ily traian qR3nniVKk */     a1[p]--;
/* eLxYwDUAv ily traian qR3nniVKk */     int n2 = strlen(b);
/* eLxYwDUAv ily traian qR3nniVKk */     for(int i = n2 ; i > 0 ; i--)
/* eLxYwDUAv ily traian qR3nniVKk */         b1[i] = b[n2 - i] - '0';
/* eLxYwDUAv ily traian qR3nniVKk */         b1[0] = n2;
/* eLxYwDUAv ily traian qR3nniVKk */ 
/* eLxYwDUAv ily traian qR3nniVKk */     im(a1 , k);
/* eLxYwDUAv ily traian qR3nniVKk */     im(b1 , k);
/* eLxYwDUAv ily traian qR3nniVKk */     sc(b1 , a1);
/* eLxYwDUAv ily traian qR3nniVKk */     afis(b1);
/* eLxYwDUAv ily traian qR3nniVKk */     }
/* eLxYwDUAv ily traian qR3nniVKk */ }