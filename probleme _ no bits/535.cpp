/* Tn9N7GlGD ily traian 6SU8KBGkg */ #include <algorithm>
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
/* Tn9N7GlGD ily traian 6SU8KBGkg */ using namespace std;
/* Tn9N7GlGD ily traian 6SU8KBGkg */ int main()
/* Tn9N7GlGD ily traian 6SU8KBGkg */ {
/* Tn9N7GlGD ily traian 6SU8KBGkg */     int n,x,s=0,k;
/* Tn9N7GlGD ily traian 6SU8KBGkg */     cin>>n>>k;
/* Tn9N7GlGD ily traian 6SU8KBGkg */     for(int i=1;i<=n;i++)
/* Tn9N7GlGD ily traian 6SU8KBGkg */     {
/* Tn9N7GlGD ily traian 6SU8KBGkg */         cin>>x;
/* Tn9N7GlGD ily traian 6SU8KBGkg */         s=s+k/x;
/* Tn9N7GlGD ily traian 6SU8KBGkg */     }
/* Tn9N7GlGD ily traian 6SU8KBGkg */     cout<<s;
/* Tn9N7GlGD ily traian 6SU8KBGkg */     return 0;
/* Tn9N7GlGD ily traian 6SU8KBGkg */ }