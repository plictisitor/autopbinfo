/* 5yhj4sh25 ily traian 51V225Gzh */ #include <algorithm>
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
/* 5yhj4sh25 ily traian 51V225Gzh */ using namespace std;
/* 5yhj4sh25 ily traian 51V225Gzh */ 
/* 5yhj4sh25 ily traian 51V225Gzh */ ifstream cin("palindrom.in");
/* 5yhj4sh25 ily traian 51V225Gzh */ ofstream cout("palindrom.out");
/* 5yhj4sh25 ily traian 51V225Gzh */ 
/* 5yhj4sh25 ily traian 51V225Gzh */ int main()
/* 5yhj4sh25 ily traian 51V225Gzh */ {
/* 5yhj4sh25 ily traian 51V225Gzh */     int n;
/* 5yhj4sh25 ily traian 51V225Gzh */     cin >> n;
/* 5yhj4sh25 ily traian 51V225Gzh */     cin.get();
/* 5yhj4sh25 ily traian 51V225Gzh */     for(int i = 0 ; i < n ; ++i)
/* 5yhj4sh25 ily traian 51V225Gzh */     {
/* 5yhj4sh25 ily traian 51V225Gzh */         char a[300];
/* 5yhj4sh25 ily traian 51V225Gzh */         cin.getline(a , 300);
/* 5yhj4sh25 ily traian 51V225Gzh */         int utim=0;
/* 5yhj4sh25 ily traian 51V225Gzh */         int j = 0;
/* 5yhj4sh25 ily traian 51V225Gzh */         while(a[j]!='\0')
/* 5yhj4sh25 ily traian 51V225Gzh */         {
/* 5yhj4sh25 ily traian 51V225Gzh */             while(a[j]==' ')
/* 5yhj4sh25 ily traian 51V225Gzh */             {
/* 5yhj4sh25 ily traian 51V225Gzh */                 int k = j;
/* 5yhj4sh25 ily traian 51V225Gzh */                 while(a[k]!='\0')
/* 5yhj4sh25 ily traian 51V225Gzh */                 {
/* 5yhj4sh25 ily traian 51V225Gzh */                     a[k]=a[k+1];
/* 5yhj4sh25 ily traian 51V225Gzh */                     k++;
/* 5yhj4sh25 ily traian 51V225Gzh */                 }
/* 5yhj4sh25 ily traian 51V225Gzh */             }
/* 5yhj4sh25 ily traian 51V225Gzh */             utim=j;
/* 5yhj4sh25 ily traian 51V225Gzh */             j++;
/* 5yhj4sh25 ily traian 51V225Gzh */         }
/* 5yhj4sh25 ily traian 51V225Gzh */         j = 0;
/* 5yhj4sh25 ily traian 51V225Gzh */         bool ok=true;
/* 5yhj4sh25 ily traian 51V225Gzh */         while(a[j]!='\0')
/* 5yhj4sh25 ily traian 51V225Gzh */         {
/* 5yhj4sh25 ily traian 51V225Gzh */             if(a[j]!=a[utim-j])
/* 5yhj4sh25 ily traian 51V225Gzh */             {
/* 5yhj4sh25 ily traian 51V225Gzh */                 ok=false;
/* 5yhj4sh25 ily traian 51V225Gzh */             }
/* 5yhj4sh25 ily traian 51V225Gzh */             j++;
/* 5yhj4sh25 ily traian 51V225Gzh */         }
/* 5yhj4sh25 ily traian 51V225Gzh */         if(ok)
/* 5yhj4sh25 ily traian 51V225Gzh */             cout << 1 << endl;
/* 5yhj4sh25 ily traian 51V225Gzh */         else
/* 5yhj4sh25 ily traian 51V225Gzh */             cout << 0 << endl;
/* 5yhj4sh25 ily traian 51V225Gzh */     }
/* 5yhj4sh25 ily traian 51V225Gzh */     return 0;
/* 5yhj4sh25 ily traian 51V225Gzh */ }