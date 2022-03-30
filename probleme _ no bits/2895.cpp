/* qHAsKGquo ily traian d5JfgALll */ #include <algorithm>
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
/* qHAsKGquo ily traian d5JfgALll */ #define VMAX 1000002
/* qHAsKGquo ily traian d5JfgALll */ #define NMAX 1000002
/* qHAsKGquo ily traian d5JfgALll */ #define ZMILION 10000000
/* qHAsKGquo ily traian d5JfgALll */ using namespace std;
/* qHAsKGquo ily traian d5JfgALll */ ifstream fin("supermarket.in");
/* qHAsKGquo ily traian d5JfgALll */ ofstream fout("supermarket.out");
/* qHAsKGquo ily traian d5JfgALll */ 
/* qHAsKGquo ily traian d5JfgALll */ int c[2][NMAX];
/* qHAsKGquo ily traian d5JfgALll */ int unde[VMAX];
/* qHAsKGquo ily traian d5JfgALll */ int inc[2]={1,1}, sf[2], lg[2];
/* qHAsKGquo ily traian d5JfgALll */ int n;
/* qHAsKGquo ily traian d5JfgALll */ 
/* qHAsKGquo ily traian d5JfgALll */ int main()
/* qHAsKGquo ily traian d5JfgALll */ {int i, tip, x, casa;
/* qHAsKGquo ily traian d5JfgALll */  fin >> n;
/* qHAsKGquo ily traian d5JfgALll */  for (i = 1; i <= n; i++)
/* qHAsKGquo ily traian d5JfgALll */      {
/* qHAsKGquo ily traian d5JfgALll */       fin >> tip;
/* qHAsKGquo ily traian d5JfgALll */       if(tip <= 2)
/* qHAsKGquo ily traian d5JfgALll */         {tip--;
/* qHAsKGquo ily traian d5JfgALll */          while (inc[tip]<=sf[tip] && unde[c[tip][inc[tip]]]%ZMILION!=inc[tip])
/* qHAsKGquo ily traian d5JfgALll */                 {inc[tip]++;}
/* qHAsKGquo ily traian d5JfgALll */          if (inc[tip]>sf[tip])
/* qHAsKGquo ily traian d5JfgALll */             fout << "-1\n";
/* qHAsKGquo ily traian d5JfgALll */             else
/* qHAsKGquo ily traian d5JfgALll */             {
/* qHAsKGquo ily traian d5JfgALll */             fout<<c[tip][inc[tip]]<<'\n';
/* qHAsKGquo ily traian d5JfgALll */             inc[tip]++; lg[tip]--;
/* qHAsKGquo ily traian d5JfgALll */             }
/* qHAsKGquo ily traian d5JfgALll */         }
/* qHAsKGquo ily traian d5JfgALll */         else
/* qHAsKGquo ily traian d5JfgALll */         {
/* qHAsKGquo ily traian d5JfgALll */         fin>>x;
/* qHAsKGquo ily traian d5JfgALll */         if (tip == 3)
/* qHAsKGquo ily traian d5JfgALll */             {
/* qHAsKGquo ily traian d5JfgALll */              casa=0;
/* qHAsKGquo ily traian d5JfgALll */              if (lg[1]<lg[0]) casa=1;
/* qHAsKGquo ily traian d5JfgALll */              fout<<casa+1<<'\n';
/* qHAsKGquo ily traian d5JfgALll */              sf[casa]++; c[casa][sf[casa]]=x;
/* qHAsKGquo ily traian d5JfgALll */              unde[x]=sf[casa]+casa*ZMILION;
/* qHAsKGquo ily traian d5JfgALll */              lg[casa]++;
/* qHAsKGquo ily traian d5JfgALll */             }
/* qHAsKGquo ily traian d5JfgALll */             else //4
/* qHAsKGquo ily traian d5JfgALll */             {
/* qHAsKGquo ily traian d5JfgALll */             casa=unde[x]/ZMILION;
/* qHAsKGquo ily traian d5JfgALll */             lg[casa]--;
/* qHAsKGquo ily traian d5JfgALll */             unde[x]=0;
/* qHAsKGquo ily traian d5JfgALll */             }
/* qHAsKGquo ily traian d5JfgALll */ 
/* qHAsKGquo ily traian d5JfgALll */        }
/* qHAsKGquo ily traian d5JfgALll */      }
/* qHAsKGquo ily traian d5JfgALll */  fout.close();
/* qHAsKGquo ily traian d5JfgALll */  return 0;
/* qHAsKGquo ily traian d5JfgALll */ }