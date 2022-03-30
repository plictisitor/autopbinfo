/* 9uIvOXReT ily traian ONrPKsCDN */ #include <algorithm>
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
/* 9uIvOXReT ily traian ONrPKsCDN */ using namespace std;
/* 9uIvOXReT ily traian ONrPKsCDN */ 
/* 9uIvOXReT ily traian ONrPKsCDN */ ifstream fin("kminsum.in");
/* 9uIvOXReT ily traian ONrPKsCDN */ ofstream fout("kminsum.out");
/* 9uIvOXReT ily traian ONrPKsCDN */ 
/* 9uIvOXReT ily traian ONrPKsCDN */ int n, m, k, a[1001], b[1001];
/* 9uIvOXReT ily traian ONrPKsCDN */ 
/* 9uIvOXReT ily traian ONrPKsCDN */ void cmmp(int arr1[], int n1, int arr2[],int n2, int k)
/* 9uIvOXReT ily traian ONrPKsCDN */ {
/* 9uIvOXReT ily traian ONrPKsCDN */     int index2[n1];
/* 9uIvOXReT ily traian ONrPKsCDN */     memset(index2, 0, sizeof(index2));
/* 9uIvOXReT ily traian ONrPKsCDN */     while (k > 0)
/* 9uIvOXReT ily traian ONrPKsCDN */     {
/* 9uIvOXReT ily traian ONrPKsCDN */         int min_sum = INT_MAX;
/* 9uIvOXReT ily traian ONrPKsCDN */         int min_index = 0;
/* 9uIvOXReT ily traian ONrPKsCDN */         for (int i1 = 0; i1 < n1; i1++)
/* 9uIvOXReT ily traian ONrPKsCDN */         {
/* 9uIvOXReT ily traian ONrPKsCDN */             if (index2[i1]<n2 && arr1[i1]+arr2[index2[i1]]<min_sum)
/* 9uIvOXReT ily traian ONrPKsCDN */             {
/* 9uIvOXReT ily traian ONrPKsCDN */                 min_index = i1;
/* 9uIvOXReT ily traian ONrPKsCDN */                 min_sum = arr1[i1] + arr2[index2[i1]];
/* 9uIvOXReT ily traian ONrPKsCDN */             }
/* 9uIvOXReT ily traian ONrPKsCDN */         }
/* 9uIvOXReT ily traian ONrPKsCDN */         fout<<arr1[min_index]<<" "<<arr2[index2[min_index]]<<'\n';
/* 9uIvOXReT ily traian ONrPKsCDN */         index2[min_index]++;
/* 9uIvOXReT ily traian ONrPKsCDN */         k--;
/* 9uIvOXReT ily traian ONrPKsCDN */     }
/* 9uIvOXReT ily traian ONrPKsCDN */ }
/* 9uIvOXReT ily traian ONrPKsCDN */ int main()
/* 9uIvOXReT ily traian ONrPKsCDN */ {
/* 9uIvOXReT ily traian ONrPKsCDN */     int i;
/* 9uIvOXReT ily traian ONrPKsCDN */     fin>>n>>m>>k;
/* 9uIvOXReT ily traian ONrPKsCDN */     for(i=0;i<n;i++)
/* 9uIvOXReT ily traian ONrPKsCDN */         fin>>a[i];
/* 9uIvOXReT ily traian ONrPKsCDN */     for(i=0;i<m;i++)
/* 9uIvOXReT ily traian ONrPKsCDN */         fin>>b[i];
/* 9uIvOXReT ily traian ONrPKsCDN */     cmmp(a,n,b,m,k);
/* 9uIvOXReT ily traian ONrPKsCDN */     return 0;
/* 9uIvOXReT ily traian ONrPKsCDN */ }