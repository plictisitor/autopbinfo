/* osQxXo3JM ily traian npGrEyLPK */ #include <algorithm>
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
/* osQxXo3JM ily traian npGrEyLPK */ using namespace std;
/* osQxXo3JM ily traian npGrEyLPK */ 
/* osQxXo3JM ily traian npGrEyLPK */ ifstream fin("nrlipsa2.in");
/* osQxXo3JM ily traian npGrEyLPK */ ofstream fout("nrlipsa2.out");
/* osQxXo3JM ily traian npGrEyLPK */ 
/* osQxXo3JM ily traian npGrEyLPK */ int main()
/* osQxXo3JM ily traian npGrEyLPK */ {
/* osQxXo3JM ily traian npGrEyLPK */     int f[150]={0} , v[150]={0};
/* osQxXo3JM ily traian npGrEyLPK */     int x;
/* osQxXo3JM ily traian npGrEyLPK */     int ok=0;
/* osQxXo3JM ily traian npGrEyLPK */     while(fin >> x)
/* osQxXo3JM ily traian npGrEyLPK */     {
/* osQxXo3JM ily traian npGrEyLPK */         if(x<0 && x>=-100)
/* osQxXo3JM ily traian npGrEyLPK */             f[x*(-1)]++;
/* osQxXo3JM ily traian npGrEyLPK */         else if(x<=100 && x>=0)
/* osQxXo3JM ily traian npGrEyLPK */             v[x]++;
/* osQxXo3JM ily traian npGrEyLPK */     }
/* osQxXo3JM ily traian npGrEyLPK */     for(int i = 100 ; i > 0 ; --i)
/* osQxXo3JM ily traian npGrEyLPK */     {
/* osQxXo3JM ily traian npGrEyLPK */         if(f[i]==0)
/* osQxXo3JM ily traian npGrEyLPK */         {
/* osQxXo3JM ily traian npGrEyLPK */             fout <<i*(-1);
/* osQxXo3JM ily traian npGrEyLPK */             ok++;
/* osQxXo3JM ily traian npGrEyLPK */             break;
/* osQxXo3JM ily traian npGrEyLPK */         }
/* osQxXo3JM ily traian npGrEyLPK */     }
/* osQxXo3JM ily traian npGrEyLPK */     if(ok==0)
/* osQxXo3JM ily traian npGrEyLPK */     {
/* osQxXo3JM ily traian npGrEyLPK */         for(int i = 0 ; i <= 100 ; i++)
/* osQxXo3JM ily traian npGrEyLPK */         {
/* osQxXo3JM ily traian npGrEyLPK */             if(v[i]==0)
/* osQxXo3JM ily traian npGrEyLPK */             {
/* osQxXo3JM ily traian npGrEyLPK */                 fout << i;
/* osQxXo3JM ily traian npGrEyLPK */                 ok++;
/* osQxXo3JM ily traian npGrEyLPK */                 break;
/* osQxXo3JM ily traian npGrEyLPK */             }
/* osQxXo3JM ily traian npGrEyLPK */         }
/* osQxXo3JM ily traian npGrEyLPK */     }
/* osQxXo3JM ily traian npGrEyLPK */     if(ok==0)
/* osQxXo3JM ily traian npGrEyLPK */         fout << "nu exista";
/* osQxXo3JM ily traian npGrEyLPK */     
/* osQxXo3JM ily traian npGrEyLPK */     return 0;
/* osQxXo3JM ily traian npGrEyLPK */ }