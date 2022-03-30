/* eSK2xrup0 ily traian Yk22ZPwVX */ #include <algorithm>
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
/* eSK2xrup0 ily traian Yk22ZPwVX */ using namespace std;
/* eSK2xrup0 ily traian Yk22ZPwVX */ long long n,nr5,nr2;
/* eSK2xrup0 ily traian Yk22ZPwVX */ int main()
/* eSK2xrup0 ily traian Yk22ZPwVX */ {
/* eSK2xrup0 ily traian Yk22ZPwVX */     cin>>n;
/* eSK2xrup0 ily traian Yk22ZPwVX */     for(int i=5;i<=n;i *=5) nr5 += n/i;
/* eSK2xrup0 ily traian Yk22ZPwVX */     for(int i=2;i<=n;i *=2) nr2 += n/i;
/* eSK2xrup0 ily traian Yk22ZPwVX */     if(nr5<=nr2) cout<<nr5;
/* eSK2xrup0 ily traian Yk22ZPwVX */     else cout<<nr2;
/* eSK2xrup0 ily traian Yk22ZPwVX */     return 0;
/* eSK2xrup0 ily traian Yk22ZPwVX */ }