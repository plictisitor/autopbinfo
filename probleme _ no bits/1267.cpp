/* 7AKqvu19H ily traian 1Af0Sb1Ip */ #include <algorithm>
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
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ 
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ 
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ using namespace std;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ 
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ ifstream cin("plaja.in");
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ ofstream cout("plaja.out");
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ 
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ int n , m , x , maxx , v1[10001];
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ char v[10001];
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ 
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ int get(int vec[], int k)
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     stack<int> s;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     int maxa = 0, toop , a , i = 0;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     while(i < k)
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         if(s.empty() || vec[s.top()] <= vec[i])s.push(i++);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         else
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */             toop = s.top();
/* 7AKqvu19H ily traian 1Af0Sb1Ip */             s.pop();
/* 7AKqvu19H ily traian 1Af0Sb1Ip */             a = vec[toop] * (s.empty() ? i : i - s.top() - 1);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */             maxa = max(maxa , a);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         }
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     }
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     while(!s.empty())
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         toop = s.top();
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         s.pop();
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         a = vec[toop] * (s.empty() ? i : i - s.top() - 1);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         maxa = max(maxa , a);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     }
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     return maxa;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ }
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ int main()
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     cin >> n >> m;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     for(int i = 0; i <= n; ++i)
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         cin.getline(v , 10001);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         for(int j = 0; j < (int)strlen(v); ++j)
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         {
/* 7AKqvu19H ily traian 1Af0Sb1Ip */             if((v[j] - '0') == 1) v1[j] = 0;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */             else if((v[j] - '0') == 0) v1[j] += 1;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         }
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         x = get(v1 , m);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */         maxx = max(maxx , x);
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     }
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     cout << maxx;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */     return 0;
/* 7AKqvu19H ily traian 1Af0Sb1Ip */ }