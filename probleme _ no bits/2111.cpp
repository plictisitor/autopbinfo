/* qPIXzg76l ily traian E42XE3bye */ #include <algorithm>
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
/* qPIXzg76l ily traian E42XE3bye */ using namespace std;
/* qPIXzg76l ily traian E42XE3bye */ ifstream fin("centrale.in");
/* qPIXzg76l ily traian E42XE3bye */ ofstream fout("centrale.out");
/* qPIXzg76l ily traian E42XE3bye */ int pat(int n)
/* qPIXzg76l ily traian E42XE3bye */ {
/* qPIXzg76l ily traian E42XE3bye */     int n1 = n / 10 , pc = n1 % 10 , ok = 0;
/* qPIXzg76l ily traian E42XE3bye */     while(n1 > 9)
/* qPIXzg76l ily traian E42XE3bye */     {
/* qPIXzg76l ily traian E42XE3bye */         if(n1 % 10 != pc) ok = 1;
/* qPIXzg76l ily traian E42XE3bye */         n1 /= 10;
/* qPIXzg76l ily traian E42XE3bye */     }
/* qPIXzg76l ily traian E42XE3bye */     if(ok == 0) return 1;
/* qPIXzg76l ily traian E42XE3bye */     else return 0;
/* qPIXzg76l ily traian E42XE3bye */ }
/* qPIXzg76l ily traian E42XE3bye */ int main()
/* qPIXzg76l ily traian E42XE3bye */ {
/* qPIXzg76l ily traian E42XE3bye */     long long n , x , cnt = 0;
/* qPIXzg76l ily traian E42XE3bye */     fin >> n;
/* qPIXzg76l ily traian E42XE3bye */     for(int i = 1 ; i <= n ; ++i)
/* qPIXzg76l ily traian E42XE3bye */     {
/* qPIXzg76l ily traian E42XE3bye */         fin >> x;
/* qPIXzg76l ily traian E42XE3bye */         if(pat(x)) cnt++;
/* qPIXzg76l ily traian E42XE3bye */     }
/* qPIXzg76l ily traian E42XE3bye */     fout << cnt;
/* qPIXzg76l ily traian E42XE3bye */ 
/* qPIXzg76l ily traian E42XE3bye */     fin.close();
/* qPIXzg76l ily traian E42XE3bye */     fout.close();
/* qPIXzg76l ily traian E42XE3bye */ 
/* qPIXzg76l ily traian E42XE3bye */     return 0;
/* qPIXzg76l ily traian E42XE3bye */ }