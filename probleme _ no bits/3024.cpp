/* lXsgsAcyU ily traian BmBLHEl2p */ #include <algorithm>
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
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */ using namespace std;
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */ ifstream cin ("ou.in");
/* lXsgsAcyU ily traian BmBLHEl2p */ ofstream cout ("ou.out");
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */ #define Max 100001
/* lXsgsAcyU ily traian BmBLHEl2p */ long long n;
/* lXsgsAcyU ily traian BmBLHEl2p */ long long a[Max], anou[Max];
/* lXsgsAcyU ily traian BmBLHEl2p */ int main()
/* lXsgsAcyU ily traian BmBLHEl2p */ {
/* lXsgsAcyU ily traian BmBLHEl2p */     cin >> n;
/* lXsgsAcyU ily traian BmBLHEl2p */     for (long long i = 1, nro, bpo; i <= n; i ++)
/* lXsgsAcyU ily traian BmBLHEl2p */     {
/* lXsgsAcyU ily traian BmBLHEl2p */         cin >> a[i];
/* lXsgsAcyU ily traian BmBLHEl2p */         nro = min(i - 1, n - i);
/* lXsgsAcyU ily traian BmBLHEl2p */         if (nro * 2 > a[i])
/* lXsgsAcyU ily traian BmBLHEl2p */             nro = a[i]/2;
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */         if (nro)
/* lXsgsAcyU ily traian BmBLHEl2p */         {
/* lXsgsAcyU ily traian BmBLHEl2p */             bpo = a[i] / (nro * 2);
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i] += (a[i] - bpo*nro*2);
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i + 1] -= (a[i] - bpo*nro*2);
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i - nro] += bpo;
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i] -= bpo;
/* lXsgsAcyU ily traian BmBLHEl2p */ 
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i + 1] += bpo;
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i + nro + 1] -= bpo;
/* lXsgsAcyU ily traian BmBLHEl2p */         }
/* lXsgsAcyU ily traian BmBLHEl2p */         else
/* lXsgsAcyU ily traian BmBLHEl2p */         {
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i] += a[i];
/* lXsgsAcyU ily traian BmBLHEl2p */             anou[i + 1] -= a[i];
/* lXsgsAcyU ily traian BmBLHEl2p */         }
/* lXsgsAcyU ily traian BmBLHEl2p */     }
/* lXsgsAcyU ily traian BmBLHEl2p */     for (int i = 1; i <= n; i ++)
/* lXsgsAcyU ily traian BmBLHEl2p */         anou[i] += anou[i - 1];
/* lXsgsAcyU ily traian BmBLHEl2p */     for (int i = 1; i <= n; i ++)
/* lXsgsAcyU ily traian BmBLHEl2p */         cout << anou[i] << ' ';
/* lXsgsAcyU ily traian BmBLHEl2p */     return 0;
/* lXsgsAcyU ily traian BmBLHEl2p */ }