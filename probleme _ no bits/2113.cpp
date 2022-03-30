/* F2X9DpI3t ily traian EWg8bJ4fw */ #include <algorithm>
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
/* F2X9DpI3t ily traian EWg8bJ4fw */ using namespace std;
/* F2X9DpI3t ily traian EWg8bJ4fw */ ifstream cin("pagini.in");
/* F2X9DpI3t ily traian EWg8bJ4fw */ ofstream cout("pagini.out");
/* F2X9DpI3t ily traian EWg8bJ4fw */ int main()
/* F2X9DpI3t ily traian EWg8bJ4fw */ {
/* F2X9DpI3t ily traian EWg8bJ4fw */     int x , n , p;
/* F2X9DpI3t ily traian EWg8bJ4fw */     cin >> p;
/* F2X9DpI3t ily traian EWg8bJ4fw */     for(int i = 0 ; i < p ; ++i)
/* F2X9DpI3t ily traian EWg8bJ4fw */     {
/* F2X9DpI3t ily traian EWg8bJ4fw */         long long ok = 1 , cnt = 0 , f[10]={0};
/* F2X9DpI3t ily traian EWg8bJ4fw */         cin >> n;
/* F2X9DpI3t ily traian EWg8bJ4fw */         for(int j = 0 ; j < n ; ++j)
/* F2X9DpI3t ily traian EWg8bJ4fw */         {
/* F2X9DpI3t ily traian EWg8bJ4fw */             cin >> x;
/* F2X9DpI3t ily traian EWg8bJ4fw */             for(int k = 1 ; k <= x ; ++k)
/* F2X9DpI3t ily traian EWg8bJ4fw */             {
/* F2X9DpI3t ily traian EWg8bJ4fw */                 int aux = k;
/* F2X9DpI3t ily traian EWg8bJ4fw */                 while(aux != 0)
/* F2X9DpI3t ily traian EWg8bJ4fw */                 {
/* F2X9DpI3t ily traian EWg8bJ4fw */                     f[aux%10]++;
/* F2X9DpI3t ily traian EWg8bJ4fw */                     aux /= 10;
/* F2X9DpI3t ily traian EWg8bJ4fw */                 }
/* F2X9DpI3t ily traian EWg8bJ4fw */             }
/* F2X9DpI3t ily traian EWg8bJ4fw */         }
/* F2X9DpI3t ily traian EWg8bJ4fw */         for(int j = 0 ; j < 10 ; ++j)
/* F2X9DpI3t ily traian EWg8bJ4fw */         {
/* F2X9DpI3t ily traian EWg8bJ4fw */             if(f[j]%2!=0 && cnt==0) cnt++;
/* F2X9DpI3t ily traian EWg8bJ4fw */             else if(f[j]%2!=0 && cnt==1)ok = 0;
/* F2X9DpI3t ily traian EWg8bJ4fw */         }
/* F2X9DpI3t ily traian EWg8bJ4fw */         if(ok)cout << "DA" << endl;
/* F2X9DpI3t ily traian EWg8bJ4fw */         else cout << "NU" << endl;
/* F2X9DpI3t ily traian EWg8bJ4fw */     }
/* F2X9DpI3t ily traian EWg8bJ4fw */ }