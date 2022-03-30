/* X4dyAPpHS ily traian gqravJAsz */ #include <algorithm>
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
/* X4dyAPpHS ily traian gqravJAsz */  
/* X4dyAPpHS ily traian gqravJAsz */ using namespace std; 
/* X4dyAPpHS ily traian gqravJAsz */ 
/* X4dyAPpHS ily traian gqravJAsz */ ifstream fin("ordsume.in"); 
/* X4dyAPpHS ily traian gqravJAsz */ ofstream fout("ordsume.out"); 
/* X4dyAPpHS ily traian gqravJAsz */  
/* X4dyAPpHS ily traian gqravJAsz */ int main()
/* X4dyAPpHS ily traian gqravJAsz */ { 
/* X4dyAPpHS ily traian gqravJAsz */     int n,m=0, a[101], s[10001];
/* X4dyAPpHS ily traian gqravJAsz */     fin >> n; 
/* X4dyAPpHS ily traian gqravJAsz */     for(int i=1;i<=n;++i) 
/* X4dyAPpHS ily traian gqravJAsz */         fin >> a[i];  
/* X4dyAPpHS ily traian gqravJAsz */     for(int i=1;i<n;++i) 
/* X4dyAPpHS ily traian gqravJAsz */         for(int j=i+1 ; j<=n ; j++) 
/* X4dyAPpHS ily traian gqravJAsz */         if(a[i]!=a[j]) 
/* X4dyAPpHS ily traian gqravJAsz */     { int gasit = 0; 
/* X4dyAPpHS ily traian gqravJAsz */      for(int k=1 ; k<=m && !gasit ; ++k) 
/* X4dyAPpHS ily traian gqravJAsz */          if(s[k] == a[i]+a[j]) 
/* X4dyAPpHS ily traian gqravJAsz */          gasit = 1; 
/* X4dyAPpHS ily traian gqravJAsz */          if(!gasit) s[++m] = a[i]+a[j]; 
/* X4dyAPpHS ily traian gqravJAsz */     } 
/* X4dyAPpHS ily traian gqravJAsz */     for(int i=1;i<m;++i) 
/* X4dyAPpHS ily traian gqravJAsz */         for(int j=i+1 ; j<=m ; ++j) 
/* X4dyAPpHS ily traian gqravJAsz */         if(s[i]>s[j])
/* X4dyAPpHS ily traian gqravJAsz */     { 
/* X4dyAPpHS ily traian gqravJAsz */         int aux = s[i]; 
/* X4dyAPpHS ily traian gqravJAsz */         s[i] = s[j]; 
/* X4dyAPpHS ily traian gqravJAsz */         s[j] = aux; 
/* X4dyAPpHS ily traian gqravJAsz */     } 
/* X4dyAPpHS ily traian gqravJAsz */     for(int i=1;i<=m;++i) 
/* X4dyAPpHS ily traian gqravJAsz */         fout << s[i] << " "; 
/* X4dyAPpHS ily traian gqravJAsz */     return 0; 
/* X4dyAPpHS ily traian gqravJAsz */ }