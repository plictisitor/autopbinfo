/* 3zRFPGKZD ily traian 2HrMTbKkc */ #include <algorithm>
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
/* 3zRFPGKZD ily traian 2HrMTbKkc */ using namespace std;
/* 3zRFPGKZD ily traian 2HrMTbKkc */ 
/* 3zRFPGKZD ily traian 2HrMTbKkc */ int P[20];
/* 3zRFPGKZD ily traian 2HrMTbKkc */ 
/* 3zRFPGKZD ily traian 2HrMTbKkc */ void generare(int k , int n)
/* 3zRFPGKZD ily traian 2HrMTbKkc */ {
/* 3zRFPGKZD ily traian 2HrMTbKkc */     if(k <= n)
/* 3zRFPGKZD ily traian 2HrMTbKkc */     {
/* 3zRFPGKZD ily traian 2HrMTbKkc */         //afisez numerele de la 2^(k-1)+1 la 2^k
/* 3zRFPGKZD ily traian 2HrMTbKkc */         int mij = (P[k-1] + P[k])/2;
/* 3zRFPGKZD ily traian 2HrMTbKkc */         for(int i = P[k-1] + 1 ; i <= mij ; i ++)
/* 3zRFPGKZD ily traian 2HrMTbKkc */             cout << i << " ";
/* 3zRFPGKZD ily traian 2HrMTbKkc */         generare(k+1 , n);
/* 3zRFPGKZD ily traian 2HrMTbKkc */         for(int i = mij + 1 ; i <= P[k] ; i ++)
/* 3zRFPGKZD ily traian 2HrMTbKkc */             cout << i << " ";
/* 3zRFPGKZD ily traian 2HrMTbKkc */     }
/* 3zRFPGKZD ily traian 2HrMTbKkc */ }
/* 3zRFPGKZD ily traian 2HrMTbKkc */ 
/* 3zRFPGKZD ily traian 2HrMTbKkc */ int main()
/* 3zRFPGKZD ily traian 2HrMTbKkc */ {
/* 3zRFPGKZD ily traian 2HrMTbKkc */     int n;
/* 3zRFPGKZD ily traian 2HrMTbKkc */     cin >> n;
/* 3zRFPGKZD ily traian 2HrMTbKkc */     P[0] = 1;
/* 3zRFPGKZD ily traian 2HrMTbKkc */     for(int i = 1 ; i <= n ; i ++)
/* 3zRFPGKZD ily traian 2HrMTbKkc */         P[i] = 2 * P[i-1];
/* 3zRFPGKZD ily traian 2HrMTbKkc */     cout << 1 << " ";
/* 3zRFPGKZD ily traian 2HrMTbKkc */     generare(1 , n);
/* 3zRFPGKZD ily traian 2HrMTbKkc */     return 0;
/* 3zRFPGKZD ily traian 2HrMTbKkc */ }