/* E97DgG13e ily traian TqhicL6uo */ #include <algorithm>
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
/* E97DgG13e ily traian TqhicL6uo */ using namespace std;
/* E97DgG13e ily traian TqhicL6uo */ ifstream fin("kprim.in");
/* E97DgG13e ily traian TqhicL6uo */ ofstream fout("kprim.out");
/* E97DgG13e ily traian TqhicL6uo */ unsigned long long prim (unsigned long long n)
/* E97DgG13e ily traian TqhicL6uo */ {
/* E97DgG13e ily traian TqhicL6uo */     if (n==0 || n==1) return 0;
/* E97DgG13e ily traian TqhicL6uo */     if(n==2) return 1;
/* E97DgG13e ily traian TqhicL6uo */     if(n%2==0) return 0;
/* E97DgG13e ily traian TqhicL6uo */     for (unsigned int i=3;i*i<=n;i += 2)
/* E97DgG13e ily traian TqhicL6uo */         if(n%i==0) return 0;
/* E97DgG13e ily traian TqhicL6uo */     return 1;
/* E97DgG13e ily traian TqhicL6uo */ }
/* E97DgG13e ily traian TqhicL6uo */ int main()
/* E97DgG13e ily traian TqhicL6uo */ {
/* E97DgG13e ily traian TqhicL6uo */      unsigned long long n,x,r;
/* E97DgG13e ily traian TqhicL6uo */      fin>>n;
/* E97DgG13e ily traian TqhicL6uo */      if(n==1) fout<<9;
/* E97DgG13e ily traian TqhicL6uo */      else
/* E97DgG13e ily traian TqhicL6uo */      {x=3;
/* E97DgG13e ily traian TqhicL6uo */      while(n>0)
/* E97DgG13e ily traian TqhicL6uo */      {
/* E97DgG13e ily traian TqhicL6uo */         if(prim(x))
/* E97DgG13e ily traian TqhicL6uo */         {
/* E97DgG13e ily traian TqhicL6uo */             r=x;
/* E97DgG13e ily traian TqhicL6uo */             n--;
/* E97DgG13e ily traian TqhicL6uo */         }
/* E97DgG13e ily traian TqhicL6uo */         x++;
/* E97DgG13e ily traian TqhicL6uo */      }
/* E97DgG13e ily traian TqhicL6uo */      unsigned long long p;
/* E97DgG13e ily traian TqhicL6uo */      p=r*r;
/* E97DgG13e ily traian TqhicL6uo */      fout<<p;
/* E97DgG13e ily traian TqhicL6uo */      }
/* E97DgG13e ily traian TqhicL6uo */     return 0;
/* E97DgG13e ily traian TqhicL6uo */ }