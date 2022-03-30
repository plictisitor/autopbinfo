/* QUIrKMKBz ily traian ZXM5acupg */ #include <algorithm>
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
/* QUIrKMKBz ily traian ZXM5acupg */ using namespace std;
/* QUIrKMKBz ily traian ZXM5acupg */ int main()
/* QUIrKMKBz ily traian ZXM5acupg */ {
/* QUIrKMKBz ily traian ZXM5acupg */   int v,n,i,ok=1;
/* QUIrKMKBz ily traian ZXM5acupg */   cin>>n;
/* QUIrKMKBz ily traian ZXM5acupg */   int a[n+1];
/* QUIrKMKBz ily traian ZXM5acupg */   a[n+1]=-1;
/* QUIrKMKBz ily traian ZXM5acupg */   cin>>a[1];
/* QUIrKMKBz ily traian ZXM5acupg */   for(i=2;i<=n;i++)
/* QUIrKMKBz ily traian ZXM5acupg */     cin>>a[i];
/* QUIrKMKBz ily traian ZXM5acupg */   for(i=2;i<=n;i++)
/* QUIrKMKBz ily traian ZXM5acupg */   if(a[i-1]>a[i] && a[i+1]>a[i])
/* QUIrKMKBz ily traian ZXM5acupg */         v=i;
/* QUIrKMKBz ily traian ZXM5acupg */   for(i=1;i<v;i++)
/* QUIrKMKBz ily traian ZXM5acupg */     if(a[i+1]>=a[i])
/* QUIrKMKBz ily traian ZXM5acupg */     {
/* QUIrKMKBz ily traian ZXM5acupg */     cout<<"NU"; ok=0;
/* QUIrKMKBz ily traian ZXM5acupg */     break;
/* QUIrKMKBz ily traian ZXM5acupg */     }
/* QUIrKMKBz ily traian ZXM5acupg */   if(ok)
/* QUIrKMKBz ily traian ZXM5acupg */     for(i=v;i<n;i++)
/* QUIrKMKBz ily traian ZXM5acupg */       if(a[i]>=a[i+1])
/* QUIrKMKBz ily traian ZXM5acupg */       {
/* QUIrKMKBz ily traian ZXM5acupg */       cout<<"NU"; ok=0;
/* QUIrKMKBz ily traian ZXM5acupg */       break;
/* QUIrKMKBz ily traian ZXM5acupg */       }
/* QUIrKMKBz ily traian ZXM5acupg */   if(ok)
/* QUIrKMKBz ily traian ZXM5acupg */         cout<<"DA";
/* QUIrKMKBz ily traian ZXM5acupg */         return 0;
/* QUIrKMKBz ily traian ZXM5acupg */ }