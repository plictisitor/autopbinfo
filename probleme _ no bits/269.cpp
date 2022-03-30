/* 21daBotOc ily traian nkVnzb56K */ #include <algorithm>
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
/* 21daBotOc ily traian nkVnzb56K */ 
/* 21daBotOc ily traian nkVnzb56K */ using namespace std;
/* 21daBotOc ily traian nkVnzb56K */ 
/* 21daBotOc ily traian nkVnzb56K */ ifstream fin("puterik.in");
/* 21daBotOc ily traian nkVnzb56K */ ofstream fout("puterik.out");
/* 21daBotOc ily traian nkVnzb56K */ 
/* 21daBotOc ily traian nkVnzb56K */ int put(int n , int k)
/* 21daBotOc ily traian nkVnzb56K */ {
/* 21daBotOc ily traian nkVnzb56K */     int p = 1;
/* 21daBotOc ily traian nkVnzb56K */     for(int i = 0 ; p < n ; ++i)
/* 21daBotOc ily traian nkVnzb56K */     {
/* 21daBotOc ily traian nkVnzb56K */         p*=k;
/* 21daBotOc ily traian nkVnzb56K */     }
/* 21daBotOc ily traian nkVnzb56K */     if(p==n)
/* 21daBotOc ily traian nkVnzb56K */     return 1;
/* 21daBotOc ily traian nkVnzb56K */     else
/* 21daBotOc ily traian nkVnzb56K */     return 0;
/* 21daBotOc ily traian nkVnzb56K */ }
/* 21daBotOc ily traian nkVnzb56K */ 
/* 21daBotOc ily traian nkVnzb56K */ int main()
/* 21daBotOc ily traian nkVnzb56K */ {
/* 21daBotOc ily traian nkVnzb56K */     int n , k;
/* 21daBotOc ily traian nkVnzb56K */     fin >> n >> k;
/* 21daBotOc ily traian nkVnzb56K */     int a[100];
/* 21daBotOc ily traian nkVnzb56K */     for(int i = 0 ; i < n ; ++i)
/* 21daBotOc ily traian nkVnzb56K */     fin >> a[i];
/* 21daBotOc ily traian nkVnzb56K */     sort(a, a+n);
/* 21daBotOc ily traian nkVnzb56K */     for(int i = 0 ; i < n ; ++i)
/* 21daBotOc ily traian nkVnzb56K */     {
/* 21daBotOc ily traian nkVnzb56K */         if(put(a[i],k))
/* 21daBotOc ily traian nkVnzb56K */         fout << a[i] << ' ';
/* 21daBotOc ily traian nkVnzb56K */     }
/* 21daBotOc ily traian nkVnzb56K */     
/* 21daBotOc ily traian nkVnzb56K */     fin.close();
/* 21daBotOc ily traian nkVnzb56K */     fout.close();
/* 21daBotOc ily traian nkVnzb56K */     
/* 21daBotOc ily traian nkVnzb56K */     return 0;    
/* 21daBotOc ily traian nkVnzb56K */ }