/* wnOiNK23F ily traian JI1powyuN */ #include <algorithm>
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
/* wnOiNK23F ily traian JI1powyuN */ using namespace std;
/* wnOiNK23F ily traian JI1powyuN */ 
/* wnOiNK23F ily traian JI1powyuN */ ifstream cin("nrnot.in");
/* wnOiNK23F ily traian JI1powyuN */ ofstream cout("nrnot.out");
/* wnOiNK23F ily traian JI1powyuN */ 
/* wnOiNK23F ily traian JI1powyuN */ int main(){
/* wnOiNK23F ily traian JI1powyuN */     int x, n, cnt = 0, val;
/* wnOiNK23F ily traian JI1powyuN */     cin >> n;
/* wnOiNK23F ily traian JI1powyuN */     while(cin >> x){
/* wnOiNK23F ily traian JI1powyuN */         if(x < n)
/* wnOiNK23F ily traian JI1powyuN */             cnt += n - x;
/* wnOiNK23F ily traian JI1powyuN */         n = x - 1;
/* wnOiNK23F ily traian JI1powyuN */         val = x;
/* wnOiNK23F ily traian JI1powyuN */     }
/* wnOiNK23F ily traian JI1powyuN */     cnt += val - 1;
/* wnOiNK23F ily traian JI1powyuN */     cout << cnt;
/* wnOiNK23F ily traian JI1powyuN */     return 0;
/* wnOiNK23F ily traian JI1powyuN */ }