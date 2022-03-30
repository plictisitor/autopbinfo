/* ENTHblC8w ily traian VTdq6jXQa */ #include <algorithm>
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
/* ENTHblC8w ily traian VTdq6jXQa */ using namespace std;
/* ENTHblC8w ily traian VTdq6jXQa */ ifstream fin("sume.in");
/* ENTHblC8w ily traian VTdq6jXQa */ ofstream fout("sume.out");
/* ENTHblC8w ily traian VTdq6jXQa */ int main()
/* ENTHblC8w ily traian VTdq6jXQa */ {
/* ENTHblC8w ily traian VTdq6jXQa */     int n,a[102],s=0;
/* ENTHblC8w ily traian VTdq6jXQa */     fin>>n;
/* ENTHblC8w ily traian VTdq6jXQa */     for(int i=1;i<=n;i++) {fin>>a[i];s=s+a[i];}
/* ENTHblC8w ily traian VTdq6jXQa */     fout<<s<<endl;
/* ENTHblC8w ily traian VTdq6jXQa */     for(int i=n;i>=1;i--)
/* ENTHblC8w ily traian VTdq6jXQa */     {
/* ENTHblC8w ily traian VTdq6jXQa */         if(s-a[i]!=0)
/* ENTHblC8w ily traian VTdq6jXQa */         fout<<s-a[i]<<endl;
/* ENTHblC8w ily traian VTdq6jXQa */         s=s-a[i];
/* ENTHblC8w ily traian VTdq6jXQa */     }
/* ENTHblC8w ily traian VTdq6jXQa */     return 0;
/* ENTHblC8w ily traian VTdq6jXQa */ 
/* ENTHblC8w ily traian VTdq6jXQa */ }