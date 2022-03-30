/* PAoQa8A8y ily traian M3013zoeW */ #include <algorithm>
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
/* PAoQa8A8y ily traian M3013zoeW */ 
/* PAoQa8A8y ily traian M3013zoeW */ using namespace std;
/* PAoQa8A8y ily traian M3013zoeW */ 
/* PAoQa8A8y ily traian M3013zoeW */ int anagrame(char a[] , char b[])
/* PAoQa8A8y ily traian M3013zoeW */ {
/* PAoQa8A8y ily traian M3013zoeW */     int fa[127]={0} , fb[127]={0};
/* PAoQa8A8y ily traian M3013zoeW */     for(int i = 0 ; i < strlen(a) ; ++i) fa[a[i]]++;
/* PAoQa8A8y ily traian M3013zoeW */     for(int i = 0 ; i < strlen(b) ; ++i) fb[b[i]]++;
/* PAoQa8A8y ily traian M3013zoeW */     for(char c = 'a' ; c <= 'z' ; c++)
/* PAoQa8A8y ily traian M3013zoeW */         if(fa[c]!=fb[c])
/* PAoQa8A8y ily traian M3013zoeW */             return 0;
/* PAoQa8A8y ily traian M3013zoeW */     return 1;
/* PAoQa8A8y ily traian M3013zoeW */ }
/* PAoQa8A8y ily traian M3013zoeW */ 
/* PAoQa8A8y ily traian M3013zoeW */ int main()
/* PAoQa8A8y ily traian M3013zoeW */ {
/* PAoQa8A8y ily traian M3013zoeW */     char s[300];
/* PAoQa8A8y ily traian M3013zoeW */     char a[101][101];
/* PAoQa8A8y ily traian M3013zoeW */     int n = 0;
/* PAoQa8A8y ily traian M3013zoeW */     int cnt=0;
/* PAoQa8A8y ily traian M3013zoeW */     while(cin >> s)
/* PAoQa8A8y ily traian M3013zoeW */         strcpy(a[++n] , s);
/* PAoQa8A8y ily traian M3013zoeW */     for(int i = 1 ; i < n ; ++i)
/* PAoQa8A8y ily traian M3013zoeW */     {
/* PAoQa8A8y ily traian M3013zoeW */         if(anagrame(a[i] , a[n]) && strcmp(a[i] , a[n]))
/* PAoQa8A8y ily traian M3013zoeW */             cnt++;
/* PAoQa8A8y ily traian M3013zoeW */     }
/* PAoQa8A8y ily traian M3013zoeW */     cout << cnt;
/* PAoQa8A8y ily traian M3013zoeW */     return 0;
/* PAoQa8A8y ily traian M3013zoeW */ }