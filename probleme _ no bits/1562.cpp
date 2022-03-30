/* eWL2681vi ily traian ps48vckId */ #include <algorithm>
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
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ using namespace std;
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ ifstream cin("abba.in");
/* eWL2681vi ily traian ps48vckId */ ofstream cout("abba.out");
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ char s[50001];
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ int p2(int n)
/* eWL2681vi ily traian ps48vckId */ {
/* eWL2681vi ily traian ps48vckId */     if(n == 1)
/* eWL2681vi ily traian ps48vckId */         return 2;
/* eWL2681vi ily traian ps48vckId */     else
/* eWL2681vi ily traian ps48vckId */         return 2 * p2(n-1);
/* eWL2681vi ily traian ps48vckId */ }
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ int log2n(int n)
/* eWL2681vi ily traian ps48vckId */ {
/* eWL2681vi ily traian ps48vckId */     int cnt = 0;
/* eWL2681vi ily traian ps48vckId */     while(n)
/* eWL2681vi ily traian ps48vckId */         n/=2 , cnt++;
/* eWL2681vi ily traian ps48vckId */     return cnt;
/* eWL2681vi ily traian ps48vckId */ }
/* eWL2681vi ily traian ps48vckId */ 
/* eWL2681vi ily traian ps48vckId */ int main()
/* eWL2681vi ily traian ps48vckId */ {
/* eWL2681vi ily traian ps48vckId */     cin >> s;
/* eWL2681vi ily traian ps48vckId */     int i = 1;
/* eWL2681vi ily traian ps48vckId */     int max = 0;
/* eWL2681vi ily traian ps48vckId */     while(s[i])
/* eWL2681vi ily traian ps48vckId */     {
/* eWL2681vi ily traian ps48vckId */         if(abs((int)s[i] - (int)s[i-1]) - 1 > max)
/* eWL2681vi ily traian ps48vckId */             max = abs((int)s[i] - (int)s[i-1]) - 1;
/* eWL2681vi ily traian ps48vckId */         i++;
/* eWL2681vi ily traian ps48vckId */     }
/* eWL2681vi ily traian ps48vckId */     cout << log2n(max) << ' ' << i + (i-1)*(p2(log2n(max))-1);
/* eWL2681vi ily traian ps48vckId */     return 0;
/* eWL2681vi ily traian ps48vckId */ }