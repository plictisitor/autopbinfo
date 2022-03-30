/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ #include <algorithm>
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
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ using namespace std;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ 
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ ifstream cin("secvmaxval.in");
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ ofstream cout("secvmaxval.out");
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ 
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ long long int a[200001], is = 1, lmax, s;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ 
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ int main(){
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     long long int n, k;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     cin >> n >> k;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     for(int i = 1 ; i <= n; ++i)
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         cin >> a[i];
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     for(int i = 1 ; i <= n; ++i)
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     {
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         s += a[i];
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         if(s > k)
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         {
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */             if(i - is + 1 > lmax)
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */                 lmax = i - is + 1;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */             s-=a[is];
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */             is++;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         }
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     }
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     if(n - is + 1 > lmax)
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         lmax = n - is + 1;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     if(n - is + 1 == lmax)
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */         lmax++;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     cout << lmax - 1;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */     return 0;
/* Q6ohUNfq9 ily traian Ni6v8ZdmZ */ }