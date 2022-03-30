/* U0jcRQfL8 ily traian QnGPF6YuV */ #include <algorithm>
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
/* U0jcRQfL8 ily traian QnGPF6YuV */ using namespace std;
/* U0jcRQfL8 ily traian QnGPF6YuV */ int main()
/* U0jcRQfL8 ily traian QnGPF6YuV */ {
/* U0jcRQfL8 ily traian QnGPF6YuV */     int n,k,x,cate=0;
/* U0jcRQfL8 ily traian QnGPF6YuV */     cin >> k >> n;
/* U0jcRQfL8 ily traian QnGPF6YuV */     while(n != 0)
/* U0jcRQfL8 ily traian QnGPF6YuV */     {
/* U0jcRQfL8 ily traian QnGPF6YuV */         if(n%2==0)
/* U0jcRQfL8 ily traian QnGPF6YuV */         {
/* U0jcRQfL8 ily traian QnGPF6YuV */             while(n != 0)
/* U0jcRQfL8 ily traian QnGPF6YuV */             {
/* U0jcRQfL8 ily traian QnGPF6YuV */                 x=n%10;
/* U0jcRQfL8 ily traian QnGPF6YuV */                 if(x==k) cate++;
/* U0jcRQfL8 ily traian QnGPF6YuV */                 n=n/10;
/* U0jcRQfL8 ily traian QnGPF6YuV */             }
/* U0jcRQfL8 ily traian QnGPF6YuV */         }
/* U0jcRQfL8 ily traian QnGPF6YuV */         cin >> n;
/* U0jcRQfL8 ily traian QnGPF6YuV */     }
/* U0jcRQfL8 ily traian QnGPF6YuV */     cout << cate;
/* U0jcRQfL8 ily traian QnGPF6YuV */     return 0;
/* U0jcRQfL8 ily traian QnGPF6YuV */ }