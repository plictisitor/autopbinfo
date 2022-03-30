/* PbrkHV83z ily traian p8ChssDeg */ #include <algorithm>
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
/* PbrkHV83z ily traian p8ChssDeg */ using namespace std;
/* PbrkHV83z ily traian p8ChssDeg */ 
/* PbrkHV83z ily traian p8ChssDeg */ ifstream fin("asfalt.in");
/* PbrkHV83z ily traian p8ChssDeg */ ofstream fout("asfalt.out");
/* PbrkHV83z ily traian p8ChssDeg */ 
/* PbrkHV83z ily traian p8ChssDeg */ int main()
/* PbrkHV83z ily traian p8ChssDeg */ {
/* PbrkHV83z ily traian p8ChssDeg */     int n , m;
/* PbrkHV83z ily traian p8ChssDeg */     fin >> n >> m;
/* PbrkHV83z ily traian p8ChssDeg */     int f[10001]={0};
/* PbrkHV83z ily traian p8ChssDeg */     int a , b;
/* PbrkHV83z ily traian p8ChssDeg */     int x=0 , y=0;
/* PbrkHV83z ily traian p8ChssDeg */     for(int i = 0 ; i < m ; ++i)
/* PbrkHV83z ily traian p8ChssDeg */     {
/* PbrkHV83z ily traian p8ChssDeg */         fin >> a >> b;
/* PbrkHV83z ily traian p8ChssDeg */         for(int j = a ; j < b ; ++j)
/* PbrkHV83z ily traian p8ChssDeg */         {
/* PbrkHV83z ily traian p8ChssDeg */             f[j]++;    
/* PbrkHV83z ily traian p8ChssDeg */         }
/* PbrkHV83z ily traian p8ChssDeg */     }
/* PbrkHV83z ily traian p8ChssDeg */     for(int i = 0 ; i < n ; ++i)
/* PbrkHV83z ily traian p8ChssDeg */     {
/* PbrkHV83z ily traian p8ChssDeg */         if(f[i]==0)
/* PbrkHV83z ily traian p8ChssDeg */         x++;
/* PbrkHV83z ily traian p8ChssDeg */         if(f[i]>1)
/* PbrkHV83z ily traian p8ChssDeg */         y++;
/* PbrkHV83z ily traian p8ChssDeg */     }
/* PbrkHV83z ily traian p8ChssDeg */     fout << x << ' ' << y;
/* PbrkHV83z ily traian p8ChssDeg */ }