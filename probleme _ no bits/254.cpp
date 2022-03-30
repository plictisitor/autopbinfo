/* 763g4WLrc ily traian JwGZpZfUQ */ #include <algorithm>
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
/* 763g4WLrc ily traian JwGZpZfUQ */ using namespace std;
/* 763g4WLrc ily traian JwGZpZfUQ */ int main()
/* 763g4WLrc ily traian JwGZpZfUQ */ {
/* 763g4WLrc ily traian JwGZpZfUQ */     int n,a[10001],b[10001],p;
/* 763g4WLrc ily traian JwGZpZfUQ */     cin>>n;
/* 763g4WLrc ily traian JwGZpZfUQ */     for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
/* 763g4WLrc ily traian JwGZpZfUQ */     for(int i=1;i<=n;i++)
/* 763g4WLrc ily traian JwGZpZfUQ */     {
/* 763g4WLrc ily traian JwGZpZfUQ */         p=1;
/* 763g4WLrc ily traian JwGZpZfUQ */         while(p*2<=max(b[i], a[i]))
/* 763g4WLrc ily traian JwGZpZfUQ */         {
/* 763g4WLrc ily traian JwGZpZfUQ */             p=p*2;
/* 763g4WLrc ily traian JwGZpZfUQ */         }
/* 763g4WLrc ily traian JwGZpZfUQ */         if (p >= min(a[i], b[i]))
/* 763g4WLrc ily traian JwGZpZfUQ */         cout<<p<<'\n';
/* 763g4WLrc ily traian JwGZpZfUQ */         else cout << 0 << '\n';
/* 763g4WLrc ily traian JwGZpZfUQ */ 
/* 763g4WLrc ily traian JwGZpZfUQ */     }
/* 763g4WLrc ily traian JwGZpZfUQ */     return 0;
/* 763g4WLrc ily traian JwGZpZfUQ */ }