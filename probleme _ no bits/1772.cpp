/* UiglIlp4l ily traian Fj84Kb3tW */ #include <algorithm>
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
/* UiglIlp4l ily traian Fj84Kb3tW */ using namespace std;
/* UiglIlp4l ily traian Fj84Kb3tW */ int main()
/* UiglIlp4l ily traian Fj84Kb3tW */ {
/* UiglIlp4l ily traian Fj84Kb3tW */     int a , r , n;
/* UiglIlp4l ily traian Fj84Kb3tW */     cin >> a >> r >> n;
/* UiglIlp4l ily traian Fj84Kb3tW */     int x = a;
/* UiglIlp4l ily traian Fj84Kb3tW */     for(int i = 0 ; i < n ; ++i)
/* UiglIlp4l ily traian Fj84Kb3tW */     {
/* UiglIlp4l ily traian Fj84Kb3tW */         for(int j = 0 ; j < n ; ++j)
/* UiglIlp4l ily traian Fj84Kb3tW */         {
/* UiglIlp4l ily traian Fj84Kb3tW */             cout << x <<' ';
/* UiglIlp4l ily traian Fj84Kb3tW */             x += r * n;
/* UiglIlp4l ily traian Fj84Kb3tW */         }
/* UiglIlp4l ily traian Fj84Kb3tW */         x = a + r;
/* UiglIlp4l ily traian Fj84Kb3tW */         a += r;
/* UiglIlp4l ily traian Fj84Kb3tW */         cout << endl;
/* UiglIlp4l ily traian Fj84Kb3tW */     }
/* UiglIlp4l ily traian Fj84Kb3tW */ }