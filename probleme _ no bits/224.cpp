/* XmJ5hT7Re ily traian 2W1uj4NRH */ #include <algorithm>
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
/* XmJ5hT7Re ily traian 2W1uj4NRH */ using namespace std;
/* XmJ5hT7Re ily traian 2W1uj4NRH */ ifstream fin("rotire.in");
/* XmJ5hT7Re ily traian 2W1uj4NRH */ ofstream fout("rotire.out");
/* XmJ5hT7Re ily traian 2W1uj4NRH */ int main()
/* XmJ5hT7Re ily traian 2W1uj4NRH */ {
/* XmJ5hT7Re ily traian 2W1uj4NRH */     int n , m , a[11][11];
/* XmJ5hT7Re ily traian 2W1uj4NRH */     fin >> n >> m;
/* XmJ5hT7Re ily traian 2W1uj4NRH */     for(int i = 0 ; i < n ; ++i)
/* XmJ5hT7Re ily traian 2W1uj4NRH */         for(int j = 0 ; j < m ; ++j) fin >> a[i][j];
/* XmJ5hT7Re ily traian 2W1uj4NRH */     for(int j = m - 1 ; j >= 0 ; --j)
/* XmJ5hT7Re ily traian 2W1uj4NRH */     {
/* XmJ5hT7Re ily traian 2W1uj4NRH */         for(int i = 0 ; i < n ; ++i) fout << a[i][j] << " ";
/* XmJ5hT7Re ily traian 2W1uj4NRH */         fout << endl;
/* XmJ5hT7Re ily traian 2W1uj4NRH */     }
/* XmJ5hT7Re ily traian 2W1uj4NRH */ 
/* XmJ5hT7Re ily traian 2W1uj4NRH */     fin.close();
/* XmJ5hT7Re ily traian 2W1uj4NRH */     fout.close();
/* XmJ5hT7Re ily traian 2W1uj4NRH */ 
/* XmJ5hT7Re ily traian 2W1uj4NRH */     return 0;
/* XmJ5hT7Re ily traian 2W1uj4NRH */ }