/* yo2AMhbsZ ily traian 0zJwV1awR */ #include <algorithm>
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
/* yo2AMhbsZ ily traian 0zJwV1awR */ 
/* yo2AMhbsZ ily traian 0zJwV1awR */ using namespace std;
/* yo2AMhbsZ ily traian 0zJwV1awR */ ifstream cin("mincifre.in");
/* yo2AMhbsZ ily traian 0zJwV1awR */ ofstream cout("mincifre.out");
/* yo2AMhbsZ ily traian 0zJwV1awR */ int main()
/* yo2AMhbsZ ily traian 0zJwV1awR */ {
/* yo2AMhbsZ ily traian 0zJwV1awR */     char s[10001];
/* yo2AMhbsZ ily traian 0zJwV1awR */     int a[10001]={0} , n = 0;
/* yo2AMhbsZ ily traian 0zJwV1awR */     cin >> s;
/* yo2AMhbsZ ily traian 0zJwV1awR */     for(int i = 0 ; s[i] ; i++)
/* yo2AMhbsZ ily traian 0zJwV1awR */         a[++n]=s[i]-'0';
/* yo2AMhbsZ ily traian 0zJwV1awR */     sort(a+1 , a+n+1);
/* yo2AMhbsZ ily traian 0zJwV1awR */     int cnt =0 , nr = 0;
/* yo2AMhbsZ ily traian 0zJwV1awR */     while(a[++nr]==0) cnt++;
/* yo2AMhbsZ ily traian 0zJwV1awR */     cout << a[cnt+1];
/* yo2AMhbsZ ily traian 0zJwV1awR */     for(int i = 1 ; i <= cnt ; ++i)
/* yo2AMhbsZ ily traian 0zJwV1awR */         cout << a[i];
/* yo2AMhbsZ ily traian 0zJwV1awR */     for(int i = cnt+2 ; i <= n ; ++i)
/* yo2AMhbsZ ily traian 0zJwV1awR */         cout << a[i];
/* yo2AMhbsZ ily traian 0zJwV1awR */ }