/* XD8zstHAo ily traian PFr06PmUh */ #include <algorithm>
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
/* XD8zstHAo ily traian PFr06PmUh */ using namespace std;
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */ ifstream in("barci.in");
/* XD8zstHAo ily traian PFr06PmUh */ ofstream out("barci.out");
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */ int n, wmax, wmin, w[100001], used[100001];
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */ struct unom {
/* XD8zstHAo ily traian PFr06PmUh */     int previous, next, weight;
/* XD8zstHAo ily traian PFr06PmUh */ } people[100001];
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */ bool cmp(unom a, unom b) {
/* XD8zstHAo ily traian PFr06PmUh */     return a.weight >  b.weight;
/* XD8zstHAo ily traian PFr06PmUh */ }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */ void deletePair(int &pos) {
/* XD8zstHAo ily traian PFr06PmUh */     people[people[pos].previous].next = people[pos].next;
/* XD8zstHAo ily traian PFr06PmUh */     people[people[pos].next].previous = people[pos].previous;
/* XD8zstHAo ily traian PFr06PmUh */     pos = people[pos].next;
/* XD8zstHAo ily traian PFr06PmUh */ }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */ int main()
/* XD8zstHAo ily traian PFr06PmUh */ {
/* XD8zstHAo ily traian PFr06PmUh */     ios_base :: sync_with_stdio(false);
/* XD8zstHAo ily traian PFr06PmUh */     cin.tie(NULL);
/* XD8zstHAo ily traian PFr06PmUh */     cout.tie(NULL);
/* XD8zstHAo ily traian PFr06PmUh */     
/* XD8zstHAo ily traian PFr06PmUh */     in >> n >> wmax >> wmin;
/* XD8zstHAo ily traian PFr06PmUh */     for(int i = 1; i <= n; ++i) {
/* XD8zstHAo ily traian PFr06PmUh */         in >> w[i];
/* XD8zstHAo ily traian PFr06PmUh */         people[i].previous = i - 1;
/* XD8zstHAo ily traian PFr06PmUh */         people[i].next = i + 1;
/* XD8zstHAo ily traian PFr06PmUh */     }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */     sort(w + 1, w + 1 + n, greater<int>());
/* XD8zstHAo ily traian PFr06PmUh */     for(int i = 1; i <= n; ++i) {
/* XD8zstHAo ily traian PFr06PmUh */         people[i].weight = w[i];
/* XD8zstHAo ily traian PFr06PmUh */     }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */     int pos = n;
/* XD8zstHAo ily traian PFr06PmUh */     while(pos && people[1].weight + people[pos].weight <= wmax) {
/* XD8zstHAo ily traian PFr06PmUh */         --pos;
/* XD8zstHAo ily traian PFr06PmUh */     }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */     int cnt = 0;
/* XD8zstHAo ily traian PFr06PmUh */     for(int i = 1; i <= n; ++i) {
/* XD8zstHAo ily traian PFr06PmUh */         if(used[i] == 0) {
/* XD8zstHAo ily traian PFr06PmUh */             ++cnt;
/* XD8zstHAo ily traian PFr06PmUh */             used[i] = 1;
/* XD8zstHAo ily traian PFr06PmUh */             if(pos == i) {
/* XD8zstHAo ily traian PFr06PmUh */                 pos = people[pos].next;
/* XD8zstHAo ily traian PFr06PmUh */             }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */             while(people[pos].previous > i && people[i].weight + people[people[pos].previous].weight <= wmax) {
/* XD8zstHAo ily traian PFr06PmUh */                 pos = people[pos].previous;
/* XD8zstHAo ily traian PFr06PmUh */             }
/* XD8zstHAo ily traian PFr06PmUh */ 
/* XD8zstHAo ily traian PFr06PmUh */             if(used[pos] == 0 && pos <= n && i >= 1 && abs(people[i].weight - people[pos].weight) <= wmin && people[i].weight + people[pos].weight <= wmax) {
/* XD8zstHAo ily traian PFr06PmUh */                 used[pos] = 1;
/* XD8zstHAo ily traian PFr06PmUh */                 deletePair(pos);
/* XD8zstHAo ily traian PFr06PmUh */             }
/* XD8zstHAo ily traian PFr06PmUh */         }
/* XD8zstHAo ily traian PFr06PmUh */     }
/* XD8zstHAo ily traian PFr06PmUh */     out << cnt;
/* XD8zstHAo ily traian PFr06PmUh */     return 0;
/* XD8zstHAo ily traian PFr06PmUh */ }