/* Zb7jCquHs ily traian Plb1pTKjE */ #include <algorithm>
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
/* Zb7jCquHs ily traian Plb1pTKjE */ using namespace std;
/* Zb7jCquHs ily traian Plb1pTKjE */ int main()
/* Zb7jCquHs ily traian Plb1pTKjE */ {
/* Zb7jCquHs ily traian Plb1pTKjE */     int n , a , b;
/* Zb7jCquHs ily traian Plb1pTKjE */     cin >> n >> a >> b;
/* Zb7jCquHs ily traian Plb1pTKjE */     for(int i = 1 ; i <= n ; ++i)
/* Zb7jCquHs ily traian Plb1pTKjE */     {
/* Zb7jCquHs ily traian Plb1pTKjE */         for(int j = 1 ; j <= n ; ++j)
/* Zb7jCquHs ily traian Plb1pTKjE */         {
/* Zb7jCquHs ily traian Plb1pTKjE */             if(i == a || j == b) cout << 0 <<" ";
/* Zb7jCquHs ily traian Plb1pTKjE */             if(i < a && j < b) cout << 1 <<" ";
/* Zb7jCquHs ily traian Plb1pTKjE */             if(i > a && j < b) cout << 3 <<" ";
/* Zb7jCquHs ily traian Plb1pTKjE */             if(i < a && j > b) cout << 2 <<" ";
/* Zb7jCquHs ily traian Plb1pTKjE */             if(i > a && j > b) cout << 4 <<" " ;
/* Zb7jCquHs ily traian Plb1pTKjE */         }
/* Zb7jCquHs ily traian Plb1pTKjE */         cout << endl;
/* Zb7jCquHs ily traian Plb1pTKjE */     }
/* Zb7jCquHs ily traian Plb1pTKjE */ }