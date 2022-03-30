/* VqEkrMhky ily traian 8w0jcQNJs */ #include <algorithm>
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
/* VqEkrMhky ily traian 8w0jcQNJs */ using namespace std;
/* VqEkrMhky ily traian 8w0jcQNJs */ int main()
/* VqEkrMhky ily traian 8w0jcQNJs */ {
/* VqEkrMhky ily traian 8w0jcQNJs */     int n,a[201],x,sum=0;
/* VqEkrMhky ily traian 8w0jcQNJs */     cin>>n;
/* VqEkrMhky ily traian 8w0jcQNJs */     for(int i=1;i<=n;i++) {cin>>a[i];sum=sum+a[i];}
/* VqEkrMhky ily traian 8w0jcQNJs */     for(int i=1;i<=n;i++)
/* VqEkrMhky ily traian 8w0jcQNJs */     {
/* VqEkrMhky ily traian 8w0jcQNJs */         cout<<sum-a[i]<<" ";
/* VqEkrMhky ily traian 8w0jcQNJs */     }
/* VqEkrMhky ily traian 8w0jcQNJs */      return 0;
/* VqEkrMhky ily traian 8w0jcQNJs */ }