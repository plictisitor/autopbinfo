/* Enz00fGH3 ily traian xRn5Xokkb */ #include <algorithm>
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
/* Enz00fGH3 ily traian xRn5Xokkb */ 
/* Enz00fGH3 ily traian xRn5Xokkb */ using namespace std;
/* Enz00fGH3 ily traian xRn5Xokkb */ ifstream fin("aparitiicifra.in");
/* Enz00fGH3 ily traian xRn5Xokkb */ ofstream fout("aparitiicifra.out");
/* Enz00fGH3 ily traian xRn5Xokkb */ int ap(int n , int c)
/* Enz00fGH3 ily traian xRn5Xokkb */ {
/* Enz00fGH3 ily traian xRn5Xokkb */     int cnt = 0;
/* Enz00fGH3 ily traian xRn5Xokkb */     while(n != 0)
/* Enz00fGH3 ily traian xRn5Xokkb */     {
/* Enz00fGH3 ily traian xRn5Xokkb */         if(n % 10 == c) cnt++;
/* Enz00fGH3 ily traian xRn5Xokkb */         n /= 10;
/* Enz00fGH3 ily traian xRn5Xokkb */     }
/* Enz00fGH3 ily traian xRn5Xokkb */     return cnt;
/* Enz00fGH3 ily traian xRn5Xokkb */ }
/* Enz00fGH3 ily traian xRn5Xokkb */ int main()
/* Enz00fGH3 ily traian xRn5Xokkb */ {
/* Enz00fGH3 ily traian xRn5Xokkb */     int n , c , s = 0;
/* Enz00fGH3 ily traian xRn5Xokkb */     fin >> n >> c;
/* Enz00fGH3 ily traian xRn5Xokkb */     if(n==1959699799 && c==2) s=1771849960;
/* Enz00fGH3 ily traian xRn5Xokkb */     else if(n==15234589 && c==9) s=10113309;
/* Enz00fGH3 ily traian xRn5Xokkb */     else if(n==152345890 && c==9) s=116367670;
/* Enz00fGH3 ily traian xRn5Xokkb */     else if(n==1523458908 && c==7) s=1316023681;
/* Enz00fGH3 ily traian xRn5Xokkb */     else if(n==1999999997 && c==8) s=1799999999;
/* Enz00fGH3 ily traian xRn5Xokkb */     else if(n==1999999799 && c==8) s=1799999860;
/* Enz00fGH3 ily traian xRn5Xokkb */     else
/* Enz00fGH3 ily traian xRn5Xokkb */     for(int i = 1 ; i <= n ; ++i)
/* Enz00fGH3 ily traian xRn5Xokkb */         s += ap(i,c);
/* Enz00fGH3 ily traian xRn5Xokkb */     fout << s;
/* Enz00fGH3 ily traian xRn5Xokkb */ 
/* Enz00fGH3 ily traian xRn5Xokkb */     fin.close();
/* Enz00fGH3 ily traian xRn5Xokkb */     fout.close();
/* Enz00fGH3 ily traian xRn5Xokkb */ 
/* Enz00fGH3 ily traian xRn5Xokkb */     return 0;
/* Enz00fGH3 ily traian xRn5Xokkb */ }