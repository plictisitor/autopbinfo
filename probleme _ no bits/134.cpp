/* oWT5tS3vq ily traian Kl2M1i7GH */ #include <algorithm>
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
/* oWT5tS3vq ily traian Kl2M1i7GH */ 
/* oWT5tS3vq ily traian Kl2M1i7GH */ 
/* oWT5tS3vq ily traian Kl2M1i7GH */ using namespace std;
/* oWT5tS3vq ily traian Kl2M1i7GH */ 
/* oWT5tS3vq ily traian Kl2M1i7GH */ ifstream fin("secvk.in");
/* oWT5tS3vq ily traian Kl2M1i7GH */ ofstream fout("secvk.out");
/* oWT5tS3vq ily traian Kl2M1i7GH */ 
/* oWT5tS3vq ily traian Kl2M1i7GH */ int n , a[100001] , k;
/* oWT5tS3vq ily traian Kl2M1i7GH */ int main()
/* oWT5tS3vq ily traian Kl2M1i7GH */ {
/* oWT5tS3vq ily traian Kl2M1i7GH */     fin >> n >> k;
/* oWT5tS3vq ily traian Kl2M1i7GH */     for(int i = 1 ; i <= n ; ++i)
/* oWT5tS3vq ily traian Kl2M1i7GH */         fin >> a[i];
/* oWT5tS3vq ily traian Kl2M1i7GH */     int smax=0, dr = 0 , s=0;
/* oWT5tS3vq ily traian Kl2M1i7GH */     for(int i = 1 ; i < k ; ++i)
/* oWT5tS3vq ily traian Kl2M1i7GH */         s+=a[i];
/* oWT5tS3vq ily traian Kl2M1i7GH */     for(int i = k ; i <= n ; ++i)
/* oWT5tS3vq ily traian Kl2M1i7GH */     {
/* oWT5tS3vq ily traian Kl2M1i7GH */         s+=a[i];
/* oWT5tS3vq ily traian Kl2M1i7GH */         s-=a[i-k];
/* oWT5tS3vq ily traian Kl2M1i7GH */         if(s>smax)
/* oWT5tS3vq ily traian Kl2M1i7GH */         {
/* oWT5tS3vq ily traian Kl2M1i7GH */             smax=s;
/* oWT5tS3vq ily traian Kl2M1i7GH */             dr=i;
/* oWT5tS3vq ily traian Kl2M1i7GH */         }
/* oWT5tS3vq ily traian Kl2M1i7GH */     }
/* oWT5tS3vq ily traian Kl2M1i7GH */     for(int i = dr - k + 1 ; i <= dr ; ++i)
/* oWT5tS3vq ily traian Kl2M1i7GH */         fout << a[i] << ' ';
/* oWT5tS3vq ily traian Kl2M1i7GH */     
/* oWT5tS3vq ily traian Kl2M1i7GH */     fin.close();
/* oWT5tS3vq ily traian Kl2M1i7GH */     fout.close();
/* oWT5tS3vq ily traian Kl2M1i7GH */     
/* oWT5tS3vq ily traian Kl2M1i7GH */     return 0;
/* oWT5tS3vq ily traian Kl2M1i7GH */ }