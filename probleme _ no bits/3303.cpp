/* wmPmJvNHf ily traian 9xEswGFqV */ #include <algorithm>
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
/* wmPmJvNHf ily traian 9xEswGFqV */ using namespace std;
/* wmPmJvNHf ily traian 9xEswGFqV */ 
/* wmPmJvNHf ily traian 9xEswGFqV */ ifstream cin("nrcurat.in");
/* wmPmJvNHf ily traian 9xEswGFqV */ ofstream cout("nrcurat.out");
/* wmPmJvNHf ily traian 9xEswGFqV */ 
/* wmPmJvNHf ily traian 9xEswGFqV */ int urm(int n){
/* wmPmJvNHf ily traian 9xEswGFqV */     int nr = 0, cn = n;
/* wmPmJvNHf ily traian 9xEswGFqV */     while(n){
/* wmPmJvNHf ily traian 9xEswGFqV */         nr = nr * 10 + 9;
/* wmPmJvNHf ily traian 9xEswGFqV */         n/=10;
/* wmPmJvNHf ily traian 9xEswGFqV */     }
/* wmPmJvNHf ily traian 9xEswGFqV */     return nr - cn;
/* wmPmJvNHf ily traian 9xEswGFqV */ }
/* wmPmJvNHf ily traian 9xEswGFqV */ 
/* wmPmJvNHf ily traian 9xEswGFqV */ int main(){
/* wmPmJvNHf ily traian 9xEswGFqV */     int x;
/* wmPmJvNHf ily traian 9xEswGFqV */     for(; cin >> x;){
/* wmPmJvNHf ily traian 9xEswGFqV */         int urma = urm(x);
/* wmPmJvNHf ily traian 9xEswGFqV */         int d = 0;
/* wmPmJvNHf ily traian 9xEswGFqV */         while(x){
/* wmPmJvNHf ily traian 9xEswGFqV */             d = d * 10 + x % 10;
/* wmPmJvNHf ily traian 9xEswGFqV */             x/=10;
/* wmPmJvNHf ily traian 9xEswGFqV */         }
/* wmPmJvNHf ily traian 9xEswGFqV */         if(urma == d)
/* wmPmJvNHf ily traian 9xEswGFqV */             cout << 1 << ' ';
/* wmPmJvNHf ily traian 9xEswGFqV */         else
/* wmPmJvNHf ily traian 9xEswGFqV */             cout << 0 << ' ';
/* wmPmJvNHf ily traian 9xEswGFqV */     }
/* wmPmJvNHf ily traian 9xEswGFqV */     return 0;
/* wmPmJvNHf ily traian 9xEswGFqV */ }