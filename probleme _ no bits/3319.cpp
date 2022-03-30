/* 0VajtXUEM ily traian iPymfLilP */ #include <algorithm>
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
/* 0VajtXUEM ily traian iPymfLilP */ using namespace std;
/* 0VajtXUEM ily traian iPymfLilP */ 
/* 0VajtXUEM ily traian iPymfLilP */ ifstream cin("eratostene8.in");
/* 0VajtXUEM ily traian iPymfLilP */ ofstream cout("eratostene8.out");
/* 0VajtXUEM ily traian iPymfLilP */ 
/* 0VajtXUEM ily traian iPymfLilP */ int n,t,s,d,E[10000001], P[10001];
/* 0VajtXUEM ily traian iPymfLilP */ bool F[1000001];
/* 0VajtXUEM ily traian iPymfLilP */ 
/* 0VajtXUEM ily traian iPymfLilP */ int main(){
/* 0VajtXUEM ily traian iPymfLilP */     cin >> n >> t;
/* 0VajtXUEM ily traian iPymfLilP */     for(int i = 1; i <= n; ++i)
/* 0VajtXUEM ily traian iPymfLilP */         cin >> P[i];
/* 0VajtXUEM ily traian iPymfLilP */     for(int i = 1; i <= n; ++i){
/* 0VajtXUEM ily traian iPymfLilP */         E[P[i]]=1;
/* 0VajtXUEM ily traian iPymfLilP */         if(F[P[i]] == 0){
/* 0VajtXUEM ily traian iPymfLilP */             for(int j = 2; j * P[i] <= 10000000; ++j)
/* 0VajtXUEM ily traian iPymfLilP */                 E[P[i] * j] = 1;
/* 0VajtXUEM ily traian iPymfLilP */             F[P[i]] = 1;
/* 0VajtXUEM ily traian iPymfLilP */         }
/* 0VajtXUEM ily traian iPymfLilP */     }
/* 0VajtXUEM ily traian iPymfLilP */     for(int i = 1; i <= 10000000; ++i)
/* 0VajtXUEM ily traian iPymfLilP */         E[i] = E[i-1] + E[i];
/* 0VajtXUEM ily traian iPymfLilP */     for(int i = 1; i <= t; ++i){
/* 0VajtXUEM ily traian iPymfLilP */         cin >> s >> d;
/* 0VajtXUEM ily traian iPymfLilP */         cout << E[d] - E[s-1] << '\n';
/* 0VajtXUEM ily traian iPymfLilP */     }
/* 0VajtXUEM ily traian iPymfLilP */ }