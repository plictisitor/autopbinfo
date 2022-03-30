/* RKACXmevO ily traian xGTHyDhHs */ #include <algorithm>
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
/* RKACXmevO ily traian xGTHyDhHs */ using namespace std;
/* RKACXmevO ily traian xGTHyDhHs */ 
/* RKACXmevO ily traian xGTHyDhHs */ ifstream fin ("devt.in");
/* RKACXmevO ily traian xGTHyDhHs */ ofstream fout ("devt.out");
/* RKACXmevO ily traian xGTHyDhHs */ 
/* RKACXmevO ily traian xGTHyDhHs */ int x[100001];
/* RKACXmevO ily traian xGTHyDhHs */ int s[100001];
/* RKACXmevO ily traian xGTHyDhHs */ 
/* RKACXmevO ily traian xGTHyDhHs */ int main ()
/* RKACXmevO ily traian xGTHyDhHs */ {
/* RKACXmevO ily traian xGTHyDhHs */     int n,q,a,b;
/* RKACXmevO ily traian xGTHyDhHs */     x[1]=1;
/* RKACXmevO ily traian xGTHyDhHs */     fin >> n;
/* RKACXmevO ily traian xGTHyDhHs */     for (int i=2;i<=n;++i)
/* RKACXmevO ily traian xGTHyDhHs */         if(x[i]==0)
/* RKACXmevO ily traian xGTHyDhHs */             for (int j=i+i;j<=n;j=j+i)
/* RKACXmevO ily traian xGTHyDhHs */                 x[j]=1;
/* RKACXmevO ily traian xGTHyDhHs */     for (int i=1;i<=n;++i)
/* RKACXmevO ily traian xGTHyDhHs */         s[i]=s[i-1]+x[i];
/* RKACXmevO ily traian xGTHyDhHs */     fin >> q;
/* RKACXmevO ily traian xGTHyDhHs */     for (int i=1;i<=q;++i)
/* RKACXmevO ily traian xGTHyDhHs */     {
/* RKACXmevO ily traian xGTHyDhHs */         fin>>a>>b;
/* RKACXmevO ily traian xGTHyDhHs */         fout <<s[b]-s[a-1]<< endl;
/* RKACXmevO ily traian xGTHyDhHs */     }
/* RKACXmevO ily traian xGTHyDhHs */     
/* RKACXmevO ily traian xGTHyDhHs */     fin.close();
/* RKACXmevO ily traian xGTHyDhHs */     fout.close();
/* RKACXmevO ily traian xGTHyDhHs */     
/* RKACXmevO ily traian xGTHyDhHs */     return 0;
/* RKACXmevO ily traian xGTHyDhHs */ }