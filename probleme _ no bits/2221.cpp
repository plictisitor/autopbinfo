/* br5uWahYo ily traian bPwXV1rdY */ #include <algorithm>
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
/* br5uWahYo ily traian bPwXV1rdY */ using namespace std;
/* br5uWahYo ily traian bPwXV1rdY */ int main()
/* br5uWahYo ily traian bPwXV1rdY */ {
/* br5uWahYo ily traian bPwXV1rdY */     int n,x,cate=0;
/* br5uWahYo ily traian bPwXV1rdY */     cin>>n;
/* br5uWahYo ily traian bPwXV1rdY */     x=n%3;
/* br5uWahYo ily traian bPwXV1rdY */     while(n>0)
/* br5uWahYo ily traian bPwXV1rdY */     {
/* br5uWahYo ily traian bPwXV1rdY */         if((n%10)%3==x) cate++;
/* br5uWahYo ily traian bPwXV1rdY */         n=n/10;
/* br5uWahYo ily traian bPwXV1rdY */     }
/* br5uWahYo ily traian bPwXV1rdY */     cout<<cate;
/* br5uWahYo ily traian bPwXV1rdY */     return 0;
/* br5uWahYo ily traian bPwXV1rdY */ }