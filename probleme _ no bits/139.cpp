/* HjKmwOhlB ily traian 4nuCcsvXp */ #include <algorithm>
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
/* HjKmwOhlB ily traian 4nuCcsvXp */ using namespace std;
/* HjKmwOhlB ily traian 4nuCcsvXp */ 
/* HjKmwOhlB ily traian 4nuCcsvXp */ ifstream cin("n311.in");
/* HjKmwOhlB ily traian 4nuCcsvXp */ ofstream cout("n311.out");
/* HjKmwOhlB ily traian 4nuCcsvXp */ 
/* HjKmwOhlB ily traian 4nuCcsvXp */ int a[1000];
/* HjKmwOhlB ily traian 4nuCcsvXp */ 
/* HjKmwOhlB ily traian 4nuCcsvXp */ int main ()
/* HjKmwOhlB ily traian 4nuCcsvXp */ {
/* HjKmwOhlB ily traian 4nuCcsvXp */     int n,i=0;
/* HjKmwOhlB ily traian 4nuCcsvXp */     cin >> n;
/* HjKmwOhlB ily traian 4nuCcsvXp */     while (n>1)
/* HjKmwOhlB ily traian 4nuCcsvXp */     {
/* HjKmwOhlB ily traian 4nuCcsvXp */         if (n%3==0)
/* HjKmwOhlB ily traian 4nuCcsvXp */             n/=3 , a[++i]=3;
/* HjKmwOhlB ily traian 4nuCcsvXp */         else if(n%3==1 && n !=0)
/* HjKmwOhlB ily traian 4nuCcsvXp */             n-- , a[++i]=1;
/* HjKmwOhlB ily traian 4nuCcsvXp */         if (n%3==2)
/* HjKmwOhlB ily traian 4nuCcsvXp */             n++ , a[++i]=-1;
/* HjKmwOhlB ily traian 4nuCcsvXp */     }
/* HjKmwOhlB ily traian 4nuCcsvXp */     for(int j=i;j>=1;--j)
/* HjKmwOhlB ily traian 4nuCcsvXp */         cout << a[j] << " ";
/* HjKmwOhlB ily traian 4nuCcsvXp */     return 0;
/* HjKmwOhlB ily traian 4nuCcsvXp */ }
/* HjKmwOhlB ily traian 4nuCcsvXp */ 
/* HjKmwOhlB ily traian 4nuCcsvXp */ 
/* HjKmwOhlB ily traian 4nuCcsvXp */ 