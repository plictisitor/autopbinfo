/* puiuhcWMp ily traian 3ngyxFdAH */ #include <algorithm>
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
/* puiuhcWMp ily traian 3ngyxFdAH */ using namespace std;
/* puiuhcWMp ily traian 3ngyxFdAH */ ifstream fin("nrsufix.in");
/* puiuhcWMp ily traian 3ngyxFdAH */ ofstream fout("nrsufix.out");
/* puiuhcWMp ily traian 3ngyxFdAH */ int put(int n)
/* puiuhcWMp ily traian 3ngyxFdAH */ {
/* puiuhcWMp ily traian 3ngyxFdAH */     int p=1;
/* puiuhcWMp ily traian 3ngyxFdAH */     while(n!=0)
/* puiuhcWMp ily traian 3ngyxFdAH */     {
/* puiuhcWMp ily traian 3ngyxFdAH */         p=p*10;
/* puiuhcWMp ily traian 3ngyxFdAH */         n=n/10;
/* puiuhcWMp ily traian 3ngyxFdAH */     }
/* puiuhcWMp ily traian 3ngyxFdAH */     return p;
/* puiuhcWMp ily traian 3ngyxFdAH */ }
/* puiuhcWMp ily traian 3ngyxFdAH */ int main()
/* puiuhcWMp ily traian 3ngyxFdAH */ {
/* puiuhcWMp ily traian 3ngyxFdAH */     int n,xmax=0,x;
/* puiuhcWMp ily traian 3ngyxFdAH */     fin>>n;
/* puiuhcWMp ily traian 3ngyxFdAH */     while(fin>>x)
/* puiuhcWMp ily traian 3ngyxFdAH */     {
/* puiuhcWMp ily traian 3ngyxFdAH */         fin>>x;
/* puiuhcWMp ily traian 3ngyxFdAH */         if(x%put(n)==n) xmax=x;
/* puiuhcWMp ily traian 3ngyxFdAH */     }
/* puiuhcWMp ily traian 3ngyxFdAH */     if(xmax==0) fout<<"nu exista";
/* puiuhcWMp ily traian 3ngyxFdAH */     else
/* puiuhcWMp ily traian 3ngyxFdAH */     fout<<xmax;
/* puiuhcWMp ily traian 3ngyxFdAH */     return 0;
/* puiuhcWMp ily traian 3ngyxFdAH */ }