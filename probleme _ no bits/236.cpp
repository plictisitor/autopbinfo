/* eHWXKydW9 ily traian hkmB3OB4a */ #include <algorithm>
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
/* eHWXKydW9 ily traian hkmB3OB4a */ 
/* eHWXKydW9 ily traian hkmB3OB4a */ using namespace std;
/* eHWXKydW9 ily traian hkmB3OB4a */ 
/* eHWXKydW9 ily traian hkmB3OB4a */ ifstream fin("sort2.in");
/* eHWXKydW9 ily traian hkmB3OB4a */ ofstream fout("sort2.out");
/* eHWXKydW9 ily traian hkmB3OB4a */ 
/* eHWXKydW9 ily traian hkmB3OB4a */ int tr(int n)
/* eHWXKydW9 ily traian hkmB3OB4a */ {
/* eHWXKydW9 ily traian hkmB3OB4a */     int cnt=0;
/* eHWXKydW9 ily traian hkmB3OB4a */     while(n)
/* eHWXKydW9 ily traian hkmB3OB4a */     {
/* eHWXKydW9 ily traian hkmB3OB4a */         cnt++;
/* eHWXKydW9 ily traian hkmB3OB4a */         n/=10;
/* eHWXKydW9 ily traian hkmB3OB4a */     }
/* eHWXKydW9 ily traian hkmB3OB4a */     if(cnt<=2)
/* eHWXKydW9 ily traian hkmB3OB4a */     return 1;
/* eHWXKydW9 ily traian hkmB3OB4a */     else
/* eHWXKydW9 ily traian hkmB3OB4a */     return 0;
/* eHWXKydW9 ily traian hkmB3OB4a */ }
/* eHWXKydW9 ily traian hkmB3OB4a */ 
/* eHWXKydW9 ily traian hkmB3OB4a */ int main()
/* eHWXKydW9 ily traian hkmB3OB4a */ {
/* eHWXKydW9 ily traian hkmB3OB4a */     int a[100];
/* eHWXKydW9 ily traian hkmB3OB4a */     int i = 0;
/* eHWXKydW9 ily traian hkmB3OB4a */     int ok=0;
/* eHWXKydW9 ily traian hkmB3OB4a */     while(fin >> a[i])
/* eHWXKydW9 ily traian hkmB3OB4a */     i++;
/* eHWXKydW9 ily traian hkmB3OB4a */     sort(a , a+i);
/* eHWXKydW9 ily traian hkmB3OB4a */     for(int j = 0 ; j < i ; ++j)
/* eHWXKydW9 ily traian hkmB3OB4a */     {
/* eHWXKydW9 ily traian hkmB3OB4a */         if(tr(a[j]))
/* eHWXKydW9 ily traian hkmB3OB4a */         {
/* eHWXKydW9 ily traian hkmB3OB4a */         fout << a[j] << ' ';
/* eHWXKydW9 ily traian hkmB3OB4a */             ok++;
/* eHWXKydW9 ily traian hkmB3OB4a */         }
/* eHWXKydW9 ily traian hkmB3OB4a */     }
/* eHWXKydW9 ily traian hkmB3OB4a */     if(ok==0)
/* eHWXKydW9 ily traian hkmB3OB4a */         fout << "NU EXISTA";
/* eHWXKydW9 ily traian hkmB3OB4a */     fin.close();
/* eHWXKydW9 ily traian hkmB3OB4a */     fout.close();
/* eHWXKydW9 ily traian hkmB3OB4a */     
/* eHWXKydW9 ily traian hkmB3OB4a */     return 0;    
/* eHWXKydW9 ily traian hkmB3OB4a */ }