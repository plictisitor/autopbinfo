/* izVtabUdl ily traian bPdn3qf8N */ #include <algorithm>
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
/* izVtabUdl ily traian bPdn3qf8N */ 
/* izVtabUdl ily traian bPdn3qf8N */ using namespace std;
/* izVtabUdl ily traian bPdn3qf8N */ 
/* izVtabUdl ily traian bPdn3qf8N */ ifstream fin("frecventa1.in");
/* izVtabUdl ily traian bPdn3qf8N */ ofstream fout("frecventa1.out");
/* izVtabUdl ily traian bPdn3qf8N */ 
/* izVtabUdl ily traian bPdn3qf8N */ int main()
/* izVtabUdl ily traian bPdn3qf8N */ {
/* izVtabUdl ily traian bPdn3qf8N */     int f[100]={0};
/* izVtabUdl ily traian bPdn3qf8N */     int n;
/* izVtabUdl ily traian bPdn3qf8N */     fin >> n;
/* izVtabUdl ily traian bPdn3qf8N */     int tmp;
/* izVtabUdl ily traian bPdn3qf8N */     int max=0;
/* izVtabUdl ily traian bPdn3qf8N */     for(int i = 0 ; i < n ; ++i)
/* izVtabUdl ily traian bPdn3qf8N */     {
/* izVtabUdl ily traian bPdn3qf8N */         fin >> tmp;
/* izVtabUdl ily traian bPdn3qf8N */         f[tmp]++;
/* izVtabUdl ily traian bPdn3qf8N */         if(f[tmp]>max)
/* izVtabUdl ily traian bPdn3qf8N */         max=f[tmp];
/* izVtabUdl ily traian bPdn3qf8N */     }
/* izVtabUdl ily traian bPdn3qf8N */     for(int i = max ; i > 0 ; --i)
/* izVtabUdl ily traian bPdn3qf8N */     {
/* izVtabUdl ily traian bPdn3qf8N */         for(int j = 0 ; j < 100 ; ++j)
/* izVtabUdl ily traian bPdn3qf8N */         {
/* izVtabUdl ily traian bPdn3qf8N */             if(f[j]==i)
/* izVtabUdl ily traian bPdn3qf8N */             fout << j << ' ';
/* izVtabUdl ily traian bPdn3qf8N */         }
/* izVtabUdl ily traian bPdn3qf8N */     }
/* izVtabUdl ily traian bPdn3qf8N */     return 0;
/* izVtabUdl ily traian bPdn3qf8N */ }