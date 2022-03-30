/* 5fwuyu40F ily traian 5cZ2JV5ov */ #include <algorithm>
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
/* 5fwuyu40F ily traian 5cZ2JV5ov */ using namespace std;
/* 5fwuyu40F ily traian 5cZ2JV5ov */ ifstream fin("exista.in");
/* 5fwuyu40F ily traian 5cZ2JV5ov */ ofstream fout("exista.out");
/* 5fwuyu40F ily traian 5cZ2JV5ov */ int main()
/* 5fwuyu40F ily traian 5cZ2JV5ov */ {
/* 5fwuyu40F ily traian 5cZ2JV5ov */     int k , n , m , a[12][12] , s = 0 , c = 0;
/* 5fwuyu40F ily traian 5cZ2JV5ov */     fin >> k >> n >> m;
/* 5fwuyu40F ily traian 5cZ2JV5ov */     for(int i = 0 ; i < n ; ++i)
/* 5fwuyu40F ily traian 5cZ2JV5ov */         for(int j = 0 ; j < m ; ++j)
/* 5fwuyu40F ily traian 5cZ2JV5ov */             fin >> a[i][j];
/* 5fwuyu40F ily traian 5cZ2JV5ov */     for(int j = 0 ; j < m ; ++j)
/* 5fwuyu40F ily traian 5cZ2JV5ov */     {
/* 5fwuyu40F ily traian 5cZ2JV5ov */         int cnt=0;
/* 5fwuyu40F ily traian 5cZ2JV5ov */         for (int i = 0 ; i < n ; ++i)
/* 5fwuyu40F ily traian 5cZ2JV5ov */         {
/* 5fwuyu40F ily traian 5cZ2JV5ov */             if(a[i][j]==k)
/* 5fwuyu40F ily traian 5cZ2JV5ov */             cnt++;
/* 5fwuyu40F ily traian 5cZ2JV5ov */         }
/* 5fwuyu40F ily traian 5cZ2JV5ov */         if(cnt!=0) {c++ ; s += j + 1;}
/* 5fwuyu40F ily traian 5cZ2JV5ov */     }
/* 5fwuyu40F ily traian 5cZ2JV5ov */     if(c==0) fout << "NU EXISTA";
/* 5fwuyu40F ily traian 5cZ2JV5ov */     else fout << s;
/* 5fwuyu40F ily traian 5cZ2JV5ov */     
/* 5fwuyu40F ily traian 5cZ2JV5ov */     fin.close();
/* 5fwuyu40F ily traian 5cZ2JV5ov */     fout.close();
/* 5fwuyu40F ily traian 5cZ2JV5ov */     
/* 5fwuyu40F ily traian 5cZ2JV5ov */     return 0;    
/* 5fwuyu40F ily traian 5cZ2JV5ov */ }