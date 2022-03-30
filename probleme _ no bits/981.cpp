/* 6rl4OHzBG ily traian Iii6XN3Xa */ #include <algorithm>
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
/* 6rl4OHzBG ily traian Iii6XN3Xa */ using namespace std;
/* 6rl4OHzBG ily traian Iii6XN3Xa */ 
/* 6rl4OHzBG ily traian Iii6XN3Xa */ int main()
/* 6rl4OHzBG ily traian Iii6XN3Xa */ {
/* 6rl4OHzBG ily traian Iii6XN3Xa */     int n,x,cnt=0,c=0;
/* 6rl4OHzBG ily traian Iii6XN3Xa */     cin >> n;
/* 6rl4OHzBG ily traian Iii6XN3Xa */     for(int i = 1 ; i <= n ; ++i)
/* 6rl4OHzBG ily traian Iii6XN3Xa */     {
/* 6rl4OHzBG ily traian Iii6XN3Xa */         cin >> x;
/* 6rl4OHzBG ily traian Iii6XN3Xa */         int ok=1;
/* 6rl4OHzBG ily traian Iii6XN3Xa */         while(x>1 && ok)
/* 6rl4OHzBG ily traian Iii6XN3Xa */         {
/* 6rl4OHzBG ily traian Iii6XN3Xa */             if(x%2==0) ok=0;
/* 6rl4OHzBG ily traian Iii6XN3Xa */             x/=2;
/* 6rl4OHzBG ily traian Iii6XN3Xa */         }
/* 6rl4OHzBG ily traian Iii6XN3Xa */         if(ok)
/* 6rl4OHzBG ily traian Iii6XN3Xa */         {
/* 6rl4OHzBG ily traian Iii6XN3Xa */             c++;
/* 6rl4OHzBG ily traian Iii6XN3Xa */             if(cnt<c) cnt=c;
/* 6rl4OHzBG ily traian Iii6XN3Xa */         }
/* 6rl4OHzBG ily traian Iii6XN3Xa */         else c=0;
/* 6rl4OHzBG ily traian Iii6XN3Xa */     }
/* 6rl4OHzBG ily traian Iii6XN3Xa */     cout << cnt;
/* 6rl4OHzBG ily traian Iii6XN3Xa */ }