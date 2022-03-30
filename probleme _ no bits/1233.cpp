/* 8uX4FdOp4 ily traian doNmUpwzY */ #include <algorithm>
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
/* 8uX4FdOp4 ily traian doNmUpwzY */ using namespace std;
/* 8uX4FdOp4 ily traian doNmUpwzY */ ifstream cin("paint.in");
/* 8uX4FdOp4 ily traian doNmUpwzY */ ofstream cout("paint.out");
/* 8uX4FdOp4 ily traian doNmUpwzY */ int main()
/* 8uX4FdOp4 ily traian doNmUpwzY */ {
/* 8uX4FdOp4 ily traian doNmUpwzY */    int n , m , s , d , k , a[250000]={0} , cnt=0;
/* 8uX4FdOp4 ily traian doNmUpwzY */    cin >> n >> k >>  m;
/* 8uX4FdOp4 ily traian doNmUpwzY */    for(int i = 1; i <= m ; i++)
/* 8uX4FdOp4 ily traian doNmUpwzY */       {
/* 8uX4FdOp4 ily traian doNmUpwzY */          cin >> s >> d;
/* 8uX4FdOp4 ily traian doNmUpwzY */          a[s]++;
/* 8uX4FdOp4 ily traian doNmUpwzY */          a[d+s]--;
/* 8uX4FdOp4 ily traian doNmUpwzY */       }
/* 8uX4FdOp4 ily traian doNmUpwzY */    for(int i = 1; i < n ; i++)
/* 8uX4FdOp4 ily traian doNmUpwzY */        a[i] += a[i-1];
/* 8uX4FdOp4 ily traian doNmUpwzY */     for(int i = 0 ; i < n ; i++)
/* 8uX4FdOp4 ily traian doNmUpwzY */     {
/* 8uX4FdOp4 ily traian doNmUpwzY */         if(a[i] < k) cnt++;
/* 8uX4FdOp4 ily traian doNmUpwzY */     }
/* 8uX4FdOp4 ily traian doNmUpwzY */     cout << cnt;
/* 8uX4FdOp4 ily traian doNmUpwzY */     return 0;
/* 8uX4FdOp4 ily traian doNmUpwzY */ }