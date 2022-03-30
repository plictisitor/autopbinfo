/* PHunojeSy ily traian doErFr74r */ #include <algorithm>
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
/* PHunojeSy ily traian doErFr74r */ using namespace std;
/* PHunojeSy ily traian doErFr74r */ 
/* PHunojeSy ily traian doErFr74r */ ifstream fin("div3.in");
/* PHunojeSy ily traian doErFr74r */ ofstream fout("div3.out");
/* PHunojeSy ily traian doErFr74r */ 
/* PHunojeSy ily traian doErFr74r */ int suma_cifre(int n)
/* PHunojeSy ily traian doErFr74r */ {
/* PHunojeSy ily traian doErFr74r */     int s=0;
/* PHunojeSy ily traian doErFr74r */     while (n)
/* PHunojeSy ily traian doErFr74r */     {
/* PHunojeSy ily traian doErFr74r */         s+=n%10;
/* PHunojeSy ily traian doErFr74r */         n/=10;
/* PHunojeSy ily traian doErFr74r */     }
/* PHunojeSy ily traian doErFr74r */     if (s%3==0)
/* PHunojeSy ily traian doErFr74r */         return 1;
/* PHunojeSy ily traian doErFr74r */     else
/* PHunojeSy ily traian doErFr74r */         return 0;
/* PHunojeSy ily traian doErFr74r */ }
/* PHunojeSy ily traian doErFr74r */ 
/* PHunojeSy ily traian doErFr74r */ int main()
/* PHunojeSy ily traian doErFr74r */ {
/* PHunojeSy ily traian doErFr74r */     int n;
/* PHunojeSy ily traian doErFr74r */     fin >> n;
/* PHunojeSy ily traian doErFr74r */     int a[1001];
/* PHunojeSy ily traian doErFr74r */     for (int i = 0 ; i < n ; ++i)
/* PHunojeSy ily traian doErFr74r */     {
/* PHunojeSy ily traian doErFr74r */         fin >> a[i];
/* PHunojeSy ily traian doErFr74r */         if (suma_cifre(a[i]))
/* PHunojeSy ily traian doErFr74r */             fout << a[i] << ' ';
/* PHunojeSy ily traian doErFr74r */     }
/* PHunojeSy ily traian doErFr74r */     
/* PHunojeSy ily traian doErFr74r */     fin.close();
/* PHunojeSy ily traian doErFr74r */     fout.close();
/* PHunojeSy ily traian doErFr74r */     
/* PHunojeSy ily traian doErFr74r */     return 0;
/* PHunojeSy ily traian doErFr74r */ }