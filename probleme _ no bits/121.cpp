/* 6SFHQvZGe ily traian eTv7Qgcxf */ #include <algorithm>
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
/* 6SFHQvZGe ily traian eTv7Qgcxf */ using namespace std;
/* 6SFHQvZGe ily traian eTv7Qgcxf */ int main ()
/* 6SFHQvZGe ily traian eTv7Qgcxf */ {
/* 6SFHQvZGe ily traian eTv7Qgcxf */     long long n,maxim=0,nrap=0,aux;
/* 6SFHQvZGe ily traian eTv7Qgcxf */     cin >> n;
/* 6SFHQvZGe ily traian eTv7Qgcxf */     aux=n;
/* 6SFHQvZGe ily traian eTv7Qgcxf */     if (n==0) cout << 0<<" "<<1;
/* 6SFHQvZGe ily traian eTv7Qgcxf */     else
/* 6SFHQvZGe ily traian eTv7Qgcxf */         {
/* 6SFHQvZGe ily traian eTv7Qgcxf */     while (n != 0)
/* 6SFHQvZGe ily traian eTv7Qgcxf */     {
/* 6SFHQvZGe ily traian eTv7Qgcxf */         if((n%10)>maxim)
/* 6SFHQvZGe ily traian eTv7Qgcxf */         {
/* 6SFHQvZGe ily traian eTv7Qgcxf */             maxim=n%10;
/* 6SFHQvZGe ily traian eTv7Qgcxf */         }
/* 6SFHQvZGe ily traian eTv7Qgcxf */         n=n/10;
/* 6SFHQvZGe ily traian eTv7Qgcxf */     }
/* 6SFHQvZGe ily traian eTv7Qgcxf */     while (aux !=0 )
/* 6SFHQvZGe ily traian eTv7Qgcxf */     {
/* 6SFHQvZGe ily traian eTv7Qgcxf */         if((aux%10)==maxim) nrap++;
/* 6SFHQvZGe ily traian eTv7Qgcxf */         aux=aux/10;
/* 6SFHQvZGe ily traian eTv7Qgcxf */     }
/* 6SFHQvZGe ily traian eTv7Qgcxf */ 
/* 6SFHQvZGe ily traian eTv7Qgcxf */     cout << maxim << " "<< nrap;
/* 6SFHQvZGe ily traian eTv7Qgcxf */         }
/* 6SFHQvZGe ily traian eTv7Qgcxf */ }