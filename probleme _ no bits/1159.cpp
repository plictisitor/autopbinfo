/* oRpacICfj ily traian Q4j9D7nbB */ #include <algorithm>
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
/* oRpacICfj ily traian Q4j9D7nbB */ using namespace std;
/* oRpacICfj ily traian Q4j9D7nbB */ ifstream cin("smen.in");
/* oRpacICfj ily traian Q4j9D7nbB */ ofstream cout("smen.out");
/* oRpacICfj ily traian Q4j9D7nbB */ int main()
/* oRpacICfj ily traian Q4j9D7nbB */ {
/* oRpacICfj ily traian Q4j9D7nbB */     unsigned long long n , a = 0 , b;
/* oRpacICfj ily traian Q4j9D7nbB */     cin >> n;
/* oRpacICfj ily traian Q4j9D7nbB */     for(int i = 1 ; i <= n ; i++)
/* oRpacICfj ily traian Q4j9D7nbB */     {
/* oRpacICfj ily traian Q4j9D7nbB */         b = ( a * a / (i + 2) +  a * i + i + 1) % 666013;
/* oRpacICfj ily traian Q4j9D7nbB */         a = b;
/* oRpacICfj ily traian Q4j9D7nbB */         if(i!=n) b = 0;
/* oRpacICfj ily traian Q4j9D7nbB */     }
/* oRpacICfj ily traian Q4j9D7nbB */     cout << b << ' ';
/* oRpacICfj ily traian Q4j9D7nbB */ }