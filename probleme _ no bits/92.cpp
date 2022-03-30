/* wFDuGlOcg ily traian xRsXOx67d */ #include <algorithm>
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
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */ using namespace std;
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */ ifstream cin("proiecte.in");
/* wFDuGlOcg ily traian xRsXOx67d */ ofstream cout("proiecte.out");
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */ int n;
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */ struct poz
/* wFDuGlOcg ily traian xRsXOx67d */ {
/* wFDuGlOcg ily traian xRsXOx67d */     int i , j;
/* wFDuGlOcg ily traian xRsXOx67d */ }a[1001];
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */ bool comp(poz a , poz b)
/* wFDuGlOcg ily traian xRsXOx67d */ {
/* wFDuGlOcg ily traian xRsXOx67d */     if(a.i < b.i) return 1;
/* wFDuGlOcg ily traian xRsXOx67d */     else if(a.i == b.i && a.j < b.j) return 1;
/* wFDuGlOcg ily traian xRsXOx67d */     else return 0;
/* wFDuGlOcg ily traian xRsXOx67d */ }
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */ int main()
/* wFDuGlOcg ily traian xRsXOx67d */ {
/* wFDuGlOcg ily traian xRsXOx67d */     cin >> n;
/* wFDuGlOcg ily traian xRsXOx67d */     for(int i = 1 ; i <= n ; i++)
/* wFDuGlOcg ily traian xRsXOx67d */         cin >> a[i].i , a[i].j = i;
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */     sort(a + 1 , a + n + 1 , comp);
/* wFDuGlOcg ily traian xRsXOx67d */ 
/* wFDuGlOcg ily traian xRsXOx67d */     for(int i = 1 ; i <= n ; i++)
/* wFDuGlOcg ily traian xRsXOx67d */         cout << a[i].j << " ";
/* wFDuGlOcg ily traian xRsXOx67d */ }