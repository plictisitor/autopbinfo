/* fEpZXpIA9 ily traian ZoM636fxD */ #include <algorithm>
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
/* fEpZXpIA9 ily traian ZoM636fxD */ 
/* fEpZXpIA9 ily traian ZoM636fxD */ using namespace std;
/* fEpZXpIA9 ily traian ZoM636fxD */ ifstream fin("pozitiex.in");
/* fEpZXpIA9 ily traian ZoM636fxD */ ofstream fout("pozitiex.out");
/* fEpZXpIA9 ily traian ZoM636fxD */ int main()
/* fEpZXpIA9 ily traian ZoM636fxD */ {
/* fEpZXpIA9 ily traian ZoM636fxD */     int x , n , cnt = 0 , a[10001];
/* fEpZXpIA9 ily traian ZoM636fxD */     fin >> x >> n;
/* fEpZXpIA9 ily traian ZoM636fxD */     for (int i = 0 ; i < n ; ++i) fin >> a[i];
/* fEpZXpIA9 ily traian ZoM636fxD */     sort(a,a+n);
/* fEpZXpIA9 ily traian ZoM636fxD */     for (int i = 0 ; i < n ; ++i)
/* fEpZXpIA9 ily traian ZoM636fxD */     {
/* fEpZXpIA9 ily traian ZoM636fxD */         if (a[i] == x)
/* fEpZXpIA9 ily traian ZoM636fxD */         {
/* fEpZXpIA9 ily traian ZoM636fxD */             fout << i+1;
/* fEpZXpIA9 ily traian ZoM636fxD */             cnt++;
/* fEpZXpIA9 ily traian ZoM636fxD */         }
/* fEpZXpIA9 ily traian ZoM636fxD */     }
/* fEpZXpIA9 ily traian ZoM636fxD */     if (cnt == 0)
/* fEpZXpIA9 ily traian ZoM636fxD */     fout << "NU EXISTA";
/* fEpZXpIA9 ily traian ZoM636fxD */ 
/* fEpZXpIA9 ily traian ZoM636fxD */     fin.close();
/* fEpZXpIA9 ily traian ZoM636fxD */     fout.close();
/* fEpZXpIA9 ily traian ZoM636fxD */ 
/* fEpZXpIA9 ily traian ZoM636fxD */     return 0;
/* fEpZXpIA9 ily traian ZoM636fxD */ }