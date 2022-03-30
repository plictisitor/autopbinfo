/* q1oDoAtGM ily traian 7EmVaU4Fr */ #include <algorithm>
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
/* q1oDoAtGM ily traian 7EmVaU4Fr */ using namespace std;
/* q1oDoAtGM ily traian 7EmVaU4Fr */ 
/* q1oDoAtGM ily traian 7EmVaU4Fr */ int main()
/* q1oDoAtGM ily traian 7EmVaU4Fr */ {
/* q1oDoAtGM ily traian 7EmVaU4Fr */     int n,x,s=0;
/* q1oDoAtGM ily traian 7EmVaU4Fr */     cin>>n;
/* q1oDoAtGM ily traian 7EmVaU4Fr */     for(int i=1;i<=n;i++)
/* q1oDoAtGM ily traian 7EmVaU4Fr */     {
/* q1oDoAtGM ily traian 7EmVaU4Fr */         cin>>x;
/* q1oDoAtGM ily traian 7EmVaU4Fr */         int c=x%10;
/* q1oDoAtGM ily traian 7EmVaU4Fr */         int nr=0,p=1;
/* q1oDoAtGM ily traian 7EmVaU4Fr */         while(x)
/* q1oDoAtGM ily traian 7EmVaU4Fr */         {
/* q1oDoAtGM ily traian 7EmVaU4Fr */             if(x%10!=c)
/* q1oDoAtGM ily traian 7EmVaU4Fr */             {
/* q1oDoAtGM ily traian 7EmVaU4Fr */                 nr=nr+x%10*p;
/* q1oDoAtGM ily traian 7EmVaU4Fr */                 p=p*10;
/* q1oDoAtGM ily traian 7EmVaU4Fr */             }
/* q1oDoAtGM ily traian 7EmVaU4Fr */             x/=10;
/* q1oDoAtGM ily traian 7EmVaU4Fr */         }
/* q1oDoAtGM ily traian 7EmVaU4Fr */         s=s+nr;
/* q1oDoAtGM ily traian 7EmVaU4Fr */     }
/* q1oDoAtGM ily traian 7EmVaU4Fr */     cout<<s;
/* q1oDoAtGM ily traian 7EmVaU4Fr */     return 0;
/* q1oDoAtGM ily traian 7EmVaU4Fr */ 
/* q1oDoAtGM ily traian 7EmVaU4Fr */ }