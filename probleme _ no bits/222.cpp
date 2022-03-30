/* oJjAif77D ily traian CZkhpTNNd */ #include <algorithm>
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
/* oJjAif77D ily traian CZkhpTNNd */ 
/* oJjAif77D ily traian CZkhpTNNd */ using namespace std;
/* oJjAif77D ily traian CZkhpTNNd */ ifstream fin("mincols.in");
/* oJjAif77D ily traian CZkhpTNNd */ ofstream fout("mincols.out");
/* oJjAif77D ily traian CZkhpTNNd */ int main()
/* oJjAif77D ily traian CZkhpTNNd */ {
/* oJjAif77D ily traian CZkhpTNNd */     int n , a[50][50] , ind = 0 , m , smax = -100001;
/* oJjAif77D ily traian CZkhpTNNd */     fin >> n;
/* oJjAif77D ily traian CZkhpTNNd */     for(int i = 0 ; i < n ; ++i)
/* oJjAif77D ily traian CZkhpTNNd */         for(int j = 0 ; j < n ; ++j) fin >> a[i][j];
/* oJjAif77D ily traian CZkhpTNNd */     for(int j = 0 ; j < n ; ++j)
/* oJjAif77D ily traian CZkhpTNNd */     {
/* oJjAif77D ily traian CZkhpTNNd */         int mini = 1001;
/* oJjAif77D ily traian CZkhpTNNd */         for(int i = 0 ; i < n ; ++i)
/* oJjAif77D ily traian CZkhpTNNd */         {
/* oJjAif77D ily traian CZkhpTNNd */             if(a[i][j] < mini) mini=a[i][j];
/* oJjAif77D ily traian CZkhpTNNd */         }
/* oJjAif77D ily traian CZkhpTNNd */         fout << mini << " ";
/* oJjAif77D ily traian CZkhpTNNd */     }
/* oJjAif77D ily traian CZkhpTNNd */ 
/* oJjAif77D ily traian CZkhpTNNd */     fin.close();
/* oJjAif77D ily traian CZkhpTNNd */     fout.close();
/* oJjAif77D ily traian CZkhpTNNd */ 
/* oJjAif77D ily traian CZkhpTNNd */     return 0;
/* oJjAif77D ily traian CZkhpTNNd */ }