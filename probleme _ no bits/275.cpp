/* DJwhmleoS ily traian fSvbHyp4z */ #include <algorithm>
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
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */ using namespace std;
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */ char pv[ ][3] = {"aa","ae","ai","ao", "au", "ea", "ee", "ei", "eo", "eu", "ia", "ie", "ii", "io", "iu", "oa", "oe", "oi", "ou", "ua","oo", "ue", "ui", "uu", "uo" };
/* DJwhmleoS ily traian fSvbHyp4z */ int c[26];
/* DJwhmleoS ily traian fSvbHyp4z */ char voc[] = {'a','e','i','o','u'};
/* DJwhmleoS ily traian fSvbHyp4z */ char vo[3];
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */ ifstream fin ("perechivocale1.in");
/* DJwhmleoS ily traian fSvbHyp4z */ ofstream fout ("perechivocale1.out");
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */ int main()
/* DJwhmleoS ily traian fSvbHyp4z */ {
/* DJwhmleoS ily traian fSvbHyp4z */     int n;
/* DJwhmleoS ily traian fSvbHyp4z */     char x[41];
/* DJwhmleoS ily traian fSvbHyp4z */     int vmax=0;
/* DJwhmleoS ily traian fSvbHyp4z */     while (fin >> x)
/* DJwhmleoS ily traian fSvbHyp4z */     {
/* DJwhmleoS ily traian fSvbHyp4z */         n=strlen(x);
/* DJwhmleoS ily traian fSvbHyp4z */         for (int i=0; i<n-1; i++)
/* DJwhmleoS ily traian fSvbHyp4z */         {
/* DJwhmleoS ily traian fSvbHyp4z */             if (strchr(voc, x[i]) && strchr(voc, x[i+1]))
/* DJwhmleoS ily traian fSvbHyp4z */             {
/* DJwhmleoS ily traian fSvbHyp4z */                 vo[0]=x[i];
/* DJwhmleoS ily traian fSvbHyp4z */                 vo[1]=x[i+1];
/* DJwhmleoS ily traian fSvbHyp4z */                 vo[2]='\0';
/* DJwhmleoS ily traian fSvbHyp4z */                 for (int j = 0; j<25; j++)
/* DJwhmleoS ily traian fSvbHyp4z */                 {
/* DJwhmleoS ily traian fSvbHyp4z */                     if (strcmp(vo, pv[j])==0)c[j]++;
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */                 }
/* DJwhmleoS ily traian fSvbHyp4z */             }
/* DJwhmleoS ily traian fSvbHyp4z */         }
/* DJwhmleoS ily traian fSvbHyp4z */     }
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */     for (int i = 1; i<=25; i++)
/* DJwhmleoS ily traian fSvbHyp4z */         if (c[i]>vmax)vmax=c[i];
/* DJwhmleoS ily traian fSvbHyp4z */ 
/* DJwhmleoS ily traian fSvbHyp4z */     for (int i = 1; i<=25; i++)
/* DJwhmleoS ily traian fSvbHyp4z */         if (c[i]==vmax)fout << pv[i] << " ";
/* DJwhmleoS ily traian fSvbHyp4z */     return 0;
/* DJwhmleoS ily traian fSvbHyp4z */ }