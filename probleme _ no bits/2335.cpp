/* 4UFXNMZQJ ily traian xA7514bVf */ #include <algorithm>
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
/* 4UFXNMZQJ ily traian xA7514bVf */ using namespace std;
/* 4UFXNMZQJ ily traian xA7514bVf */ 
/* 4UFXNMZQJ ily traian xA7514bVf */ ifstream cin("bibinar.in");
/* 4UFXNMZQJ ily traian xA7514bVf */ ofstream cout("bibinar.out");
/* 4UFXNMZQJ ily traian xA7514bVf */ 
/* 4UFXNMZQJ ily traian xA7514bVf */ int r[100000];
/* 4UFXNMZQJ ily traian xA7514bVf */ 
/* 4UFXNMZQJ ily traian xA7514bVf */ int main()
/* 4UFXNMZQJ ily traian xA7514bVf */ {
/* 4UFXNMZQJ ily traian xA7514bVf */     int n;
/* 4UFXNMZQJ ily traian xA7514bVf */     cin >> n;
/* 4UFXNMZQJ ily traian xA7514bVf */     int x;
/* 4UFXNMZQJ ily traian xA7514bVf */     for(int i = 0 ; i < n ; ++i)
/* 4UFXNMZQJ ily traian xA7514bVf */     {
/* 4UFXNMZQJ ily traian xA7514bVf */         cin >> x;
/* 4UFXNMZQJ ily traian xA7514bVf */         int cnt1=0 , cnt0=0;
/* 4UFXNMZQJ ily traian xA7514bVf */         int v[100];
/* 4UFXNMZQJ ily traian xA7514bVf */         int p = 0;
/* 4UFXNMZQJ ily traian xA7514bVf */         while(x)
/* 4UFXNMZQJ ily traian xA7514bVf */         {
/* 4UFXNMZQJ ily traian xA7514bVf */             v[p]=x%2;
/* 4UFXNMZQJ ily traian xA7514bVf */             p++;
/* 4UFXNMZQJ ily traian xA7514bVf */             x/=2;
/* 4UFXNMZQJ ily traian xA7514bVf */         }
/* 4UFXNMZQJ ily traian xA7514bVf */         for(int j = p-1 ; j >= 0 ; --j)
/* 4UFXNMZQJ ily traian xA7514bVf */         {
/* 4UFXNMZQJ ily traian xA7514bVf */             if(v[j]==1)
/* 4UFXNMZQJ ily traian xA7514bVf */             {
/* 4UFXNMZQJ ily traian xA7514bVf */                 r[i]+=cnt1*3+cnt0;
/* 4UFXNMZQJ ily traian xA7514bVf */                 cnt1++;
/* 4UFXNMZQJ ily traian xA7514bVf */             }
/* 4UFXNMZQJ ily traian xA7514bVf */             else
/* 4UFXNMZQJ ily traian xA7514bVf */             {
/* 4UFXNMZQJ ily traian xA7514bVf */                 r[i]+=cnt1*2;
/* 4UFXNMZQJ ily traian xA7514bVf */                 cnt0++;
/* 4UFXNMZQJ ily traian xA7514bVf */             }
/* 4UFXNMZQJ ily traian xA7514bVf */         }
/* 4UFXNMZQJ ily traian xA7514bVf */     }
/* 4UFXNMZQJ ily traian xA7514bVf */     for(int i = 0 ; i < n ; ++i)
/* 4UFXNMZQJ ily traian xA7514bVf */         cout << r[i] << ' ';
/* 4UFXNMZQJ ily traian xA7514bVf */     return 0;    
/* 4UFXNMZQJ ily traian xA7514bVf */ }