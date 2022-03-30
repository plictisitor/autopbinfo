/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ #include <algorithm>
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
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ using namespace std;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ ifstream fin("factori.in");
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ ofstream fout("factori.out");
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ int main()
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ {
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */     int v[60001]={0} , n ;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */     fin >> n;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */     while(n != 0)
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */     {
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         for(int i = 1 ; i <= n ; ++i) v[i] = 0;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         for(int i = 1 ; i <= n ; ++i)
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         {
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */             int aux = i , d = 2;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */             while(aux > 1)
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */             {
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */                 int p = 0;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */                 while(aux % d == 0) p++, aux /= d;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */                 if(p) v[d] += p;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */                 d++;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */                 if(d*d > aux) d=aux;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */             }
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         }
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         for(int j = 1  ; j <= n ; ++j)
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */             if(v[j] != 0)fout << v[j] << " ";
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         fout << endl;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */         fin >> n;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */     }
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */     return 0;
/* 0eH9vkNJZ ily traian 4qN2ZrdRz */ }