/* R5RLFWGcF ily traian dzwvWf0op */ #include <algorithm>
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
/* R5RLFWGcF ily traian dzwvWf0op */ using namespace std;
/* R5RLFWGcF ily traian dzwvWf0op */ int main()
/* R5RLFWGcF ily traian dzwvWf0op */ {
/* R5RLFWGcF ily traian dzwvWf0op */     int n,b,k,timp,p,ljos,lsup,a0=0,an=0;
/* R5RLFWGcF ily traian dzwvWf0op */     ifstream fin("clepsidru.in");
/* R5RLFWGcF ily traian dzwvWf0op */     ofstream fout("clepsidru.out");
/* R5RLFWGcF ily traian dzwvWf0op */     fin >> n >> b;
/* R5RLFWGcF ily traian dzwvWf0op */     fout << n + b - 1 <<'\n';
/* R5RLFWGcF ily traian dzwvWf0op */     ljos = a0 = an = 0;
/* R5RLFWGcF ily traian dzwvWf0op */     lsup = 1 - b;
/* R5RLFWGcF ily traian dzwvWf0op */     fin >> k;
/* R5RLFWGcF ily traian dzwvWf0op */     for (int i=1;i<=k; i++)
/* R5RLFWGcF ily traian dzwvWf0op */     {
/* R5RLFWGcF ily traian dzwvWf0op */         fin>>timp>>p;
/* R5RLFWGcF ily traian dzwvWf0op */         if (p==1)
/* R5RLFWGcF ily traian dzwvWf0op */         {
/* R5RLFWGcF ily traian dzwvWf0op */             if (lsup<n)
/* R5RLFWGcF ily traian dzwvWf0op */             {
/* R5RLFWGcF ily traian dzwvWf0op */                 lsup += timp;
/* R5RLFWGcF ily traian dzwvWf0op */                 ljos += timp;
/* R5RLFWGcF ily traian dzwvWf0op */                 if (lsup>=n)
/* R5RLFWGcF ily traian dzwvWf0op */                 {
/* R5RLFWGcF ily traian dzwvWf0op */                     lsup=n;
/* R5RLFWGcF ily traian dzwvWf0op */                     ljos=n+b-1;
/* R5RLFWGcF ily traian dzwvWf0op */                 }
/* R5RLFWGcF ily traian dzwvWf0op */             }
/* R5RLFWGcF ily traian dzwvWf0op */         }
/* R5RLFWGcF ily traian dzwvWf0op */         else
/* R5RLFWGcF ily traian dzwvWf0op */         {
/* R5RLFWGcF ily traian dzwvWf0op */             if(ljos > 0)
/* R5RLFWGcF ily traian dzwvWf0op */             {
/* R5RLFWGcF ily traian dzwvWf0op */                 ljos -=timp;
/* R5RLFWGcF ily traian dzwvWf0op */                 lsup -=timp;
/* R5RLFWGcF ily traian dzwvWf0op */                 if (ljos <=0)
/* R5RLFWGcF ily traian dzwvWf0op */                 {
/* R5RLFWGcF ily traian dzwvWf0op */                     ljos = 0;
/* R5RLFWGcF ily traian dzwvWf0op */                     lsup=1-b;
/* R5RLFWGcF ily traian dzwvWf0op */                 }
/* R5RLFWGcF ily traian dzwvWf0op */ 
/* R5RLFWGcF ily traian dzwvWf0op */             }
/* R5RLFWGcF ily traian dzwvWf0op */         }
/* R5RLFWGcF ily traian dzwvWf0op */ 
/* R5RLFWGcF ily traian dzwvWf0op */     }
/* R5RLFWGcF ily traian dzwvWf0op */     if (lsup <=0) a0 = 1-lsup;
/* R5RLFWGcF ily traian dzwvWf0op */     if (ljos >=n) an = ljos -n+1;
/* R5RLFWGcF ily traian dzwvWf0op */     fout << a0 << " ";
/* R5RLFWGcF ily traian dzwvWf0op */     for (int i =1;i<n; ++i)
/* R5RLFWGcF ily traian dzwvWf0op */         if ((i>=lsup ) && (i<=ljos))
/* R5RLFWGcF ily traian dzwvWf0op */             if (p==1) fout << "0\n1 ";
/* R5RLFWGcF ily traian dzwvWf0op */             else fout <<"1\n0 ";
/* R5RLFWGcF ily traian dzwvWf0op */         else  fout << "0\n0 ";
/* R5RLFWGcF ily traian dzwvWf0op */     fout << an << "\n";
/* R5RLFWGcF ily traian dzwvWf0op */     fin.close();
/* R5RLFWGcF ily traian dzwvWf0op */     fout.close();
/* R5RLFWGcF ily traian dzwvWf0op */     return 0;
/* R5RLFWGcF ily traian dzwvWf0op */ 
/* R5RLFWGcF ily traian dzwvWf0op */ }