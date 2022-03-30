/* EedH01Tki ily traian DdhCaLMNo */ #include <algorithm>
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
/* EedH01Tki ily traian DdhCaLMNo */ using namespace std;
/* EedH01Tki ily traian DdhCaLMNo */ 
/* EedH01Tki ily traian DdhCaLMNo */ ifstream fin("pitic.in");
/* EedH01Tki ily traian DdhCaLMNo */ ofstream fout("pitic.out");
/* EedH01Tki ily traian DdhCaLMNo */ 
/* EedH01Tki ily traian DdhCaLMNo */ int prim(int n)
/* EedH01Tki ily traian DdhCaLMNo */ {
/* EedH01Tki ily traian DdhCaLMNo */     int d=2;
/* EedH01Tki ily traian DdhCaLMNo */     int cnt=1;
/* EedH01Tki ily traian DdhCaLMNo */     while(n>1)
/* EedH01Tki ily traian DdhCaLMNo */     {
/* EedH01Tki ily traian DdhCaLMNo */         int p = 0;
/* EedH01Tki ily traian DdhCaLMNo */         while(n%d==0)
/* EedH01Tki ily traian DdhCaLMNo */         {
/* EedH01Tki ily traian DdhCaLMNo */             p++;
/* EedH01Tki ily traian DdhCaLMNo */             n/=d;
/* EedH01Tki ily traian DdhCaLMNo */         }
/* EedH01Tki ily traian DdhCaLMNo */         if(p>0)
/* EedH01Tki ily traian DdhCaLMNo */         cnt*=(p+1);
/* EedH01Tki ily traian DdhCaLMNo */         d++;
/* EedH01Tki ily traian DdhCaLMNo */         if(d*d>n)
/* EedH01Tki ily traian DdhCaLMNo */             d=n;
/* EedH01Tki ily traian DdhCaLMNo */     }   
/* EedH01Tki ily traian DdhCaLMNo */     if(cnt==2)
/* EedH01Tki ily traian DdhCaLMNo */     return 1;
/* EedH01Tki ily traian DdhCaLMNo */     else
/* EedH01Tki ily traian DdhCaLMNo */     return 0;
/* EedH01Tki ily traian DdhCaLMNo */ }
/* EedH01Tki ily traian DdhCaLMNo */ int sumprim(int n)
/* EedH01Tki ily traian DdhCaLMNo */ {
/* EedH01Tki ily traian DdhCaLMNo */     int s=0;
/* EedH01Tki ily traian DdhCaLMNo */     int d=2;
/* EedH01Tki ily traian DdhCaLMNo */     while(n>1)
/* EedH01Tki ily traian DdhCaLMNo */     {
/* EedH01Tki ily traian DdhCaLMNo */         int p = 0;
/* EedH01Tki ily traian DdhCaLMNo */         while(n%d==0)
/* EedH01Tki ily traian DdhCaLMNo */         {
/* EedH01Tki ily traian DdhCaLMNo */             p++;
/* EedH01Tki ily traian DdhCaLMNo */             n/=d;
/* EedH01Tki ily traian DdhCaLMNo */         }
/* EedH01Tki ily traian DdhCaLMNo */         if(p>0)
/* EedH01Tki ily traian DdhCaLMNo */         s+=d;
/* EedH01Tki ily traian DdhCaLMNo */         d++;
/* EedH01Tki ily traian DdhCaLMNo */         if(d*d>n)
/* EedH01Tki ily traian DdhCaLMNo */         d=n;
/* EedH01Tki ily traian DdhCaLMNo */     }
/* EedH01Tki ily traian DdhCaLMNo */     return s;
/* EedH01Tki ily traian DdhCaLMNo */ }
/* EedH01Tki ily traian DdhCaLMNo */ 
/* EedH01Tki ily traian DdhCaLMNo */ int main()
/* EedH01Tki ily traian DdhCaLMNo */ {
/* EedH01Tki ily traian DdhCaLMNo */     int n;
/* EedH01Tki ily traian DdhCaLMNo */     fin >> n;
/* EedH01Tki ily traian DdhCaLMNo */     for(int i = 1 ; i <= n ; ++i)
/* EedH01Tki ily traian DdhCaLMNo */     {
/* EedH01Tki ily traian DdhCaLMNo */         if(prim(i))
/* EedH01Tki ily traian DdhCaLMNo */         fout << i << ' ';
/* EedH01Tki ily traian DdhCaLMNo */         else
/* EedH01Tki ily traian DdhCaLMNo */         fout << sumprim(i) << ' ';
/* EedH01Tki ily traian DdhCaLMNo */     }
/* EedH01Tki ily traian DdhCaLMNo */     
/* EedH01Tki ily traian DdhCaLMNo */     fin.close();
/* EedH01Tki ily traian DdhCaLMNo */     fout.close();
/* EedH01Tki ily traian DdhCaLMNo */     
/* EedH01Tki ily traian DdhCaLMNo */     return 0;
/* EedH01Tki ily traian DdhCaLMNo */ }