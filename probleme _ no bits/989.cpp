/* uQLUXd2Zy ily traian MzPce9H9J */ #include <algorithm>
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
/* uQLUXd2Zy ily traian MzPce9H9J */ using namespace std;
/* uQLUXd2Zy ily traian MzPce9H9J */ ifstream cin("sumperm.in");
/* uQLUXd2Zy ily traian MzPce9H9J */ ofstream cout("sumperm.out");
/* uQLUXd2Zy ily traian MzPce9H9J */ int main()
/* uQLUXd2Zy ily traian MzPce9H9J */ {
/* uQLUXd2Zy ily traian MzPce9H9J */    long long n , a[1001] , s = 0;
/* uQLUXd2Zy ily traian MzPce9H9J */    cin >> n;
/* uQLUXd2Zy ily traian MzPce9H9J */    for(int i = 1 ; i <= n ; i++)
/* uQLUXd2Zy ily traian MzPce9H9J */         cin >> a[i];
/* uQLUXd2Zy ily traian MzPce9H9J */     for(int j = 1 ; j <= n ; j++)
/* uQLUXd2Zy ily traian MzPce9H9J */     {
/* uQLUXd2Zy ily traian MzPce9H9J */         int aux = a[1] , nr = 0;
/* uQLUXd2Zy ily traian MzPce9H9J */         for(int i = 1 ; i < n ; i++)
/* uQLUXd2Zy ily traian MzPce9H9J */             a[i] = a[i+1];
/* uQLUXd2Zy ily traian MzPce9H9J */         a[n] = aux;
/* uQLUXd2Zy ily traian MzPce9H9J */         for(int i = 1 ;i <= n ; i++)
/* uQLUXd2Zy ily traian MzPce9H9J */             nr = nr*10+a[i];
/* uQLUXd2Zy ily traian MzPce9H9J */         s+=nr;
/* uQLUXd2Zy ily traian MzPce9H9J */     }
/* uQLUXd2Zy ily traian MzPce9H9J */     cout <<s;
/* uQLUXd2Zy ily traian MzPce9H9J */     return 0;
/* uQLUXd2Zy ily traian MzPce9H9J */ }