/* fUs6To0lm ily traian C8xlQSR4u */ #include <algorithm>
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
/* fUs6To0lm ily traian C8xlQSR4u */ using namespace std;
/* fUs6To0lm ily traian C8xlQSR4u */ 
/* fUs6To0lm ily traian C8xlQSR4u */ int n , x[26];
/* fUs6To0lm ily traian C8xlQSR4u */ 
/* fUs6To0lm ily traian C8xlQSR4u */ void afisare()
/* fUs6To0lm ily traian C8xlQSR4u */ {
/* fUs6To0lm ily traian C8xlQSR4u */     for(int i = 1 ; i <= n ; i++)
/* fUs6To0lm ily traian C8xlQSR4u */         cout << char(x[i] + 'a');
/* fUs6To0lm ily traian C8xlQSR4u */     cout << '\n';
/* fUs6To0lm ily traian C8xlQSR4u */ }
/* fUs6To0lm ily traian C8xlQSR4u */ 
/* fUs6To0lm ily traian C8xlQSR4u */ void back(int k)
/* fUs6To0lm ily traian C8xlQSR4u */ {
/* fUs6To0lm ily traian C8xlQSR4u */     for(int i = x[k - 1] - 1; i <= x[k - 1] + 1; i += 2)
/* fUs6To0lm ily traian C8xlQSR4u */         if(i >= 0 && i <= n / 2)
/* fUs6To0lm ily traian C8xlQSR4u */         {
/* fUs6To0lm ily traian C8xlQSR4u */             x[k] = i;
/* fUs6To0lm ily traian C8xlQSR4u */             if(k == n)
/* fUs6To0lm ily traian C8xlQSR4u */             {
/* fUs6To0lm ily traian C8xlQSR4u */                 if(x[k] == 0) afisare();
/* fUs6To0lm ily traian C8xlQSR4u */             }
/* fUs6To0lm ily traian C8xlQSR4u */             else back(k + 1);
/* fUs6To0lm ily traian C8xlQSR4u */         }
/* fUs6To0lm ily traian C8xlQSR4u */ }
/* fUs6To0lm ily traian C8xlQSR4u */ 
/* fUs6To0lm ily traian C8xlQSR4u */ int main()
/* fUs6To0lm ily traian C8xlQSR4u */ {
/* fUs6To0lm ily traian C8xlQSR4u */     cin >> n;
/* fUs6To0lm ily traian C8xlQSR4u */     x[1] = 0;
/* fUs6To0lm ily traian C8xlQSR4u */     back(2);
/* fUs6To0lm ily traian C8xlQSR4u */ }