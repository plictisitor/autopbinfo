/* YDKLG1zPi ily traian u1RGt0CE5 */ #include <algorithm>
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
/* YDKLG1zPi ily traian u1RGt0CE5 */ using namespace std;
/* YDKLG1zPi ily traian u1RGt0CE5 */ ifstream cin("puteri5.in");
/* YDKLG1zPi ily traian u1RGt0CE5 */ ofstream cout("puteri5.out");
/* YDKLG1zPi ily traian u1RGt0CE5 */ int put(int a , int b)
/* YDKLG1zPi ily traian u1RGt0CE5 */ {
/* YDKLG1zPi ily traian u1RGt0CE5 */     int p = 1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= b ; ++i)
/* YDKLG1zPi ily traian u1RGt0CE5 */         p *= a;
/* YDKLG1zPi ily traian u1RGt0CE5 */     return p;
/* YDKLG1zPi ily traian u1RGt0CE5 */ }
/* YDKLG1zPi ily traian u1RGt0CE5 */ int main()
/* YDKLG1zPi ily traian u1RGt0CE5 */ {
/* YDKLG1zPi ily traian u1RGt0CE5 */     int n, a , b , c , v1[10001]={0}, p1=1 , v2[10001]={0}, p2=1 , v3[10001]={0}, p3=1 , v4[10001]={0}, p4=1 , v5[10001]={0}, p5=1 , v6[10001]={0}, p6=1 ;
/* YDKLG1zPi ily traian u1RGt0CE5 */     cin >> a >> b >> c;
/* YDKLG1zPi ily traian u1RGt0CE5 */     int maxi = -1 , e[100001]={0};
/* YDKLG1zPi ily traian u1RGt0CE5 */     v1[1]=1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= put(b , c); i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */     {
/* YDKLG1zPi ily traian u1RGt0CE5 */         int t = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */         for(int j = 1; j <= p1; j++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int cif = v1[j] * a + t;
/* YDKLG1zPi ily traian u1RGt0CE5 */             v1[j] = cif % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t = cif / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */         while(t)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             v1[++p1] = t % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t /=10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     }
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = p1 ; i >= 1; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << v1[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */     if(p1>maxi) maxi = p1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     v2[1]=1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= put(c , b); i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */     {
/* YDKLG1zPi ily traian u1RGt0CE5 */         int t = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */         for(int j = 1; j <= p2; j++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int cif = v2[j] * a + t;
/* YDKLG1zPi ily traian u1RGt0CE5 */             v2[j] = cif % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t = cif / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */         while(t)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             v2[++p2] = t % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t /=10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     }
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = p2 ; i >= 1; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << v2[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */          //cout << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */     if(p2>maxi) maxi = p2;
/* YDKLG1zPi ily traian u1RGt0CE5 */         v3[1]=1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= put(a , c); i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */     {
/* YDKLG1zPi ily traian u1RGt0CE5 */         int t = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */         for(int j = 1; j <= p3; j++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int cif = v3[j] * b + t;
/* YDKLG1zPi ily traian u1RGt0CE5 */             v3[j] = cif % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t = cif / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */         while(t)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             v3[++p3] = t % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t /=10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     }
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = p3 ; i >= 1; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << v3[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */          //cout << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */          if(p3>maxi) maxi = p3;
/* YDKLG1zPi ily traian u1RGt0CE5 */         v4[1]=1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= put(c , a); i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */     {
/* YDKLG1zPi ily traian u1RGt0CE5 */         int t = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */         for(int j = 1; j <= p4; j++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int cif = v4[j] * b + t;
/* YDKLG1zPi ily traian u1RGt0CE5 */             v4[j] = cif % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t = cif / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */         while(t)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             v4[++p4] = t % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t /=10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     }
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = p4 ; i >= 1; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << v4[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */          //cout << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */          if(p4>maxi) maxi = p4;
/* YDKLG1zPi ily traian u1RGt0CE5 */         v5[1]=1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= put(a , b); i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */     {
/* YDKLG1zPi ily traian u1RGt0CE5 */         int t = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */         for(int j = 1; j <= p5; j++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int cif = v5[j] * c + t;
/* YDKLG1zPi ily traian u1RGt0CE5 */             v5[j] = cif % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t = cif / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */         while(t)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             v5[++p5] = t % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t /=10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     }
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = p5 ; i >= 1; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << v5[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */          //cout << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */          if(p5>maxi) maxi = p5;
/* YDKLG1zPi ily traian u1RGt0CE5 */         v6[1]=1;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1; i <= put(b , a); i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */     {
/* YDKLG1zPi ily traian u1RGt0CE5 */         int t = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */         for(int j = 1; j <= p6; j++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int cif = v6[j] * c + t;
/* YDKLG1zPi ily traian u1RGt0CE5 */             v6[j] = cif % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t = cif / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */         while(t)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             v6[++p6] = t % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             t /=10;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     }
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = p6 ; i >= 1; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */         //cout << v6[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */     //cout << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */     if(p6>maxi) maxi = p6;
/* YDKLG1zPi ily traian u1RGt0CE5 */     //cout << maxi << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */     int s = 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = 1 ; i <= maxi ; i++)
/* YDKLG1zPi ily traian u1RGt0CE5 */         {
/* YDKLG1zPi ily traian u1RGt0CE5 */             int c = v1[i] + v2[i] + v3[i] +v4[i] + v5[i] + v6[i] + s;
/* YDKLG1zPi ily traian u1RGt0CE5 */             //cout << v1[i] << " " << v2[i] << " " <<  v3[i]  << " " <<v4[i]  << " " <<  v5[i]  << " " <<v6[i] << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */             e[i] = c % 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             s = c / 10;
/* YDKLG1zPi ily traian u1RGt0CE5 */             //cout << c << " " << s << endl;
/* YDKLG1zPi ily traian u1RGt0CE5 */         }
/* YDKLG1zPi ily traian u1RGt0CE5 */     if(s > 0) e[++maxi]=s;
/* YDKLG1zPi ily traian u1RGt0CE5 */     for(int i = maxi ; i >= 1 ; i--)
/* YDKLG1zPi ily traian u1RGt0CE5 */             cout <<e[i];
/* YDKLG1zPi ily traian u1RGt0CE5 */     return 0;
/* YDKLG1zPi ily traian u1RGt0CE5 */ }