/* CHMfYYoQw ily traian LVCcVqYSM */ #include <algorithm>
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
/* CHMfYYoQw ily traian LVCcVqYSM */ using namespace std;
/* CHMfYYoQw ily traian LVCcVqYSM */ 
/* CHMfYYoQw ily traian LVCcVqYSM */ int main(){
/* CHMfYYoQw ily traian LVCcVqYSM */     int n, nr1, nr2;
/* CHMfYYoQw ily traian LVCcVqYSM */     nr1 = -1;
/* CHMfYYoQw ily traian LVCcVqYSM */     nr2 = -1;
/* CHMfYYoQw ily traian LVCcVqYSM */     cin >> n;
/* CHMfYYoQw ily traian LVCcVqYSM */     for(int i = 1; i <= n; ++i){
/* CHMfYYoQw ily traian LVCcVqYSM */         int x;
/* CHMfYYoQw ily traian LVCcVqYSM */         cin >> x;
/* CHMfYYoQw ily traian LVCcVqYSM */         if(x % 2 == 1){
/* CHMfYYoQw ily traian LVCcVqYSM */             nr2 = nr1;
/* CHMfYYoQw ily traian LVCcVqYSM */             nr1 = x;
/* CHMfYYoQw ily traian LVCcVqYSM */         }
/* CHMfYYoQw ily traian LVCcVqYSM */     }
/* CHMfYYoQw ily traian LVCcVqYSM */     if(nr1 != -1 && nr2 != -1)
/* CHMfYYoQw ily traian LVCcVqYSM */         cout << nr2 << ' ' << nr1;
/* CHMfYYoQw ily traian LVCcVqYSM */     else
/* CHMfYYoQw ily traian LVCcVqYSM */         cout << "Numere insuficiente";
/* CHMfYYoQw ily traian LVCcVqYSM */     return 0;
/* CHMfYYoQw ily traian LVCcVqYSM */ }