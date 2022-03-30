/* 9NaD2TWCy ily traian TSUUsCP7V */ #include <algorithm>
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
/* 9NaD2TWCy ily traian TSUUsCP7V */ using namespace std;
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */ ifstream fin("roata.in");
/* 9NaD2TWCy ily traian TSUUsCP7V */ ofstream fout("roata.out");
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */ int x[100001], o[100001], n, p;
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */ long long int s = 0;
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */ int main()
/* 9NaD2TWCy ily traian TSUUsCP7V */ {
/* 9NaD2TWCy ily traian TSUUsCP7V */     fin >> n >> p;
/* 9NaD2TWCy ily traian TSUUsCP7V */     for (int i = 1; i<=p; i++)
/* 9NaD2TWCy ily traian TSUUsCP7V */     {
/* 9NaD2TWCy ily traian TSUUsCP7V */         fin >> x[i];
/* 9NaD2TWCy ily traian TSUUsCP7V */         s = s + x[i];
/* 9NaD2TWCy ily traian TSUUsCP7V */         o[i] = i;
/* 9NaD2TWCy ily traian TSUUsCP7V */     }
/* 9NaD2TWCy ily traian TSUUsCP7V */     fout << s << '\n';
/* 9NaD2TWCy ily traian TSUUsCP7V */     int pozmin;
/* 9NaD2TWCy ily traian TSUUsCP7V */     if (p > n)
/* 9NaD2TWCy ily traian TSUUsCP7V */     {
/* 9NaD2TWCy ily traian TSUUsCP7V */         for (int i = n + 1; i<=p; i++)
/* 9NaD2TWCy ily traian TSUUsCP7V */         {
/* 9NaD2TWCy ily traian TSUUsCP7V */             pozmin = 1;
/* 9NaD2TWCy ily traian TSUUsCP7V */             for (int j = 2; j <=n; j++)
/* 9NaD2TWCy ily traian TSUUsCP7V */                 if (x[j] < x[pozmin])
/* 9NaD2TWCy ily traian TSUUsCP7V */                     pozmin = j;
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */             fout << o[pozmin] << ' ';
/* 9NaD2TWCy ily traian TSUUsCP7V */             o[pozmin] = o[i];
/* 9NaD2TWCy ily traian TSUUsCP7V */             x[pozmin]+=x[i];
/* 9NaD2TWCy ily traian TSUUsCP7V */             if (x[pozmin] >1000000)
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */                 for (int j = 1; j <=n; j++)
/* 9NaD2TWCy ily traian TSUUsCP7V */                 {
/* 9NaD2TWCy ily traian TSUUsCP7V */                     x[j] = x[j] - 1000000;
/* 9NaD2TWCy ily traian TSUUsCP7V */                 }
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */         }
/* 9NaD2TWCy ily traian TSUUsCP7V */         p = n;
/* 9NaD2TWCy ily traian TSUUsCP7V */     }
/* 9NaD2TWCy ily traian TSUUsCP7V */     int pozmax = 1;
/* 9NaD2TWCy ily traian TSUUsCP7V */     for (int i = 2; i<=p; i++)
/* 9NaD2TWCy ily traian TSUUsCP7V */     {
/* 9NaD2TWCy ily traian TSUUsCP7V */         if (x[pozmax] <= x[i])pozmax = i;
/* 9NaD2TWCy ily traian TSUUsCP7V */     }
/* 9NaD2TWCy ily traian TSUUsCP7V */     for (int i = 1; i<=p; i++)
/* 9NaD2TWCy ily traian TSUUsCP7V */     {
/* 9NaD2TWCy ily traian TSUUsCP7V */         pozmin = 1;
/* 9NaD2TWCy ily traian TSUUsCP7V */         for (int j = 2; j<=p; j++)
/* 9NaD2TWCy ily traian TSUUsCP7V */             if (x[j] < x[pozmin])
/* 9NaD2TWCy ily traian TSUUsCP7V */                 pozmin = j;
/* 9NaD2TWCy ily traian TSUUsCP7V */ 
/* 9NaD2TWCy ily traian TSUUsCP7V */         fout << o[pozmin] << ' ';
/* 9NaD2TWCy ily traian TSUUsCP7V */         x[pozmin] += 1000000;
/* 9NaD2TWCy ily traian TSUUsCP7V */     }
/* 9NaD2TWCy ily traian TSUUsCP7V */     fout << '\n';
/* 9NaD2TWCy ily traian TSUUsCP7V */     fout << pozmax << '\n';
/* 9NaD2TWCy ily traian TSUUsCP7V */     
/* 9NaD2TWCy ily traian TSUUsCP7V */     fin.close();
/* 9NaD2TWCy ily traian TSUUsCP7V */     fout.close();
/* 9NaD2TWCy ily traian TSUUsCP7V */     
/* 9NaD2TWCy ily traian TSUUsCP7V */     return 0;
/* 9NaD2TWCy ily traian TSUUsCP7V */ }