/* TzWmaxptC ily traian tvDGbBduV */ #include <algorithm>
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
/* TzWmaxptC ily traian tvDGbBduV */ using namespace std;
/* TzWmaxptC ily traian tvDGbBduV */ ifstream cin("odaoni.in");
/* TzWmaxptC ily traian tvDGbBduV */ ofstream cout("odaoni.out");
/* TzWmaxptC ily traian tvDGbBduV */ bool  f[15];
/* TzWmaxptC ily traian tvDGbBduV */ int cnt;
/* TzWmaxptC ily traian tvDGbBduV */ int main()
/* TzWmaxptC ily traian tvDGbBduV */ {
/* TzWmaxptC ily traian tvDGbBduV */    int n;
/* TzWmaxptC ily traian tvDGbBduV */    cin >> n;
/* TzWmaxptC ily traian tvDGbBduV */    int aux = n;
/* TzWmaxptC ily traian tvDGbBduV */    while(aux!=0)
/* TzWmaxptC ily traian tvDGbBduV */    {
/* TzWmaxptC ily traian tvDGbBduV */        f[aux%10]=1;
/* TzWmaxptC ily traian tvDGbBduV */        aux /= 10;
/* TzWmaxptC ily traian tvDGbBduV */    }
/* TzWmaxptC ily traian tvDGbBduV */    for(int j = 1 ; j*j <= n ; j++)
/* TzWmaxptC ily traian tvDGbBduV */    {
/* TzWmaxptC ily traian tvDGbBduV */        if(n%j==0)
/* TzWmaxptC ily traian tvDGbBduV */        {
/* TzWmaxptC ily traian tvDGbBduV */            int x = j , ok = 0 , y = n/j;
/* TzWmaxptC ily traian tvDGbBduV */            bool fdiv1[11]={0};
/* TzWmaxptC ily traian tvDGbBduV */            while(x > 0)
/* TzWmaxptC ily traian tvDGbBduV */            {
/* TzWmaxptC ily traian tvDGbBduV */                fdiv1[x%10]=1;
/* TzWmaxptC ily traian tvDGbBduV */                if(f[x%10]==0 && fdiv1[x%10]==1)ok=1;
/* TzWmaxptC ily traian tvDGbBduV */                x /= 10;
/* TzWmaxptC ily traian tvDGbBduV */            }
/* TzWmaxptC ily traian tvDGbBduV */             if(ok==0) cnt++;
/* TzWmaxptC ily traian tvDGbBduV */            ok = 0;
/* TzWmaxptC ily traian tvDGbBduV */            bool fdiv2[11]={0};
/* TzWmaxptC ily traian tvDGbBduV */             while(y > 0)
/* TzWmaxptC ily traian tvDGbBduV */            {
/* TzWmaxptC ily traian tvDGbBduV */                fdiv2[y%10]=1;
/* TzWmaxptC ily traian tvDGbBduV */                if(f[y%10]==0 && fdiv2[y%10]==1)ok=1;
/* TzWmaxptC ily traian tvDGbBduV */                y /= 10;
/* TzWmaxptC ily traian tvDGbBduV */            }
/* TzWmaxptC ily traian tvDGbBduV */             if(ok==0) cnt++;
/* TzWmaxptC ily traian tvDGbBduV */            if(j*j==n && ok == 0) cnt--;
/* TzWmaxptC ily traian tvDGbBduV */        }
/* TzWmaxptC ily traian tvDGbBduV */    }
/* TzWmaxptC ily traian tvDGbBduV */    cout << cnt;
/* TzWmaxptC ily traian tvDGbBduV */ }