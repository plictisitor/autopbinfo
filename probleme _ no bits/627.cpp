/* wJo4jxs2C ily traian bVZ317ZIO */ #include <algorithm>
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
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */ using namespace std;
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */ ifstream fin ("tripar.in");
/* wJo4jxs2C ily traian bVZ317ZIO */ ofstream fout ("tripar.out");
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */ long long cer, n, m, p[50005], putere, rez;
/* wJo4jxs2C ily traian bVZ317ZIO */ int main()
/* wJo4jxs2C ily traian bVZ317ZIO */ {
/* wJo4jxs2C ily traian bVZ317ZIO */     fin >> cer >> n >> m;
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */     for(int i=1; i<=n; i++)fin >> p[i];
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */     if (cer == 1)for(int i=1; i<=n; i++)
/* wJo4jxs2C ily traian bVZ317ZIO */     {
/* wJo4jxs2C ily traian bVZ317ZIO */         putere = pow(4, m);
/* wJo4jxs2C ily traian bVZ317ZIO */         p[i]*=p[i];
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */         fout << p[i]*putere << '\n';
/* wJo4jxs2C ily traian bVZ317ZIO */     }
/* wJo4jxs2C ily traian bVZ317ZIO */     else for(int i=1; i<=n; i++)
/* wJo4jxs2C ily traian bVZ317ZIO */     {
/* wJo4jxs2C ily traian bVZ317ZIO */         putere=pow(2, m);
/* wJo4jxs2C ily traian bVZ317ZIO */         rez = p[i]*putere;
/* wJo4jxs2C ily traian bVZ317ZIO */         rez = rez*(rez - 1);
/* wJo4jxs2C ily traian bVZ317ZIO */ 
/* wJo4jxs2C ily traian bVZ317ZIO */         fout << 3*rez/2 << '\n';
/* wJo4jxs2C ily traian bVZ317ZIO */     }
/* wJo4jxs2C ily traian bVZ317ZIO */     return 0;
/* wJo4jxs2C ily traian bVZ317ZIO */ }