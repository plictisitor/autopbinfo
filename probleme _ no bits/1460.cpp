/* oAvbj9cvE ily traian mEESU0KUN */ #include <algorithm>
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
/* oAvbj9cvE ily traian mEESU0KUN */ using namespace std;
/* oAvbj9cvE ily traian mEESU0KUN */ ifstream fin("serbare.in");
/* oAvbj9cvE ily traian mEESU0KUN */ ofstream fout("serbare.out");
/* oAvbj9cvE ily traian mEESU0KUN */ int main()
/* oAvbj9cvE ily traian mEESU0KUN */ {
/* oAvbj9cvE ily traian mEESU0KUN */     int f[11]={0} , n , m , c , b , maxi = 0;
/* oAvbj9cvE ily traian mEESU0KUN */     fin >> n >> m;
/* oAvbj9cvE ily traian mEESU0KUN */     for(int i = 0 ; i < n ; ++i)
/* oAvbj9cvE ily traian mEESU0KUN */     {
/* oAvbj9cvE ily traian mEESU0KUN */         fin >> c >> b;
/* oAvbj9cvE ily traian mEESU0KUN */         f[b]+=c;
/* oAvbj9cvE ily traian mEESU0KUN */         if(f[b] > maxi) maxi=f[b];
/* oAvbj9cvE ily traian mEESU0KUN */     }
/* oAvbj9cvE ily traian mEESU0KUN */     for(int i = maxi ; i >= 1 ; --i)
/* oAvbj9cvE ily traian mEESU0KUN */     {
/* oAvbj9cvE ily traian mEESU0KUN */         for(int j = 1 ; j <= m ; ++j)
/* oAvbj9cvE ily traian mEESU0KUN */         {
/* oAvbj9cvE ily traian mEESU0KUN */             if(i==f[j]) 
/* oAvbj9cvE ily traian mEESU0KUN */             fout << j <<" ";
/* oAvbj9cvE ily traian mEESU0KUN */         }
/* oAvbj9cvE ily traian mEESU0KUN */     }
/* oAvbj9cvE ily traian mEESU0KUN */     return 0;
/* oAvbj9cvE ily traian mEESU0KUN */ }