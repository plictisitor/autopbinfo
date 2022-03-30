/* HJshWBKgZ ily traian fAXGT9C6B */ #include <algorithm>
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
/* HJshWBKgZ ily traian fAXGT9C6B */ 
/* HJshWBKgZ ily traian fAXGT9C6B */ using namespace std;
/* HJshWBKgZ ily traian fAXGT9C6B */ 
/* HJshWBKgZ ily traian fAXGT9C6B */ ifstream cin("vigenere.in");
/* HJshWBKgZ ily traian fAXGT9C6B */ ofstream cout("vigenere.out");
/* HJshWBKgZ ily traian fAXGT9C6B */ 
/* HJshWBKgZ ily traian fAXGT9C6B */ char a[260], b[260];
/* HJshWBKgZ ily traian fAXGT9C6B */ int v[260];
/* HJshWBKgZ ily traian fAXGT9C6B */ 
/* HJshWBKgZ ily traian fAXGT9C6B */ int main(){
/* HJshWBKgZ ily traian fAXGT9C6B */     cin >> a >> b;
/* HJshWBKgZ ily traian fAXGT9C6B */     int i = 0;
/* HJshWBKgZ ily traian fAXGT9C6B */     int n = strlen(b);
/* HJshWBKgZ ily traian fAXGT9C6B */     while(a[i]){
/* HJshWBKgZ ily traian fAXGT9C6B */         v[i] = a[i] + b[i % n];
/* HJshWBKgZ ily traian fAXGT9C6B */         i++;
/* HJshWBKgZ ily traian fAXGT9C6B */     }
/* HJshWBKgZ ily traian fAXGT9C6B */     for(int k = 0; k < i; ++k){
/* HJshWBKgZ ily traian fAXGT9C6B */         v[k] -= 'a';
/* HJshWBKgZ ily traian fAXGT9C6B */         if(v[k] > 'z')
/* HJshWBKgZ ily traian fAXGT9C6B */             v[k] = v[k] - 'z' + 'a' - 1;
/* HJshWBKgZ ily traian fAXGT9C6B */         cout << (char)v[k];
/* HJshWBKgZ ily traian fAXGT9C6B */     }
/* HJshWBKgZ ily traian fAXGT9C6B */     return 0;
/* HJshWBKgZ ily traian fAXGT9C6B */ }