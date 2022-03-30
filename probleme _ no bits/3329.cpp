/* i6xKR0EIP ily traian cpFHabxOD */ #include <algorithm>
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
/* i6xKR0EIP ily traian cpFHabxOD */ 
/* i6xKR0EIP ily traian cpFHabxOD */ using namespace std;
/* i6xKR0EIP ily traian cpFHabxOD */ 
/* i6xKR0EIP ily traian cpFHabxOD */ char s[21];
/* i6xKR0EIP ily traian cpFHabxOD */ int f[200];
/* i6xKR0EIP ily traian cpFHabxOD */ long long int fact = 1;
/* i6xKR0EIP ily traian cpFHabxOD */ 
/* i6xKR0EIP ily traian cpFHabxOD */ long long int facto(int i){
/* i6xKR0EIP ily traian cpFHabxOD */     long long int fct = 1;
/* i6xKR0EIP ily traian cpFHabxOD */     if(i == 0)
/* i6xKR0EIP ily traian cpFHabxOD */         return 1;
/* i6xKR0EIP ily traian cpFHabxOD */     else
/* i6xKR0EIP ily traian cpFHabxOD */         for(int j = 1; j <= i; ++j)
/* i6xKR0EIP ily traian cpFHabxOD */             fct *= j;
/* i6xKR0EIP ily traian cpFHabxOD */     return fct;
/* i6xKR0EIP ily traian cpFHabxOD */ }
/* i6xKR0EIP ily traian cpFHabxOD */ 
/* i6xKR0EIP ily traian cpFHabxOD */ int main(){
/* i6xKR0EIP ily traian cpFHabxOD */     cin >> s;
/* i6xKR0EIP ily traian cpFHabxOD */     for(int i = 1; i <= strlen(s); ++i)
/* i6xKR0EIP ily traian cpFHabxOD */         fact *= i;
/* i6xKR0EIP ily traian cpFHabxOD */     int i = 0;
/* i6xKR0EIP ily traian cpFHabxOD */     while(s[i]){
/* i6xKR0EIP ily traian cpFHabxOD */         f[s[i]] ++;
/* i6xKR0EIP ily traian cpFHabxOD */         i++;
/* i6xKR0EIP ily traian cpFHabxOD */     }
/* i6xKR0EIP ily traian cpFHabxOD */     for(int i = 'a'; i <= 'z'; ++i)
/* i6xKR0EIP ily traian cpFHabxOD */         fact /= facto(f[i]);
/* i6xKR0EIP ily traian cpFHabxOD */     cout << fact;
/* i6xKR0EIP ily traian cpFHabxOD */     return 0;
/* i6xKR0EIP ily traian cpFHabxOD */ }