/* abKcLqAay ily traian XEAYvh72l */ #include <algorithm>
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
/* abKcLqAay ily traian XEAYvh72l */ using namespace std;
/* abKcLqAay ily traian XEAYvh72l */ int main()
/* abKcLqAay ily traian XEAYvh72l */ {
/* abKcLqAay ily traian XEAYvh72l */     int n,x,k,sm=0,aux,s;
/* abKcLqAay ily traian XEAYvh72l */     cin>>k>>x;
/* abKcLqAay ily traian XEAYvh72l */     for(int i=1;i<=x;i++)
/* abKcLqAay ily traian XEAYvh72l */     {
/* abKcLqAay ily traian XEAYvh72l */         cin>>n;
/* abKcLqAay ily traian XEAYvh72l */         aux=n;
/* abKcLqAay ily traian XEAYvh72l */         s=0;
/* abKcLqAay ily traian XEAYvh72l */         while(n!=0)
/* abKcLqAay ily traian XEAYvh72l */         {
/* abKcLqAay ily traian XEAYvh72l */             s=s+n%10;
/* abKcLqAay ily traian XEAYvh72l */             n=n/10;
/* abKcLqAay ily traian XEAYvh72l */         }
/* abKcLqAay ily traian XEAYvh72l */         if(s%k==0) sm=sm+aux;
/* abKcLqAay ily traian XEAYvh72l */     }
/* abKcLqAay ily traian XEAYvh72l */     cout<<sm;
/* abKcLqAay ily traian XEAYvh72l */     return 0;
/* abKcLqAay ily traian XEAYvh72l */ }