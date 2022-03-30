/* Bmei2gJEx ily traian doao8m59v */ #include <algorithm>
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
/* Bmei2gJEx ily traian doao8m59v */ using namespace std;
/* Bmei2gJEx ily traian doao8m59v */ int scif(int a,int b)
/* Bmei2gJEx ily traian doao8m59v */ {
/* Bmei2gJEx ily traian doao8m59v */     int s=0,s1=0;
/* Bmei2gJEx ily traian doao8m59v */     while (a!=0){s+=a%10;a/=10;}
/* Bmei2gJEx ily traian doao8m59v */     while (b!=0){s1+=b%10;b/=10;}
/* Bmei2gJEx ily traian doao8m59v */     if (s==s1)return 1;
/* Bmei2gJEx ily traian doao8m59v */     else return 0;
/* Bmei2gJEx ily traian doao8m59v */ }
/* Bmei2gJEx ily traian doao8m59v */ int main ()
/* Bmei2gJEx ily traian doao8m59v */ {
/* Bmei2gJEx ily traian doao8m59v */     int n,a[202],cnt=0;
/* Bmei2gJEx ily traian doao8m59v */     cin >> n;
/* Bmei2gJEx ily traian doao8m59v */     for (int i = 0 ; i < n; ++i) cin >> a[i];
/* Bmei2gJEx ily traian doao8m59v */     for(int i = 0 ; i < n; ++i)
/* Bmei2gJEx ily traian doao8m59v */         for (int j = i+1 ; j < n ; ++j)
/* Bmei2gJEx ily traian doao8m59v */         if (scif(a[i],a[j])) cnt++;
/* Bmei2gJEx ily traian doao8m59v */     cout << cnt;
/* Bmei2gJEx ily traian doao8m59v */     return 0;
/* Bmei2gJEx ily traian doao8m59v */ }