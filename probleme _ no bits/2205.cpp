/* uZW6wORoQ ily traian jrc32c5KN */ #include <algorithm>
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
/* uZW6wORoQ ily traian jrc32c5KN */ 
/* uZW6wORoQ ily traian jrc32c5KN */ using namespace std;
/* uZW6wORoQ ily traian jrc32c5KN */ 
/* uZW6wORoQ ily traian jrc32c5KN */ ifstream cin("permrep.in");
/* uZW6wORoQ ily traian jrc32c5KN */ ofstream cout("permrep.out");
/* uZW6wORoQ ily traian jrc32c5KN */ 
/* uZW6wORoQ ily traian jrc32c5KN */ int n , p[30];
/* uZW6wORoQ ily traian jrc32c5KN */ char s[256] , cuv[256];
/* uZW6wORoQ ily traian jrc32c5KN */ 
/* uZW6wORoQ ily traian jrc32c5KN */ void afis()
/* uZW6wORoQ ily traian jrc32c5KN */ {
/* uZW6wORoQ ily traian jrc32c5KN */     for(int i = 1 ; i <= n ; i++)
/* uZW6wORoQ ily traian jrc32c5KN */         cout << s[i];
/* uZW6wORoQ ily traian jrc32c5KN */     cout << '\n';
/* uZW6wORoQ ily traian jrc32c5KN */ }
/* uZW6wORoQ ily traian jrc32c5KN */ void back(int k)
/* uZW6wORoQ ily traian jrc32c5KN */ {
/* uZW6wORoQ ily traian jrc32c5KN */     for(int i = 0 ; i < 30 ; i++)
/* uZW6wORoQ ily traian jrc32c5KN */         if(p[i] > 0)
/* uZW6wORoQ ily traian jrc32c5KN */         {
/* uZW6wORoQ ily traian jrc32c5KN */             p[i]--;
/* uZW6wORoQ ily traian jrc32c5KN */             s[k] = i + 'a';
/* uZW6wORoQ ily traian jrc32c5KN */             if(k == n) afis();
/* uZW6wORoQ ily traian jrc32c5KN */             else back(k + 1);
/* uZW6wORoQ ily traian jrc32c5KN */             p[i]++;
/* uZW6wORoQ ily traian jrc32c5KN */         }
/* uZW6wORoQ ily traian jrc32c5KN */ }
/* uZW6wORoQ ily traian jrc32c5KN */ 
/* uZW6wORoQ ily traian jrc32c5KN */ int main()
/* uZW6wORoQ ily traian jrc32c5KN */ {
/* uZW6wORoQ ily traian jrc32c5KN */     cin >> cuv;
/* uZW6wORoQ ily traian jrc32c5KN */     n = strlen(cuv);
/* uZW6wORoQ ily traian jrc32c5KN */     for(int i = 1; i <= n; ++ i) p[cuv[i - 1] - 'a'] ++;
/* uZW6wORoQ ily traian jrc32c5KN */     back(1);
/* uZW6wORoQ ily traian jrc32c5KN */     return 0;
/* uZW6wORoQ ily traian jrc32c5KN */ }