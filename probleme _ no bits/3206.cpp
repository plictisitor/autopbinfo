/* i0hV9VoSR ily traian aeQwS2oVf */ #include <algorithm>
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
/* i0hV9VoSR ily traian aeQwS2oVf */ 
/* i0hV9VoSR ily traian aeQwS2oVf */ 
/* i0hV9VoSR ily traian aeQwS2oVf */ using namespace std;
/* i0hV9VoSR ily traian aeQwS2oVf */ 
/* i0hV9VoSR ily traian aeQwS2oVf */ using PII = pair<int, int>;
/* i0hV9VoSR ily traian aeQwS2oVf */ using VP  = vector<PII>;
/* i0hV9VoSR ily traian aeQwS2oVf */ int aib[110011], n, x;
/* i0hV9VoSR ily traian aeQwS2oVf */ long long int s;
/* i0hV9VoSR ily traian aeQwS2oVf */ 
/* i0hV9VoSR ily traian aeQwS2oVf */ inline void Update(int poz)
/* i0hV9VoSR ily traian aeQwS2oVf */ {
/* i0hV9VoSR ily traian aeQwS2oVf */     for (int i = poz; i <= n; i += i & -i)
/* i0hV9VoSR ily traian aeQwS2oVf */         ++aib[i];
/* i0hV9VoSR ily traian aeQwS2oVf */ }
/* i0hV9VoSR ily traian aeQwS2oVf */ 
/* i0hV9VoSR ily traian aeQwS2oVf */ inline int Query(int poz)
/* i0hV9VoSR ily traian aeQwS2oVf */ {
/* i0hV9VoSR ily traian aeQwS2oVf */     int sum = 0;
/* i0hV9VoSR ily traian aeQwS2oVf */     for (int i = poz; i > 0; i -= i & -i)
/* i0hV9VoSR ily traian aeQwS2oVf */         sum += aib[i];
/* i0hV9VoSR ily traian aeQwS2oVf */     return sum;
/* i0hV9VoSR ily traian aeQwS2oVf */ }
/* i0hV9VoSR ily traian aeQwS2oVf */ 
/* i0hV9VoSR ily traian aeQwS2oVf */ int main()
/* i0hV9VoSR ily traian aeQwS2oVf */ {
/* i0hV9VoSR ily traian aeQwS2oVf */     cin >> n;
/* i0hV9VoSR ily traian aeQwS2oVf */     VP v(n + 1);
/* i0hV9VoSR ily traian aeQwS2oVf */     for (int i = 1; i <= n; ++i)
/* i0hV9VoSR ily traian aeQwS2oVf */     {
/* i0hV9VoSR ily traian aeQwS2oVf */         cin >> x;
/* i0hV9VoSR ily traian aeQwS2oVf */         v[i] = {x, i};
/* i0hV9VoSR ily traian aeQwS2oVf */     }
/* i0hV9VoSR ily traian aeQwS2oVf */     sort(v.begin() + 1, v.end(), greater<PII>());
/* i0hV9VoSR ily traian aeQwS2oVf */     for (int i = 1; i <= n; ++i)
/* i0hV9VoSR ily traian aeQwS2oVf */     {
/* i0hV9VoSR ily traian aeQwS2oVf */         s = (s + Query(v[i].second));
/* i0hV9VoSR ily traian aeQwS2oVf */         Update(v[i].second);
/* i0hV9VoSR ily traian aeQwS2oVf */     }
/* i0hV9VoSR ily traian aeQwS2oVf */     cout << s;
/* i0hV9VoSR ily traian aeQwS2oVf */     return 0;
/* i0hV9VoSR ily traian aeQwS2oVf */ }