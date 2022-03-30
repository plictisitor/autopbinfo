/* Vvy1KxSNj ily traian f3w61gGbp */ #include <algorithm>
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
/* Vvy1KxSNj ily traian f3w61gGbp */ 
/* Vvy1KxSNj ily traian f3w61gGbp */ using namespace std;
/* Vvy1KxSNj ily traian f3w61gGbp */ 
/* Vvy1KxSNj ily traian f3w61gGbp */ ifstream fin("halfsort2.in");
/* Vvy1KxSNj ily traian f3w61gGbp */ ofstream fout("halfsort2.out");
/* Vvy1KxSNj ily traian f3w61gGbp */ 
/* Vvy1KxSNj ily traian f3w61gGbp */ int main()
/* Vvy1KxSNj ily traian f3w61gGbp */ {
/* Vvy1KxSNj ily traian f3w61gGbp */     int n;
/* Vvy1KxSNj ily traian f3w61gGbp */     fin >> n;
/* Vvy1KxSNj ily traian f3w61gGbp */     int a[100];
/* Vvy1KxSNj ily traian f3w61gGbp */     int b[50], c[50];
/* Vvy1KxSNj ily traian f3w61gGbp */     int p=0, m=0;
/* Vvy1KxSNj ily traian f3w61gGbp */     for (int i = 0 ; i < n ; ++i)
/* Vvy1KxSNj ily traian f3w61gGbp */     {
/* Vvy1KxSNj ily traian f3w61gGbp */     fin >> a[i];
/* Vvy1KxSNj ily traian f3w61gGbp */     if(i%2==1)
/* Vvy1KxSNj ily traian f3w61gGbp */     {
/* Vvy1KxSNj ily traian f3w61gGbp */     b[p]=a[i];
/* Vvy1KxSNj ily traian f3w61gGbp */     p++;
/* Vvy1KxSNj ily traian f3w61gGbp */     }
/* Vvy1KxSNj ily traian f3w61gGbp */     else
/* Vvy1KxSNj ily traian f3w61gGbp */     {
/* Vvy1KxSNj ily traian f3w61gGbp */     c[m]=a[i];
/* Vvy1KxSNj ily traian f3w61gGbp */     m++;
/* Vvy1KxSNj ily traian f3w61gGbp */     }
/* Vvy1KxSNj ily traian f3w61gGbp */     }
/* Vvy1KxSNj ily traian f3w61gGbp */     sort(b , b+p);
/* Vvy1KxSNj ily traian f3w61gGbp */     sort(c , c+m);
/* Vvy1KxSNj ily traian f3w61gGbp */     p=0;
/* Vvy1KxSNj ily traian f3w61gGbp */     m--;
/* Vvy1KxSNj ily traian f3w61gGbp */     for(int i = 0 ; i < n ; ++i)
/* Vvy1KxSNj ily traian f3w61gGbp */     {
/* Vvy1KxSNj ily traian f3w61gGbp */         if(i%2==1)
/* Vvy1KxSNj ily traian f3w61gGbp */         {
/* Vvy1KxSNj ily traian f3w61gGbp */         fout << b[p] << ' ';
/* Vvy1KxSNj ily traian f3w61gGbp */         p++;
/* Vvy1KxSNj ily traian f3w61gGbp */         }
/* Vvy1KxSNj ily traian f3w61gGbp */         if(i%2==0)
/* Vvy1KxSNj ily traian f3w61gGbp */         {
/* Vvy1KxSNj ily traian f3w61gGbp */         fout << c[m] << ' ';    
/* Vvy1KxSNj ily traian f3w61gGbp */         m--;
/* Vvy1KxSNj ily traian f3w61gGbp */         }
/* Vvy1KxSNj ily traian f3w61gGbp */     }
/* Vvy1KxSNj ily traian f3w61gGbp */     
/* Vvy1KxSNj ily traian f3w61gGbp */     fin.close();
/* Vvy1KxSNj ily traian f3w61gGbp */     fout.close();
/* Vvy1KxSNj ily traian f3w61gGbp */     return 0;    
/* Vvy1KxSNj ily traian f3w61gGbp */ }