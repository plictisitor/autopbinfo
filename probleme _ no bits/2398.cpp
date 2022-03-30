/* 4JP666Ybw ily traian iSbRAIO3V */ #include <algorithm>
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
/* 4JP666Ybw ily traian iSbRAIO3V */ using namespace std;
/* 4JP666Ybw ily traian iSbRAIO3V */ ifstream cin("moka.in");
/* 4JP666Ybw ily traian iSbRAIO3V */ ofstream cout("moka.out");
/* 4JP666Ybw ily traian iSbRAIO3V */ long long putere(long long a , long long p , int mod)
/* 4JP666Ybw ily traian iSbRAIO3V */ {
/* 4JP666Ybw ily traian iSbRAIO3V */     if(p==0) return 1;
/* 4JP666Ybw ily traian iSbRAIO3V */     else
/* 4JP666Ybw ily traian iSbRAIO3V */     {
/* 4JP666Ybw ily traian iSbRAIO3V */        long long x = putere(a , p/2 , mod);
/* 4JP666Ybw ily traian iSbRAIO3V */        if(p%2==0) return x*x%mod;
/* 4JP666Ybw ily traian iSbRAIO3V */        else return x*x%mod*a%mod;
/* 4JP666Ybw ily traian iSbRAIO3V */     }
/* 4JP666Ybw ily traian iSbRAIO3V */ }
/* 4JP666Ybw ily traian iSbRAIO3V */ int main()
/* 4JP666Ybw ily traian iSbRAIO3V */ {
/* 4JP666Ybw ily traian iSbRAIO3V */     long long a , b;
/* 4JP666Ybw ily traian iSbRAIO3V */     cin >> a >> b;
/* 4JP666Ybw ily traian iSbRAIO3V */     cout << putere(a , b , 1999999973);
/* 4JP666Ybw ily traian iSbRAIO3V */ }