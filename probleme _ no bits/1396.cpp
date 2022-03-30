/* OMKpjMNeX ily traian mmmEyB46m */ #include <algorithm>
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
/* OMKpjMNeX ily traian mmmEyB46m */ using namespace std;
/* OMKpjMNeX ily traian mmmEyB46m */ ifstream fin("mdiferenta.in");
/* OMKpjMNeX ily traian mmmEyB46m */ ofstream fout("mdiferenta.out");
/* OMKpjMNeX ily traian mmmEyB46m */ int a[101][101] , b[101][101] , c[101][101];
/* OMKpjMNeX ily traian mmmEyB46m */ int main()
/* OMKpjMNeX ily traian mmmEyB46m */ {
/* OMKpjMNeX ily traian mmmEyB46m */     int n , m , p , q , max1 = 0 , max2 = 0;
/* OMKpjMNeX ily traian mmmEyB46m */     fin >> n >> m;
/* OMKpjMNeX ily traian mmmEyB46m */     for(int i = 1 ; i <= n ; i++)
/* OMKpjMNeX ily traian mmmEyB46m */         for(int j = 1 ; j <= m ; j++)
/* OMKpjMNeX ily traian mmmEyB46m */             fin >> a[i][j];
/* OMKpjMNeX ily traian mmmEyB46m */     fin >> p >> q;
/* OMKpjMNeX ily traian mmmEyB46m */     for(int i = 1 ; i <= p ; i++)
/* OMKpjMNeX ily traian mmmEyB46m */         for(int j = 1 ; j <= q ; j++)
/* OMKpjMNeX ily traian mmmEyB46m */             fin >> b[i][j];
/* OMKpjMNeX ily traian mmmEyB46m */     if(n > p) max1 = n;
/* OMKpjMNeX ily traian mmmEyB46m */     else max1 = p;
/* OMKpjMNeX ily traian mmmEyB46m */     if(m > q) max2 = m;
/* OMKpjMNeX ily traian mmmEyB46m */     else max2 = q;
/* OMKpjMNeX ily traian mmmEyB46m */     for(int i = 1 ; i <= max1 ; i++)
/* OMKpjMNeX ily traian mmmEyB46m */         for(int j = 1 ; j <= max2 ; j++)
/* OMKpjMNeX ily traian mmmEyB46m */             c[i][j] = a[i][j] - b[i][j];
/* OMKpjMNeX ily traian mmmEyB46m */     fout << max1 << " " << max2 << endl;
/* OMKpjMNeX ily traian mmmEyB46m */     for(int i = 1 ; i <= max1 ; i++)
/* OMKpjMNeX ily traian mmmEyB46m */     {
/* OMKpjMNeX ily traian mmmEyB46m */         for(int j = 1 ; j <= max2 ; j++)
/* OMKpjMNeX ily traian mmmEyB46m */             fout << c[i][j] << " ";
/* OMKpjMNeX ily traian mmmEyB46m */         fout << endl;
/* OMKpjMNeX ily traian mmmEyB46m */     }
/* OMKpjMNeX ily traian mmmEyB46m */     return 0;
/* OMKpjMNeX ily traian mmmEyB46m */ }