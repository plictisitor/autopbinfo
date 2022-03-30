/* lOuDX7RFI ily traian xY3xXfmXY */ #include <algorithm>
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
/* lOuDX7RFI ily traian xY3xXfmXY */ 
/* lOuDX7RFI ily traian xY3xXfmXY */ using namespace std;
/* lOuDX7RFI ily traian xY3xXfmXY */ 
/* lOuDX7RFI ily traian xY3xXfmXY */ ifstream fin("interclasm.in");
/* lOuDX7RFI ily traian xY3xXfmXY */ ofstream fout("interclasm.out");
/* lOuDX7RFI ily traian xY3xXfmXY */ 
/* lOuDX7RFI ily traian xY3xXfmXY */ int main()
/* lOuDX7RFI ily traian xY3xXfmXY */ {
/* lOuDX7RFI ily traian xY3xXfmXY */     int x;
/* lOuDX7RFI ily traian xY3xXfmXY */     fin >> x;
/* lOuDX7RFI ily traian xY3xXfmXY */     int n;
/* lOuDX7RFI ily traian xY3xXfmXY */     fin >> n;
/* lOuDX7RFI ily traian xY3xXfmXY */     int a[100000] , b[100000] , v[200000];
/* lOuDX7RFI ily traian xY3xXfmXY */     int p = 0;
/* lOuDX7RFI ily traian xY3xXfmXY */     for(int i = 0 ; i < n ; ++i)
/* lOuDX7RFI ily traian xY3xXfmXY */     {
/* lOuDX7RFI ily traian xY3xXfmXY */         fin >> a[i];
/* lOuDX7RFI ily traian xY3xXfmXY */         v[p]=a[i];
/* lOuDX7RFI ily traian xY3xXfmXY */         p++;
/* lOuDX7RFI ily traian xY3xXfmXY */     }
/* lOuDX7RFI ily traian xY3xXfmXY */     int m;
/* lOuDX7RFI ily traian xY3xXfmXY */     fin >> m;
/* lOuDX7RFI ily traian xY3xXfmXY */     for(int i = 0 ; i < m ; ++i)
/* lOuDX7RFI ily traian xY3xXfmXY */     {
/* lOuDX7RFI ily traian xY3xXfmXY */         fin >> b[i];
/* lOuDX7RFI ily traian xY3xXfmXY */         v[p]=b[i];
/* lOuDX7RFI ily traian xY3xXfmXY */         p++;
/* lOuDX7RFI ily traian xY3xXfmXY */     }
/* lOuDX7RFI ily traian xY3xXfmXY */     sort(v , v+p);
/* lOuDX7RFI ily traian xY3xXfmXY */     for(int i = 0 ; i < p ; ++i)
/* lOuDX7RFI ily traian xY3xXfmXY */     {
/* lOuDX7RFI ily traian xY3xXfmXY */         if(v[i]!=v[i-1] && v[i]!=v[i+1])
/* lOuDX7RFI ily traian xY3xXfmXY */         {
/* lOuDX7RFI ily traian xY3xXfmXY */             if(v[i]%x==0)
/* lOuDX7RFI ily traian xY3xXfmXY */             fout << v[i] << ' ';
/* lOuDX7RFI ily traian xY3xXfmXY */         }
/* lOuDX7RFI ily traian xY3xXfmXY */     }
/* lOuDX7RFI ily traian xY3xXfmXY */     
/* lOuDX7RFI ily traian xY3xXfmXY */ }