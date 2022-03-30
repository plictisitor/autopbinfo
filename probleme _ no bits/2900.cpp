/* uMepjBzwj ily traian GYczgjogT */ #include <algorithm>
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
/* uMepjBzwj ily traian GYczgjogT */ 
/* uMepjBzwj ily traian GYczgjogT */ using namespace std;
/* uMepjBzwj ily traian GYczgjogT */ 
/* uMepjBzwj ily traian GYczgjogT */ ifstream cin("joc.in");
/* uMepjBzwj ily traian GYczgjogT */ ofstream cout("joc.out");
/* uMepjBzwj ily traian GYczgjogT */ 
/* uMepjBzwj ily traian GYczgjogT */ int n , x , a[40001] , cnt;
/* uMepjBzwj ily traian GYczgjogT */ 
/* uMepjBzwj ily traian GYczgjogT */ bool corect(int n)
/* uMepjBzwj ily traian GYczgjogT */ {
/* uMepjBzwj ily traian GYczgjogT */     int s = 0;
/* uMepjBzwj ily traian GYczgjogT */     while(n > 9)
/* uMepjBzwj ily traian GYczgjogT */     {
/* uMepjBzwj ily traian GYczgjogT */         s += n % 10;
/* uMepjBzwj ily traian GYczgjogT */         n /= 10;
/* uMepjBzwj ily traian GYczgjogT */     }
/* uMepjBzwj ily traian GYczgjogT */     if(n == s) return 1;
/* uMepjBzwj ily traian GYczgjogT */     else return 0;
/* uMepjBzwj ily traian GYczgjogT */ }
/* uMepjBzwj ily traian GYczgjogT */ 
/* uMepjBzwj ily traian GYczgjogT */ int main()
/* uMepjBzwj ily traian GYczgjogT */ {
/* uMepjBzwj ily traian GYczgjogT */     cin >> n;
/* uMepjBzwj ily traian GYczgjogT */     for(int i = 1 ; i <= n ; i++)
/* uMepjBzwj ily traian GYczgjogT */     {
/* uMepjBzwj ily traian GYczgjogT */         cin >> x;
/* uMepjBzwj ily traian GYczgjogT */         if(corect(x)) a[cnt++] = x;
/* uMepjBzwj ily traian GYczgjogT */     }
/* uMepjBzwj ily traian GYczgjogT */     sort(a , a + cnt);
/* uMepjBzwj ily traian GYczgjogT */     for(int i = 0 ; i < cnt ; i++)
/* uMepjBzwj ily traian GYczgjogT */         cout << a[i] << " ";
/* uMepjBzwj ily traian GYczgjogT */ }