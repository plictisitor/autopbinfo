/* kAxID6eaZ ily traian 9S5qgiH5U */ #include <algorithm>
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
/* kAxID6eaZ ily traian 9S5qgiH5U */ using namespace std;
/* kAxID6eaZ ily traian 9S5qgiH5U */ 
/* kAxID6eaZ ily traian 9S5qgiH5U */ ifstream fin("maxcif.in");
/* kAxID6eaZ ily traian 9S5qgiH5U */ ofstream fout("maxcif.out");
/* kAxID6eaZ ily traian 9S5qgiH5U */ 
/* kAxID6eaZ ily traian 9S5qgiH5U */ int main()
/* kAxID6eaZ ily traian 9S5qgiH5U */ {
/* kAxID6eaZ ily traian 9S5qgiH5U */     int f[10]={0};
/* kAxID6eaZ ily traian 9S5qgiH5U */     int max=0;
/* kAxID6eaZ ily traian 9S5qgiH5U */     int tmp;
/* kAxID6eaZ ily traian 9S5qgiH5U */     while(fin >> tmp)
/* kAxID6eaZ ily traian 9S5qgiH5U */     {
/* kAxID6eaZ ily traian 9S5qgiH5U */         f[tmp]++;
/* kAxID6eaZ ily traian 9S5qgiH5U */         if(f[tmp]>max)
/* kAxID6eaZ ily traian 9S5qgiH5U */         max=f[tmp];
/* kAxID6eaZ ily traian 9S5qgiH5U */     }
/* kAxID6eaZ ily traian 9S5qgiH5U */     for(int i = 0 ; i <= 9 ; ++i)
/* kAxID6eaZ ily traian 9S5qgiH5U */     {
/* kAxID6eaZ ily traian 9S5qgiH5U */         if(f[i]==max)
/* kAxID6eaZ ily traian 9S5qgiH5U */         fout << i << ' ';
/* kAxID6eaZ ily traian 9S5qgiH5U */     }
/* kAxID6eaZ ily traian 9S5qgiH5U */     return 0;
/* kAxID6eaZ ily traian 9S5qgiH5U */ }