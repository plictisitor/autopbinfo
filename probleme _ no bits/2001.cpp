/* 4ttPhIKU0 ily traian hzQo1bjJs */ #include <algorithm>
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
/* 4ttPhIKU0 ily traian hzQo1bjJs */ using namespace std;
/* 4ttPhIKU0 ily traian hzQo1bjJs */ ifstream cin("hugecontrol.in");
/* 4ttPhIKU0 ily traian hzQo1bjJs */ ofstream cout("hugecontrol.out");
/* 4ttPhIKU0 ily traian hzQo1bjJs */ int main()
/* 4ttPhIKU0 ily traian hzQo1bjJs */ {
/* 4ttPhIKU0 ily traian hzQo1bjJs */     char ch;
/* 4ttPhIKU0 ily traian hzQo1bjJs */     long long s = 0;
/* 4ttPhIKU0 ily traian hzQo1bjJs */     while(cin >> ch) s+=(int)ch-48;
/* 4ttPhIKU0 ily traian hzQo1bjJs */     if(s%9==0) cout << 9;
/* 4ttPhIKU0 ily traian hzQo1bjJs */     else cout << s%9;
/* 4ttPhIKU0 ily traian hzQo1bjJs */     return 0;
/* 4ttPhIKU0 ily traian hzQo1bjJs */ }