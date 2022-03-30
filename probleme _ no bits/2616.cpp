/* 5ZhICgPFd ily traian IS9dLQRsa */ #include <algorithm>
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
/* 5ZhICgPFd ily traian IS9dLQRsa */ using namespace std;
/* 5ZhICgPFd ily traian IS9dLQRsa */ 
/* 5ZhICgPFd ily traian IS9dLQRsa */ int main()
/* 5ZhICgPFd ily traian IS9dLQRsa */ {
/* 5ZhICgPFd ily traian IS9dLQRsa */     int n , m;
/* 5ZhICgPFd ily traian IS9dLQRsa */     cin >> n >> m;
/* 5ZhICgPFd ily traian IS9dLQRsa */     if(n%2==1)
/* 5ZhICgPFd ily traian IS9dLQRsa */         n++;
/* 5ZhICgPFd ily traian IS9dLQRsa */     if(m%2==1)
/* 5ZhICgPFd ily traian IS9dLQRsa */         m++;
/* 5ZhICgPFd ily traian IS9dLQRsa */     cout << 1LL * (n / 2) * (m / 2);
/* 5ZhICgPFd ily traian IS9dLQRsa */     return 0;
/* 5ZhICgPFd ily traian IS9dLQRsa */ }