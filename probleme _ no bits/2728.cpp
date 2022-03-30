/* ZGil9FMEU ily traian QPb2jkzYl */ #include <algorithm>
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
/* ZGil9FMEU ily traian QPb2jkzYl */ using namespace std;
/* ZGil9FMEU ily traian QPb2jkzYl */ 
/* ZGil9FMEU ily traian QPb2jkzYl */ ifstream cin("skyline.in");
/* ZGil9FMEU ily traian QPb2jkzYl */ ofstream cout("skyline.out");
/* ZGil9FMEU ily traian QPb2jkzYl */ 
/* ZGil9FMEU ily traian QPb2jkzYl */ int s[40005] , d[40005] , h[40005] , n , Q[40005] , vf;
/* ZGil9FMEU ily traian QPb2jkzYl */ long long l[40005] , maxi;
/* ZGil9FMEU ily traian QPb2jkzYl */ 
/* ZGil9FMEU ily traian QPb2jkzYl */ int main()
/* ZGil9FMEU ily traian QPb2jkzYl */ {
/* ZGil9FMEU ily traian QPb2jkzYl */     cin >> n;
/* ZGil9FMEU ily traian QPb2jkzYl */     for(int i = 1 ; i <= n ; i++)
/* ZGil9FMEU ily traian QPb2jkzYl */     {
/* ZGil9FMEU ily traian QPb2jkzYl */         cin >> h[i] >> l[i];
/* ZGil9FMEU ily traian QPb2jkzYl */         l[i] = l[i] + l[i - 1];
/* ZGil9FMEU ily traian QPb2jkzYl */     }
/* ZGil9FMEU ily traian QPb2jkzYl */     vf = 0;
/* ZGil9FMEU ily traian QPb2jkzYl */     Q[0] = n + 1;
/* ZGil9FMEU ily traian QPb2jkzYl */     for(int i = n ; i >= 1 ; i--)
/* ZGil9FMEU ily traian QPb2jkzYl */     {
/* ZGil9FMEU ily traian QPb2jkzYl */         while(vf > 0 && h[i] <= h[Q[vf]]) vf--;
/* ZGil9FMEU ily traian QPb2jkzYl */         d[i] = Q[vf];
/* ZGil9FMEU ily traian QPb2jkzYl */         Q[++vf] = i;
/* ZGil9FMEU ily traian QPb2jkzYl */     }
/* ZGil9FMEU ily traian QPb2jkzYl */     vf = 0;
/* ZGil9FMEU ily traian QPb2jkzYl */     Q[0] = 0;
/* ZGil9FMEU ily traian QPb2jkzYl */     for(int i = 1 ; i <= n ; i++)
/* ZGil9FMEU ily traian QPb2jkzYl */     {
/* ZGil9FMEU ily traian QPb2jkzYl */         while(vf > 0 && h[i] <= h[Q[vf]]) vf--;
/* ZGil9FMEU ily traian QPb2jkzYl */         s[i] = Q[vf];
/* ZGil9FMEU ily traian QPb2jkzYl */         Q[++vf] = i;
/* ZGil9FMEU ily traian QPb2jkzYl */     }
/* ZGil9FMEU ily traian QPb2jkzYl */     for(int i = 1 ; i <= n ; i++)
/* ZGil9FMEU ily traian QPb2jkzYl */         maxi = max(maxi , h[i] * (l[d[i] - 1] - l[s[i]]));
/* ZGil9FMEU ily traian QPb2jkzYl */     cout << maxi;
/* ZGil9FMEU ily traian QPb2jkzYl */ }