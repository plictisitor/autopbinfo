/* BSoIO9ujl ily traian B3CV4SSzQ */ #include <algorithm>
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
/* BSoIO9ujl ily traian B3CV4SSzQ */ using namespace std;
/* BSoIO9ujl ily traian B3CV4SSzQ */ ifstream fin("vecini1.in");
/* BSoIO9ujl ily traian B3CV4SSzQ */ ofstream fout("vecini1.out");
/* BSoIO9ujl ily traian B3CV4SSzQ */ int main()
/* BSoIO9ujl ily traian B3CV4SSzQ */ {
/* BSoIO9ujl ily traian B3CV4SSzQ */     int n , m , a[102][102] , cnt = 0;
/* BSoIO9ujl ily traian B3CV4SSzQ */     fin >> n >> m;
/* BSoIO9ujl ily traian B3CV4SSzQ */     for(int i = 1 ; i <= n ; ++i)
/* BSoIO9ujl ily traian B3CV4SSzQ */     {
/* BSoIO9ujl ily traian B3CV4SSzQ */         for(int j = 1 ; j <= m ; ++j)
/* BSoIO9ujl ily traian B3CV4SSzQ */         {
/* BSoIO9ujl ily traian B3CV4SSzQ */             fin >> a[i][j];
/* BSoIO9ujl ily traian B3CV4SSzQ */             a[0][j] = 1000001;
/* BSoIO9ujl ily traian B3CV4SSzQ */             a[n + 1][j] = 1000002;
/* BSoIO9ujl ily traian B3CV4SSzQ */             a[i][0] = 1000003;
/* BSoIO9ujl ily traian B3CV4SSzQ */             a[i][m + 1] = 1000004;
/* BSoIO9ujl ily traian B3CV4SSzQ */         }
/* BSoIO9ujl ily traian B3CV4SSzQ */     }
/* BSoIO9ujl ily traian B3CV4SSzQ */     for(int i = 1 ; i <= n ; ++i)
/* BSoIO9ujl ily traian B3CV4SSzQ */     {
/* BSoIO9ujl ily traian B3CV4SSzQ */         for(int j = 1 ; j <= m; ++j)
/* BSoIO9ujl ily traian B3CV4SSzQ */         {
/* BSoIO9ujl ily traian B3CV4SSzQ */             if(a[i][j-1] != a[i][j+1] && a[i][j-1] != a[i-1][j] && a[i][j-1] != a[i+1][j] && a[i][j+1] != a[i-1][j] && a[i-1][j] != a[i+1][j] && a[i][j+1]  != a[i+1][j])
/* BSoIO9ujl ily traian B3CV4SSzQ */                 cnt++;
/* BSoIO9ujl ily traian B3CV4SSzQ */         }
/* BSoIO9ujl ily traian B3CV4SSzQ */     }
/* BSoIO9ujl ily traian B3CV4SSzQ */     fout << cnt;
/* BSoIO9ujl ily traian B3CV4SSzQ */ 
/* BSoIO9ujl ily traian B3CV4SSzQ */     fin.close();
/* BSoIO9ujl ily traian B3CV4SSzQ */     fout.close();
/* BSoIO9ujl ily traian B3CV4SSzQ */ 
/* BSoIO9ujl ily traian B3CV4SSzQ */     return 0;
/* BSoIO9ujl ily traian B3CV4SSzQ */ }