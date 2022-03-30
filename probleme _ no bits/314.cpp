/* 3j89atfv8 ily traian fUmB5pOrX */ #include <algorithm>
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
/* 3j89atfv8 ily traian fUmB5pOrX */ using namespace std;
/* 3j89atfv8 ily traian fUmB5pOrX */ 
/* 3j89atfv8 ily traian fUmB5pOrX */ ifstream fin("colzero.in");
/* 3j89atfv8 ily traian fUmB5pOrX */ ofstream fout("colzero.out");
/* 3j89atfv8 ily traian fUmB5pOrX */ 
/* 3j89atfv8 ily traian fUmB5pOrX */ int main()
/* 3j89atfv8 ily traian fUmB5pOrX */ {
/* 3j89atfv8 ily traian fUmB5pOrX */     int n , m , a[11][11] , cnt = 0;
/* 3j89atfv8 ily traian fUmB5pOrX */     fin >> n >> m;
/* 3j89atfv8 ily traian fUmB5pOrX */     for(int i = 0; i < n ; ++i)
/* 3j89atfv8 ily traian fUmB5pOrX */         for(int j = 0 ; j < m ; ++j) fin >> a[i][j];
/* 3j89atfv8 ily traian fUmB5pOrX */     for(int j = 0 ; j < m ; ++j)
/* 3j89atfv8 ily traian fUmB5pOrX */     {
/* 3j89atfv8 ily traian fUmB5pOrX */         int ok = 1;
/* 3j89atfv8 ily traian fUmB5pOrX */         for(int i = 0 ; i < n ; ++i)
/* 3j89atfv8 ily traian fUmB5pOrX */         {
/* 3j89atfv8 ily traian fUmB5pOrX */            if(a[i][j] != 0) ok = 0;
/* 3j89atfv8 ily traian fUmB5pOrX */         }
/* 3j89atfv8 ily traian fUmB5pOrX */         if (ok==1) cnt++;
/* 3j89atfv8 ily traian fUmB5pOrX */     }
/* 3j89atfv8 ily traian fUmB5pOrX */     fout << cnt;
/* 3j89atfv8 ily traian fUmB5pOrX */ 
/* 3j89atfv8 ily traian fUmB5pOrX */     fin.close();
/* 3j89atfv8 ily traian fUmB5pOrX */     fout.close();
/* 3j89atfv8 ily traian fUmB5pOrX */ 
/* 3j89atfv8 ily traian fUmB5pOrX */     return 0;
/* 3j89atfv8 ily traian fUmB5pOrX */ }