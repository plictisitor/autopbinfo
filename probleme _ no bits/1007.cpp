/* FglpRhEHs ily traian a4gInqS7T */ #include <algorithm>
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
/* FglpRhEHs ily traian a4gInqS7T */ using namespace std;
/* FglpRhEHs ily traian a4gInqS7T */ ifstream fin("matrice7.in");
/* FglpRhEHs ily traian a4gInqS7T */ ofstream fout("matrice7.out");
/* FglpRhEHs ily traian a4gInqS7T */ int main()
/* FglpRhEHs ily traian a4gInqS7T */ {
/* FglpRhEHs ily traian a4gInqS7T */     int n, m;
/* FglpRhEHs ily traian a4gInqS7T */     fin >> n >> m;
/* FglpRhEHs ily traian a4gInqS7T */     int a[100][100];
/* FglpRhEHs ily traian a4gInqS7T */     int mini = 1000000001 , maxi=0;
/* FglpRhEHs ily traian a4gInqS7T */     for(int i = 0 ; i < n ; ++i)
/* FglpRhEHs ily traian a4gInqS7T */     {
/* FglpRhEHs ily traian a4gInqS7T */         for(int j = 0 ; j < m ; ++j)
/* FglpRhEHs ily traian a4gInqS7T */         {
/* FglpRhEHs ily traian a4gInqS7T */             fin >> a[i][j];
/* FglpRhEHs ily traian a4gInqS7T */             if(a[i][j]>maxi)
/* FglpRhEHs ily traian a4gInqS7T */                 maxi=a[i][j];
/* FglpRhEHs ily traian a4gInqS7T */         }
/* FglpRhEHs ily traian a4gInqS7T */     }
/* FglpRhEHs ily traian a4gInqS7T */     for(int i = 0 ; i < n ; ++i)
/* FglpRhEHs ily traian a4gInqS7T */     {
/* FglpRhEHs ily traian a4gInqS7T */         for(int j = 0 ; j < m ; ++j)
/* FglpRhEHs ily traian a4gInqS7T */         {
/* FglpRhEHs ily traian a4gInqS7T */             if(a[i][j]==maxi)
/* FglpRhEHs ily traian a4gInqS7T */             {
/* FglpRhEHs ily traian a4gInqS7T */                 mini = 1000000001;
/* FglpRhEHs ily traian a4gInqS7T */                 for(int k = 0 ; k < n ; ++k)
/* FglpRhEHs ily traian a4gInqS7T */                 {
/* FglpRhEHs ily traian a4gInqS7T */                     if(a[k][j] < mini)
/* FglpRhEHs ily traian a4gInqS7T */                         mini = a[k][j];
/* FglpRhEHs ily traian a4gInqS7T */                 }
/* FglpRhEHs ily traian a4gInqS7T */                 fout << mini << " ";
/* FglpRhEHs ily traian a4gInqS7T */             }
/* FglpRhEHs ily traian a4gInqS7T */             else fout << a[i][j] << " ";
/* FglpRhEHs ily traian a4gInqS7T */         }
/* FglpRhEHs ily traian a4gInqS7T */         fout << endl;
/* FglpRhEHs ily traian a4gInqS7T */     }
/* FglpRhEHs ily traian a4gInqS7T */     return 0;    
/* FglpRhEHs ily traian a4gInqS7T */ }