/* fCxqU9xPa ily traian xmzRAdPUX */ #include <algorithm>
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
/* fCxqU9xPa ily traian xmzRAdPUX */ using namespace std;
/* fCxqU9xPa ily traian xmzRAdPUX */ 
/* fCxqU9xPa ily traian xmzRAdPUX */ int main(){
/* fCxqU9xPa ily traian xmzRAdPUX */     int n, cnt=0, x;
/* fCxqU9xPa ily traian xmzRAdPUX */     cin >> n;
/* fCxqU9xPa ily traian xmzRAdPUX */     for(int i = 1; i <= n; ++i){
/* fCxqU9xPa ily traian xmzRAdPUX */         cin >> x;
/* fCxqU9xPa ily traian xmzRAdPUX */         int nr = 0, put = 1;
/* fCxqU9xPa ily traian xmzRAdPUX */         bool ok = false; /// o sa stiu daca numarul a continut cifre pare
/* fCxqU9xPa ily traian xmzRAdPUX */         if(x == 0)
/* fCxqU9xPa ily traian xmzRAdPUX */             cnt++;
/* fCxqU9xPa ily traian xmzRAdPUX */         while(x){ /// calculez numerele pare
/* fCxqU9xPa ily traian xmzRAdPUX */             if(x % 2 == 0)
/* fCxqU9xPa ily traian xmzRAdPUX */                 ok = true, nr = (x % 10) * put + nr, put *= 10;
/* fCxqU9xPa ily traian xmzRAdPUX */             x/=10;
/* fCxqU9xPa ily traian xmzRAdPUX */         }
/* fCxqU9xPa ily traian xmzRAdPUX */         if(ok){
/* fCxqU9xPa ily traian xmzRAdPUX */             int a = nr, b = 0;
/* fCxqU9xPa ily traian xmzRAdPUX */             while(nr){ /// calculez rasturnatul numarului par
/* fCxqU9xPa ily traian xmzRAdPUX */                 b = b * 10 + nr % 10;
/* fCxqU9xPa ily traian xmzRAdPUX */                 nr/=10;
/* fCxqU9xPa ily traian xmzRAdPUX */             }
/* fCxqU9xPa ily traian xmzRAdPUX */             if(a == b) /// compar rasturnatele sa vad daca este palindrom
/* fCxqU9xPa ily traian xmzRAdPUX */                 cnt++; /// maresc un contor ca sa tin minte cate sunt
/* fCxqU9xPa ily traian xmzRAdPUX */         }
/* fCxqU9xPa ily traian xmzRAdPUX */     }
/* fCxqU9xPa ily traian xmzRAdPUX */     cout << cnt;
/* fCxqU9xPa ily traian xmzRAdPUX */     return 0;
/* fCxqU9xPa ily traian xmzRAdPUX */ }