/* xO071AO9B ily traian zYbO8s5bp */ #include <algorithm>
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
/* xO071AO9B ily traian zYbO8s5bp */ using namespace std;
/* xO071AO9B ily traian zYbO8s5bp */ 
/* xO071AO9B ily traian zYbO8s5bp */ bool ok(int n){
/* xO071AO9B ily traian zYbO8s5bp */     int d = 2, cnt = 0;
/* xO071AO9B ily traian zYbO8s5bp */     while(n > 1){
/* xO071AO9B ily traian zYbO8s5bp */         int p = 0;
/* xO071AO9B ily traian zYbO8s5bp */         while(n % d == 0)
/* xO071AO9B ily traian zYbO8s5bp */             n/=d, p++;
/* xO071AO9B ily traian zYbO8s5bp */         if(p)
/* xO071AO9B ily traian zYbO8s5bp */             cnt++;
/* xO071AO9B ily traian zYbO8s5bp */         d++;
/* xO071AO9B ily traian zYbO8s5bp */         if(d * d > n)
/* xO071AO9B ily traian zYbO8s5bp */             d = n;
/* xO071AO9B ily traian zYbO8s5bp */     }
/* xO071AO9B ily traian zYbO8s5bp */     return cnt == 1;
/* xO071AO9B ily traian zYbO8s5bp */ }
/* xO071AO9B ily traian zYbO8s5bp */ 
/* xO071AO9B ily traian zYbO8s5bp */ int main(){
/* xO071AO9B ily traian zYbO8s5bp */     int n, x, mini = 1000000000;
/* xO071AO9B ily traian zYbO8s5bp */     cin >> n;
/* xO071AO9B ily traian zYbO8s5bp */     for(int i = 1; i <= n; ++i){
/* xO071AO9B ily traian zYbO8s5bp */         cin >> x;
/* xO071AO9B ily traian zYbO8s5bp */         if(ok(x) && x < mini)
/* xO071AO9B ily traian zYbO8s5bp */             mini = x;
/* xO071AO9B ily traian zYbO8s5bp */     }
/* xO071AO9B ily traian zYbO8s5bp */     if(mini < 1000000000)
/* xO071AO9B ily traian zYbO8s5bp */     cout << mini;
/* xO071AO9B ily traian zYbO8s5bp */     else
/* xO071AO9B ily traian zYbO8s5bp */         cout << "NU EXISTA";
/* xO071AO9B ily traian zYbO8s5bp */     return 0;
/* xO071AO9B ily traian zYbO8s5bp */ }