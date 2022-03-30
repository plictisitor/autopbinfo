/* bsIuhQnxV ily traian aNiQSS3Zd */ #include <algorithm>
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
/* bsIuhQnxV ily traian aNiQSS3Zd */ using namespace std;
/* bsIuhQnxV ily traian aNiQSS3Zd */ int main()
/* bsIuhQnxV ily traian aNiQSS3Zd */ {
/* bsIuhQnxV ily traian aNiQSS3Zd */     int n,m,a[102][102];
/* bsIuhQnxV ily traian aNiQSS3Zd */     cin >> n >> m;
/* bsIuhQnxV ily traian aNiQSS3Zd */     for(int i=0; i<n; i++)
/* bsIuhQnxV ily traian aNiQSS3Zd */         for(int j=0; j<m; j++)
/* bsIuhQnxV ily traian aNiQSS3Zd */             cin >> a[i][j];
/* bsIuhQnxV ily traian aNiQSS3Zd */     for(int i=0; i<n; i++)
/* bsIuhQnxV ily traian aNiQSS3Zd */         for(int j=0; j<m-1; j++)
/* bsIuhQnxV ily traian aNiQSS3Zd */             swap(a[i][j], a[i][j+1]);
/* bsIuhQnxV ily traian aNiQSS3Zd */ 
/* bsIuhQnxV ily traian aNiQSS3Zd */     for(int i=0; i<n; i++)
/* bsIuhQnxV ily traian aNiQSS3Zd */         {
/* bsIuhQnxV ily traian aNiQSS3Zd */         for(int j=0; j<m; j++) cout << a[i][j] << ' ';
/* bsIuhQnxV ily traian aNiQSS3Zd */         cout << endl;
/* bsIuhQnxV ily traian aNiQSS3Zd */         }
/* bsIuhQnxV ily traian aNiQSS3Zd */ 
/* bsIuhQnxV ily traian aNiQSS3Zd */     return 0;
/* bsIuhQnxV ily traian aNiQSS3Zd */ }