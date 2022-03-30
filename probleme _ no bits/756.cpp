/* GIcdyNU17 ily traian SmMMjH3dG */ #include <algorithm>
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
/* GIcdyNU17 ily traian SmMMjH3dG */ 
/* GIcdyNU17 ily traian SmMMjH3dG */ using namespace std;
/* GIcdyNU17 ily traian SmMMjH3dG */ 
/* GIcdyNU17 ily traian SmMMjH3dG */ ifstream cin("nrnod.in");
/* GIcdyNU17 ily traian SmMMjH3dG */ ofstream cout("nrnod.out");
/* GIcdyNU17 ily traian SmMMjH3dG */ 
/* GIcdyNU17 ily traian SmMMjH3dG */ int n, c;
/* GIcdyNU17 ily traian SmMMjH3dG */ bool ok = false;
/* GIcdyNU17 ily traian SmMMjH3dG */ 
/* GIcdyNU17 ily traian SmMMjH3dG */ void citire(int nod, int val){
/* GIcdyNU17 ily traian SmMMjH3dG */     int x;
/* GIcdyNU17 ily traian SmMMjH3dG */     cin >> x;
/* GIcdyNU17 ily traian SmMMjH3dG */     if(nod % 2 == 0){
/* GIcdyNU17 ily traian SmMMjH3dG */         if(x == 0)
/* GIcdyNU17 ily traian SmMMjH3dG */             ok = true;
/* GIcdyNU17 ily traian SmMMjH3dG */         else
/* GIcdyNU17 ily traian SmMMjH3dG */             ok = false;
/* GIcdyNU17 ily traian SmMMjH3dG */     }
/* GIcdyNU17 ily traian SmMMjH3dG */     else{
/* GIcdyNU17 ily traian SmMMjH3dG */         if((x != 0 && ok) || (x==0 && !ok)){
/* GIcdyNU17 ily traian SmMMjH3dG */             ok = false;
/* GIcdyNU17 ily traian SmMMjH3dG */             c++;
/* GIcdyNU17 ily traian SmMMjH3dG */         }
/* GIcdyNU17 ily traian SmMMjH3dG */         else{
/* GIcdyNU17 ily traian SmMMjH3dG */             ok = false;
/* GIcdyNU17 ily traian SmMMjH3dG */         }
/* GIcdyNU17 ily traian SmMMjH3dG */     }
/* GIcdyNU17 ily traian SmMMjH3dG */     if(x){
/* GIcdyNU17 ily traian SmMMjH3dG */         citire(nod * 2, x);
/* GIcdyNU17 ily traian SmMMjH3dG */         citire(nod * 2 + 1, x);
/* GIcdyNU17 ily traian SmMMjH3dG */     }
/* GIcdyNU17 ily traian SmMMjH3dG */ }
/* GIcdyNU17 ily traian SmMMjH3dG */ 
/* GIcdyNU17 ily traian SmMMjH3dG */ int main(){
/* GIcdyNU17 ily traian SmMMjH3dG */     citire(1, 0);
/* GIcdyNU17 ily traian SmMMjH3dG */     cout << c;
/* GIcdyNU17 ily traian SmMMjH3dG */     return 0;
/* GIcdyNU17 ily traian SmMMjH3dG */ }