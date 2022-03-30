/* Mu4QH6ZJy ily traian dcTGOp34h */ #include <algorithm>
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
/* Mu4QH6ZJy ily traian dcTGOp34h */ 
/* Mu4QH6ZJy ily traian dcTGOp34h */ using namespace std;
/* Mu4QH6ZJy ily traian dcTGOp34h */ 
/* Mu4QH6ZJy ily traian dcTGOp34h */ int main ()
/* Mu4QH6ZJy ily traian dcTGOp34h */ {
/* Mu4QH6ZJy ily traian dcTGOp34h */     int n;
/* Mu4QH6ZJy ily traian dcTGOp34h */     cin >> n;
/* Mu4QH6ZJy ily traian dcTGOp34h */     while (n)
/* Mu4QH6ZJy ily traian dcTGOp34h */     {
/* Mu4QH6ZJy ily traian dcTGOp34h */         if (n >= 10 && n <= 99)
/* Mu4QH6ZJy ily traian dcTGOp34h */         cout << n / 10 + n % 10;
/* Mu4QH6ZJy ily traian dcTGOp34h */         n/=10;
/* Mu4QH6ZJy ily traian dcTGOp34h */     }
/* Mu4QH6ZJy ily traian dcTGOp34h */     return 0;
/* Mu4QH6ZJy ily traian dcTGOp34h */ }