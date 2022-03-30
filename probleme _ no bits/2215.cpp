/* FfiWNx28R ily traian gNbIbKzPF */ #include <algorithm>
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
/* FfiWNx28R ily traian gNbIbKzPF */ using namespace std;
/* FfiWNx28R ily traian gNbIbKzPF */ int main()
/* FfiWNx28R ily traian gNbIbKzPF */ {
/* FfiWNx28R ily traian gNbIbKzPF */     int n , cnt = 0 , c= 0 , p = 1;
/* FfiWNx28R ily traian gNbIbKzPF */     cin >> n;
/* FfiWNx28R ily traian gNbIbKzPF */     while(n != 0)
/* FfiWNx28R ily traian gNbIbKzPF */     {
/* FfiWNx28R ily traian gNbIbKzPF */         c++;
/* FfiWNx28R ily traian gNbIbKzPF */         if(n % 10 % 2 == 0) cnt++;
/* FfiWNx28R ily traian gNbIbKzPF */         n /= 10;
/* FfiWNx28R ily traian gNbIbKzPF */     }
/* FfiWNx28R ily traian gNbIbKzPF */     for(int i = 1 ; i < c ; ++i) p *= i;
/* FfiWNx28R ily traian gNbIbKzPF */     cout << p * cnt;
/* FfiWNx28R ily traian gNbIbKzPF */     return 0;
/* FfiWNx28R ily traian gNbIbKzPF */ }