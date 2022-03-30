/* jMesbHA8S ily traian T19MtJyfE */ #include <algorithm>
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
/* jMesbHA8S ily traian T19MtJyfE */ 
/* jMesbHA8S ily traian T19MtJyfE */ using namespace std;
/* jMesbHA8S ily traian T19MtJyfE */ 
/* jMesbHA8S ily traian T19MtJyfE */ int main ()
/* jMesbHA8S ily traian T19MtJyfE */ {
/* jMesbHA8S ily traian T19MtJyfE */     long long int n;
/* jMesbHA8S ily traian T19MtJyfE */     cin >> n;
/* jMesbHA8S ily traian T19MtJyfE */     int max=0;
/* jMesbHA8S ily traian T19MtJyfE */     int min=10;
/* jMesbHA8S ily traian T19MtJyfE */     int cnt=0;
/* jMesbHA8S ily traian T19MtJyfE */     while (n)
/* jMesbHA8S ily traian T19MtJyfE */     {if (n%10 < min)
/* jMesbHA8S ily traian T19MtJyfE */     min = n%10;
/* jMesbHA8S ily traian T19MtJyfE */     if (n%10 > max)
/* jMesbHA8S ily traian T19MtJyfE */     max = n%10;
/* jMesbHA8S ily traian T19MtJyfE */     n/=10;
/* jMesbHA8S ily traian T19MtJyfE */     cnt++;
/* jMesbHA8S ily traian T19MtJyfE */     }
/* jMesbHA8S ily traian T19MtJyfE */     if (cnt == 0)
/* jMesbHA8S ily traian T19MtJyfE */     cout << 0;
/* jMesbHA8S ily traian T19MtJyfE */     else
/* jMesbHA8S ily traian T19MtJyfE */     cout << max + min ;
/* jMesbHA8S ily traian T19MtJyfE */     return 0;
/* jMesbHA8S ily traian T19MtJyfE */ }