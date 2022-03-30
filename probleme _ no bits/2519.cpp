/* RITaloNcJ ily traian n5XUQ2hcY */ #include <algorithm>
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
/* RITaloNcJ ily traian n5XUQ2hcY */ using namespace std;
/* RITaloNcJ ily traian n5XUQ2hcY */ 
/* RITaloNcJ ily traian n5XUQ2hcY */ ifstream cin("wisp.in");
/* RITaloNcJ ily traian n5XUQ2hcY */ ofstream cout("wisp.out");
/* RITaloNcJ ily traian n5XUQ2hcY */ 
/* RITaloNcJ ily traian n5XUQ2hcY */ int main()
/* RITaloNcJ ily traian n5XUQ2hcY */ {
/* RITaloNcJ ily traian n5XUQ2hcY */     long long int n , k;
/* RITaloNcJ ily traian n5XUQ2hcY */     cin >> n >> k;
/* RITaloNcJ ily traian n5XUQ2hcY */     unsigned long long int s=0;
/* RITaloNcJ ily traian n5XUQ2hcY */     unsigned long long int nr=0;
/* RITaloNcJ ily traian n5XUQ2hcY */     nr=k;
/* RITaloNcJ ily traian n5XUQ2hcY */     s=k;
/* RITaloNcJ ily traian n5XUQ2hcY */     if(n%2==0)
/* RITaloNcJ ily traian n5XUQ2hcY */     {
/* RITaloNcJ ily traian n5XUQ2hcY */         n--;
/* RITaloNcJ ily traian n5XUQ2hcY */         while(n > 1)
/* RITaloNcJ ily traian n5XUQ2hcY */         {
/* RITaloNcJ ily traian n5XUQ2hcY */             nr+=2*n;
/* RITaloNcJ ily traian n5XUQ2hcY */             s+=nr;
/* RITaloNcJ ily traian n5XUQ2hcY */             nr+=2*n;
/* RITaloNcJ ily traian n5XUQ2hcY */             s+=nr;
/* RITaloNcJ ily traian n5XUQ2hcY */             n-=2;
/* RITaloNcJ ily traian n5XUQ2hcY */         }
/* RITaloNcJ ily traian n5XUQ2hcY */         s+=nr+2;
/* RITaloNcJ ily traian n5XUQ2hcY */     }
/* RITaloNcJ ily traian n5XUQ2hcY */     else
/* RITaloNcJ ily traian n5XUQ2hcY */     {
/* RITaloNcJ ily traian n5XUQ2hcY */         n--;
/* RITaloNcJ ily traian n5XUQ2hcY */         while(n > 1)
/* RITaloNcJ ily traian n5XUQ2hcY */         {
/* RITaloNcJ ily traian n5XUQ2hcY */             nr+=2*n;
/* RITaloNcJ ily traian n5XUQ2hcY */             s+=nr;
/* RITaloNcJ ily traian n5XUQ2hcY */             nr+=2*n;
/* RITaloNcJ ily traian n5XUQ2hcY */             s+=nr;
/* RITaloNcJ ily traian n5XUQ2hcY */             n-=2;
/* RITaloNcJ ily traian n5XUQ2hcY */         }
/* RITaloNcJ ily traian n5XUQ2hcY */     }
/* RITaloNcJ ily traian n5XUQ2hcY */     cout << s;
/* RITaloNcJ ily traian n5XUQ2hcY */     return 0;
/* RITaloNcJ ily traian n5XUQ2hcY */ }