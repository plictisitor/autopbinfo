/* ev1YfweKF ily traian igAJZw5kc */ #include <algorithm>
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
/* ev1YfweKF ily traian igAJZw5kc */ using namespace std;
/* ev1YfweKF ily traian igAJZw5kc */ ifstream fin("calcul3.in");
/* ev1YfweKF ily traian igAJZw5kc */ ofstream fout("calcul3.out");
/* ev1YfweKF ily traian igAJZw5kc */ int main()
/* ev1YfweKF ily traian igAJZw5kc */ {
/* ev1YfweKF ily traian igAJZw5kc */     int n , x;
/* ev1YfweKF ily traian igAJZw5kc */     char c;
/* ev1YfweKF ily traian igAJZw5kc */     fin >> n;
/* ev1YfweKF ily traian igAJZw5kc */     fout << n;
/* ev1YfweKF ily traian igAJZw5kc */     while(fin >> c)
/* ev1YfweKF ily traian igAJZw5kc */     {
/* ev1YfweKF ily traian igAJZw5kc */         if(c!='=')
/* ev1YfweKF ily traian igAJZw5kc */         {
/* ev1YfweKF ily traian igAJZw5kc */             fin >> x;
/* ev1YfweKF ily traian igAJZw5kc */             fout << c << x;
/* ev1YfweKF ily traian igAJZw5kc */             if(c == '+')n = n + x;
/* ev1YfweKF ily traian igAJZw5kc */             else n = n - x;
/* ev1YfweKF ily traian igAJZw5kc */         }
/* ev1YfweKF ily traian igAJZw5kc */     }
/* ev1YfweKF ily traian igAJZw5kc */     fout << "=" << n;
/* ev1YfweKF ily traian igAJZw5kc */     return 0;
/* ev1YfweKF ily traian igAJZw5kc */ }