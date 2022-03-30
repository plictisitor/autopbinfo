/* pyCTuGCVy ily traian 4rCQezpSO */ #include <algorithm>
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
/* pyCTuGCVy ily traian 4rCQezpSO */ using namespace std;
/* pyCTuGCVy ily traian 4rCQezpSO */ #define MAX 1000000001
/* pyCTuGCVy ily traian 4rCQezpSO */ int main()
/* pyCTuGCVy ily traian 4rCQezpSO */ {
/* pyCTuGCVy ily traian 4rCQezpSO */     int n, m;
/* pyCTuGCVy ily traian 4rCQezpSO */     cin >> n >> m;
/* pyCTuGCVy ily traian 4rCQezpSO */     int a[100][100];
/* pyCTuGCVy ily traian 4rCQezpSO */     int mini = MAX;
/* pyCTuGCVy ily traian 4rCQezpSO */     for(int i = 0 ; i < n ; ++i)
/* pyCTuGCVy ily traian 4rCQezpSO */         for(int j = 0 ; j < m ; ++j)
/* pyCTuGCVy ily traian 4rCQezpSO */         {
/* pyCTuGCVy ily traian 4rCQezpSO */             cin >> a[i][j];
/* pyCTuGCVy ily traian 4rCQezpSO */             if(a[i][j] < mini) mini=a[i][j];
/* pyCTuGCVy ily traian 4rCQezpSO */         }
/* pyCTuGCVy ily traian 4rCQezpSO */     for(int i = 0 ; i < n ; ++i)
/* pyCTuGCVy ily traian 4rCQezpSO */     {
/* pyCTuGCVy ily traian 4rCQezpSO */         for(int j = 0 ; j < m ; ++j)
/* pyCTuGCVy ily traian 4rCQezpSO */         {
/* pyCTuGCVy ily traian 4rCQezpSO */                 int s = MAX;
/* pyCTuGCVy ily traian 4rCQezpSO */                 for(int k = 0 ; k < n ; ++k)
/* pyCTuGCVy ily traian 4rCQezpSO */                 {
/* pyCTuGCVy ily traian 4rCQezpSO */                     if(a[k][j]<s)
/* pyCTuGCVy ily traian 4rCQezpSO */                     s=a[k][j];
/* pyCTuGCVy ily traian 4rCQezpSO */                 }
/* pyCTuGCVy ily traian 4rCQezpSO */             if(s == mini) cout << mini <<" ";
/* pyCTuGCVy ily traian 4rCQezpSO */             else cout << a[i][j] <<" ";
/* pyCTuGCVy ily traian 4rCQezpSO */         }
/* pyCTuGCVy ily traian 4rCQezpSO */         cout << endl;
/* pyCTuGCVy ily traian 4rCQezpSO */     }
/* pyCTuGCVy ily traian 4rCQezpSO */     return 0;
/* pyCTuGCVy ily traian 4rCQezpSO */ }