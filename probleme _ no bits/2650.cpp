/* qYQcqLvqc ily traian JCkHF78HY */ #include <algorithm>
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
/* qYQcqLvqc ily traian JCkHF78HY */ 
/* qYQcqLvqc ily traian JCkHF78HY */ using namespace std;
/* qYQcqLvqc ily traian JCkHF78HY */ 
/* qYQcqLvqc ily traian JCkHF78HY */ queue<int> Q;
/* qYQcqLvqc ily traian JCkHF78HY */ int f[200001];
/* qYQcqLvqc ily traian JCkHF78HY */ 
/* qYQcqLvqc ily traian JCkHF78HY */ int main()
/* qYQcqLvqc ily traian JCkHF78HY */ {
/* qYQcqLvqc ily traian JCkHF78HY */     int n;
/* qYQcqLvqc ily traian JCkHF78HY */     cin >> n;
/* qYQcqLvqc ily traian JCkHF78HY */     for(int i = 1 ; i <= n ; ++i)
/* qYQcqLvqc ily traian JCkHF78HY */     {
/* qYQcqLvqc ily traian JCkHF78HY */         int x;
/* qYQcqLvqc ily traian JCkHF78HY */         cin >> x;
/* qYQcqLvqc ily traian JCkHF78HY */         Q.push(x);
/* qYQcqLvqc ily traian JCkHF78HY */     }
/* qYQcqLvqc ily traian JCkHF78HY */     for(int i = 1 ; i <= n ; ++i)
/* qYQcqLvqc ily traian JCkHF78HY */     {
/* qYQcqLvqc ily traian JCkHF78HY */         int x;
/* qYQcqLvqc ily traian JCkHF78HY */         cin >> x;
/* qYQcqLvqc ily traian JCkHF78HY */         int cnt = 0;
/* qYQcqLvqc ily traian JCkHF78HY */         if(f[x]==0)
/* qYQcqLvqc ily traian JCkHF78HY */         {
/* qYQcqLvqc ily traian JCkHF78HY */             while(!Q.empty() && Q.front()!=x)
/* qYQcqLvqc ily traian JCkHF78HY */                 f[Q.front()]=1 , Q.pop() , cnt++;
/* qYQcqLvqc ily traian JCkHF78HY */             Q.pop();
/* qYQcqLvqc ily traian JCkHF78HY */             cnt++;
/* qYQcqLvqc ily traian JCkHF78HY */             f[x]=1;
/* qYQcqLvqc ily traian JCkHF78HY */         }
/* qYQcqLvqc ily traian JCkHF78HY */         cout << cnt << ' ';
/* qYQcqLvqc ily traian JCkHF78HY */     }
/* qYQcqLvqc ily traian JCkHF78HY */     return 0;
/* qYQcqLvqc ily traian JCkHF78HY */ }