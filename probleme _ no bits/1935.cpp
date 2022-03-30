/* NfINasNYS ily traian uJ6GGnQis */ #include <algorithm>
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
/* NfINasNYS ily traian uJ6GGnQis */ using namespace std;
/* NfINasNYS ily traian uJ6GGnQis */ ifstream fin("plimbare.in");
/* NfINasNYS ily traian uJ6GGnQis */ ofstream fout("plimbare.out");
/* NfINasNYS ily traian uJ6GGnQis */ int ogl(int n)
/* NfINasNYS ily traian uJ6GGnQis */ {
/* NfINasNYS ily traian uJ6GGnQis */     int ogl=0;
/* NfINasNYS ily traian uJ6GGnQis */     int x=n;
/* NfINasNYS ily traian uJ6GGnQis */     while(n!=0)
/* NfINasNYS ily traian uJ6GGnQis */     {
/* NfINasNYS ily traian uJ6GGnQis */         ogl=ogl*10+n%10;
/* NfINasNYS ily traian uJ6GGnQis */         n=n/10;
/* NfINasNYS ily traian uJ6GGnQis */     }
/* NfINasNYS ily traian uJ6GGnQis */     if(x==ogl) return 1;
/* NfINasNYS ily traian uJ6GGnQis */     else return 0;
/* NfINasNYS ily traian uJ6GGnQis */ }
/* NfINasNYS ily traian uJ6GGnQis */ int main()
/* NfINasNYS ily traian uJ6GGnQis */ {
/* NfINasNYS ily traian uJ6GGnQis */     int n,a[7001],cnt=0;
/* NfINasNYS ily traian uJ6GGnQis */     fin>>n;
/* NfINasNYS ily traian uJ6GGnQis */     for(int i=1;i<=n;i++) fin>> a[i];
/* NfINasNYS ily traian uJ6GGnQis */     for(int i=1;i<=n;i++)
/* NfINasNYS ily traian uJ6GGnQis */     {
/* NfINasNYS ily traian uJ6GGnQis */         if(ogl(a[i])==1) cnt++;
/* NfINasNYS ily traian uJ6GGnQis */     }
/* NfINasNYS ily traian uJ6GGnQis */     fout<<cnt;
/* NfINasNYS ily traian uJ6GGnQis */     return 0;
/* NfINasNYS ily traian uJ6GGnQis */ }