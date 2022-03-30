/* 8Z7a1kTzX ily traian 380fcGhuX */ #include <algorithm>
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
/* 8Z7a1kTzX ily traian 380fcGhuX */ 
/* 8Z7a1kTzX ily traian 380fcGhuX */ using namespace std;
/* 8Z7a1kTzX ily traian 380fcGhuX */ int main()
/* 8Z7a1kTzX ily traian 380fcGhuX */ {
/* 8Z7a1kTzX ily traian 380fcGhuX */     int n , m , a[101][101] , v[101] , p = 0 , b[101][101];
/* 8Z7a1kTzX ily traian 380fcGhuX */     cin >> n >> m;
/* 8Z7a1kTzX ily traian 380fcGhuX */     for(int i = 0 ; i < n ; ++i)
/* 8Z7a1kTzX ily traian 380fcGhuX */         for(int j = 0 ; j < m ; ++j) cin >> a[i][j];
/* 8Z7a1kTzX ily traian 380fcGhuX */     for(int j = 0 ; j < m ; ++j) v[j]=a[0][j];
/* 8Z7a1kTzX ily traian 380fcGhuX */     sort(v , v + m);
/* 8Z7a1kTzX ily traian 380fcGhuX */     for(int i = 0 ; i < m ; ++i)
/* 8Z7a1kTzX ily traian 380fcGhuX */     {
/* 8Z7a1kTzX ily traian 380fcGhuX */         for(int j = 0 ; j < m ; ++j)
/* 8Z7a1kTzX ily traian 380fcGhuX */         {
/* 8Z7a1kTzX ily traian 380fcGhuX */             if(v[i] == a[0][j])
/* 8Z7a1kTzX ily traian 380fcGhuX */             {
/* 8Z7a1kTzX ily traian 380fcGhuX */                 for(int l = 0 ; l < n ; ++l) b[p][l]=a[l][j];
/* 8Z7a1kTzX ily traian 380fcGhuX */                 p++;
/* 8Z7a1kTzX ily traian 380fcGhuX */             }
/* 8Z7a1kTzX ily traian 380fcGhuX */         }
/* 8Z7a1kTzX ily traian 380fcGhuX */     }
/* 8Z7a1kTzX ily traian 380fcGhuX */     for(int i = 0 ; i < n ; ++i)
/* 8Z7a1kTzX ily traian 380fcGhuX */     {
/* 8Z7a1kTzX ily traian 380fcGhuX */         for(int j = 0 ; j < m ; ++j)
/* 8Z7a1kTzX ily traian 380fcGhuX */             cout << b[j][i] <<" ";
/* 8Z7a1kTzX ily traian 380fcGhuX */         cout << endl;
/* 8Z7a1kTzX ily traian 380fcGhuX */     }
/* 8Z7a1kTzX ily traian 380fcGhuX */ }