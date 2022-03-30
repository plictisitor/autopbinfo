/* RB6oXbE2v ily traian mtsI3EmdU */ #include <algorithm>
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
/* RB6oXbE2v ily traian mtsI3EmdU */ using namespace std;
/* RB6oXbE2v ily traian mtsI3EmdU */ ifstream cin("intervale2.in");
/* RB6oXbE2v ily traian mtsI3EmdU */ ofstream cout("intervale2.out");
/* RB6oXbE2v ily traian mtsI3EmdU */ int main()
/* RB6oXbE2v ily traian mtsI3EmdU */ {
/* RB6oXbE2v ily traian mtsI3EmdU */     int n , a , b , maxi = -1000 , mini = 1000;
/* RB6oXbE2v ily traian mtsI3EmdU */     cin >> n;
/* RB6oXbE2v ily traian mtsI3EmdU */     for(int i = 0 ; i < n ; ++i)
/* RB6oXbE2v ily traian mtsI3EmdU */     {
/* RB6oXbE2v ily traian mtsI3EmdU */         cin >> a >> b;
/* RB6oXbE2v ily traian mtsI3EmdU */         if(a > maxi) maxi = a;
/* RB6oXbE2v ily traian mtsI3EmdU */         if(b < mini) mini = b;
/* RB6oXbE2v ily traian mtsI3EmdU */     }
/* RB6oXbE2v ily traian mtsI3EmdU */     if(maxi < mini) cout << maxi << " " << mini;
/* RB6oXbE2v ily traian mtsI3EmdU */     else cout << 0;
/* RB6oXbE2v ily traian mtsI3EmdU */     return 0;
/* RB6oXbE2v ily traian mtsI3EmdU */ }