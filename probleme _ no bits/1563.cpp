/* iZnaPeEqU ily traian y53AMm8fr */ #include <algorithm>
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
/* iZnaPeEqU ily traian y53AMm8fr */ 
/* iZnaPeEqU ily traian y53AMm8fr */ using namespace std;
/* iZnaPeEqU ily traian y53AMm8fr */ int main()
/* iZnaPeEqU ily traian y53AMm8fr */ {
/* iZnaPeEqU ily traian y53AMm8fr */     char s[1001];
/* iZnaPeEqU ily traian y53AMm8fr */     cin >> s;
/* iZnaPeEqU ily traian y53AMm8fr */     int n = strlen(s);
/* iZnaPeEqU ily traian y53AMm8fr */     for(int i = 0 ; i < n ; i++)
/* iZnaPeEqU ily traian y53AMm8fr */         for(int j = 0 ; j < n - 1 ; j++)
/* iZnaPeEqU ily traian y53AMm8fr */             if(s[j + 1] < s[j])
/* iZnaPeEqU ily traian y53AMm8fr */             {
/* iZnaPeEqU ily traian y53AMm8fr */                 char aux;
/* iZnaPeEqU ily traian y53AMm8fr */                 aux = s[j];
/* iZnaPeEqU ily traian y53AMm8fr */                 s[j] = s[j + 1];
/* iZnaPeEqU ily traian y53AMm8fr */                 s[j + 1] = aux;
/* iZnaPeEqU ily traian y53AMm8fr */             }
/* iZnaPeEqU ily traian y53AMm8fr */     cout << s;
/* iZnaPeEqU ily traian y53AMm8fr */     return 0;
/* iZnaPeEqU ily traian y53AMm8fr */ }