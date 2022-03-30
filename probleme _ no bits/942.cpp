/* MocCH38vv ily traian IyNQ8lXZS */ #include <algorithm>
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
/* MocCH38vv ily traian IyNQ8lXZS */ using namespace std;
/* MocCH38vv ily traian IyNQ8lXZS */ 
/* MocCH38vv ily traian IyNQ8lXZS */ int main()
/* MocCH38vv ily traian IyNQ8lXZS */ {
/* MocCH38vv ily traian IyNQ8lXZS */     long long n;
/* MocCH38vv ily traian IyNQ8lXZS */     int cnt2 = 0, cnt3 = 0;
/* MocCH38vv ily traian IyNQ8lXZS */     cin >> n;
/* MocCH38vv ily traian IyNQ8lXZS */     while(n > 0){
/* MocCH38vv ily traian IyNQ8lXZS */         if(n % 10 == 2)
/* MocCH38vv ily traian IyNQ8lXZS */             cnt2++;
/* MocCH38vv ily traian IyNQ8lXZS */         else
/* MocCH38vv ily traian IyNQ8lXZS */             cnt3++;
/* MocCH38vv ily traian IyNQ8lXZS */         n/=10;
/* MocCH38vv ily traian IyNQ8lXZS */     }
/* MocCH38vv ily traian IyNQ8lXZS */     if(cnt2 > cnt3)
/* MocCH38vv ily traian IyNQ8lXZS */         cout << 2;
/* MocCH38vv ily traian IyNQ8lXZS */     else if(cnt2 == cnt3)
/* MocCH38vv ily traian IyNQ8lXZS */         cout << 2 << ' ' << 3;
/* MocCH38vv ily traian IyNQ8lXZS */     else
/* MocCH38vv ily traian IyNQ8lXZS */         cout << 3;
/* MocCH38vv ily traian IyNQ8lXZS */     return 0;
/* MocCH38vv ily traian IyNQ8lXZS */ }