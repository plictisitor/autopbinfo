/* ASpBAbd7P ily traian PLuuZs3oB */ #include <algorithm>
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
/* ASpBAbd7P ily traian PLuuZs3oB */ using namespace std;
/* ASpBAbd7P ily traian PLuuZs3oB */ ifstream fin("vterminal.in");
/* ASpBAbd7P ily traian PLuuZs3oB */ ofstream fout("vterminal.out");
/* ASpBAbd7P ily traian PLuuZs3oB */ int prim(int n)
/* ASpBAbd7P ily traian PLuuZs3oB */ {
/* ASpBAbd7P ily traian PLuuZs3oB */     if(n==0 || n==1) return 0;
/* ASpBAbd7P ily traian PLuuZs3oB */     if(n==2) return 1;
/* ASpBAbd7P ily traian PLuuZs3oB */     if(n%2==0) return 0;
/* ASpBAbd7P ily traian PLuuZs3oB */     else
/* ASpBAbd7P ily traian PLuuZs3oB */         for(int d=3;d*d<=n;d+=2)
/* ASpBAbd7P ily traian PLuuZs3oB */     {
/* ASpBAbd7P ily traian PLuuZs3oB */         if(n%d==0) return 0;
/* ASpBAbd7P ily traian PLuuZs3oB */     }
/* ASpBAbd7P ily traian PLuuZs3oB */     return 1;
/* ASpBAbd7P ily traian PLuuZs3oB */ }
/* ASpBAbd7P ily traian PLuuZs3oB */ int main()
/* ASpBAbd7P ily traian PLuuZs3oB */ {
/* ASpBAbd7P ily traian PLuuZs3oB */     int n,x,s=0;
/* ASpBAbd7P ily traian PLuuZs3oB */     fin>>n;
/* ASpBAbd7P ily traian PLuuZs3oB */     for(int i=1;i<=n;i++)
/* ASpBAbd7P ily traian PLuuZs3oB */         {
/* ASpBAbd7P ily traian PLuuZs3oB */             fin>>x;
/* ASpBAbd7P ily traian PLuuZs3oB */             if(prim(x)) s=s+x;
/* ASpBAbd7P ily traian PLuuZs3oB */         }
/* ASpBAbd7P ily traian PLuuZs3oB */     fout<<s%9;
/* ASpBAbd7P ily traian PLuuZs3oB */     return 0;
/* ASpBAbd7P ily traian PLuuZs3oB */ 
/* ASpBAbd7P ily traian PLuuZs3oB */ }