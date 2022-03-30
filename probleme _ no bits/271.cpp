/* 7sNPXu9a2 ily traian z9adyihyV */ #include <algorithm>
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
/* 7sNPXu9a2 ily traian z9adyihyV */ using namespace std;
/* 7sNPXu9a2 ily traian z9adyihyV */ ifstream fin("ssume.in");
/* 7sNPXu9a2 ily traian z9adyihyV */ ofstream fout("ssume.out");
/* 7sNPXu9a2 ily traian z9adyihyV */ int main()
/* 7sNPXu9a2 ily traian z9adyihyV */ {
/* 7sNPXu9a2 ily traian z9adyihyV */     int n , x , i = 0 , j , k , c = 0 , ok = 0;
/* 7sNPXu9a2 ily traian z9adyihyV */     fin >> n;
/* 7sNPXu9a2 ily traian z9adyihyV */     int v[n];
/* 7sNPXu9a2 ily traian z9adyihyV */     while(fin >> x)
/* 7sNPXu9a2 ily traian z9adyihyV */     {
/* 7sNPXu9a2 ily traian z9adyihyV */         v[i]=x;
/* 7sNPXu9a2 ily traian z9adyihyV */         i++;
/* 7sNPXu9a2 ily traian z9adyihyV */     }
/* 7sNPXu9a2 ily traian z9adyihyV */     for(i = 0 ; i< n ; i++)
/* 7sNPXu9a2 ily traian z9adyihyV */     {
/* 7sNPXu9a2 ily traian z9adyihyV */         ok = 0;
/* 7sNPXu9a2 ily traian z9adyihyV */         for(j = 0 ; j < n ; j++)
/* 7sNPXu9a2 ily traian z9adyihyV */             if(i != j)
/* 7sNPXu9a2 ily traian z9adyihyV */             {
/* 7sNPXu9a2 ily traian z9adyihyV */             for(k = j + 1 ; k < n ; k++)
/* 7sNPXu9a2 ily traian z9adyihyV */               if(v[i] == v[j] + v[k] && !ok)
/* 7sNPXu9a2 ily traian z9adyihyV */                {
/* 7sNPXu9a2 ily traian z9adyihyV */                  c++;
/* 7sNPXu9a2 ily traian z9adyihyV */                  ok = 1;
/* 7sNPXu9a2 ily traian z9adyihyV */                }
/* 7sNPXu9a2 ily traian z9adyihyV */             }
/* 7sNPXu9a2 ily traian z9adyihyV */     }
/* 7sNPXu9a2 ily traian z9adyihyV */     fout << c;
/* 7sNPXu9a2 ily traian z9adyihyV */ 
/* 7sNPXu9a2 ily traian z9adyihyV */     fin.close();
/* 7sNPXu9a2 ily traian z9adyihyV */     fout.close();
/* 7sNPXu9a2 ily traian z9adyihyV */ 
/* 7sNPXu9a2 ily traian z9adyihyV */     return 0;
/* 7sNPXu9a2 ily traian z9adyihyV */ }