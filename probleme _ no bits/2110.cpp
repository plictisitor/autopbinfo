/* lHqZ2yO8p ily traian kZUH2NkeX */ #include <algorithm>
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
/* lHqZ2yO8p ily traian kZUH2NkeX */ 
/* lHqZ2yO8p ily traian kZUH2NkeX */ using namespace std;
/* lHqZ2yO8p ily traian kZUH2NkeX */ 
/* lHqZ2yO8p ily traian kZUH2NkeX */ ifstream cin("vot.in");
/* lHqZ2yO8p ily traian kZUH2NkeX */ ofstream cout("vot.out");
/* lHqZ2yO8p ily traian kZUH2NkeX */ 
/* lHqZ2yO8p ily traian kZUH2NkeX */ int n, V[1001], S[1001];
/* lHqZ2yO8p ily traian kZUH2NkeX */ queue<int> Q;
/* lHqZ2yO8p ily traian kZUH2NkeX */ 
/* lHqZ2yO8p ily traian kZUH2NkeX */ int main(){
/* lHqZ2yO8p ily traian kZUH2NkeX */     cin >> n;
/* lHqZ2yO8p ily traian kZUH2NkeX */     for(int i = 1; i <= n; ++i)
/* lHqZ2yO8p ily traian kZUH2NkeX */         cin >> V[i], S[V[i]]++;
/* lHqZ2yO8p ily traian kZUH2NkeX */     for(int i = 1; i <= n; ++i)
/* lHqZ2yO8p ily traian kZUH2NkeX */         if(S[i] == 0)
/* lHqZ2yO8p ily traian kZUH2NkeX */             Q.push(i);
/* lHqZ2yO8p ily traian kZUH2NkeX */     while(!Q.empty()){
/* lHqZ2yO8p ily traian kZUH2NkeX */         int x = Q.front();
/* lHqZ2yO8p ily traian kZUH2NkeX */         S[V[x]]--;
/* lHqZ2yO8p ily traian kZUH2NkeX */         if(S[V[x]] == 0)
/* lHqZ2yO8p ily traian kZUH2NkeX */             Q.push(V[x]);
/* lHqZ2yO8p ily traian kZUH2NkeX */         Q.pop();
/* lHqZ2yO8p ily traian kZUH2NkeX */     }
/* lHqZ2yO8p ily traian kZUH2NkeX */     int cnt = 0;
/* lHqZ2yO8p ily traian kZUH2NkeX */     for(int i = 1; i <= n; ++i)
/* lHqZ2yO8p ily traian kZUH2NkeX */         if(S[i] != 0)
/* lHqZ2yO8p ily traian kZUH2NkeX */             cnt++;
/* lHqZ2yO8p ily traian kZUH2NkeX */     cout << cnt << '\n';
/* lHqZ2yO8p ily traian kZUH2NkeX */     for(int i = 1; i <= n; ++i)
/* lHqZ2yO8p ily traian kZUH2NkeX */         if(S[i] != 0)
/* lHqZ2yO8p ily traian kZUH2NkeX */             cout << i << ' ';
/* lHqZ2yO8p ily traian kZUH2NkeX */     return 0;
/* lHqZ2yO8p ily traian kZUH2NkeX */ }