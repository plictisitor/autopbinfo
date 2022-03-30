/* U4RWJEGnf ily traian aBtJp9RtA */ #include <algorithm>
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
/* U4RWJEGnf ily traian aBtJp9RtA */ using namespace std;
/* U4RWJEGnf ily traian aBtJp9RtA */ 
/* U4RWJEGnf ily traian aBtJp9RtA */ ifstream cin("conversie_b_10.in");
/* U4RWJEGnf ily traian aBtJp9RtA */ ofstream cout("conversie_b_10.out");
/* U4RWJEGnf ily traian aBtJp9RtA */ 
/* U4RWJEGnf ily traian aBtJp9RtA */ int main()
/* U4RWJEGnf ily traian aBtJp9RtA */ {
/* U4RWJEGnf ily traian aBtJp9RtA */     int n , b;
/* U4RWJEGnf ily traian aBtJp9RtA */     cin >> n >> b;
/* U4RWJEGnf ily traian aBtJp9RtA */     int nr=1;
/* U4RWJEGnf ily traian aBtJp9RtA */     int a[10];
/* U4RWJEGnf ily traian aBtJp9RtA */     int p = 0;
/* U4RWJEGnf ily traian aBtJp9RtA */     while(n)
/* U4RWJEGnf ily traian aBtJp9RtA */     {
/* U4RWJEGnf ily traian aBtJp9RtA */         a[p]=n%10;
/* U4RWJEGnf ily traian aBtJp9RtA */         n/=10;
/* U4RWJEGnf ily traian aBtJp9RtA */         p++;
/* U4RWJEGnf ily traian aBtJp9RtA */     }
/* U4RWJEGnf ily traian aBtJp9RtA */     nr=a[p-1];
/* U4RWJEGnf ily traian aBtJp9RtA */     for(int i = p-2 ; i >= 0 ; --i)
/* U4RWJEGnf ily traian aBtJp9RtA */     {
/* U4RWJEGnf ily traian aBtJp9RtA */         nr=nr*b+a[i];    
/* U4RWJEGnf ily traian aBtJp9RtA */     }
/* U4RWJEGnf ily traian aBtJp9RtA */     cout << nr;
/* U4RWJEGnf ily traian aBtJp9RtA */     return 0;
/* U4RWJEGnf ily traian aBtJp9RtA */ }