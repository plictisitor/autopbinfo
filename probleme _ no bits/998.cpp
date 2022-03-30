/* w6PaDJ3gU ily traian uaj7bahoV */ #include <algorithm>
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
/* w6PaDJ3gU ily traian uaj7bahoV */ using namespace std;
/* w6PaDJ3gU ily traian uaj7bahoV */ ifstream fin("matrice6.in");
/* w6PaDJ3gU ily traian uaj7bahoV */ ofstream fout("matrice6.out");
/* w6PaDJ3gU ily traian uaj7bahoV */ int main()
/* w6PaDJ3gU ily traian uaj7bahoV */ {
/* w6PaDJ3gU ily traian uaj7bahoV */     int n ,  maxi = -1 , mini = 1000000001 , a[101][101];
/* w6PaDJ3gU ily traian uaj7bahoV */     fin >> n;
/* w6PaDJ3gU ily traian uaj7bahoV */     for(int i = 0  ; i < n ;++i)
/* w6PaDJ3gU ily traian uaj7bahoV */     {
/* w6PaDJ3gU ily traian uaj7bahoV */         for(int j = 0 ; j < n ;++j)
/* w6PaDJ3gU ily traian uaj7bahoV */         {
/* w6PaDJ3gU ily traian uaj7bahoV */             fin >> a[i][j];
/* w6PaDJ3gU ily traian uaj7bahoV */             if(a[i][j] > maxi) maxi = a[i][j];
/* w6PaDJ3gU ily traian uaj7bahoV */             if(a[i][j] < mini) mini = a[i][j];
/* w6PaDJ3gU ily traian uaj7bahoV */         }
/* w6PaDJ3gU ily traian uaj7bahoV */     }
/* w6PaDJ3gU ily traian uaj7bahoV */     for(int i = 0  ; i < n ;++i)
/* w6PaDJ3gU ily traian uaj7bahoV */     {
/* w6PaDJ3gU ily traian uaj7bahoV */         int c = 0;
/* w6PaDJ3gU ily traian uaj7bahoV */         for(int j = 0 ; j < n ;++j)
/* w6PaDJ3gU ily traian uaj7bahoV */         {
/* w6PaDJ3gU ily traian uaj7bahoV */             if(a[i][j] == maxi) c++;
/* w6PaDJ3gU ily traian uaj7bahoV */         }
/* w6PaDJ3gU ily traian uaj7bahoV */         if(c != 0) for(int j = 0 ; j < n ;++j)
/* w6PaDJ3gU ily traian uaj7bahoV */             fout << a[i][j] + mini << " ";
/* w6PaDJ3gU ily traian uaj7bahoV */         else for(int j = 0 ; j < n ;++j)
/* w6PaDJ3gU ily traian uaj7bahoV */             fout << a[i][j] << " ";
/* w6PaDJ3gU ily traian uaj7bahoV */             fout << endl;
/* w6PaDJ3gU ily traian uaj7bahoV */     }
/* w6PaDJ3gU ily traian uaj7bahoV */     return 0;
/* w6PaDJ3gU ily traian uaj7bahoV */ 
/* w6PaDJ3gU ily traian uaj7bahoV */ }