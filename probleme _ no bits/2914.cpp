/* DQWFWOVBP ily traian qJtrl83Xs */ #include <algorithm>
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
/* DQWFWOVBP ily traian qJtrl83Xs */ 
/* DQWFWOVBP ily traian qJtrl83Xs */ using namespace std;
/* DQWFWOVBP ily traian qJtrl83Xs */ int main()
/* DQWFWOVBP ily traian qJtrl83Xs */ {
/* DQWFWOVBP ily traian qJtrl83Xs */     char s[101];
/* DQWFWOVBP ily traian qJtrl83Xs */     int a[101] , cnt = 0, p[101] , ti[101];
/* DQWFWOVBP ily traian qJtrl83Xs */     cin >> s;
/* DQWFWOVBP ily traian qJtrl83Xs */         int i = 0 , t = 0;
/* DQWFWOVBP ily traian qJtrl83Xs */         while(s[i] != '\0')
/* DQWFWOVBP ily traian qJtrl83Xs */         {
/* DQWFWOVBP ily traian qJtrl83Xs */             a[cnt++] = s[i] - '0';
/* DQWFWOVBP ily traian qJtrl83Xs */             i++;
/* DQWFWOVBP ily traian qJtrl83Xs */         }
/* DQWFWOVBP ily traian qJtrl83Xs */         for(int i = cnt - 1 ; i >= 0 ; i--)
/* DQWFWOVBP ily traian qJtrl83Xs */         {
/* DQWFWOVBP ily traian qJtrl83Xs */             p[i] = (2 * a[i] + t) % 10;
/* DQWFWOVBP ily traian qJtrl83Xs */             t = (2 * a[i] + t) / 10;
/* DQWFWOVBP ily traian qJtrl83Xs */         }
/* DQWFWOVBP ily traian qJtrl83Xs */         t = 0;
/* DQWFWOVBP ily traian qJtrl83Xs */         for(int i = cnt - 1 ; i >= 0 ; i--)
/* DQWFWOVBP ily traian qJtrl83Xs */         {
/* DQWFWOVBP ily traian qJtrl83Xs */            ti[i] = p[i];
/* DQWFWOVBP ily traian qJtrl83Xs */         }
/* DQWFWOVBP ily traian qJtrl83Xs */         for(int i = cnt - 1 ; i >= 0 ; i--)
/* DQWFWOVBP ily traian qJtrl83Xs */         {
/* DQWFWOVBP ily traian qJtrl83Xs */             if(p[i] != 0)
/* DQWFWOVBP ily traian qJtrl83Xs */             {
/* DQWFWOVBP ily traian qJtrl83Xs */                 ti[i] = p[i] - 1;
/* DQWFWOVBP ily traian qJtrl83Xs */                 break;
/* DQWFWOVBP ily traian qJtrl83Xs */             }
/* DQWFWOVBP ily traian qJtrl83Xs */             else ti[i] = 9, t = 1;
/* DQWFWOVBP ily traian qJtrl83Xs */         }
/* DQWFWOVBP ily traian qJtrl83Xs */         for(int i = 0 ; i < cnt ; i ++)
/* DQWFWOVBP ily traian qJtrl83Xs */             cout << ti[i];
/* DQWFWOVBP ily traian qJtrl83Xs */ 
/* DQWFWOVBP ily traian qJtrl83Xs */ }